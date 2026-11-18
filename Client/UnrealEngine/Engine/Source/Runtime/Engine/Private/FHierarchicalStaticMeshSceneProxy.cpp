// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// Traverse<1,1> @ 147cbeb40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FHierarchicalStaticMeshSceneProxy::Traverse<1,1>
          (FHierarchicalStaticMeshSceneProxy *this,FFoliageCullInstanceParams *param_1,int param_2,
          int param_3,int param_4,bool param_5)

{
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances> FVar25;
  int iVar26;
  uint uVar27;
  ForElementType<UE::Math::TPlane<double>_> FVar28;
  longlong *plVar29;
  int iVar30;
  longlong lVar31;
  uchar *puVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  undefined1 auVar36 [16];
  double dVar37;
  int local_res20 [2];
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  FName local_e8 [22];
  
  pTVar2 = param_1->Tree;
  uVar21 = 0;
  if (param_2 < pTVar2->ArrayNum) {
    uVar21 = (uint)~param_2 >> 0x1f;
  }
  local_res20[0] = param_3;
  if ((uVar21 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  lVar31 = (longlong)param_2 * 0x40;
  dVar8 = (double)param_1->MaxWPODisplacement;
  local_f0 = (double)*(float *)(pFVar3 + lVar31 + 8) - dVar8;
  local_100 = (double)*(float *)(pFVar3 + lVar31) - dVar8;
  dVar37 = (double)*(float *)(pFVar3 + lVar31 + 4) - dVar8;
  local_108 = (double)*(float *)(pFVar3 + lVar31 + 0x18) + dVar8;
  local_118 = (double)*(float *)(pFVar3 + lVar31 + 0x10) + dVar8;
  dStack_f8 = dVar37;
  dVar8 = (double)*(float *)(pFVar3 + lVar31 + 0x14) + dVar8;
  dStack_110 = dVar8;
  if (param_5 == false) {
    pTVar1 = &(param_1->ViewFrustumLocal).PermutedPlanes;
    FVar28 = (param_1->ViewFrustumLocal).PermutedPlanes.AllocatorInstance.SecondaryData;
    if (FVar28 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar28 = (ForElementType<UE::Math::TPlane<double>_>)pTVar1;
    }
    dVar13 = (local_100 + local_118) * VECTOR_HALF_HALF_HALF_ZERO.XY.m128d_f64[0];
    dVar14 = (dVar37 + dVar8) * VECTOR_HALF_HALF_HALF_ZERO.XY.m128d_f64[1];
    dVar11 = ((double)local_108 + (double)local_f0) * VECTOR_HALF_HALF_HALF_ZERO.ZW.m128d_f64[0];
    dVar19 = ((double)local_108 - (double)local_f0) * VECTOR_HALF_HALF_HALF_ZERO.ZW.m128d_f64[0];
    unique0x100004f9 = SUB84(dVar37,0);
    unique0x100004fd = (int)((ulonglong)dVar37 >> 0x20);
    unique0x10000af1 = SUB84(dVar8,0);
    unique0x10000af5 = (int)((ulonglong)dVar8 >> 0x20);
    dVar17 = (local_118 - local_100) * VECTOR_HALF_HALF_HALF_ZERO.XY.m128d_f64[0];
    dVar18 = (dVar8 - dVar37) * VECTOR_HALF_HALF_HALF_ZERO.XY.m128d_f64[1];
    dVar15 = (*(double *)((longlong)FVar28 + 0x20) * dVar14 + *(double *)FVar28 * dVar13 +
             *(double *)((longlong)FVar28 + 0x40) * dVar11) - *(double *)((longlong)FVar28 + 0x60);
    dVar16 = (*(double *)((longlong)FVar28 + 0x28) * dVar14 +
              *(double *)((longlong)FVar28 + 8) * dVar13 +
             *(double *)((longlong)FVar28 + 0x48) * dVar11) - *(double *)((longlong)FVar28 + 0x68);
    dVar12 = (*(double *)((longlong)FVar28 + 0x30) * dVar14 +
              *(double *)((longlong)FVar28 + 0x10) * dVar13 +
             *(double *)((longlong)FVar28 + 0x50) * dVar11) - *(double *)((longlong)FVar28 + 0x70);
    dVar14 = (*(double *)((longlong)FVar28 + 0x38) * dVar14 +
              *(double *)((longlong)FVar28 + 0x18) * dVar13 +
             *(double *)((longlong)FVar28 + 0x58) * dVar11) - *(double *)((longlong)FVar28 + 0x78);
    auVar36._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)FVar28 + 0x54),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)((longlong)FVar28 + 0x50));
    auVar36._8_4_ = _UNK_15061cc88 & *(uint *)((longlong)FVar28 + 0x58);
    auVar36._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)FVar28 + 0x5c);
    dVar8 = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                             *(uint *)((longlong)FVar28 + 0x34),
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                             *(uint *)((longlong)FVar28 + 0x30)) * dVar18 +
            (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                             *(uint *)((longlong)FVar28 + 0x14),
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                             *(uint *)((longlong)FVar28 + 0x10)) * dVar17 + auVar36._0_8_ * dVar19;
    dVar37 = (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar28 + 0x3c),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar28 + 0x38)) * dVar18 +
             (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar28 + 0x1c),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar28 + 0x18)) * dVar17 +
             auVar36._8_8_ * dVar19;
    dVar11 = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)FVar28 + 0x24),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)((longlong)FVar28 + 0x20)) * dVar18 +
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)FVar28 + 4),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)FVar28) *
             dVar17 + (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       *(uint *)((longlong)FVar28 + 0x44),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       *(uint *)((longlong)FVar28 + 0x40)) * dVar19;
    dVar13 = (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar28 + 0x2c),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar28 + 0x28)) * dVar18 +
             (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar28 + 0xc),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar28 + 8)) * dVar17 +
             (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar28 + 0x4c),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar28 + 0x48)) * dVar19;
    lVar33 = -(ulonglong)(dVar13 < dVar16);
    lVar34 = -(ulonglong)(0.0 - dVar37 < dVar14);
    lVar35 = -(ulonglong)(0.0 - dVar13 < dVar16);
    auVar7._8_4_ = (int)lVar35;
    auVar7._0_8_ = -(ulonglong)(0.0 - dVar11 < dVar15);
    auVar7._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    uVar21 = movmskpd((int)pTVar1,auVar7);
    lVar35 = -(ulonglong)(dVar37 < dVar14);
    auVar6._8_4_ = (int)lVar34;
    auVar6._0_8_ = -(ulonglong)(0.0 - dVar8 < dVar12);
    auVar6._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
    iVar26 = movmskpd(FVar28._0_4_,auVar6);
    uVar27 = iVar26 << 2 | uVar21;
    param_5 = uVar27 == 0;
    auVar9._8_4_ = (int)lVar35;
    auVar9._0_8_ = -(ulonglong)(dVar8 < dVar12);
    auVar9._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
    uVar27 = movmskpd(uVar27,auVar9);
    auVar10._8_4_ = (int)lVar33;
    auVar10._0_8_ = -(ulonglong)(dVar11 < dVar15);
    auVar10._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
    iVar26 = movmskpd(CONCAT31((int3)(uVar21 >> 8),param_5),auVar10);
    if ((uVar27 & 0x3fffffff) != 0 || iVar26 != 0) {
      return;
    }
  }
  if ((param_3 != param_4) &&
     (CalcLOD(local_res20,&param_4,(TVector<double> *)&local_100,(TVector<double> *)&local_118,
              &param_1->ViewOriginInLocalZero,&param_1->ViewOriginInLocalOne,&param_1->LODPlanesMin,
              &param_1->LODPlanesMax), param_3 = local_res20[0], param_1->LODs <= local_res20[0])) {
    return;
  }
  iVar26 = param_4;
  if ((param_1->FirstOcclusionNode <= param_2) && (param_2 <= param_1->LastOcclusionNode)) {
    if ((param_1->OcclusionResults == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.OcclusionResults != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                            ,0x4a2,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar4 = param_1->OcclusionResults;
    uVar27 = (param_1->OcclusionResultsStart - param_1->FirstOcclusionNode) + param_2;
    uVar21 = 0;
    if ((int)uVar27 < pTVar4->ArrayNum) {
      uVar21 = ~uVar27 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar4->AllocatorInstance).Data[(int)uVar27] != (FScriptContainerElement)0x0) {
      iVar26 = (*(int *)(pFVar3 + lVar31 + 0x24) - *(int *)(pFVar3 + lVar31 + 0x20)) + 1;
      if (iVar26 == 0) {
        return;
      }
      if (FThreadStats::bPrimaryEnable == false) {
        return;
      }
      FVar25 = StatPtr_STAT_OcclusionCulledFoliageInstances;
      if (StatPtr_STAT_OcclusionCulledFoliageInstances ==
          (FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances>)0x0) {
        pFVar24 = ::FName::FName(local_e8,"STAT_OcclusionCulledFoliageInstances");
        FVar25 = (FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_OcclusionCulledFoliageInstances,*pFVar24,
                            L"Occlusion Culled Instances","STATGROUP_Foliage","STATCAT_Advanced",
                            L"Foliage",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar25,Add,(longlong)iVar26,false);
      return;
    }
  }
  iVar30 = *(int *)(pFVar3 + lVar31 + 0xc);
  if (iVar30 < 0) {
LAB_147cbf13b:
    bVar20 = true;
  }
  else if ((*(int *)(pFVar3 + lVar31 + 0x24) - *(int *)(pFVar3 + lVar31 + 0x20)) + 1 <
           param_1->MinInstancesToSplit[param_3]) {
    bVar20 = CanGroup((TVector<double> *)&local_100,(TVector<double> *)&local_118,
                      &param_1->ViewOriginInLocalZero,&param_1->ViewOriginInLocalOne,
                      param_1->LODPlanesMax[(longlong)param_1->LODs + -1]);
    if (bVar20) goto LAB_147cbf13b;
    bVar20 = false;
  }
  else {
    bVar20 = false;
  }
  if ((((param_5 == false) || (param_3 < iVar26)) || (param_2 < param_1->FirstOcclusionNode)) &&
     (!bVar20)) {
    if (*(int *)(pFVar3 + lVar31 + 0x1c) < iVar30) {
      return;
    }
    do {
      Traverse<1,1>(this,param_1,iVar30,param_3,iVar26,param_5);
      iVar30 = iVar30 + 1;
    } while (iVar30 <= *(int *)(pFVar3 + lVar31 + 0x1c));
    return;
  }
  uVar21 = *(uint *)(pFVar3 + lVar31 + 0x20);
  iVar30 = param_1->LODs + -1;
  if (iVar26 < iVar30) {
    iVar30 = iVar26;
  }
  uVar27 = *(uint *)(pFVar3 + lVar31 + 0x24);
  param_4 = iVar30;
  if ((char)param_1->_padding_ == '\0') goto LAB_147cbf3f9;
  iVar26 = param_3;
  if (*(char *)((longlong)&param_1->_padding_ + 2) != '\0') {
    iVar26 = iVar30;
  }
  if (7 < iVar26) goto LAB_147cbf3f9;
  plVar29 = &param_1->_padding_ + (longlong)iVar26 * 2;
  iVar23 = (int)plVar29[1];
  if (iVar23 == 0) {
LAB_147cbf2ad:
    local_128 = uVar21;
    if ((((uint *)*plVar29 <= &local_128) &&
        (&local_128 < (uint *)*plVar29 + *(int *)((longlong)(plVar29 + 1) + 4))) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar23 = (int)plVar29[1];
    if (iVar23 == *(int *)((longlong)(plVar29 + 1) + 4)) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                         (0x404,(ForElementType<unsigned_int> *)plVar29,
                          (int *)((longlong)(plVar29 + 1) + 4));
    }
    *(int *)(plVar29 + 1) = iVar23 + 1;
    *(uint *)(*plVar29 + (longlong)iVar23 * 4) = local_128;
    local_124 = uVar27;
    if ((((uint *)*plVar29 <= &local_124) &&
        (&local_124 < (uint *)*plVar29 + *(int *)((longlong)(plVar29 + 1) + 4))) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar23 = (int)plVar29[1];
    if (iVar23 == *(int *)((longlong)(plVar29 + 1) + 4)) {
      iVar23 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                         (0x404,(ForElementType<unsigned_int> *)plVar29,
                          (int *)((longlong)(plVar29 + 1) + 4));
    }
    *(int *)(plVar29 + 1) = iVar23 + 1;
    *(uint *)(*plVar29 + (longlong)iVar23 * 4) = local_124;
  }
  else {
    uVar22 = 0;
    if ((int)(iVar23 - 1U) < iVar23) {
      uVar22 = ~(iVar23 - 1U) >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar23 = (int)plVar29[1];
    if (*(int *)(*plVar29 + ((longlong)iVar23 + -1) * 4) + 1U != uVar21) goto LAB_147cbf2ad;
    uVar22 = 0;
    if ((int)(iVar23 - 1U) < iVar23) {
      uVar22 = ~(iVar23 - 1U) >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)(*plVar29 + ((longlong)(int)plVar29[1] + -1) * 4) = uVar27;
  }
  puVar32 = (param_1->ViewFrustumLocal).Planes.AllocatorInstance.InlineData +
            (longlong)iVar26 * 4 + -0x40;
  *(uint *)puVar32 = *(int *)puVar32 + (uVar27 - uVar21) + 1;
LAB_147cbf3f9:
  if (*(char *)((longlong)&param_1->_padding_ + 1) != '\0') {
    lVar31 = (longlong)param_3;
    if (lVar31 <= iVar30) {
      puVar32 = (param_1->ViewFrustumLocal).Planes.AllocatorInstance.InlineData + lVar31 * 4 + -0x20
      ;
      plVar29 = &param_1->_padding_ + lVar31 * 2;
      do {
        if (lVar31 < 8) {
          *(uint *)puVar32 = *(int *)puVar32 + (uVar27 - uVar21) + 1;
          iVar26 = (int)*plVar29;
          if (iVar26 != 0) {
            uVar22 = 0;
            if ((int)(iVar26 - 1U) < iVar26) {
              uVar22 = ~(iVar26 - 1U) >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar20)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar26 = (int)*plVar29;
            if (*(int *)(plVar29[-1] + ((longlong)iVar26 + -1) * 4) + 1U == uVar21) {
              uVar22 = 0;
              if ((int)(iVar26 - 1U) < iVar26) {
                uVar22 = ~(iVar26 - 1U) >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar20)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(uint *)(plVar29[-1] + -4 + (longlong)(int)*plVar29 * 4) = uVar27;
              goto LAB_147cbf65b;
            }
          }
          local_120 = uVar21;
          if ((((uint *)plVar29[-1] <= &local_120) &&
              (&local_120 < (uint *)plVar29[-1] + *(int *)((longlong)plVar29 + 4))) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar26 = (int)*plVar29;
          if (iVar26 == *(int *)((longlong)plVar29 + 4)) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                               (0x404,(ForElementType<unsigned_int> *)(plVar29 + -1),
                                (int *)((longlong)plVar29 + 4));
          }
          *(int *)plVar29 = iVar26 + 1;
          *(uint *)(plVar29[-1] + (longlong)iVar26 * 4) = local_120;
          local_11c = uVar27;
          if ((((uint *)plVar29[-1] <= &local_11c) &&
              (&local_11c < (uint *)plVar29[-1] + *(int *)((longlong)plVar29 + 4))) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar26 = (int)*plVar29;
          if (iVar26 == *(int *)((longlong)plVar29 + 4)) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                               (0x404,(ForElementType<unsigned_int> *)(plVar29 + -1),
                                (int *)((longlong)plVar29 + 4));
          }
          *(int *)plVar29 = iVar26 + 1;
          *(uint *)(plVar29[-1] + (longlong)iVar26 * 4) = local_11c;
        }
LAB_147cbf65b:
        lVar31 = lVar31 + 1;
        puVar32 = puVar32 + 4;
        plVar29 = plVar29 + 2;
      } while (lVar31 <= iVar30);
    }
  }
  return;
}

// Traverse<1,0> @ 147cbf6a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FHierarchicalStaticMeshSceneProxy::Traverse<1,0>
          (FHierarchicalStaticMeshSceneProxy *this,FFoliageCullInstanceParams *param_1,int param_2,
          int param_3,int param_4,bool param_5)

{
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances> FVar24;
  int iVar25;
  uint uVar26;
  ForElementType<UE::Math::TPlane<double>_> FVar27;
  longlong *plVar28;
  int iVar29;
  longlong lVar30;
  uchar *puVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auVar35 [16];
  double dVar36;
  int local_res20 [2];
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  FName local_e8 [22];
  
  pTVar2 = param_1->Tree;
  uVar20 = 0;
  if (param_2 < pTVar2->ArrayNum) {
    uVar20 = (uint)~param_2 >> 0x1f;
  }
  local_res20[0] = param_3;
  if ((uVar20 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  lVar30 = (longlong)param_2 * 0x40;
  local_f0 = (undefined8)*(float *)(pFVar3 + lVar30 + 8);
  local_100 = (double)*(float *)(pFVar3 + lVar30);
  local_108 = (undefined8)*(float *)(pFVar3 + lVar30 + 0x18);
  dVar36 = (double)*(float *)(pFVar3 + lVar30 + 4);
  local_118 = (double)*(float *)(pFVar3 + lVar30 + 0x10);
  dVar9 = (double)*(float *)(pFVar3 + lVar30 + 0x14);
  dStack_f8 = dVar36;
  dStack_110 = dVar9;
  if (param_5 == false) {
    pTVar1 = &(param_1->ViewFrustumLocal).PermutedPlanes;
    FVar27 = (param_1->ViewFrustumLocal).PermutedPlanes.AllocatorInstance.SecondaryData;
    if (FVar27 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar27 = (ForElementType<UE::Math::TPlane<double>_>)pTVar1;
    }
    dVar13 = (local_100 + local_118) * VECTOR_HALF_HALF_HALF_ZERO.XY.m128d_f64[0];
    dVar14 = (dVar36 + dVar9) * VECTOR_HALF_HALF_HALF_ZERO.XY.m128d_f64[1];
    dVar11 = ((double)local_108 + (double)local_f0) * VECTOR_HALF_HALF_HALF_ZERO.ZW.m128d_f64[0];
    dVar18 = ((double)local_108 - (double)local_f0) * VECTOR_HALF_HALF_HALF_ZERO.ZW.m128d_f64[0];
    unique0x10000499 = SUB84(dVar36,0);
    unique0x1000049d = (int)((ulonglong)dVar36 >> 0x20);
    unique0x10000a69 = SUB84(dVar9,0);
    unique0x10000a6d = (int)((ulonglong)dVar9 >> 0x20);
    dVar17 = (local_118 - local_100) * VECTOR_HALF_HALF_HALF_ZERO.XY.m128d_f64[0];
    dVar36 = (dVar9 - dVar36) * VECTOR_HALF_HALF_HALF_ZERO.XY.m128d_f64[1];
    dVar15 = (*(double *)((longlong)FVar27 + 0x20) * dVar14 + *(double *)FVar27 * dVar13 +
             *(double *)((longlong)FVar27 + 0x40) * dVar11) - *(double *)((longlong)FVar27 + 0x60);
    dVar16 = (*(double *)((longlong)FVar27 + 0x28) * dVar14 +
              *(double *)((longlong)FVar27 + 8) * dVar13 +
             *(double *)((longlong)FVar27 + 0x48) * dVar11) - *(double *)((longlong)FVar27 + 0x68);
    dVar12 = (*(double *)((longlong)FVar27 + 0x30) * dVar14 +
              *(double *)((longlong)FVar27 + 0x10) * dVar13 +
             *(double *)((longlong)FVar27 + 0x50) * dVar11) - *(double *)((longlong)FVar27 + 0x70);
    dVar14 = (*(double *)((longlong)FVar27 + 0x38) * dVar14 +
              *(double *)((longlong)FVar27 + 0x18) * dVar13 +
             *(double *)((longlong)FVar27 + 0x58) * dVar11) - *(double *)((longlong)FVar27 + 0x78);
    auVar35._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)FVar27 + 0x54),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)((longlong)FVar27 + 0x50));
    auVar35._8_4_ = _UNK_15061cc88 & *(uint *)((longlong)FVar27 + 0x58);
    auVar35._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)FVar27 + 0x5c);
    dVar11 = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)FVar27 + 4),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)FVar27) *
             dVar17 + (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       *(uint *)((longlong)FVar27 + 0x24),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       *(uint *)((longlong)FVar27 + 0x20)) * dVar36 +
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)FVar27 + 0x44),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)((longlong)FVar27 + 0x40)) * dVar18;
    dVar13 = (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar27 + 0xc),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar27 + 8)) * dVar17 +
             (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar27 + 0x2c),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar27 + 0x28)) * dVar36 +
             (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar27 + 0x4c),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar27 + 0x48)) * dVar18;
    dVar9 = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                             *(uint *)((longlong)FVar27 + 0x14),
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                             *(uint *)((longlong)FVar27 + 0x10)) * dVar17 +
            (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                             *(uint *)((longlong)FVar27 + 0x34),
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                             *(uint *)((longlong)FVar27 + 0x30)) * dVar36 + auVar35._0_8_ * dVar18;
    dVar36 = (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar27 + 0x1c),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar27 + 0x18)) * dVar17 +
             (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar27 + 0x3c),
                              _UNK_15061cc88 & *(uint *)((longlong)FVar27 + 0x38)) * dVar36 +
             auVar35._8_8_ * dVar18;
    lVar32 = -(ulonglong)(dVar13 < dVar16);
    lVar33 = -(ulonglong)(0.0 - dVar13 < dVar16);
    auVar7._8_4_ = (int)lVar33;
    auVar7._0_8_ = -(ulonglong)(0.0 - dVar11 < dVar15);
    auVar7._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
    uVar20 = movmskpd((int)pTVar1,auVar7);
    lVar33 = -(ulonglong)(0.0 - dVar36 < dVar14);
    lVar34 = -(ulonglong)(dVar36 < dVar14);
    auVar6._8_4_ = (int)lVar33;
    auVar6._0_8_ = -(ulonglong)(0.0 - dVar9 < dVar12);
    auVar6._12_4_ = (int)((ulonglong)lVar33 >> 0x20);
    iVar25 = movmskpd(FVar27._0_4_,auVar6);
    uVar26 = iVar25 << 2 | uVar20;
    param_5 = uVar26 == 0;
    auVar8._8_4_ = (int)lVar34;
    auVar8._0_8_ = -(ulonglong)(dVar9 < dVar12);
    auVar8._12_4_ = (int)((ulonglong)lVar34 >> 0x20);
    uVar26 = movmskpd(uVar26,auVar8);
    auVar10._8_4_ = (int)lVar32;
    auVar10._0_8_ = -(ulonglong)(dVar11 < dVar15);
    auVar10._12_4_ = (int)((ulonglong)lVar32 >> 0x20);
    iVar25 = movmskpd(CONCAT31((int3)(uVar20 >> 8),param_5),auVar10);
    if ((uVar26 & 0x3fffffff) != 0 || iVar25 != 0) {
      return;
    }
  }
  if ((param_3 != param_4) &&
     (CalcLOD(local_res20,&param_4,(TVector<double> *)&local_100,(TVector<double> *)&local_118,
              &param_1->ViewOriginInLocalZero,&param_1->ViewOriginInLocalOne,&param_1->LODPlanesMin,
              &param_1->LODPlanesMax), param_3 = local_res20[0], param_1->LODs <= local_res20[0])) {
    return;
  }
  iVar25 = param_4;
  if ((param_1->FirstOcclusionNode <= param_2) && (param_2 <= param_1->LastOcclusionNode)) {
    if ((param_1->OcclusionResults == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.OcclusionResults != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                            ,0x4a2,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar4 = param_1->OcclusionResults;
    uVar26 = (param_1->OcclusionResultsStart - param_1->FirstOcclusionNode) + param_2;
    uVar20 = 0;
    if ((int)uVar26 < pTVar4->ArrayNum) {
      uVar20 = ~uVar26 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar4->AllocatorInstance).Data[(int)uVar26] != (FScriptContainerElement)0x0) {
      iVar25 = (*(int *)(pFVar3 + lVar30 + 0x24) - *(int *)(pFVar3 + lVar30 + 0x20)) + 1;
      if (iVar25 == 0) {
        return;
      }
      if (FThreadStats::bPrimaryEnable == false) {
        return;
      }
      FVar24 = StatPtr_STAT_OcclusionCulledFoliageInstances;
      if (StatPtr_STAT_OcclusionCulledFoliageInstances ==
          (FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances>)0x0) {
        pFVar23 = ::FName::FName(local_e8,"STAT_OcclusionCulledFoliageInstances");
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_OcclusionCulledFoliageInstances,*pFVar23,
                            L"Occlusion Culled Instances","STATGROUP_Foliage","STATCAT_Advanced",
                            L"Foliage",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar24,Add,(longlong)iVar25,false);
      return;
    }
  }
  iVar29 = *(int *)(pFVar3 + lVar30 + 0xc);
  if (iVar29 < 0) {
LAB_147cbfc86:
    bVar19 = true;
  }
  else if ((*(int *)(pFVar3 + lVar30 + 0x24) - *(int *)(pFVar3 + lVar30 + 0x20)) + 1 <
           param_1->MinInstancesToSplit[param_3]) {
    bVar19 = CanGroup((TVector<double> *)&local_100,(TVector<double> *)&local_118,
                      &param_1->ViewOriginInLocalZero,&param_1->ViewOriginInLocalOne,
                      param_1->LODPlanesMax[(longlong)param_1->LODs + -1]);
    if (bVar19) goto LAB_147cbfc86;
    bVar19 = false;
  }
  else {
    bVar19 = false;
  }
  if ((((param_5 == false) || (param_3 < iVar25)) || (param_2 < param_1->FirstOcclusionNode)) &&
     (!bVar19)) {
    if (*(int *)(pFVar3 + lVar30 + 0x1c) < iVar29) {
      return;
    }
    do {
      Traverse<1,0>(this,param_1,iVar29,param_3,iVar25,param_5);
      iVar29 = iVar29 + 1;
    } while (iVar29 <= *(int *)(pFVar3 + lVar30 + 0x1c));
    return;
  }
  uVar20 = *(uint *)(pFVar3 + lVar30 + 0x20);
  iVar29 = param_1->LODs + -1;
  if (iVar25 < iVar29) {
    iVar29 = iVar25;
  }
  uVar26 = *(uint *)(pFVar3 + lVar30 + 0x24);
  param_4 = iVar29;
  if ((char)param_1->_padding_ == '\0') goto LAB_147cbff49;
  iVar25 = param_3;
  if (*(char *)((longlong)&param_1->_padding_ + 2) != '\0') {
    iVar25 = iVar29;
  }
  if (7 < iVar25) goto LAB_147cbff49;
  plVar28 = &param_1->_padding_ + (longlong)iVar25 * 2;
  iVar22 = (int)plVar28[1];
  if (iVar22 == 0) {
LAB_147cbfdfd:
    local_128 = uVar20;
    if ((((uint *)*plVar28 <= &local_128) &&
        (&local_128 < (uint *)*plVar28 + *(int *)((longlong)(plVar28 + 1) + 4))) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar22 = (int)plVar28[1];
    if (iVar22 == *(int *)((longlong)(plVar28 + 1) + 4)) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                         (0x404,(ForElementType<unsigned_int> *)plVar28,
                          (int *)((longlong)(plVar28 + 1) + 4));
    }
    *(int *)(plVar28 + 1) = iVar22 + 1;
    *(uint *)(*plVar28 + (longlong)iVar22 * 4) = local_128;
    local_124 = uVar26;
    if ((((uint *)*plVar28 <= &local_124) &&
        (&local_124 < (uint *)*plVar28 + *(int *)((longlong)(plVar28 + 1) + 4))) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar22 = (int)plVar28[1];
    if (iVar22 == *(int *)((longlong)(plVar28 + 1) + 4)) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                         (0x404,(ForElementType<unsigned_int> *)plVar28,
                          (int *)((longlong)(plVar28 + 1) + 4));
    }
    *(int *)(plVar28 + 1) = iVar22 + 1;
    *(uint *)(*plVar28 + (longlong)iVar22 * 4) = local_124;
  }
  else {
    uVar21 = 0;
    if ((int)(iVar22 - 1U) < iVar22) {
      uVar21 = ~(iVar22 - 1U) >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar22 = (int)plVar28[1];
    if (*(int *)(*plVar28 + ((longlong)iVar22 + -1) * 4) + 1U != uVar20) goto LAB_147cbfdfd;
    uVar21 = 0;
    if ((int)(iVar22 - 1U) < iVar22) {
      uVar21 = ~(iVar22 - 1U) >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)(*plVar28 + ((longlong)(int)plVar28[1] + -1) * 4) = uVar26;
  }
  puVar31 = (param_1->ViewFrustumLocal).Planes.AllocatorInstance.InlineData +
            (longlong)iVar25 * 4 + -0x40;
  *(uint *)puVar31 = *(int *)puVar31 + (uVar26 - uVar20) + 1;
LAB_147cbff49:
  if (*(char *)((longlong)&param_1->_padding_ + 1) != '\0') {
    lVar30 = (longlong)param_3;
    if (lVar30 <= iVar29) {
      puVar31 = (param_1->ViewFrustumLocal).Planes.AllocatorInstance.InlineData + lVar30 * 4 + -0x20
      ;
      plVar28 = &param_1->_padding_ + lVar30 * 2;
      do {
        if (lVar30 < 8) {
          *(uint *)puVar31 = *(int *)puVar31 + (uVar26 - uVar20) + 1;
          iVar25 = (int)*plVar28;
          if (iVar25 != 0) {
            uVar21 = 0;
            if ((int)(iVar25 - 1U) < iVar25) {
              uVar21 = ~(iVar25 - 1U) >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar25 = (int)*plVar28;
            if (*(int *)(plVar28[-1] + ((longlong)iVar25 + -1) * 4) + 1U == uVar20) {
              uVar21 = 0;
              if ((int)(iVar25 - 1U) < iVar25) {
                uVar21 = ~(iVar25 - 1U) >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(uint *)(plVar28[-1] + -4 + (longlong)(int)*plVar28 * 4) = uVar26;
              goto LAB_147cc01ab;
            }
          }
          local_120 = uVar20;
          if ((((uint *)plVar28[-1] <= &local_120) &&
              (&local_120 < (uint *)plVar28[-1] + *(int *)((longlong)plVar28 + 4))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar25 = (int)*plVar28;
          if (iVar25 == *(int *)((longlong)plVar28 + 4)) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                               (0x404,(ForElementType<unsigned_int> *)(plVar28 + -1),
                                (int *)((longlong)plVar28 + 4));
          }
          *(int *)plVar28 = iVar25 + 1;
          *(uint *)(plVar28[-1] + (longlong)iVar25 * 4) = local_120;
          local_11c = uVar26;
          if ((((uint *)plVar28[-1] <= &local_11c) &&
              (&local_11c < (uint *)plVar28[-1] + *(int *)((longlong)plVar28 + 4))) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar25 = (int)*plVar28;
          if (iVar25 == *(int *)((longlong)plVar28 + 4)) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                               (0x404,(ForElementType<unsigned_int> *)(plVar28 + -1),
                                (int *)((longlong)plVar28 + 4));
          }
          *(int *)plVar28 = iVar25 + 1;
          *(uint *)(plVar28[-1] + (longlong)iVar25 * 4) = local_11c;
        }
LAB_147cc01ab:
        lVar30 = lVar30 + 1;
        puVar31 = puVar31 + 4;
        plVar28 = plVar28 + 2;
      } while (lVar30 <= iVar29);
    }
  }
  return;
}

// Traverse<0,1> @ 147cc01f0

/* WARNING: Type propagation algorithm not settling */
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
FHierarchicalStaticMeshSceneProxy::Traverse<0,1>
          (FHierarchicalStaticMeshSceneProxy *this,FFoliageCullInstanceParams *param_1,int param_2,
          int param_3,int param_4,bool param_5)

{
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances> FVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uchar *puVar16;
  double dVar17;
  int local_res20 [2];
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  FName local_88 [9];
  
  pTVar1 = param_1->Tree;
  uVar11 = 0;
  if (param_2 < pTVar1->ArrayNum) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  local_res20[0] = param_3;
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  lVar13 = (longlong)param_2 * 0x40;
  dVar17 = (double)param_1->MaxWPODisplacement;
  local_d0._s_0.X = (double)*(float *)(pFVar2 + lVar13) - dVar17;
  local_d0._s_0.Y = (double)*(float *)(pFVar2 + lVar13 + 4) - dVar17;
  local_d0._s_0.Z = (double)*(float *)(pFVar2 + lVar13 + 8) - dVar17;
  local_e8._s_0.X = (double)*(float *)(pFVar2 + lVar13 + 0x10) + dVar17;
  local_e8._s_0.Y = (double)*(float *)(pFVar2 + lVar13 + 0x14) + dVar17;
  local_e8._s_0.Z = (double)*(float *)(pFVar2 + lVar13 + 0x18) + dVar17;
  if (param_5 == false) {
    local_a0._s_0.X = (local_d0._s_0.X + local_e8._s_0.X) * __real_3fe0000000000000;
    local_a0._s_0.Z = (local_d0._s_0.Z + local_e8._s_0.Z) * __real_3fe0000000000000;
    local_b8._s_0.X = (local_e8._s_0.X - local_d0._s_0.X) * __real_3fe0000000000000;
    local_b8._s_0.Z = (local_e8._s_0.Z - local_d0._s_0.Z) * __real_3fe0000000000000;
    local_a0._s_0.Y = (local_d0._s_0.Y + local_e8._s_0.Y) * __real_3fe0000000000000;
    local_b8._s_0.Y = (local_e8._s_0.Y - local_d0._s_0.Y) * __real_3fe0000000000000;
    bVar5 = FConvexVolume::IntersectBox
                      (&param_1->ViewFrustumLocal,(TVector<double> *)&local_a0._s_0,
                       (TVector<double> *)&local_b8._s_0,&param_5);
    if (!bVar5) {
      return;
    }
  }
  if ((param_3 != param_4) &&
     (CalcLOD(local_res20,&param_4,(TVector<double> *)&local_d0._s_0,
              (TVector<double> *)&local_e8._s_0,&param_1->ViewOriginInLocalZero,
              &param_1->ViewOriginInLocalOne,&param_1->LODPlanesMin,&param_1->LODPlanesMax),
     param_3 = local_res20[0], param_1->LODs <= local_res20[0])) {
    return;
  }
  iVar6 = param_4;
  if ((param_1->FirstOcclusionNode <= param_2) && (param_2 <= param_1->LastOcclusionNode)) {
    if ((param_1->OcclusionResults == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Params.OcclusionResults != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                           ,0x4a2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = param_1->OcclusionResults;
    uVar14 = param_2 + (param_1->OcclusionResultsStart - param_1->FirstOcclusionNode);
    uVar11 = 0;
    if ((int)uVar14 < pTVar3->ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pTVar3->AllocatorInstance).Data[(int)uVar14] != (FScriptContainerElement)0x0) {
      iVar6 = (*(int *)(pFVar2 + lVar13 + 0x24) - *(int *)(pFVar2 + lVar13 + 0x20)) + 1;
      if (iVar6 == 0) {
        return;
      }
      if (FThreadStats::bPrimaryEnable == false) {
        return;
      }
      FVar10 = StatPtr_STAT_OcclusionCulledFoliageInstances;
      if (StatPtr_STAT_OcclusionCulledFoliageInstances ==
          (FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances>)0x0) {
        pFVar9 = ::FName::FName(local_88,"STAT_OcclusionCulledFoliageInstances");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_OcclusionCulledFoliageInstances,*pFVar9,
                            L"Occlusion Culled Instances","STATGROUP_Foliage","STATCAT_Advanced",
                            L"Foliage",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar10,Add,(longlong)iVar6,false);
      return;
    }
  }
  iVar15 = *(int *)(pFVar2 + lVar13 + 0xc);
  if ((iVar15 < 0) ||
     (((*(int *)(pFVar2 + lVar13 + 0x24) - *(int *)(pFVar2 + lVar13 + 0x20)) + 1 <
       param_1->MinInstancesToSplit[param_3] &&
      (bVar5 = CanGroup((TVector<double> *)&local_d0._s_0,(TVector<double> *)&local_e8._s_0,
                        &param_1->ViewOriginInLocalZero,&param_1->ViewOriginInLocalOne,
                        param_1->LODPlanesMax[(longlong)param_1->LODs + -1]), bVar5)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((((param_5 == false) || (param_3 < iVar6)) || (param_2 < param_1->FirstOcclusionNode)) &&
     (!bVar5)) {
    if (*(int *)(pFVar2 + lVar13 + 0x1c) < iVar15) {
      return;
    }
    do {
      Traverse<0,1>(this,param_1,iVar15,param_3,iVar6,param_5);
      iVar15 = iVar15 + 1;
    } while (iVar15 <= *(int *)(pFVar2 + lVar13 + 0x1c));
    return;
  }
  uVar11 = *(uint *)(pFVar2 + lVar13 + 0x24);
  iVar15 = param_1->LODs + -1;
  uVar14 = *(uint *)(pFVar2 + lVar13 + 0x20);
  if (iVar6 < iVar15) {
    iVar15 = iVar6;
  }
  param_4 = iVar15;
  if ((char)param_1->_padding_ == '\0') goto LAB_147cc0884;
  iVar6 = param_3;
  if (*(char *)((longlong)&param_1->_padding_ + 2) != '\0') {
    iVar6 = iVar15;
  }
  if (7 < iVar6) goto LAB_147cc0884;
  plVar12 = &param_1->_padding_ + (longlong)iVar6 * 2;
  iVar8 = (int)plVar12[1];
  if (iVar8 == 0) {
LAB_147cc0739:
    local_f8 = uVar14;
    if ((((uint *)*plVar12 <= &local_f8) &&
        (&local_f8 < (uint *)*plVar12 + *(int *)((longlong)(plVar12 + 1) + 4))) &&
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
    iVar8 = (int)plVar12[1];
    if (iVar8 == *(int *)((longlong)(plVar12 + 1) + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                        (0x404,(ForElementType<unsigned_int> *)plVar12,
                         (int *)((longlong)(plVar12 + 1) + 4));
    }
    *(int *)(plVar12 + 1) = iVar8 + 1;
    *(uint *)(*plVar12 + (longlong)iVar8 * 4) = local_f8;
    local_f4 = uVar11;
    if ((((uint *)*plVar12 <= &local_f4) &&
        (&local_f4 < (uint *)*plVar12 + *(int *)((longlong)(plVar12 + 1) + 4))) &&
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
    iVar8 = (int)plVar12[1];
    if (iVar8 == *(int *)((longlong)(plVar12 + 1) + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                        (0x404,(ForElementType<unsigned_int> *)plVar12,
                         (int *)((longlong)(plVar12 + 1) + 4));
    }
    *(int *)(plVar12 + 1) = iVar8 + 1;
    *(uint *)(*plVar12 + (longlong)iVar8 * 4) = local_f4;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)plVar12[1];
    if (*(int *)(*plVar12 + ((longlong)iVar8 + -1) * 4) + 1U != uVar14) goto LAB_147cc0739;
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)(*plVar12 + ((longlong)(int)plVar12[1] + -1) * 4) = uVar11;
  }
  puVar16 = (param_1->ViewFrustumLocal).Planes.AllocatorInstance.InlineData +
            (longlong)iVar6 * 4 + -0x40;
  *(uint *)puVar16 = *(int *)puVar16 + (uVar11 - uVar14) + 1;
LAB_147cc0884:
  if (*(char *)((longlong)&param_1->_padding_ + 1) != '\0') {
    lVar13 = (longlong)param_3;
    if (lVar13 <= iVar15) {
      puVar16 = (param_1->ViewFrustumLocal).Planes.AllocatorInstance.InlineData + lVar13 * 4 + -0x20
      ;
      plVar12 = &param_1->_padding_ + lVar13 * 2;
      do {
        if (lVar13 < 8) {
          *(uint *)puVar16 = *(int *)puVar16 + (uVar11 - uVar14) + 1;
          iVar6 = (int)*plVar12;
          if (iVar6 != 0) {
            uVar7 = 0;
            if ((int)(iVar6 - 1U) < iVar6) {
              uVar7 = ~(iVar6 - 1U) >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = (int)*plVar12;
            if (*(int *)(plVar12[-1] + ((longlong)iVar6 + -1) * 4) + 1U == uVar14) {
              uVar7 = 0;
              if ((int)(iVar6 - 1U) < iVar6) {
                uVar7 = ~(iVar6 - 1U) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(uint *)(plVar12[-1] + -4 + (longlong)(int)*plVar12 * 4) = uVar11;
              goto LAB_147cc0aca;
            }
          }
          local_f0 = uVar14;
          if ((((uint *)plVar12[-1] <= &local_f0) &&
              (&local_f0 < (uint *)plVar12[-1] + *(int *)((longlong)plVar12 + 4))) &&
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
          iVar6 = (int)*plVar12;
          if (iVar6 == *(int *)((longlong)plVar12 + 4)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                              (0x404,(ForElementType<unsigned_int> *)(plVar12 + -1),
                               (int *)((longlong)plVar12 + 4));
          }
          *(int *)plVar12 = iVar6 + 1;
          *(uint *)(plVar12[-1] + (longlong)iVar6 * 4) = local_f0;
          local_ec = uVar11;
          if ((((uint *)plVar12[-1] <= &local_ec) &&
              (&local_ec < (uint *)plVar12[-1] + *(int *)((longlong)plVar12 + 4))) &&
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
          iVar6 = (int)*plVar12;
          if (iVar6 == *(int *)((longlong)plVar12 + 4)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                              (0x404,(ForElementType<unsigned_int> *)(plVar12 + -1),
                               (int *)((longlong)plVar12 + 4));
          }
          *(int *)plVar12 = iVar6 + 1;
          *(uint *)(plVar12[-1] + (longlong)iVar6 * 4) = local_ec;
        }
LAB_147cc0aca:
        lVar13 = lVar13 + 1;
        puVar16 = puVar16 + 4;
        plVar12 = plVar12 + 2;
      } while (lVar13 <= iVar15);
    }
  }
  return;
}

// Traverse<0,0> @ 147cc0b60

/* WARNING: Type propagation algorithm not settling */
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
FHierarchicalStaticMeshSceneProxy::Traverse<0,0>
          (FHierarchicalStaticMeshSceneProxy *this,FFoliageCullInstanceParams *param_1,int param_2,
          int param_3,int param_4,bool param_5)

{
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances> FVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uchar *puVar16;
  int local_res20 [2];
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  FName local_88 [9];
  
  pTVar1 = param_1->Tree;
  uVar11 = 0;
  if (param_2 < pTVar1->ArrayNum) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  local_res20[0] = param_3;
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  lVar13 = (longlong)param_2 * 0x40;
  local_d0._s_0.X = (double)*(float *)(pFVar2 + lVar13);
  local_d0._s_0.Y = (double)*(float *)(pFVar2 + lVar13 + 4);
  local_d0._s_0.Z = (double)*(float *)(pFVar2 + lVar13 + 8);
  local_e8._s_0.X = (double)*(float *)(pFVar2 + lVar13 + 0x10);
  local_e8._s_0.Y = (double)*(float *)(pFVar2 + lVar13 + 0x14);
  local_e8._s_0.Z = (double)*(float *)(pFVar2 + lVar13 + 0x18);
  if (param_5 == false) {
    local_a0._s_0.X = (local_e8._s_0.X + local_d0._s_0.X) * __real_3fe0000000000000;
    local_a0._s_0.Z = (local_e8._s_0.Z + local_d0._s_0.Z) * __real_3fe0000000000000;
    local_b8._s_0.X = (local_e8._s_0.X - local_d0._s_0.X) * __real_3fe0000000000000;
    local_b8._s_0.Z = (local_e8._s_0.Z - local_d0._s_0.Z) * __real_3fe0000000000000;
    local_a0._s_0.Y = (local_e8._s_0.Y + local_d0._s_0.Y) * __real_3fe0000000000000;
    local_b8._s_0.Y = (local_e8._s_0.Y - local_d0._s_0.Y) * __real_3fe0000000000000;
    bVar5 = FConvexVolume::IntersectBox
                      (&param_1->ViewFrustumLocal,(TVector<double> *)&local_a0._s_0,
                       (TVector<double> *)&local_b8._s_0,&param_5);
    if (!bVar5) {
      return;
    }
  }
  if ((param_3 != param_4) &&
     (CalcLOD(local_res20,&param_4,(TVector<double> *)&local_d0._s_0,
              (TVector<double> *)&local_e8._s_0,&param_1->ViewOriginInLocalZero,
              &param_1->ViewOriginInLocalOne,&param_1->LODPlanesMin,&param_1->LODPlanesMax),
     param_3 = local_res20[0], param_1->LODs <= local_res20[0])) {
    return;
  }
  iVar6 = param_4;
  if ((param_1->FirstOcclusionNode <= param_2) && (param_2 <= param_1->LastOcclusionNode)) {
    if ((param_1->OcclusionResults == (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Params.OcclusionResults != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                           ,0x4a2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = param_1->OcclusionResults;
    uVar14 = param_2 + (param_1->OcclusionResultsStart - param_1->FirstOcclusionNode);
    uVar11 = 0;
    if ((int)uVar14 < pTVar3->ArrayNum) {
      uVar11 = ~uVar14 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pTVar3->AllocatorInstance).Data[(int)uVar14] != (FScriptContainerElement)0x0) {
      iVar6 = (*(int *)(pFVar2 + lVar13 + 0x24) - *(int *)(pFVar2 + lVar13 + 0x20)) + 1;
      if (iVar6 == 0) {
        return;
      }
      if (FThreadStats::bPrimaryEnable == false) {
        return;
      }
      FVar10 = StatPtr_STAT_OcclusionCulledFoliageInstances;
      if (StatPtr_STAT_OcclusionCulledFoliageInstances ==
          (FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances>)0x0) {
        pFVar9 = ::FName::FName(local_88,"STAT_OcclusionCulledFoliageInstances");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_OcclusionCulledFoliageInstances>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_OcclusionCulledFoliageInstances,*pFVar9,
                            L"Occlusion Culled Instances","STATGROUP_Foliage","STATCAT_Advanced",
                            L"Foliage",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar10,Add,(longlong)iVar6,false);
      return;
    }
  }
  iVar15 = *(int *)(pFVar2 + lVar13 + 0xc);
  if ((iVar15 < 0) ||
     (((*(int *)(pFVar2 + lVar13 + 0x24) - *(int *)(pFVar2 + lVar13 + 0x20)) + 1 <
       param_1->MinInstancesToSplit[param_3] &&
      (bVar5 = CanGroup((TVector<double> *)&local_d0._s_0,(TVector<double> *)&local_e8._s_0,
                        &param_1->ViewOriginInLocalZero,&param_1->ViewOriginInLocalOne,
                        param_1->LODPlanesMax[(longlong)param_1->LODs + -1]), bVar5)))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((((param_5 == false) || (param_3 < iVar6)) || (param_2 < param_1->FirstOcclusionNode)) &&
     (!bVar5)) {
    if (*(int *)(pFVar2 + lVar13 + 0x1c) < iVar15) {
      return;
    }
    do {
      Traverse<0,0>(this,param_1,iVar15,param_3,iVar6,param_5);
      iVar15 = iVar15 + 1;
    } while (iVar15 <= *(int *)(pFVar2 + lVar13 + 0x1c));
    return;
  }
  uVar11 = *(uint *)(pFVar2 + lVar13 + 0x24);
  iVar15 = param_1->LODs + -1;
  uVar14 = *(uint *)(pFVar2 + lVar13 + 0x20);
  if (iVar6 < iVar15) {
    iVar15 = iVar6;
  }
  param_4 = iVar15;
  if ((char)param_1->_padding_ == '\0') goto LAB_147cc11d0;
  iVar6 = param_3;
  if (*(char *)((longlong)&param_1->_padding_ + 2) != '\0') {
    iVar6 = iVar15;
  }
  if (7 < iVar6) goto LAB_147cc11d0;
  plVar12 = &param_1->_padding_ + (longlong)iVar6 * 2;
  iVar8 = (int)plVar12[1];
  if (iVar8 == 0) {
LAB_147cc1085:
    local_f8 = uVar14;
    if ((((uint *)*plVar12 <= &local_f8) &&
        (&local_f8 < (uint *)*plVar12 + *(int *)((longlong)(plVar12 + 1) + 4))) &&
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
    iVar8 = (int)plVar12[1];
    if (iVar8 == *(int *)((longlong)(plVar12 + 1) + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                        (0x404,(ForElementType<unsigned_int> *)plVar12,
                         (int *)((longlong)(plVar12 + 1) + 4));
    }
    *(int *)(plVar12 + 1) = iVar8 + 1;
    *(uint *)(*plVar12 + (longlong)iVar8 * 4) = local_f8;
    local_f4 = uVar11;
    if ((((uint *)*plVar12 <= &local_f4) &&
        (&local_f4 < (uint *)*plVar12 + *(int *)((longlong)(plVar12 + 1) + 4))) &&
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
    iVar8 = (int)plVar12[1];
    if (iVar8 == *(int *)((longlong)(plVar12 + 1) + 4)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                        (0x404,(ForElementType<unsigned_int> *)plVar12,
                         (int *)((longlong)(plVar12 + 1) + 4));
    }
    *(int *)(plVar12 + 1) = iVar8 + 1;
    *(uint *)(*plVar12 + (longlong)iVar8 * 4) = local_f4;
  }
  else {
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)plVar12[1];
    if (*(int *)(*plVar12 + ((longlong)iVar8 + -1) * 4) + 1U != uVar14) goto LAB_147cc1085;
    uVar7 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar7 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)(*plVar12 + ((longlong)(int)plVar12[1] + -1) * 4) = uVar11;
  }
  puVar16 = (param_1->ViewFrustumLocal).Planes.AllocatorInstance.InlineData +
            (longlong)iVar6 * 4 + -0x40;
  *(uint *)puVar16 = *(int *)puVar16 + (uVar11 - uVar14) + 1;
LAB_147cc11d0:
  if (*(char *)((longlong)&param_1->_padding_ + 1) != '\0') {
    lVar13 = (longlong)param_3;
    if (lVar13 <= iVar15) {
      puVar16 = (param_1->ViewFrustumLocal).Planes.AllocatorInstance.InlineData + lVar13 * 4 + -0x20
      ;
      plVar12 = &param_1->_padding_ + lVar13 * 2;
      do {
        if (lVar13 < 8) {
          *(uint *)puVar16 = *(int *)puVar16 + (uVar11 - uVar14) + 1;
          iVar6 = (int)*plVar12;
          if (iVar6 != 0) {
            uVar7 = 0;
            if ((int)(iVar6 - 1U) < iVar6) {
              uVar7 = ~(iVar6 - 1U) >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = (int)*plVar12;
            if (*(int *)(plVar12[-1] + ((longlong)iVar6 + -1) * 4) + 1U == uVar14) {
              uVar7 = 0;
              if ((int)(iVar6 - 1U) < iVar6) {
                uVar7 = ~(iVar6 - 1U) >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(uint *)(plVar12[-1] + -4 + (longlong)(int)*plVar12 * 4) = uVar11;
              goto LAB_147cc1416;
            }
          }
          local_f0 = uVar14;
          if ((((uint *)plVar12[-1] <= &local_f0) &&
              (&local_f0 < (uint *)plVar12[-1] + *(int *)((longlong)plVar12 + 4))) &&
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
          iVar6 = (int)*plVar12;
          if (iVar6 == *(int *)((longlong)plVar12 + 4)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                              (0x404,(ForElementType<unsigned_int> *)(plVar12 + -1),
                               (int *)((longlong)plVar12 + 4));
          }
          *(int *)plVar12 = iVar6 + 1;
          *(uint *)(plVar12[-1] + (longlong)iVar6 * 4) = local_f0;
          local_ec = uVar11;
          if ((((uint *)plVar12[-1] <= &local_ec) &&
              (&local_ec < (uint *)plVar12[-1] + *(int *)((longlong)plVar12 + 4))) &&
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
          iVar6 = (int)*plVar12;
          if (iVar6 == *(int *)((longlong)plVar12 + 4)) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                              (0x404,(ForElementType<unsigned_int> *)(plVar12 + -1),
                               (int *)((longlong)plVar12 + 4));
          }
          *(int *)plVar12 = iVar6 + 1;
          *(uint *)(plVar12[-1] + (longlong)iVar6 * 4) = local_ec;
        }
LAB_147cc1416:
        lVar13 = lVar13 + 1;
        puVar16 = puVar16 + 4;
        plVar12 = plVar12 + 2;
      } while (lVar13 <= iVar15);
    }
  }
  return;
}

// FHierarchicalStaticMeshSceneProxy @ 147cc3b80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FHierarchicalStaticMeshSceneProxy * __thiscall
FHierarchicalStaticMeshSceneProxy::FHierarchicalStaticMeshSceneProxy
          (FHierarchicalStaticMeshSceneProxy *this,
          UHierarchicalInstancedStaticMeshComponent *param_1,Type param_2)

{
  int *piVar1;
  byte *pbVar2;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  byte bVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FSceneInterface *this_00;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  TConsoleVariableData<float> *pTVar16;
  bool bVar17;
  EShaderPlatform EVar18;
  int iVar19;
  FHierarchicalStaticMeshSceneProxy *pFVar20;
  byte bVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  
  FInstancedStaticMeshSceneProxy::FInstancedStaticMeshSceneProxy
            ((FInstancedStaticMeshSceneProxy *)this,(UInstancedStaticMeshComponent *)param_1,param_2
            );
  this->_padding_ = (longlong)&___7FHierarchicalStaticMeshSceneProxy__6B_;
  if (((param_1->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0)
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pFVar20 = (FHierarchicalStaticMeshSceneProxy *)(*pcVar10)();
    return pFVar20;
  }
  (this->ClusterTreePtr).Object = (param_1->ClusterTreePtr).Object;
  pTVar5 = (param_1->ClusterTreePtr).SharedReferenceCount.ReferenceController;
  (this->ClusterTreePtr).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((this->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pFVar20 = (FHierarchicalStaticMeshSceneProxy *)(*pcVar10)();
    return pFVar20;
  }
  if (((param_1->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0)
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pFVar20 = (FHierarchicalStaticMeshSceneProxy *)(*pcVar10)();
    return pFVar20;
  }
  pTVar3 = &this->UnbuiltBounds;
  this->ClusterTree = (param_1->ClusterTreePtr).Object;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->UnbuiltBounds).ArrayMax;
  iVar19 = (param_1->UnbuiltInstanceBoundsList).ArrayNum;
  pFVar6 = (param_1->UnbuiltInstanceBoundsList).AllocatorInstance.Data;
  (this->UnbuiltBounds).ArrayNum = iVar19;
  if (iVar19 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar19,0,&pTVar3->AllocatorInstance,iVar19,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar19 * 0x38);
  }
  iVar19 = param_1->NumBuiltInstances;
  if (iVar19 < 1) {
    iVar19 = param_1->NumBuiltRenderInstances;
  }
  this->FirstUnbuiltIndex = iVar19;
  iVar19 = param_1->InstanceCountToRender;
  (this->OcclusionBounds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OcclusionBounds).ArrayNum = 0;
  (this->OcclusionBounds).ArrayMax = 0;
  *(undefined8 *)&this->OcclusionResults = 0;
  *(undefined8 *)&(this->OcclusionResults).field_0x8 = 0;
  *(undefined8 *)&(this->OcclusionResults).field_0x20 = 0;
  this->InstanceCountToRender = iVar19;
  *(undefined4 *)&(this->OcclusionResults).field_0x28 = 0;
  *(undefined4 *)&(this->OcclusionResults).field_0x2c = 0x80;
  *(undefined4 *)&(this->OcclusionResults).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OcclusionResults).field_0x34 = 0;
  *(undefined8 *)&(this->OcclusionResults).field_0x40 = 0;
  *(undefined4 *)&(this->OcclusionResults).field_0x48 = 0;
  this_00 = (FSceneInterface *)this->_padding_;
  bVar21 = 0;
  (this->OcclusionResultsMutex).State = (atomic<unsigned_char>)0x0;
  this->ViewRelevance = param_1->ViewRelevanceType;
  pcVar10 = *(code **)(*(longlong *)param_1 + 0xb78);
  EVar18 = FSceneInterface::GetShaderPlatform(this_00);
  bVar17 = (bool)(*pcVar10)(param_1,EVar18);
  this->bDitheredLODTransitions = bVar17;
  this->SceneProxyCreatedFrameNumberRenderThread = 0xffffffff;
  this->SingleDebugRuns[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SingleDebugRuns[0].ArrayNum = 0;
  this->SingleDebugRuns[0].ArrayMax = 0;
  this->SingleDebugRuns[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SingleDebugRuns[1].ArrayNum = 0;
  this->SingleDebugRuns[1].ArrayMax = 0;
  this->SingleDebugRuns[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SingleDebugRuns[2].ArrayNum = 0;
  this->SingleDebugRuns[2].ArrayMax = 0;
  this->SingleDebugRuns[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SingleDebugRuns[3].ArrayNum = 0;
  this->SingleDebugRuns[3].ArrayMax = 0;
  this->SingleDebugRuns[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SingleDebugRuns[4].ArrayNum = 0;
  this->SingleDebugRuns[4].ArrayMax = 0;
  this->SingleDebugRuns[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SingleDebugRuns[5].ArrayNum = 0;
  this->SingleDebugRuns[5].ArrayMax = 0;
  this->SingleDebugRuns[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SingleDebugRuns[6].ArrayNum = 0;
  this->SingleDebugRuns[6].ArrayMax = 0;
  this->SingleDebugRuns[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SingleDebugRuns[7].ArrayNum = 0;
  this->SingleDebugRuns[7].ArrayMax = 0;
  this->MultipleDebugRuns[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MultipleDebugRuns[0].ArrayNum = 0;
  this->MultipleDebugRuns[0].ArrayMax = 0;
  this->MultipleDebugRuns[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MultipleDebugRuns[1].ArrayNum = 0;
  this->MultipleDebugRuns[1].ArrayMax = 0;
  this->MultipleDebugRuns[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MultipleDebugRuns[2].ArrayNum = 0;
  this->MultipleDebugRuns[2].ArrayMax = 0;
  this->MultipleDebugRuns[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MultipleDebugRuns[3].ArrayNum = 0;
  this->MultipleDebugRuns[3].ArrayMax = 0;
  this->MultipleDebugRuns[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MultipleDebugRuns[4].ArrayNum = 0;
  this->MultipleDebugRuns[4].ArrayMax = 0;
  this->MultipleDebugRuns[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MultipleDebugRuns[5].ArrayNum = 0;
  this->MultipleDebugRuns[5].ArrayMax = 0;
  this->MultipleDebugRuns[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MultipleDebugRuns[6].ArrayNum = 0;
  this->MultipleDebugRuns[6].ArrayMax = 0;
  this->MultipleDebugRuns[7].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MultipleDebugRuns[7].ArrayNum = 0;
  this->MultipleDebugRuns[7].ArrayMax = 0;
  this->CaptureTag = 0;
  SetupOcclusion(this,param_1);
  pbVar2 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar2 = *pbVar2 & 0xfb;
  if (this->ViewRelevance == Grass) {
    bVar21 = 0x20;
  }
  bVar4 = *(byte *)((longlong)&this->_padding_ + 1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 4;
  *(byte *)((longlong)&this->_padding_ + 1) = bVar21 | bVar4 & 0xdf | 0x10;
  pTVar16 = CVarFoliageLODDistanceScale.Ref;
  bVar17 = IsInParallelGameThread();
  if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
    pcVar10 = (code *)swi(3);
    pFVar20 = (FHierarchicalStaticMeshSceneProxy *)(*pcVar10)();
    return pFVar20;
  }
  fVar22 = *(float *)&param_1->field_0x708 * pTVar16->ShadowedValue[0];
  *(float *)((longlong)&this->_padding_ + 4) = fVar22;
  *(float *)((longlong)&this->_padding_ + 4) = fVar22;
  *(float *)((longlong)&this->_padding_ + 4) = fVar22;
  if (((param_1->ClusterTreePtr).Object == (TArray<FClusterNode,TSizedDefaultAllocator<32>_> *)0x0)
     && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    pFVar20 = (FHierarchicalStaticMeshSceneProxy *)(*pcVar10)();
    return pFVar20;
  }
  pTVar7 = (param_1->ClusterTreePtr).Object;
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (pTVar7->ArrayNum != 0) {
    if ((pTVar7->ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pFVar20 = (FHierarchicalStaticMeshSceneProxy *)(*pcVar10)();
      return pFVar20;
    }
    pFVar6 = (pTVar7->AllocatorInstance).Data;
    if ((pTVar7->ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pFVar20 = (FHierarchicalStaticMeshSceneProxy *)(*pcVar10)();
      return pFVar20;
    }
    pFVar8 = (pTVar7->AllocatorInstance).Data;
    if ((pTVar7->ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      pFVar20 = (FHierarchicalStaticMeshSceneProxy *)(*pcVar10)();
      return pFVar20;
    }
    pFVar9 = (pTVar7->AllocatorInstance).Data;
    uVar25 = (double)((*(float *)(pFVar8 + 0x3c) - *(float *)(pFVar9 + 0x30)) * __real_3f000000 +
                     *(float *)(pFVar6 + 0x30));
    uVar14 = (double)((*(float *)(pFVar8 + 0x34) - *(float *)(pFVar9 + 0x28)) * __real_3f000000 +
                     *(float *)(pFVar6 + 0x28));
    uVar15 = (double)((*(float *)(pFVar8 + 0x38) - *(float *)(pFVar9 + 0x2c)) * __real_3f000000 +
                     *(float *)(pFVar6 + 0x2c));
  }
  uVar24 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar23 = (undefined4)uVar15;
  auVar11._8_4_ = uVar23;
  auVar11._0_8_ = uVar14;
  auVar11._12_4_ = uVar24;
  this->_padding_ = uVar14;
  this->_padding_ = auVar11._8_8_;
  auVar12._8_4_ = uVar23;
  auVar12._0_8_ = uVar14;
  auVar12._12_4_ = uVar24;
  this->_padding_ = uVar14;
  this->_padding_ = auVar12._8_8_;
  auVar13._8_4_ = uVar23;
  auVar13._0_8_ = uVar14;
  auVar13._12_4_ = uVar24;
  this->_padding_ = uVar14;
  this->_padding_ = auVar13._8_8_;
  this->_padding_ = uVar25;
  this->_padding_ = uVar25;
  this->_padding_ = uVar25;
  return this;
}

// AcceptOcclusionResults @ 147ccfe50

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
FHierarchicalStaticMeshSceneProxy::AcceptOcclusionResults
          (FHierarchicalStaticMeshSceneProxy *this,FSceneView *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  int *piVar1;
  FMutex *this_00;
  TMap<unsigned_int,FFoliageOcclusionResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>_>
  *this_01;
  atomic<unsigned_char> aVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  FFoliageOcclusionResults *pFVar7;
  ulonglong uVar8;
  size_t _Size;
  uint uVar9;
  bool bVar10;
  uint local_res8 [2];
  uint *local_a8;
  TIterator *local_a0;
  TIterator local_98;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  iVar5 = param_4;
  if ((this->OcclusionBounds).ArrayNum != param_4) {
    return;
  }
  if (GFrameNumberRenderThread <= this->SceneProxyCreatedFrameNumberRenderThread) {
    return;
  }
  this_00 = &this->OcclusionResultsMutex;
  LOCK();
  bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar10) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar10) {
    UE::FMutex::LockSlow(this_00);
  }
  local_res8[0] = FSceneView::GetViewKey(param_1);
  this_01 = &this->OcclusionResults;
  pFVar7 = TMapBase<unsigned_int,FFoliageOcclusionResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>_>
           ::Find((TMapBase<unsigned_int,FFoliageOcclusionResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>_>
                   *)this_01,local_res8[0]);
  if (pFVar7 == (FFoliageOcclusionResults *)0x0) {
    TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_98,
               (TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
                *)this_01);
    uStack_50 = (uint)local_98._padding_;
    auStack_60._8_8_ = CONCAT44(local_98._padding_._4_4_,(int)local_98._padding_);
    uStack_4c = local_98._padding_._4_4_;
    auStack_60._0_8_ = (ulonglong)local_98._padding_._4_4_ << 0x20;
    local_30 = 0;
    local_68 = (longlong *)local_98._padding_;
    local_48 = local_98._padding_;
    pTStack_40 = local_98.Set;
    uVar8 = auStack_60._16_8_ >> 0x20;
    local_38 = (TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
                *)this_01;
    if ((int)local_98._padding_._4_4_ <
        *(int *)(CONCAT44(local_98._padding_._4_4_,(int)local_98._padding_) + 0x18)) {
      do {
        if (*(uint *)(*local_68 + 0x20 + (longlong)(int)uVar8 * 0x30) != GFrameNumberRenderThread) {
          TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_40,local_98._padding_._4_4_);
          local_30 = CONCAT11(local_30._1_1_,1);
        }
        uStack_50 = uStack_50 & ~auStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
        uVar8 = (ulonglong)uStack_4c;
        local_98._padding_._4_4_ = uStack_4c;
      } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
      if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar6 = 1;
        }
        else {
          uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar8 != 0) {
            for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_38->HashSize < iVar6)) || (iVar6 < local_38->HashSize)) {
          local_38->HashSize = iVar6;
          TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
          ::Rehash(local_38);
        }
      }
    }
    local_98._padding_._0_4_ = param_2->ArrayNum;
    _Size = (size_t)(int)local_98._padding_;
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_98._padding_ = 0;
    if ((int)local_98._padding_ == 0) {
      local_98._padding_._4_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(int)local_98._padding_,0,(ForAnyElementType *)&local_98,
                 (int)local_98._padding_,(int *)((longlong)&local_98._padding_ + 4));
      memcpy((void *)local_98._padding_,pFVar3,_Size);
    }
    local_98._padding_._0_4_ = GFrameNumberRenderThread;
    local_a8 = local_res8;
    local_a0 = &local_98;
    local_98._padding_._4_4_ = iVar5;
    local_98._padding_._0_4_ = param_3;
    TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FFoliageOcclusionResults_&&>_>
              ((TSet<TTuple<unsigned_int,FFoliageOcclusionResults>,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>,FDefaultSetAllocator>
                *)this_01,
               (TPairInitializer<unsigned_int_const_&,FFoliageOcclusionResults_&&> *)&param_4,
               (bool *)&local_a8);
    if ((longlong *)local_98._padding_ != (longlong *)0x0) {
      FMemory::Free((void *)local_98._padding_);
    }
  }
  else {
    pFVar7->FrameNumberRenderThread = GFrameNumberRenderThread;
    if (pFVar7 != (FFoliageOcclusionResults *)param_2) {
      iVar6 = param_2->ArrayNum;
      piVar1 = &(pFVar7->Results).ArrayMax;
      pFVar3 = (param_2->AllocatorInstance).Data;
      (pFVar7->Results).ArrayNum = iVar6;
      if ((iVar6 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        pFVar7->ResultsStart = param_3;
        pFVar7->NumResults = iVar5;
        goto LAB_147cd00e6;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,*piVar1,(ForAnyElementType *)pFVar7,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pFVar7->Results).AllocatorInstance.Data,pFVar3,(longlong)iVar6);
      }
    }
    pFVar7->ResultsStart = param_3;
    pFVar7->NumResults = iVar5;
  }
LAB_147cd00e6:
  LOCK();
  aVar2 = this_00->State;
  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(this_00);
  }
  return;
}

// AllowInstanceCullingOcclusionQueries @ 147cd4a70

bool __thiscall
FHierarchicalStaticMeshSceneProxy::AllowInstanceCullingOcclusionQueries
          (FHierarchicalStaticMeshSceneProxy *this)

{
  return false;
}

// ApplyWorldOffset @ 147cd5410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FHierarchicalStaticMeshSceneProxy::ApplyWorldOffset
          (FHierarchicalStaticMeshSceneProxy *this,FRHICommandListBase *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_38;
  
  local_38._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_38._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  FPrimitiveSceneProxy::ApplyWorldOffset
            ((FPrimitiveSceneProxy *)this,param_1,(TVector<double> *)&local_38._s_0);
  iVar3 = (this->OcclusionBounds).ArrayNum;
  pFVar4 = (this->OcclusionBounds).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar3 * 0x38;
  while( true ) {
    if ((this->OcclusionBounds).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TBoxSphereBounds<double,double>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    *(double *)pFVar4 = (param_2->field0_0x0)._s_0.X + *(double *)pFVar4;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    *(double *)(pFVar4 + 8) = *(double *)(pFVar4 + 8) + dVar1;
    *(double *)(pFVar4 + 0x10) = dVar2 + *(double *)(pFVar4 + 0x10);
    pFVar4 = pFVar4 + 0x38;
  }
  return;
}

// CreateRenderThreadResources @ 147ce9ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FHierarchicalStaticMeshSceneProxy::CreateRenderThreadResources
          (FHierarchicalStaticMeshSceneProxy *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  FStaticMeshInstanceBuffer *pFVar4;
  TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters> TVar5;
  EUniformBufferUsage EVar6;
  uint uVar7;
  EUniformBufferUsage local_res8;
  TPairInitializer<unsigned_int_&&,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_const_&>
  local_res18;
  FRHIResource *local_48;
  FSceneViewFamily *local_40;
  FSceneViewStateInterface *local_38;
  
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceDataSceneProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                         ,0x647,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FStaticMeshSceneProxy::CreateRenderThreadResources((FStaticMeshSceneProxy *)this,param_1);
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = (FStaticMeshInstanceBuffer *)(**(code **)(*(longlong *)this->_padding_ + 0x20))();
  FInstancedStaticMeshRenderData::BindBuffersToVertexFactories
            ((FInstancedStaticMeshRenderData *)&this->_padding_,param_1,pFVar4);
  EVar6 = UniformBuffer_SingleDraw;
  uVar7 = (int)this + 0xbe0;
  if (0 < (int)this->_padding_) {
    local_40 = (FSceneViewFamily *)&local_res8;
    local_38 = (FSceneViewStateInterface *)&local_res18.Value;
    do {
      FInstancedStaticMeshSceneProxy::CreateLooseUniformBuffer
                ((FInstancedStaticMeshSceneProxy *)this,(FSceneView *)&local_res18.Value,
                 (FInstancingUserData *)0x0,uVar7,0,EVar6);
      local_res8 = EVar6;
      TSet<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned_int_&&,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_const_&>_>
                ((TSet<TTuple<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>,0>,FDefaultSetAllocator>
                  *)&this->_padding_,&local_res18,(bool *)&local_40);
      if ((FRHIResource *)local_res18.Value != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_res18.Value);
      }
      EVar6 = EVar6 + UniformBuffer_SingleFrame;
    } while ((int)EVar6 < (int)this->_padding_);
  }
  TVar5 = FInstancedStaticMeshSceneProxy::CreateLooseUniformBuffer
                    ((FInstancedStaticMeshSceneProxy *)this,(FSceneView *)&local_48,
                     (FInstancingUserData *)0x0,uVar7,0,UniformBuffer_SingleDraw);
  plVar1 = &this->_padding_;
  if ((TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>)plVar1 != TVar5) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = *(longlong *)TVar5;
    *(undefined8 *)TVar5 = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_48 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_48);
  }
  this->SceneProxyCreatedFrameNumberRenderThread = GFrameNumberRenderThread;
  return;
}

// DrawStaticElements @ 147cf0cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FHierarchicalStaticMeshSceneProxy::DrawStaticElements
          (FHierarchicalStaticMeshSceneProxy *this,FStaticPrimitiveDrawInterface *param_1)

{
  byte *pbVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  EShaderPlatform EVar11;
  Type TVar12;
  EShadingPath EVar13;
  FMaterialRenderProxy *this_00;
  FMaterial *this_01;
  ushort *puVar14;
  ForElementType<FMeshBatchElement> FVar15;
  FMeshBatchElement *pFVar16;
  byte bVar17;
  longlong lVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  uint uVar28;
  longlong lVar29;
  float fVar30;
  undefined1 auStackY_818 [32];
  uint uStack_7d8;
  byte bStack_7d4;
  byte bStack_7d1;
  undefined1 uStack_7d0;
  byte bStack_7cf;
  undefined1 auStack_7ce [2];
  int iStack_7cc;
  ulonglong uStack_7c8;
  ulonglong uStack_7c0;
  longlong lStack_7b8;
  undefined4 uStack_7b0;
  Type TStack_7ac;
  ulonglong uStack_7a8;
  longlong lStack_7a0;
  undefined1 auStack_798 [4];
  uint uStack_794;
  longlong *plStack_790;
  longlong lStack_788;
  longlong lStack_780;
  longlong lStack_778;
  ForElementType<FMeshBatchElement> FStack_770;
  int iStack_6d0;
  int iStack_6cc;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  short sStack_6a0;
  undefined1 uStack_69e;
  uint uStack_69c;
  undefined1 uStack_698;
  undefined1 uStack_697;
  ForElementType<FMeshBatchElement> FStack_690;
  int iStack_5f0;
  int iStack_5ec;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  short sStack_5c0;
  undefined1 uStack_5be;
  uint uStack_5bc;
  undefined1 uStack_5b8;
  undefined1 uStack_5b7;
  FMeshBatchElement FStack_5b0;
  FMeshBatchElement *pFStack_518;
  int iStack_510;
  undefined4 uStack_50c;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  short sStack_4e0;
  undefined1 uStack_4de;
  uint uStack_4dc;
  undefined2 uStack_4d8;
  FMeshBatchElement FStack_4d0;
  FMeshBatchElement *pFStack_438;
  int iStack_430;
  undefined4 uStack_42c;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 uStack_404;
  short sStack_400;
  undefined1 uStack_3fe;
  uint uStack_3fc;
  undefined2 uStack_3f8;
  ForElementType<FMeshBatchElement> FStack_3f0;
  int iStack_350;
  int iStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  short sStack_320;
  undefined1 uStack_31e;
  uint uStack_31c;
  undefined1 uStack_318;
  undefined1 uStack_317;
  ForElementType<FMeshBatchElement> FStack_310;
  int iStack_270;
  int iStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  short sStack_240;
  undefined1 uStack_23e;
  uint uStack_23c;
  undefined1 uStack_238;
  undefined1 uStack_237;
  ForElementType<FMeshBatchElement> FStack_230;
  int iStack_190;
  int iStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  short sStack_160;
  undefined1 uStack_15e;
  uint uStack_15c;
  undefined1 uStack_158;
  undefined1 uStack_157;
  FMeshBatchElement FStack_150;
  FMeshBatchElement *pFStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  uint uStack_7c;
  undefined2 uStack_78;
  ulonglong uStack_70;
  
  if ((int)this->_padding_ < 1) {
    return;
  }
  uStack_70 = __security_cookie.value ^ (ulonglong)auStackY_818;
  if ((this->_padding_ & 0x2000) == 0) {
    uStack_7b0 = (**(code **)(this->_padding_ + 0x160))();
    iVar23 = *(int *)(this->_padding_ + 8);
    TStack_7ac = ((FSceneInterface *)this->_padding_)->FeatureLevel;
    EVar11 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar11].bContainsValidPlatformInfo == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar21 = (int)this->_padding_;
    uStack_7d8 = *(uint *)((longlong)&this->_padding_ + 4);
    uVar25 = (ulonglong)(int)uStack_7d8;
    iStack_7cc = (int)this->_padding_;
    if (iVar21 < 1) {
      uVar26 = uVar25;
      lStack_778 = (longlong)iVar23;
      if ((longlong)uVar25 < (longlong)iVar23) {
        do {
          uVar20 = 0;
          plVar27 = (longlong *)this->_padding_;
          uVar24 = (uint)uVar26;
          uVar28 = ~uVar24 >> 0x1f;
          uVar22 = 0;
          if ((int)uVar24 < (int)plVar27[1]) {
            uVar22 = uVar28;
          }
          uStack_7a8 = uVar25;
          uStack_794 = uVar28;
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar7 = uStack_7a8;
          lVar18 = *(longlong *)(*plVar27 + uVar25 * 8);
          fVar2 = *(float *)(this->_padding_ + 0x20 + uStack_7a8 * 4);
          lStack_7b8 = lVar18;
          fVar30 = (float)(**(code **)(this->_padding_ + 0x210))(this);
          fVar30 = fVar30 * fVar2;
          bStack_7d1 = 0;
          bStack_7d4 = 0;
          if ((GUseShadowIndexBuffer != false) && ((*(byte *)(lVar18 + 0x94) & 1) != 0)) {
            uVar22 = 0;
            if ((int)uVar24 < (int)this->_padding_) {
              uVar22 = uVar28;
            }
            if ((uVar22 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            cVar9 = (char)this->_padding_;
            bVar8 = false;
            lStack_7a0 = uVar7 * 0x80 + this->_padding_;
            bVar5 = true;
            if ((cVar9 == '\x02') || (cVar9 == '\x01')) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            bVar17 = (byte)this->_padding_ & 1;
            uStack_7c8 = 0;
            uStack_7c0 = 0;
            while( true ) {
              lVar29 = lStack_7a0;
              bStack_7cf = bVar17;
              if (*(int *)(lVar18 + 0x38) <= (int)uVar20) break;
              lVar18 = lStack_7a0 + 0x30;
              uVar22 = 0;
              if ((int)uVar20 < *(int *)(lStack_7a0 + 0x50)) {
                uVar22 = ~uVar20 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(longlong *)(lVar29 + 0x48) != 0) {
                lVar18 = *(longlong *)(lVar29 + 0x48);
              }
              this_00 = (FMaterialRenderProxy *)
                        (**(code **)(**(longlong **)(lVar18 + uStack_7c0) + 0x310))();
              this_01 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,TStack_7ac);
              if ((bVar8) ||
                 ((!bVar4 &&
                  (cVar9 = (**(code **)(this_01->_padding_ + 0x58))(this_01), cVar9 != '\0')))) {
                bVar8 = true;
              }
              else {
                bVar8 = false;
              }
              if (((!bVar5) || (bVar4)) ||
                 (cVar9 = (**(code **)(this_01->_padding_ + 0x58))(this_01), cVar9 == '\0')) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              lVar18 = lStack_7b8;
              lVar29 = lStack_7b8 + 0x10;
              uVar22 = 0;
              if ((int)uVar20 < *(int *)(lStack_7b8 + 0x38)) {
                uVar22 = ~uVar20 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(longlong *)(lVar18 + 0x30) != 0) {
                lVar29 = *(longlong *)(lVar18 + 0x30);
              }
              if (((((bVar8) && (!bVar5)) ||
                   ((bVar10 = FMaterial::WritesEveryPixel(this_01,false), !bVar10 ||
                    (((cVar9 = (**(code **)(this_01->_padding_ + 0x48))(this_01), cVar9 != '\0' ||
                      (cVar9 = (**(code **)(this_01->_padding_ + 0x50))(this_01), cVar9 != '\0')) ||
                     (bVar10 = IsTranslucentBlendMode(this_01), bVar10)))))) ||
                  ((bVar10 = FMaterial::MaterialModifiesMeshPosition_RenderThread(this_01), bVar10
                   || (iVar23 = (**(code **)(this_01->_padding_ + 0x40))(this_01), iVar23 != 0))))
                 || ((cVar9 = (**(code **)(this_01->_padding_ + 0x368))(this_01), cVar9 != '\0' ||
                     (puVar14 = (ushort *)
                                (**(code **)(this_01->_padding_ + 0x280))(this_01,auStack_798),
                     (*puVar14 & 0x400) != 0)))) goto LAB_148796176;
              uStack_7c0 = uStack_7c0 + 0x18;
              lVar18 = uStack_7c8 + 0x15;
              uStack_7c8 = uStack_7c8 + 0x1c;
              bVar17 = *(byte *)(lVar18 + lVar29) & bStack_7cf;
              uVar20 = uVar20 + 1;
              lVar18 = lStack_7b8;
            }
            if (((((this->_padding_ & 0x100000000000) == 0) ||
                 (EVar13 = FSceneInterface::GetShadingPath(*(Type *)(this->_padding_ + 8)),
                 EVar13 != Deferred)) || (cVar9 = (char)this->_padding_, cVar9 == '\x02')) ||
               (cVar9 == '\x01')) {
              bStack_7d4 = 0;
            }
            else {
              bStack_7d4 = 1;
            }
            bStack_7d1 = bVar17;
            if ((bVar17 != 0) || (bStack_7d4 != 0)) {
              iVar23 = (**(code **)(this->_padding_ + 600))(this);
              (**(code **)((longlong)*param_1 + 0x10))(param_1,iVar23);
              iVar21 = 0;
              if (0 < iVar23) {
                do {
                  pFStack_b8 = (FMeshBatchElement *)0x0;
                  uStack_7c = uStack_7c & 0xf081803c | 0x81803c;
                  uStack_ac = 1;
                  uStack_98 = 0;
                  uStack_a8 = 0;
                  uStack_a0 = 0;
                  uStack_90 = 0xffffffffffffffff;
                  uStack_88 = 0;
                  uStack_84 = 0xffffffff;
                  uStack_80 = 0;
                  uStack_7e = 0xff;
                  uStack_78 = 0xffff;
                  iStack_b0 = 1;
                  DefaultConstructItems<FMeshBatchElement,int>(&FStack_150,1);
                  cVar9 = (**(code **)(this->_padding_ + 0x260))
                                    (this,uStack_7d8,iVar21,(undefined1)uStack_7b0);
                  if (cVar9 != '\0') {
                    uStack_7c = (((uint)bStack_7d4 + (uint)bStack_7d4 | (uint)bStack_7d4) << 2 |
                                bVar17 & 1) << 2 | uStack_7c & 0xffffffc3;
                    (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_150,fVar30);
                  }
                  pFVar16 = &FStack_150;
                  if (pFStack_b8 != (FMeshBatchElement *)0x0) {
                    pFVar16 = pFStack_b8;
                  }
                  DestructItems<FMeshBatchElement,int>(pFVar16,iStack_b0);
                  if (pFStack_b8 != (FMeshBatchElement *)0x0) {
                    FMemory::Free(pFStack_b8);
                  }
                  iVar21 = iVar21 + 1;
                } while (iVar21 < iVar23);
              }
            }
LAB_148796176:
            uVar26 = (ulonglong)uStack_7d8;
          }
          uVar24 = 0;
          uStack_7c8 = uStack_7c8 & 0xffffffff00000000;
          uVar22 = (uint)uVar26;
          if (0 < *(int *)(lStack_7b8 + 0x38)) {
            lStack_780 = (longlong)(int)(uint)uVar26;
            lStack_788 = lStack_780 << 7;
            lStack_7a0 = 0;
            uVar25 = 0;
            do {
              lVar29 = lStack_788;
              lVar18 = lStack_7a0;
              uVar20 = (uint)uVar25;
              uVar22 = uVar24;
              if ((int)uVar26 < (int)this->_padding_) {
                uVar22 = uStack_794;
              }
              if ((uVar22 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              lVar29 = lVar29 + this->_padding_ + 0x30;
              uVar22 = uVar24;
              if ((int)uVar20 < *(int *)(lVar29 + 0x20)) {
                uVar22 = ~uVar20 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(longlong *)(lVar29 + 0x18) != 0) {
                lVar29 = *(longlong *)(lVar29 + 0x18);
              }
              plVar27 = *(longlong **)(lVar18 + 0x10 + lVar29);
              if (plVar27 == (longlong *)0x0) {
                plVar27 = (longlong *)this->_padding_;
              }
              plStack_790 = plVar27;
              iVar23 = (**(code **)(this->_padding_ + 600))(this);
              uStack_7c0 = CONCAT44(uStack_7c0._4_4_,iVar23);
              (**(code **)((longlong)*param_1 + 0x10))(param_1,(iStack_7cc + 1) * iVar23);
              uVar26 = 0;
              if (0 < iVar23) {
                do {
                  pFStack_518 = (FMeshBatchElement *)0x0;
                  uStack_4dc = uStack_4dc & 0xf081803c | 0x81803c;
                  uStack_50c = 1;
                  uStack_4f8 = 0;
                  uStack_508 = 0;
                  uStack_500 = 0;
                  uStack_4f0 = 0xffffffffffffffff;
                  uStack_4e8 = 0;
                  uStack_4e4 = 0xffffffff;
                  sStack_4e0 = 0;
                  uStack_4de = 0xff;
                  uStack_4d8 = 0xffff;
                  iStack_510 = 1;
                  DefaultConstructItems<FMeshBatchElement,int>(&FStack_5b0,1);
                  cVar9 = (**(code **)(this->_padding_ + 0x268))(this,uStack_7d8,uVar26);
                  iVar21 = iStack_510;
                  if (cVar9 != '\0') {
                    if (0 < iStack_7cc) {
                      FStack_310.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                      pFVar16 = &FStack_5b0;
                      if (pFStack_518 != (FMeshBatchElement *)0x0) {
                        pFVar16 = pFStack_518;
                      }
                      iStack_270 = iStack_510;
                      if (iStack_510 == 0) {
                        iStack_26c = 1;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                  (0x98,8,iStack_510,0,&FStack_310,iStack_510,&iStack_26c);
                        FVar15 = (ForElementType<FMeshBatchElement>)&FStack_310;
                        if (FStack_310.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                          FVar15 = FStack_310.SecondaryData;
                        }
                        ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                  ((void *)FVar15,pFVar16,iVar21);
                      }
                      pbVar19 = (byte *)this->_padding_;
                      iVar23 = (int)this->_padding_;
                      uStack_268 = uStack_508;
                      uStack_260 = uStack_500;
                      pbVar1 = pbVar19 + iVar23;
                      uStack_258 = uStack_4f8;
                      uStack_250 = (undefined4)uStack_4f0;
                      uStack_24c = uStack_4f0._4_4_;
                      uStack_244 = uStack_4e4;
                      sStack_240 = sStack_4e0;
                      uStack_23e = uStack_4de;
                      uStack_238 = (undefined1)uStack_4d8;
                      uStack_237 = uStack_4d8._1_1_;
                      uStack_248 = uStack_4e8;
                      uStack_23c = uStack_4dc & 0xff9ffc3 | uStack_23c & 0xf0040000 | 0x40000;
                      while( true ) {
                        if ((int)this->_padding_ != iVar23) {
                          auStack_7ce[0] = 0;
                          `TCheckedPointerIterator<enum_ERuntimeVirtualTextureMaterialType,int,0>::
                          operator!='::__l2::<lambda_1>::operator()(auStack_7ce);
                        }
                        if (pbVar19 == pbVar1) break;
                        uStack_23c = (*pbVar19 & 7) << 0x13 | uStack_23c & 0xffc7ffff;
                        (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_310,fVar30);
                        pbVar19 = pbVar19 + 1;
                      }
                      FVar15 = (ForElementType<FMeshBatchElement>)&FStack_310;
                      if (FStack_310.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FVar15 = FStack_310.SecondaryData;
                      }
                      DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar15,iStack_270);
                      plVar27 = plStack_790;
                      if (FStack_310.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FMemory::Free((void *)FStack_310.SecondaryData);
                        plVar27 = plStack_790;
                      }
                    }
                    iVar23 = iStack_510;
                    FStack_230.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                    pFVar16 = &FStack_5b0;
                    if (pFStack_518 != (FMeshBatchElement *)0x0) {
                      pFVar16 = pFStack_518;
                    }
                    iStack_190 = iStack_510;
                    if (iStack_510 == 0) {
                      iStack_18c = 1;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                (0x98,8,iStack_510,0,&FStack_230,iStack_510,&iStack_18c);
                      FVar15 = (ForElementType<FMeshBatchElement>)&FStack_230;
                      if (FStack_230.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FVar15 = FStack_230.SecondaryData;
                      }
                      ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                ((void *)FVar15,pFVar16,iVar23);
                    }
                    uStack_188 = uStack_508;
                    uStack_180 = uStack_500;
                    uStack_178 = uStack_4f8;
                    uStack_170 = (undefined4)uStack_4f0;
                    uStack_16c = uStack_4f0._4_4_;
                    uStack_164 = uStack_4e4;
                    sStack_160 = sStack_4e0;
                    uStack_15e = uStack_4de;
                    uStack_158 = (undefined1)uStack_4d8;
                    uStack_157 = uStack_4d8._1_1_;
                    uStack_168 = uStack_4e8;
                    uVar22 = uVar24;
                    if (bStack_7d4 == 0) {
                      uVar22 = 0x20;
                    }
                    uVar20 = uVar24;
                    if (bStack_7d4 == 0) {
                      uVar20 = 0x10;
                    }
                    uVar28 = uVar24;
                    if (bStack_7d1 == 0) {
                      uVar28 = 4;
                    }
                    uStack_15c = (uStack_4dc & 0xfffffff | uStack_15c & 0xf0000000) &
                                 (uVar22 | 0xffffffdf) & (uVar20 | 0xffffffef) &
                                 (uVar28 | 0xfffffffb);
                    (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_230,fVar30);
                    FVar15 = (ForElementType<FMeshBatchElement>)&FStack_230;
                    if (FStack_230.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                      FVar15 = FStack_230.SecondaryData;
                    }
                    DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar15,iStack_190);
                    if (FStack_230.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                      FMemory::Free((void *)FStack_230.SecondaryData);
                    }
                    iVar23 = iStack_510;
                    if ((plVar27 != (longlong *)0x0) &&
                       (0.0 < *(float *)&this->_padding_ || *(float *)&this->_padding_ == 0.0)) {
                      FStack_690.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                      pFVar16 = &FStack_5b0;
                      if (pFStack_518 != (FMeshBatchElement *)0x0) {
                        pFVar16 = pFStack_518;
                      }
                      iStack_5f0 = iStack_510;
                      if (iStack_510 == 0) {
                        iStack_5ec = 1;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                  (0x98,8,iStack_510,0,&FStack_690,iStack_510,&iStack_5ec);
                        FVar15 = (ForElementType<FMeshBatchElement>)&FStack_690;
                        if (FStack_690.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                          FVar15 = FStack_690.SecondaryData;
                        }
                        ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                  ((void *)FVar15,pFVar16,iVar23);
                      }
                      uStack_5e8 = uStack_508;
                      uStack_5e0 = uStack_500;
                      uStack_5d8 = uStack_4f8;
                      uStack_5d0 = (undefined4)uStack_4f0;
                      uStack_5cc = uStack_4f0._4_4_;
                      uStack_5c4 = uStack_4e4;
                      sStack_5c0 = sStack_4e0;
                      uStack_5be = uStack_4de;
                      uStack_5b8 = (undefined1)uStack_4d8;
                      uStack_5b7 = uStack_4d8._1_1_;
                      uStack_5c8 = uStack_4e8;
                      uStack_5bc = uStack_4dc & 0xfbefffb | uStack_5bc & 0xf0400000 | 0x400000;
                      uStack_5e0 = (**(code **)(*plVar27 + 0x310))(plVar27);
                      sStack_5c0 = sStack_5c0 + *(short *)(lStack_7b8 + 0x38);
                      (**(code **)((longlong)*param_1 + 0x18))
                                (param_1,&FStack_690,(int)this->_padding_);
                      FVar15 = (ForElementType<FMeshBatchElement>)&FStack_690;
                      if (FStack_690.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FVar15 = FStack_690.SecondaryData;
                      }
                      DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar15,iStack_5f0);
                      if (FStack_690.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                        FMemory::Free((void *)FStack_690.SecondaryData);
                      }
                    }
                    uVar25 = uStack_7c8 & 0xffffffff;
                    iVar23 = (int)uStack_7c0;
                  }
                  uVar20 = (uint)uVar25;
                  pFVar16 = &FStack_5b0;
                  if (pFStack_518 != (FMeshBatchElement *)0x0) {
                    pFVar16 = pFStack_518;
                  }
                  DestructItems<FMeshBatchElement,int>(pFVar16,iStack_510);
                  if (pFStack_518 != (FMeshBatchElement *)0x0) {
                    FMemory::Free(pFStack_518);
                  }
                  uVar22 = (int)uVar26 + 1;
                  uVar26 = (ulonglong)uVar22;
                } while ((int)uVar22 < iVar23);
              }
              uVar20 = uVar20 + 1;
              uVar25 = (ulonglong)uVar20;
              lStack_7a0 = lStack_7a0 + 0x18;
              uVar26 = (ulonglong)uStack_7d8;
              uStack_7c8 = CONCAT44(uStack_7c8._4_4_,uVar20);
              uVar22 = uStack_7d8;
            } while ((int)uVar20 < *(int *)(lStack_7b8 + 0x38));
          }
          uStack_7d8 = uVar22 + 1;
          uVar25 = uStack_7a8 + 1;
          uVar26 = (ulonglong)uStack_7d8;
        } while ((longlong)uVar25 < lStack_778);
      }
    }
    else {
      if (iVar21 < iVar23) {
        iVar23 = iVar21;
      }
      iVar21 = uStack_7d8 + 1;
      if ((int)(uStack_7d8 + 1) < iVar23) {
        iVar21 = iVar23;
      }
      plVar27 = (longlong *)this->_padding_;
      uVar25 = 0;
      uVar20 = iVar21 - 1;
      uVar22 = ~uVar20 >> 0x1f;
      uStack_7c8 = CONCAT44(uStack_7c8._4_4_,uVar22);
      uVar24 = 0;
      if ((int)uVar20 < (int)plVar27[1]) {
        uVar24 = uVar22;
      }
      if (uVar24 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = (uint)uStack_7c8;
      }
      uVar6 = __real_7f7fffff;
      uStack_7c0 = uStack_7c0 & 0xffffffff00000000;
      lStack_7b8 = *(longlong *)(*plVar27 + (longlong)(int)uVar20 * 8);
      if (0 < *(int *)(lStack_7b8 + 0x38)) {
        lStack_7a0 = (longlong)(int)uVar20 << 7;
        uStack_7a8 = 0;
        do {
          lVar18 = lStack_7a0;
          uVar26 = uStack_7a8;
          uVar28 = (uint)uVar25;
          uVar24 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar24 = uVar22;
          }
          if ((uVar24 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar18 = lVar18 + this->_padding_ + 0x30;
          uVar22 = 0;
          if ((int)uVar28 < *(int *)(lVar18 + 0x20)) {
            uVar22 = ~uVar28 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(longlong *)(lVar18 + 0x18) != 0) {
            lVar18 = *(longlong *)(lVar18 + 0x18);
          }
          plVar27 = *(longlong **)(lVar18 + 0x10 + uVar26);
          if (plVar27 == (longlong *)0x0) {
            plVar27 = (longlong *)this->_padding_;
          }
          TVar12 = (**(code **)(this->_padding_ + 600))(this);
          TStack_7ac = TVar12;
          (**(code **)((longlong)*param_1 + 0x10))(param_1,(iStack_7cc + 1) * TVar12);
          iVar23 = 0;
          if (0 < (int)TVar12) {
            do {
              uStack_42c = 1;
              pFStack_438 = (FMeshBatchElement *)0x0;
              uStack_3fc = uStack_3fc & 0xf081803c | 0x81803c;
              uStack_418 = 0;
              uStack_410 = 0xffffffffffffffff;
              uStack_428 = 0;
              uStack_420 = 0;
              uStack_408 = 0;
              uStack_404 = 0xffffffff;
              sStack_400 = 0;
              uStack_3fe = 0xff;
              uStack_3f8 = 0xffff;
              iStack_430 = 1;
              DefaultConstructItems<FMeshBatchElement,int>(&FStack_4d0,1);
              cVar9 = (**(code **)(this->_padding_ + 0x268))(this,uVar20,iVar23);
              iVar21 = iStack_430;
              if (cVar9 != '\0') {
                if (0 < iStack_7cc) {
                  FStack_3f0.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                  pFVar16 = &FStack_4d0;
                  if (pFStack_438 != (FMeshBatchElement *)0x0) {
                    pFVar16 = pFStack_438;
                  }
                  iStack_350 = iStack_430;
                  if (iStack_430 == 0) {
                    iStack_34c = 1;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                              (0x98,8,iStack_430,0,&FStack_3f0,iStack_430,&iStack_34c);
                    FVar15 = (ForElementType<FMeshBatchElement>)&FStack_3f0;
                    if (FStack_3f0.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                      FVar15 = FStack_3f0.SecondaryData;
                    }
                    ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                              ((void *)FVar15,pFVar16,iVar21);
                  }
                  pbVar19 = (byte *)this->_padding_;
                  iVar21 = (int)this->_padding_;
                  uStack_348 = uStack_428;
                  uStack_340 = uStack_420;
                  pbVar1 = pbVar19 + iVar21;
                  uStack_338 = uStack_418;
                  uStack_330 = (undefined4)uStack_410;
                  uStack_32c = uStack_410._4_4_;
                  uStack_324 = uStack_404;
                  sStack_320 = sStack_400;
                  uStack_31e = uStack_3fe;
                  uStack_318 = (undefined1)uStack_3f8;
                  uStack_317 = uStack_3f8._1_1_;
                  uStack_328 = uStack_408;
                  uStack_31c = uStack_31c & 0xf0040000 | uStack_3fc & 0xff9ffc3 | 0x40000;
                  while( true ) {
                    if ((int)this->_padding_ != iVar21) {
                      uStack_7d0 = 0;
                      `TCheckedPointerIterator<enum_ERuntimeVirtualTextureMaterialType,int,0>::
                      operator!='::__l2::<lambda_1>::operator()(&uStack_7d0);
                    }
                    if (pbVar19 == pbVar1) break;
                    uStack_31c = (*pbVar19 & 7) << 0x13 | uStack_31c & 0xffc7ffff;
                    (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_3f0,uVar6);
                    pbVar19 = pbVar19 + 1;
                  }
                  FVar15 = (ForElementType<FMeshBatchElement>)&FStack_3f0;
                  if (FStack_3f0.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                    FVar15 = FStack_3f0.SecondaryData;
                  }
                  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar15,iStack_350);
                  if (FStack_3f0.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                    FMemory::Free((void *)FStack_3f0.SecondaryData);
                  }
                  uVar25 = uStack_7c0 & 0xffffffff;
                }
                (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_4d0,uVar6);
                iVar21 = iStack_430;
                if (plVar27 != (longlong *)0x0) {
                  FStack_770.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
                  pFVar16 = &FStack_4d0;
                  if (pFStack_438 != (FMeshBatchElement *)0x0) {
                    pFVar16 = pFStack_438;
                  }
                  iStack_6d0 = iStack_430;
                  if (iStack_430 == 0) {
                    iStack_6cc = 1;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                              (0x98,8,iStack_430,0,&FStack_770,iStack_430,&iStack_6cc);
                    FVar15 = (ForElementType<FMeshBatchElement>)&FStack_770;
                    if (FStack_770.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                      FVar15 = FStack_770.SecondaryData;
                    }
                    ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                              ((void *)FVar15,pFVar16,iVar21);
                  }
                  uStack_6c8 = uStack_428;
                  uStack_6c0 = uStack_420;
                  uStack_6b8 = uStack_418;
                  uStack_6b0 = (undefined4)uStack_410;
                  uStack_6ac = uStack_410._4_4_;
                  uStack_6a4 = uStack_404;
                  sStack_6a0 = sStack_400;
                  uStack_69e = uStack_3fe;
                  uStack_698 = (undefined1)uStack_3f8;
                  uStack_697 = uStack_3f8._1_1_;
                  uStack_6a8 = uStack_408;
                  uStack_69c = uStack_69c & 0xf0400000 | uStack_3fc & 0xfbefffb | 0x400000;
                  uStack_6c0 = (**(code **)(*plVar27 + 0x310))(plVar27);
                  sStack_6a0 = sStack_6a0 + *(short *)(lStack_7b8 + 0x38);
                  (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_770,uVar6);
                  FVar15 = (ForElementType<FMeshBatchElement>)&FStack_770;
                  if (FStack_770.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                    FVar15 = FStack_770.SecondaryData;
                  }
                  DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar15,iStack_6d0);
                  if (FStack_770.SecondaryData != (ForElementType<FMeshBatchElement>)0x0) {
                    FMemory::Free((void *)FStack_770.SecondaryData);
                  }
                }
              }
              uVar28 = (uint)uVar25;
              pFVar16 = &FStack_4d0;
              if (pFStack_438 != (FMeshBatchElement *)0x0) {
                pFVar16 = pFStack_438;
              }
              DestructItems<FMeshBatchElement,int>(pFVar16,iStack_430);
              if (pFStack_438 != (FMeshBatchElement *)0x0) {
                FMemory::Free(pFStack_438);
              }
              iVar23 = iVar23 + 1;
            } while (iVar23 < (int)TStack_7ac);
          }
          uVar28 = uVar28 + 1;
          uVar25 = (ulonglong)uVar28;
          uStack_7a8 = uStack_7a8 + 0x18;
          uStack_7c0 = CONCAT44(uStack_7c0._4_4_,uVar28);
          uVar22 = (uint)uStack_7c8;
        } while ((int)uVar28 < *(int *)(lStack_7b8 + 0x38));
      }
    }
  }
  return;
}

// FillDynamicMeshElements @ 147cf4340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FHierarchicalStaticMeshSceneProxy::FillDynamicMeshElements
          (FHierarchicalStaticMeshSceneProxy *this,FSceneView *param_1,
          FMeshElementCollector *param_2,FFoliageElementParams *param_3,
          FFoliageRenderInstanceParams *param_4)

{
  int *piVar1;
  bool bVar2;
  FGenericStaticFeatureLevel FVar3;
  longlong *plVar4;
  FName FVar5;
  FRHIResource *pFVar6;
  FRHIResource *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  TConsoleVariableData<int> *pTVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  bool bVar17;
  FStaticShaderPlatform FVar18;
  int iVar19;
  ESceneDepthPriorityGroup EVar20;
  EUniformBufferUsage EVar21;
  uint uVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_FoliageBatchTime> FVar24;
  longlong lVar25;
  FThreadSafeStaticStat<FStat_STAT_FoliageMeshBatches> FVar26;
  FThreadStats *pFVar27;
  FThreadStatsPool *pFVar28;
  longlong lVar29;
  FMaterial *pFVar30;
  undefined8 uVar31;
  FThreadSafeStaticStat<FStat_STAT_FoliageInstances> FVar32;
  FThreadSafeStaticStat<FStat_STAT_FoliageRuns> FVar33;
  FThreadSafeStaticStat<FStat_STAT_FoliageTriangles> FVar34;
  FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles> FVar35;
  uint uVar36;
  longlong lVar37;
  void *pvVar38;
  AActor *pAVar39;
  ForElementType<FMeshBatchElement> FVar40;
  ForElementType<FMeshBatchElement> FVar41;
  longlong lVar42;
  FNameEntryId FVar43;
  EUniformBufferUsage EVar44;
  ulonglong uVar45;
  ForElementType<FMeshBatchElement> FVar46;
  int iVar47;
  ForElementType<FMeshBatchElement> FVar48;
  FName FVar49;
  uint uVar50;
  uchar auVar51 [8];
  uint uVar52;
  TUniformBufferRef<FViewUniformShaderParameters> TVar53;
  ulonglong uVar54;
  uchar auVar55 [8];
  EUniformBufferUsage local_288;
  uint local_280;
  int local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  int local_260;
  longlong local_250;
  longlong local_240;
  undefined1 local_238 [40];
  undefined1 local_210 [24];
  uint local_1f8;
  uint uStack_1f4;
  uint local_1f0;
  uint uStack_1ec;
  uint local_1e8;
  uint uStack_1e4;
  uchar local_1e0 [8];
  uint local_1d8;
  uint uStack_1d4;
  FName local_1d0;
  FName local_1c8;
  longlong local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  longlong local_190;
  FName local_188;
  FName local_180;
  FStatMessage local_178;
  FStatMessage local_168;
  FStatMessage local_158;
  FStatMessage local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  void *local_d0 [2];
  FString local_c0;
  void *local_b0 [2];
  FString local_a0;
  AActor *local_90 [2];
  FString local_80;
  AActor *local_70 [6];
  
  FVar24 = StatPtr_STAT_FoliageBatchTime;
  if (StatPtr_STAT_FoliageBatchTime == (FThreadSafeStaticStat<FStat_STAT_FoliageBatchTime>)0x0) {
    pFVar23 = ::FName::FName(&local_118,"STAT_FoliageBatchTime");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_FoliageBatchTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageBatchTime,*pFVar23,
                        L"Batch Time","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar49 = *(FName *)FVar24;
  bVar9 = false;
  bVar10 = false;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  bVar13 = false;
  bVar14 = false;
  FVar43 = FVar49.ComparisonIndex.Value;
  uVar36 = FVar49.Number;
  if ((FVar43.Value != 0) || (uVar36 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_210._0_4_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)local_210,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_210._16_4_ = FVar43.Value;
        local_210._20_4_ = uVar36;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)(local_210 + 0x10),(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                   ,0x4d0);
        bVar9 = true;
        bVar10 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_238._0_4_ = FVar43.Value;
      local_238._4_4_ = uVar36;
      local_1d0 = FVar49;
      FThreadStats::AddMessage(FVar49,CycleScopeStart);
      bVar13 = true;
      goto LAB_147cf44ae;
    }
  }
  bVar10 = bVar14;
  bVar9 = bVar13;
  bVar13 = false;
  local_1d0 = local_1c8;
  FVar49 = local_1c8;
LAB_147cf44ae:
  pTVar12 = CVarOnlyLOD.Ref;
  EVar44 = (int)this->_padding_ - UniformBuffer_SingleFrame;
  local_240 = 0;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (pTVar12->ShadowedValue[1] < (int)EVar44) {
    EVar44 = pTVar12->ShadowedValue[1];
  }
  bVar15 = FStaticMeshSceneProxy::GetCurrentFirstLODIdx_Internal((FStaticMeshSceneProxy *)this);
  EVar21 = EVar44;
  if ((int)EVar44 < 0) {
    EVar21 = UniformBuffer_SingleDraw;
  }
  local_288 = (uint)bVar15;
  if ((int)(uint)bVar15 < (int)EVar21) {
    local_288 = EVar21;
  }
  if ((int)EVar44 < 0) {
    iVar47 = (int)this->_padding_;
  }
  else {
    iVar47 = EVar44 + UniformBuffer_SingleFrame;
  }
  FVar3.FeatureLevel = ((FSceneInterface *)this->_padding_)->FeatureLevel;
  FVar18.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  bVar14 = UseGPUScene(FVar18,FVar3);
  fVar11 = __real_4e6c08ce;
  uVar45 = (ulonglong)(int)local_288;
  if ((int)local_288 < iVar47) {
    local_190 = (longlong)iVar47;
    uVar54 = uVar45;
    do {
      bVar2 = param_3->bBlendLODs;
      lVar25 = 0x10;
      if (bVar2 == false) {
        lVar25 = 0x90;
      }
      TVar53 = (TUniformBufferRef<FViewUniformShaderParameters>)
               ((longlong)
                &param_4->MultipleLODRuns[(longlong)(int)(EUniformBufferUsage)uVar45 + -1].
                 AllocatorInstance.Data + lVar25);
      EVar44 = (EUniformBufferUsage)uVar45;
      local_238._24_8_ = TVar53;
      if (*(int *)((longlong)TVar53 + 8) != 0) {
        local_238._8_4_ = ~local_288 >> 0x1f;
        plVar4 = (longlong *)this->_padding_;
        uVar36 = 0;
        if ((int)local_288 < (int)plVar4[1]) {
          uVar36 = local_238._8_4_;
        }
        if ((uVar36 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_270 = 0;
        local_1b8 = *(longlong *)(*plVar4 + uVar54 * 8);
        local_250 = 0;
        iVar47 = *(int *)(local_1b8 + 0x38);
        EVar44 = local_288;
        if (0 < param_3->NumSelectionGroups) {
          do {
            local_268 = (uint)(bVar2 != false);
            FInstancedStaticMeshSceneProxy::CreateLooseUniformBuffer
                      ((FInstancedStaticMeshSceneProxy *)this,(FSceneView *)local_238,
                       (FInstancingUserData *)param_1,(uint)param_3->PassUserData[local_250],
                       (uint)(bVar2 != false),local_288);
            lVar25 = local_1b8;
            local_280 = 0;
            local_210._8_8_ = 0.0;
            if (0 < iVar47) {
              lVar42 = local_1b8 + 0x10;
              do {
                uVar36 = 0;
                if ((int)local_280 < *(int *)(lVar25 + 0x38)) {
                  uVar36 = ~local_280 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                lVar29 = *(longlong *)(lVar25 + 0x30);
                lVar37 = lVar42;
                if (lVar29 != 0) {
                  lVar37 = lVar29;
                }
                if (*(int *)(local_210._8_8_ * 0x1c + 8 + lVar37) != 0) {
                  if (bVar14) {
                    iVar19 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                             ::Add(&param_2->MeshBatchStorage,1);
                    uVar36 = iVar19 / 0x49;
                    uVar52 = 0;
                    if ((int)uVar36 < (param_2->MeshBatchStorage).Chunks.Array.ArrayNum) {
                      uVar52 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar52 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    FVar48 = (ForElementType<FMeshBatchElement>)
                             ((ulonglong)(uint)(iVar19 % 0x49) * 0xe0 +
                             (longlong)
                             (param_2->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data
                             [(int)uVar36]);
                    if (FThreadStats::bPrimaryEnable != false) {
                      FVar26 = StatPtr_STAT_FoliageMeshBatches;
                      if (StatPtr_STAT_FoliageMeshBatches ==
                          (FThreadSafeStaticStat<FStat_STAT_FoliageMeshBatches>)0x0) {
                        pFVar23 = ::FName::FName(&local_110,"STAT_FoliageMeshBatches");
                        FVar26 = (FThreadSafeStaticStat<FStat_STAT_FoliageMeshBatches>)
                                 FThreadSafeStaticStatBase::DoSetup
                                           ((FThreadSafeStaticStatBase *)
                                            &StatPtr_STAT_FoliageMeshBatches,*pFVar23,
                                            L"Mesh Batches","STATGROUP_Foliage","STATCAT_Advanced",
                                            L"Foliage",true,true,ST_int64,false,false,MCR_Invalid);
                      }
                      FVar5 = *(FName *)FVar26;
                      FVar43 = FVar5.ComparisonIndex.Value;
                      uVar36 = FVar5.Number;
                      local_1f8 = FVar43.Value;
                      uStack_1f4 = uVar36;
                      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
                         && (FThreadStats::TlsSlot != 0xffffffff)) {
                        pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
                        if (pFVar27 == (FThreadStats *)0x0) {
                          pFVar28 = FThreadStatsPool::Get();
                          pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
                        }
                        local_178.NameAndInfo.Number = uVar36 & 0xffffafff | 0xa000;
                        local_178.StatData.Pad[0] = '\x01';
                        local_178.StatData.Pad[1] = '\0';
                        local_178.StatData.Pad[2] = '\0';
                        local_178.StatData.Pad[3] = '\0';
                        local_178.StatData.Pad[4] = '\0';
                        local_178.StatData.Pad[5] = '\0';
                        local_178.StatData.Pad[6] = '\0';
                        local_178.StatData.Pad[7] = '\0';
                        local_1b0 = FVar5;
                        local_178.NameAndInfo.Index.Value = FVar43.Value;
                        FThreadStats::AddStatMessage(pFVar27,&local_178);
                        FStatsTrace::Add(&local_1b0,1);
                        if (pFVar27->ScopeCount == 0) {
                          FThreadStats::Flush(pFVar27,false,false);
                        }
                        else if (FThreadStats::bIsRawStatsActive != false) {
                          FThreadStats::FlushRawStats(pFVar27,false,false);
                        }
                      }
                    }
                    bVar16 = param_3->BatchRenderSelection[local_250];
                    EVar20 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)this,param_3->View);
                    bVar16 = FStaticMeshSceneProxy::GetMeshElement
                                       ((FStaticMeshSceneProxy *)this,local_288,0,local_280,
                                        (uchar)EVar20,bVar16,true,(FMeshBatch *)FVar48);
                    if (bVar16) {
                      *(uint *)((longlong)FVar48 + 0xd4) =
                           *(uint *)((longlong)FVar48 + 0xd4) | 0x2000;
                      uVar36 = ((uint)param_3->BatchRenderSelection[local_250] << 0xf ^
                               *(uint *)((longlong)FVar48 + 0xd4)) & 0x8000 ^
                               *(uint *)((longlong)FVar48 + 0xd4);
                      *(uint *)((longlong)FVar48 + 0xd4) = uVar36;
                      uVar36 = ((uint)param_3->BatchRenderSelection[local_250] << 0xe ^ uVar36) &
                               0x4000 ^ uVar36;
                      *(uint *)((longlong)FVar48 + 0xd4) = uVar36;
                      *(uint *)((longlong)FVar48 + 0xd4) =
                           ((uint)*(byte *)((longlong)&this->_padding_ + 5) * 2 ^ uVar36) & 0x20 ^
                           uVar36;
                      uVar36 = 0;
                      if ((int)local_288 < (int)this->_padding_) {
                        uVar36 = local_238._8_4_;
                      }
                      if ((uVar36 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      *(undefined8 *)((longlong)FVar48 + 0xa8) =
                           *(undefined8 *)(this->_padding_ + uVar54 * 8);
                      if ((*(int *)((longlong)FVar48 + 0xa0) < 1) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      FVar46 = FVar48;
                      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar48 + 0x98) !=
                          (ForElementType<FMeshBatchElement>)0x0) {
                        FVar46 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar48 + 0x98);
                      }
                      *(FInstancingUserData **)((longlong)FVar46 + 0x38) =
                           param_3->PassUserData[local_250];
                      *(undefined4 *)((longlong)FVar46 + 0x78) = 0x3f800000;
                      *(undefined4 *)((longlong)FVar46 + 0x74) = 0;
                      *(EUniformBufferUsage *)((longlong)FVar46 + 0x7c) =
                           *(EUniformBufferUsage *)((longlong)FVar46 + 0x7c) & 0xfffffe00 ^
                           local_288 & 0xf | local_268 << 4;
                      pFVar7 = (FRHIResource *)CONCAT44(local_238._4_4_,local_238._0_4_);
                      *(longlong *)FVar46 = this->_padding_;
                      pFVar6 = *(FRHIResource **)((longlong)FVar46 + 0x10);
                      if (pFVar6 != pFVar7) {
                        *(FRHIResource **)((longlong)FVar46 + 0x10) = pFVar7;
                        if (pFVar7 != (FRHIResource *)0x0) {
                          FRHIResource::AddRef(pFVar7);
                        }
                        if (pFVar6 != (FRHIResource *)0x0) {
                          FRHIResource::Release(pFVar6);
                        }
                      }
                      *(uint *)((longlong)FVar46 + 0x7c) =
                           *(uint *)((longlong)FVar46 + 0x7c) | 0x800;
                      lVar29 = 0x130;
                      if (bVar2 == false) {
                        lVar29 = 0x110;
                      }
                      local_240 = local_240 +
                                  (ulonglong)*(uint *)((longlong)FVar46 + 0x5c) *
                                  (longlong)
                                  *(int *)((longlong)
                                           &((FFoliageRenderInstanceParams *)
                                            (param_4->MultipleLODRuns + -1))->_padding_ +
                                          uVar54 * 4 + lVar29);
                      if (GFrameNumberRenderThread_CaptureFoliageRuns == GFrameNumberRenderThread) {
                        if (param_3->FinalCullDistance <= fVar11) {
                          if (3 < (byte)LogStaticMesh._0_1_) {
                            pFVar30 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                                                (*(FMaterialRenderProxy **)((longlong)FVar48 + 0xb0)
                                                 ,param_3->FeatureLevel);
                            (**(code **)(pFVar30->_padding_ + 0x390))(pFVar30,local_b0);
                            UObjectBaseUtility::GetPathName
                                      ((UObjectBaseUtility *)this->_padding_,&local_c0,
                                       (UObject *)0x0);
                            UE::Logging::Private::BasicLog<4>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
                            pvVar38 = local_b0[0];
                            if (local_c0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
                              pvVar38 = local_b0[0];
                            }
                            goto LAB_147cf4d3d;
                          }
                        }
                        else if (3 < (byte)LogStaticMesh._0_1_) {
                          pFVar30 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                                              (*(FMaterialRenderProxy **)((longlong)FVar48 + 0xb0),
                                               param_3->FeatureLevel);
                          (**(code **)(pFVar30->_padding_ + 0x390))(pFVar30,local_d0);
                          UObjectBaseUtility::GetPathName
                                    ((UObjectBaseUtility *)this->_padding_,&local_e0,(UObject *)0x0)
                          ;
                          UE::Logging::Private::BasicLog<4>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
                          pvVar38 = local_d0[0];
                          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                             ) {
                            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                            pvVar38 = local_d0[0];
                          }
LAB_147cf4d3d:
                          if (pvVar38 != (void *)0x0) {
                            FMemory::Free(pvVar38);
                          }
                        }
                      }
                      *(undefined4 *)((longlong)FVar46 + 0x70) = 0;
                      *(int *)((longlong)FVar46 + 0x60) = *(int *)((longlong)TVar53 + 8) / 2;
                      if ((*(int *)((longlong)TVar53 + 8) < 1) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      lVar29 = *(longlong *)TVar53;
                      *(uint *)((longlong)FVar46 + 0x7c) =
                           *(uint *)((longlong)FVar46 + 0x7c) | 0x400;
                      *(longlong *)((longlong)FVar46 + 0x30) = lVar29;
                      pTVar12 = CVarMaxTrianglesToRender.Ref;
                      bVar16 = IsInParallelRenderingThread();
                      if ((!bVar16) &&
                         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                              ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      if ((local_240 < pTVar12->ShadowedValue[1]) &&
                         (FMeshElementCollector::AddMesh
                                    (param_2,param_3->ViewIndex,(FMeshBatch *)FVar48),
                         this->_padding_ != 0)) {
                        iVar19 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                 ::Add(&param_2->MeshBatchStorage,1);
                        uVar36 = iVar19 / 0x49;
                        uVar52 = 0;
                        if ((int)uVar36 < (param_2->MeshBatchStorage).Chunks.Array.ArrayNum) {
                          uVar52 = ~uVar36 >> 0x1f;
                        }
                        if ((uVar52 == 0) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar16)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        FVar46 = (ForElementType<FMeshBatchElement>)
                                 ((longlong)
                                  (param_2->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data
                                  [(int)uVar36] + (ulonglong)(uint)(iVar19 % 0x49) * 0xe0);
                        if (FVar46 != FVar48) {
                          FVar40 = FVar46;
                          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar46 + 0x98) !=
                              (ForElementType<FMeshBatchElement>)0x0) {
                            FVar40 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar46 + 0x98)
                            ;
                          }
                          DestructItems<FMeshBatchElement,int>
                                    ((FMeshBatchElement *)FVar40,*(int *)((longlong)FVar46 + 0xa0));
                          piVar1 = (int *)((longlong)FVar46 + 0xa4);
                          iVar19 = *(int *)((longlong)FVar48 + 0xa0);
                          FVar40 = FVar48;
                          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar48 + 0x98) !=
                              (ForElementType<FMeshBatchElement>)0x0) {
                            FVar40 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar48 + 0x98)
                            ;
                          }
                          *(int *)((longlong)FVar46 + 0xa0) = iVar19;
                          if ((iVar19 == 0) && (*piVar1 == 0)) {
                            *piVar1 = 1;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                      (0x98,8,iVar19,*piVar1,
                                       (ForElementType<FMeshBatchElement> *)FVar46,iVar19,piVar1);
                            FVar41 = FVar46;
                            if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar46 + 0x98) !=
                                (ForElementType<FMeshBatchElement>)0x0) {
                              FVar41 = *(ForElementType<FMeshBatchElement> *)
                                        ((longlong)FVar46 + 0x98);
                            }
                            ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                      ((void *)FVar41,(FMeshBatchElement *)FVar40,iVar19);
                          }
                        }
                        *(undefined8 *)((longlong)FVar46 + 0xa8) =
                             *(undefined8 *)((longlong)FVar48 + 0xa8);
                        *(undefined8 *)((longlong)FVar46 + 0xb0) =
                             *(undefined8 *)((longlong)FVar48 + 0xb0);
                        *(undefined8 *)((longlong)FVar46 + 0xb8) =
                             *(undefined8 *)((longlong)FVar48 + 0xb8);
                        *(undefined4 *)((longlong)FVar46 + 0xc0) =
                             *(undefined4 *)((longlong)FVar48 + 0xc0);
                        *(undefined4 *)((longlong)FVar46 + 0xc4) =
                             *(undefined4 *)((longlong)FVar48 + 0xc4);
                        *(undefined4 *)((longlong)FVar46 + 200) =
                             *(undefined4 *)((longlong)FVar48 + 200);
                        *(undefined4 *)((longlong)FVar46 + 0xcc) =
                             *(undefined4 *)((longlong)FVar48 + 0xcc);
                        *(undefined2 *)((longlong)FVar46 + 0xd0) =
                             *(undefined2 *)((longlong)FVar48 + 0xd0);
                        *(undefined1 *)((longlong)FVar46 + 0xd2) =
                             *(undefined1 *)((longlong)FVar48 + 0xd2);
                        uVar36 = (*(uint *)((longlong)FVar46 + 0xd4) ^
                                 *(uint *)((longlong)FVar48 + 0xd4)) & 1 ^
                                 *(uint *)((longlong)FVar46 + 0xd4);
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 2 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 4 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 8 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x10 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x20 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x40 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x380 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x1c00 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x2000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x4000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x8000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x10000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x20000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x40000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x380000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x400000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x800000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x1000000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x2000000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x4000000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x8000000 ^ uVar36;
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                        *(undefined1 *)((longlong)FVar46 + 0xd8) =
                             *(undefined1 *)((longlong)FVar48 + 0xd8);
                        *(undefined1 *)((longlong)FVar46 + 0xd9) =
                             *(undefined1 *)((longlong)FVar48 + 0xd9);
                        *(uint *)((longlong)FVar46 + 0xd4) = uVar36 & 0xfffefffb | 0x400000;
                        uVar31 = (**(code **)(*(longlong *)this->_padding_ + 0x310))();
                        *(undefined8 *)((longlong)FVar46 + 0xb0) = uVar31;
                        *(short *)((longlong)FVar46 + 0xd0) =
                             *(short *)((longlong)FVar46 + 0xd0) + (short)iVar47;
                        FMeshElementCollector::AddMesh
                                  (param_2,param_3->ViewIndex,(FMeshBatch *)FVar46);
                      }
                    }
                  }
                  else {
                    local_260 = 1;
                    lVar29 = 0x130;
                    if (bVar2 == false) {
                      lVar29 = 0x110;
                    }
                    local_26c = 0;
                    local_238._32_8_ = (FConvexVolume *)0x0;
                    local_238._12_4_ =
                         *(int *)((longlong)
                                  &((FFoliageRenderInstanceParams *)(param_4->MultipleLODRuns + -1))
                                   ->_padding_ + uVar54 * 4 + lVar29);
                    local_1e0 = (uchar  [8])(longlong)(int)local_238._12_4_;
                    local_264 = *(int *)((longlong)TVar53 + 8) / 2;
                    if (param_3->bUseInstanceRuns == false) {
                      local_260 = (int)(local_264 + 0x3f + ((int)(local_264 + 0x3f) >> 0x1f & 0x3fU)
                                       ) >> 6;
                    }
                    if ((local_238._12_4_ != 0) && (FThreadStats::bPrimaryEnable != false)) {
                      FVar32 = StatPtr_STAT_FoliageInstances;
                      if (StatPtr_STAT_FoliageInstances ==
                          (FThreadSafeStaticStat<FStat_STAT_FoliageInstances>)0x0) {
                        pFVar23 = ::FName::FName(&local_108,"STAT_FoliageInstances");
                        FVar32 = (FThreadSafeStaticStat<FStat_STAT_FoliageInstances>)
                                 FThreadSafeStaticStatBase::DoSetup
                                           ((FThreadSafeStaticStatBase *)
                                            &StatPtr_STAT_FoliageInstances,*pFVar23,L"Instances",
                                            "STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,
                                            true,ST_int64,false,false,MCR_Invalid);
                      }
                      FVar5 = *(FName *)FVar32;
                      FVar43 = FVar5.ComparisonIndex.Value;
                      uVar36 = FVar5.Number;
                      local_1f0 = FVar43.Value;
                      uStack_1ec = uVar36;
                      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
                         && (FThreadStats::TlsSlot != 0xffffffff)) {
                        pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
                        if (pFVar27 == (FThreadStats *)0x0) {
                          pFVar28 = FThreadStatsPool::Get();
                          pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
                        }
                        auVar51 = local_1e0;
                        local_168.NameAndInfo.Number = uVar36 & 0xffffafff | 0xa000;
                        local_168.StatData.Pad[0] = local_1e0[0];
                        local_168.StatData.Pad[1] = local_1e0[1];
                        local_168.StatData.Pad[2] = local_1e0[2];
                        local_168.StatData.Pad[3] = local_1e0[3];
                        local_168.StatData.Pad[4] = local_1e0[4];
                        local_168.StatData.Pad[5] = local_1e0[5];
                        local_168.StatData.Pad[6] = local_1e0[6];
                        local_168.StatData.Pad[7] = local_1e0[7];
                        local_1a8 = FVar5;
                        local_168.NameAndInfo.Index.Value = FVar43.Value;
                        FThreadStats::AddStatMessage(pFVar27,&local_168);
                        FStatsTrace::Add(&local_1a8,(long64)auVar51);
                        if (pFVar27->ScopeCount == 0) {
                          FThreadStats::Flush(pFVar27,false,false);
                        }
                        else if (FThreadStats::bIsRawStatsActive != false) {
                          FThreadStats::FlushRawStats(pFVar27,false,false);
                        }
                      }
                    }
                    bVar16 = false;
                    local_238._16_4_ = 0;
                    if (0 < local_260) {
                      do {
                        iVar19 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                 ::Add(&param_2->MeshBatchStorage,1);
                        uVar36 = iVar19 / 0x49;
                        uVar52 = 0;
                        if ((int)uVar36 < (param_2->MeshBatchStorage).Chunks.Array.ArrayNum) {
                          uVar52 = ~uVar36 >> 0x1f;
                        }
                        if ((uVar52 == 0) &&
                           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar17)) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                        FVar48 = (ForElementType<FMeshBatchElement>)
                                 ((ulonglong)(uint)(iVar19 % 0x49) * 0xe0 +
                                 (longlong)
                                 (param_2->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data
                                 [(int)uVar36]);
                        if (FThreadStats::bPrimaryEnable != false) {
                          FVar26 = StatPtr_STAT_FoliageMeshBatches;
                          if (StatPtr_STAT_FoliageMeshBatches ==
                              (FThreadSafeStaticStat<FStat_STAT_FoliageMeshBatches>)0x0) {
                            pFVar23 = ::FName::FName(&local_100,"STAT_FoliageMeshBatches");
                            FVar26 = (FThreadSafeStaticStat<FStat_STAT_FoliageMeshBatches>)
                                     FThreadSafeStaticStatBase::DoSetup
                                               ((FThreadSafeStaticStatBase *)
                                                &StatPtr_STAT_FoliageMeshBatches,*pFVar23,
                                                L"Mesh Batches","STATGROUP_Foliage",
                                                "STATCAT_Advanced",L"Foliage",true,true,ST_int64,
                                                false,false,MCR_Invalid);
                          }
                          FVar5 = *(FName *)FVar26;
                          FVar43 = FVar5.ComparisonIndex.Value;
                          uVar36 = FVar5.Number;
                          local_1e8 = FVar43.Value;
                          uStack_1e4 = uVar36;
                          if (((FVar5 != (FName)0x0) &&
                              (FThreadStats::bPrimaryDisableForever == false)) &&
                             (FThreadStats::TlsSlot != 0xffffffff)) {
                            pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
                            if (pFVar27 == (FThreadStats *)0x0) {
                              pFVar28 = FThreadStatsPool::Get();
                              pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
                            }
                            local_158.NameAndInfo.Number = uVar36 & 0xffffafff | 0xa000;
                            local_158.StatData.Pad[0] = '\x01';
                            local_158.StatData.Pad[1] = '\0';
                            local_158.StatData.Pad[2] = '\0';
                            local_158.StatData.Pad[3] = '\0';
                            local_158.StatData.Pad[4] = '\0';
                            local_158.StatData.Pad[5] = '\0';
                            local_158.StatData.Pad[6] = '\0';
                            local_158.StatData.Pad[7] = '\0';
                            local_1a0 = FVar5;
                            local_158.NameAndInfo.Index.Value = FVar43.Value;
                            FThreadStats::AddStatMessage(pFVar27,&local_158);
                            FStatsTrace::Add(&local_1a0,1);
                            if (pFVar27->ScopeCount == 0) {
                              FThreadStats::Flush(pFVar27,false,false);
                            }
                            else if (FThreadStats::bIsRawStatsActive != false) {
                              FThreadStats::FlushRawStats(pFVar27,false,false);
                            }
                          }
                        }
                        bVar17 = param_3->BatchRenderSelection[local_250];
                        EVar20 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                           ((FPrimitiveSceneProxy *)this,param_3->View);
                        bVar17 = FStaticMeshSceneProxy::GetMeshElement
                                           ((FStaticMeshSceneProxy *)this,local_288,0,local_280,
                                            (uchar)EVar20,bVar17,true,(FMeshBatch *)FVar48);
                        if (bVar17) {
                          uVar36 = 0;
                          if ((int)local_288 < (int)this->_padding_) {
                            uVar36 = local_238._8_4_;
                          }
                          if ((uVar36 == 0) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          *(undefined8 *)((longlong)FVar48 + 0xa8) =
                               *(undefined8 *)(this->_padding_ + uVar54 * 8);
                          if ((*(int *)((longlong)FVar48 + 0xa0) < 1) &&
                             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar17)) {
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          FVar46 = FVar48;
                          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar48 + 0x98) !=
                              (ForElementType<FMeshBatchElement>)0x0) {
                            FVar46 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar48 + 0x98)
                            ;
                          }
                          *(FInstancingUserData **)((longlong)FVar46 + 0x38) =
                               param_3->PassUserData[local_250];
                          EVar21 = *(EUniformBufferUsage *)((longlong)FVar46 + 0x7c) & 0xfffffeff;
                          *(undefined4 *)((longlong)FVar46 + 0x78) = 0x3f800000;
                          *(undefined4 *)((longlong)FVar46 + 0x74) = 0;
                          *(EUniformBufferUsage *)((longlong)FVar46 + 0x7c) =
                               ((local_288 ^ EVar21) & 0xf ^ EVar21) & 0xffffff0f | local_268 << 4;
                          pFVar7 = (FRHIResource *)CONCAT44(local_238._4_4_,local_238._0_4_);
                          *(longlong *)FVar46 = this->_padding_;
                          pFVar6 = *(FRHIResource **)((longlong)FVar46 + 0x10);
                          if (pFVar6 != pFVar7) {
                            *(FRHIResource **)((longlong)FVar46 + 0x10) = pFVar7;
                            if (pFVar7 != (FRHIResource *)0x0) {
                              FRHIResource::AddRef(pFVar7);
                            }
                            if (pFVar6 != (FRHIResource *)0x0) {
                              FRHIResource::Release(pFVar6);
                            }
                          }
                          *(uint *)((longlong)FVar48 + 0xd4) =
                               *(uint *)((longlong)FVar48 + 0xd4) | 0x2000;
                          uVar36 = ((uint)param_3->BatchRenderSelection[local_250] << 0xf ^
                                   *(uint *)((longlong)FVar48 + 0xd4)) & 0x8000 ^
                                   *(uint *)((longlong)FVar48 + 0xd4);
                          *(uint *)((longlong)FVar48 + 0xd4) = uVar36;
                          uVar36 = ((uint)param_3->BatchRenderSelection[local_250] << 0xe ^ uVar36)
                                   & 0x4000 ^ uVar36;
                          *(uint *)((longlong)FVar48 + 0xd4) = uVar36;
                          *(uint *)((longlong)FVar48 + 0xd4) =
                               ((uint)*(byte *)((longlong)&this->_padding_ + 5) * 2 ^ uVar36) & 0x20
                               ^ uVar36;
                          if (!bVar16) {
                            local_240 = local_240 +
                                        (ulonglong)*(uint *)((longlong)FVar46 + 0x5c) *
                                        (longlong)local_1e0;
                            bVar16 = true;
                            if (GFrameNumberRenderThread_CaptureFoliageRuns ==
                                GFrameNumberRenderThread) {
                              if (param_3->FinalCullDistance <= fVar11) {
                                if (3 < (byte)LogStaticMesh._0_1_) {
                                  pFVar30 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                                                      (*(FMaterialRenderProxy **)
                                                        ((longlong)FVar48 + 0xb0),
                                                       param_3->FeatureLevel);
                                  (**(code **)(pFVar30->_padding_ + 0x390))(pFVar30,local_70);
                                  UObjectBaseUtility::GetPathName
                                            ((UObjectBaseUtility *)this->_padding_,&local_80,
                                             (UObject *)0x0);
                                  UE::Logging::Private::BasicLog<4>
                                            ((FStaticBasicLogRecord *)
                                             &PTR_u_lod__1d__1d___s_1518e3728,
                                             (FLogCategoryBase *)&LogStaticMesh);
                                  pAVar39 = local_70[0];
                                  if ((FSceneViewStateInterface *)
                                      local_80.Data.AllocatorInstance.Data !=
                                      (FSceneViewStateInterface *)0x0) {
                                    FMemory::Free(local_80.Data.AllocatorInstance.Data);
                                    pAVar39 = local_70[0];
                                  }
                                  goto LAB_147cf59d8;
                                }
                              }
                              else if (3 < (byte)LogStaticMesh._0_1_) {
                                pFVar30 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                                                    (*(FMaterialRenderProxy **)
                                                      ((longlong)FVar48 + 0xb0),
                                                     param_3->FeatureLevel);
                                (**(code **)(pFVar30->_padding_ + 0x390))(pFVar30,local_90);
                                UObjectBaseUtility::GetPathName
                                          ((UObjectBaseUtility *)this->_padding_,&local_a0,
                                           (UObject *)0x0);
                                UE::Logging::Private::BasicLog<4>
                                          (&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
                                pAVar39 = local_90[0];
                                if (local_a0.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_a0.Data.AllocatorInstance.Data);
                                  pAVar39 = local_90[0];
                                }
LAB_147cf59d8:
                                if (pAVar39 != (AActor *)0x0) {
                                  FMemory::Free(pAVar39);
                                }
                              }
                            }
                          }
                          if (param_3->bUseInstanceRuns == false) {
                            uVar36 = 0x40;
                            if ((int)local_264 < 0x40) {
                              uVar36 = local_264;
                            }
                            local_210._4_4_ = uVar36;
                            if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
                              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
                            }
                            if (*(int *)((longlong)FVar48 + 0xa4) < (int)uVar36) {
                              UE::Core::Private::
                              ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                        (0x98,8,uVar36,(ForElementType<FMeshBatchElement> *)FVar48,
                                         *(int *)((longlong)FVar48 + 0xa0),
                                         (int *)((longlong)FVar48 + 0xa4));
                            }
                            if ((uVar36 == 0) &&
                               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("NumElementsThisBatch",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                                                  ,0x5a1,L""), bVar17)) {
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            uVar52 = 0;
                            TVar53 = (TUniformBufferRef<FViewUniformShaderParameters>)
                                     local_238._24_8_;
                            if (uVar36 != 0) {
                              uVar50 = local_26c + 1;
                              do {
                                iVar19 = *(int *)((longlong)FVar48 + 0xa0);
                                if (uVar52 == 0) {
                                  if ((iVar19 < 1) &&
                                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                                    pcVar8 = (code *)swi(3);
                                    (*pcVar8)();
                                    return;
                                  }
                                  FVar46 = FVar48;
                                  if (*(ForElementType<FMeshBatchElement> *)
                                       ((longlong)FVar48 + 0x98) !=
                                      (ForElementType<FMeshBatchElement>)0x0) {
                                    FVar46 = *(ForElementType<FMeshBatchElement> *)
                                              ((longlong)FVar48 + 0x98);
                                  }
                                }
                                else {
                                  if (iVar19 == *(int *)((longlong)FVar48 + 0xa4)) {
                                    iVar19 = UE::Core::Private::
                                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                                       (0x898,(ForElementType<FMeshBatchElement> *)
                                                              FVar48,
                                                        (int *)((longlong)FVar48 + 0xa4));
                                  }
                                  *(int *)((longlong)FVar48 + 0xa0) = iVar19 + 1;
                                  FVar46 = FVar48;
                                  if (*(ForElementType<FMeshBatchElement> *)
                                       ((longlong)FVar48 + 0x98) !=
                                      (ForElementType<FMeshBatchElement>)0x0) {
                                    FVar46 = *(ForElementType<FMeshBatchElement> *)
                                              ((longlong)FVar48 + 0x98);
                                  }
                                  FVar46 = (ForElementType<FMeshBatchElement>)
                                           ((longlong)iVar19 * 0x98 + (longlong)FVar46);
                                  DefaultConstructItems<FMeshBatchElement,int>((void *)FVar46,1);
                                  if ((*(int *)((longlong)FVar48 + 0xa0) < 1) &&
                                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                                    pcVar8 = (code *)swi(3);
                                    (*pcVar8)();
                                    return;
                                  }
                                  FVar40 = FVar48;
                                  if (*(ForElementType<FMeshBatchElement> *)
                                       ((longlong)FVar48 + 0x98) !=
                                      (ForElementType<FMeshBatchElement>)0x0) {
                                    FVar40 = *(ForElementType<FMeshBatchElement> *)
                                              ((longlong)FVar48 + 0x98);
                                  }
                                  *(undefined8 *)FVar46 = *(undefined8 *)FVar40;
                                  *(undefined8 *)((longlong)FVar46 + 8) =
                                       *(undefined8 *)((longlong)FVar40 + 8);
                                  pFVar6 = *(FRHIResource **)((longlong)FVar40 + 0x10);
                                  pFVar7 = *(FRHIResource **)((longlong)FVar46 + 0x10);
                                  if (pFVar7 != pFVar6) {
                                    *(FRHIResource **)((longlong)FVar46 + 0x10) = pFVar6;
                                    if (pFVar6 != (FRHIResource *)0x0) {
                                      FRHIResource::AddRef(pFVar6);
                                    }
                                    if (pFVar7 != (FRHIResource *)0x0) {
                                      FRHIResource::Release(pFVar7);
                                    }
                                  }
                                  *(undefined8 *)((longlong)FVar46 + 0x18) =
                                       *(undefined8 *)((longlong)FVar40 + 0x18);
                                  uVar31 = *(undefined8 *)((longlong)FVar40 + 0x28);
                                  *(undefined8 *)((longlong)FVar46 + 0x20) =
                                       *(undefined8 *)((longlong)FVar40 + 0x20);
                                  *(undefined8 *)((longlong)FVar46 + 0x28) = uVar31;
                                  *(undefined8 *)((longlong)FVar46 + 0x30) =
                                       *(undefined8 *)((longlong)FVar40 + 0x30);
                                  *(undefined8 *)((longlong)FVar46 + 0x30) =
                                       *(undefined8 *)((longlong)FVar40 + 0x30);
                                  *(undefined8 *)((longlong)FVar46 + 0x38) =
                                       *(undefined8 *)((longlong)FVar40 + 0x38);
                                  *(undefined8 *)((longlong)FVar46 + 0x40) =
                                       *(undefined8 *)((longlong)FVar40 + 0x40);
                                  *(undefined8 *)((longlong)FVar46 + 0x48) =
                                       *(undefined8 *)((longlong)FVar40 + 0x48);
                                  *(undefined4 *)((longlong)FVar46 + 0x50) =
                                       *(undefined4 *)((longlong)FVar40 + 0x50);
                                  *(uint *)((longlong)FVar46 + 0x54) =
                                       (*(uint *)((longlong)FVar40 + 0x54) ^
                                       *(uint *)((longlong)FVar46 + 0x54)) & 0xfffffff8 ^
                                       *(uint *)((longlong)FVar40 + 0x54);
                                  *(undefined4 *)((longlong)FVar46 + 0x58) =
                                       *(undefined4 *)((longlong)FVar40 + 0x58);
                                  *(undefined4 *)((longlong)FVar46 + 0x5c) =
                                       *(undefined4 *)((longlong)FVar40 + 0x5c);
                                  *(undefined4 *)((longlong)FVar46 + 0x60) =
                                       *(undefined4 *)((longlong)FVar40 + 0x60);
                                  *(undefined4 *)((longlong)FVar46 + 100) =
                                       *(undefined4 *)((longlong)FVar40 + 100);
                                  *(undefined4 *)((longlong)FVar46 + 0x68) =
                                       *(undefined4 *)((longlong)FVar40 + 0x68);
                                  *(undefined4 *)((longlong)FVar46 + 0x6c) =
                                       *(undefined4 *)((longlong)FVar40 + 0x6c);
                                  *(undefined4 *)((longlong)FVar46 + 0x70) =
                                       *(undefined4 *)((longlong)FVar40 + 0x70);
                                  *(undefined4 *)((longlong)FVar46 + 0x74) =
                                       *(undefined4 *)((longlong)FVar40 + 0x74);
                                  *(undefined4 *)((longlong)FVar46 + 0x78) =
                                       *(undefined4 *)((longlong)FVar40 + 0x78);
                                  uVar36 = (*(uint *)((longlong)FVar46 + 0x7c) ^
                                           *(uint *)((longlong)FVar40 + 0x7c)) & 0xf ^
                                           *(uint *)((longlong)FVar46 + 0x7c);
                                  *(uint *)((longlong)FVar46 + 0x7c) = uVar36;
                                  uVar36 = (uVar36 ^ *(uint *)((longlong)FVar40 + 0x7c)) & 0xf0 ^
                                           uVar36;
                                  *(uint *)((longlong)FVar46 + 0x7c) = uVar36;
                                  uVar36 = (uVar36 ^ *(uint *)((longlong)FVar40 + 0x7c)) & 0x100 ^
                                           uVar36;
                                  *(uint *)((longlong)FVar46 + 0x7c) = uVar36;
                                  uVar36 = (uVar36 ^ *(uint *)((longlong)FVar40 + 0x7c)) & 0x200 ^
                                           uVar36;
                                  *(uint *)((longlong)FVar46 + 0x7c) = uVar36;
                                  uVar36 = (uVar36 ^ *(uint *)((longlong)FVar40 + 0x7c)) & 0x400 ^
                                           uVar36;
                                  *(uint *)((longlong)FVar46 + 0x7c) = uVar36;
                                  uVar36 = (uVar36 ^ *(uint *)((longlong)FVar40 + 0x7c)) & 0x800 ^
                                           uVar36;
                                  *(uint *)((longlong)FVar46 + 0x7c) = uVar36;
                                  uVar36 = (uVar36 ^ *(uint *)((longlong)FVar40 + 0x7c)) & 0x1000 ^
                                           uVar36;
                                  *(uint *)((longlong)FVar46 + 0x7c) = uVar36;
                                  uVar36 = (uVar36 ^ *(uint *)((longlong)FVar40 + 0x7c)) & 0x2000 ^
                                           uVar36;
                                  *(uint *)((longlong)FVar46 + 0x7c) = uVar36;
                                  *(uint *)((longlong)FVar46 + 0x7c) =
                                       (uVar36 ^ *(uint *)((longlong)FVar40 + 0x7c)) & 0xffc03fff ^
                                       *(uint *)((longlong)FVar40 + 0x7c);
                                  *(undefined4 *)((longlong)FVar46 + 0x80) =
                                       *(undefined4 *)((longlong)FVar40 + 0x80);
                                  *(undefined8 *)((longlong)FVar46 + 0x88) =
                                       *(undefined8 *)((longlong)FVar40 + 0x88);
                                  *(undefined4 *)((longlong)FVar46 + 0x90) =
                                       *(undefined4 *)((longlong)FVar40 + 0x90);
                                  *(undefined4 *)((longlong)FVar46 + 0x94) =
                                       *(undefined4 *)((longlong)FVar40 + 0x94);
                                  uVar36 = local_210._4_4_;
                                }
                                uVar22 = 0;
                                if ((int)local_26c < *(int *)(local_238._24_8_ + 8)) {
                                  uVar22 = ~local_26c >> 0x1f;
                                }
                                if ((uVar22 == 0) &&
                                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                                  pcVar8 = (code *)swi(3);
                                  (*pcVar8)();
                                  return;
                                }
                                iVar19 = *(int *)(*(longlong *)local_238._24_8_ +
                                                 local_238._32_8_ * 4);
                                *(int *)((longlong)FVar46 + 0x70) = iVar19;
                                uVar22 = 0;
                                if ((int)uVar50 < *(int *)(local_238._24_8_ + 8)) {
                                  uVar22 = ~uVar50 >> 0x1f;
                                }
                                if ((uVar22 == 0) &&
                                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                                  pcVar8 = (code *)swi(3);
                                  (*pcVar8)();
                                  return;
                                }
                                local_264 = local_264 - 1;
                                *(int *)((longlong)FVar46 + 0x60) =
                                     (*(int *)(*(longlong *)local_238._24_8_ + 4 +
                                              local_238._32_8_ * 4) - iVar19) + 1;
                                if (local_264 != 0) {
                                  local_238._32_8_ =
                                       (((TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
                                          *)local_238._32_8_)->AllocatorInstance).InlineData + 2;
                                  local_26c = local_26c + 2;
                                  uVar50 = uVar50 + 2;
                                  if ((*(int *)(local_238._24_8_ + 8) <= (int)uVar50) &&
                                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                         ("CurrentRun + 1 < RunArray.Num()",
                                                                                                                    
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                                                  ,0x5b8,L""), bVar17)) {
                                    pcVar8 = (code *)swi(3);
                                    (*pcVar8)();
                                    return;
                                  }
                                }
                                uVar52 = uVar52 + 1;
                                FVar49 = local_1d0;
                                TVar53 = (TUniformBufferRef<FViewUniformShaderParameters>)
                                         local_238._24_8_;
                              } while (uVar52 < uVar36);
                            }
                          }
                          else {
                            *(int *)((longlong)FVar46 + 0x60) = *(int *)((longlong)TVar53 + 8) / 2;
                            if ((*(int *)((longlong)TVar53 + 8) < 1) &&
                               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            lVar29 = *(longlong *)TVar53;
                            *(uint *)((longlong)FVar46 + 0x7c) =
                                 *(uint *)((longlong)FVar46 + 0x7c) | 0x400;
                            auVar51[4] = '\0';
                            auVar51[5] = '\0';
                            auVar51[6] = '\0';
                            auVar51[7] = '\0';
                            auVar51._0_4_ = *(uint *)((longlong)FVar46 + 0x60);
                            *(longlong *)((longlong)FVar46 + 0x30) = lVar29;
                            if ((auVar51 != (uchar  [8])0x0) &&
                               (FThreadStats::bPrimaryEnable != false)) {
                              FVar33 = StatPtr_STAT_FoliageRuns;
                              if (StatPtr_STAT_FoliageRuns ==
                                  (FThreadSafeStaticStat<FStat_STAT_FoliageRuns>)0x0) {
                                pFVar23 = ::FName::FName(&local_f8,"STAT_FoliageRuns");
                                FVar33 = (FThreadSafeStaticStat<FStat_STAT_FoliageRuns>)
                                         FThreadSafeStaticStatBase::DoSetup
                                                   ((FThreadSafeStaticStatBase *)
                                                    &StatPtr_STAT_FoliageRuns,*pFVar23,L"Runs",
                                                    "STATGROUP_Foliage","STATCAT_Advanced",
                                                    L"Foliage",true,true,ST_int64,false,false,
                                                    MCR_Invalid);
                              }
                              FVar5 = *(FName *)FVar33;
                              FVar43 = FVar5.ComparisonIndex.Value;
                              uVar36 = FVar5.Number;
                              local_1d8 = FVar43.Value;
                              uStack_1d4 = uVar36;
                              if (((FVar5 != (FName)0x0) &&
                                  (FThreadStats::bPrimaryDisableForever == false)) &&
                                 (FThreadStats::TlsSlot != 0xffffffff)) {
                                pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
                                if (pFVar27 == (FThreadStats *)0x0) {
                                  pFVar28 = FThreadStatsPool::Get();
                                  pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
                                }
                                local_148.NameAndInfo.Number = uVar36 & 0xffffafff | 0xa000;
                                local_198 = FVar5;
                                local_148.StatData.Pad = auVar51;
                                local_148.NameAndInfo.Index.Value = FVar43.Value;
                                FThreadStats::AddStatMessage(pFVar27,&local_148);
                                FStatsTrace::Add(&local_198,(long64)auVar51);
                                if (pFVar27->ScopeCount == 0) {
                                  FThreadStats::Flush(pFVar27,false,false);
                                }
                                else if (FThreadStats::bIsRawStatsActive != false) {
                                  FThreadStats::FlushRawStats(pFVar27,false,false);
                                }
                              }
                            }
                          }
                          pTVar12 = CVarMaxTrianglesToRender.Ref;
                          bVar17 = IsInParallelRenderingThread();
                          if ((!bVar17) &&
                             (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                                 (&bGEnsureHasExecuted<6409875433831007955>,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                                  ,0x6d3,"IsInParallelRenderingThread()"), bVar17))
                          {
                            pcVar8 = (code *)swi(3);
                            (*pcVar8)();
                            return;
                          }
                          if ((local_240 < pTVar12->ShadowedValue[1]) &&
                             (FMeshElementCollector::AddMesh
                                        (param_2,param_3->ViewIndex,(FMeshBatch *)FVar48),
                             this->_padding_ != 0)) {
                            iVar19 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                                     ::Add(&param_2->MeshBatchStorage,1);
                            uVar36 = iVar19 / 0x49;
                            uVar52 = 0;
                            if ((int)uVar36 < (param_2->MeshBatchStorage).Chunks.Array.ArrayNum) {
                              uVar52 = ~uVar36 >> 0x1f;
                            }
                            if ((uVar52 == 0) &&
                               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar17)) {
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                            FVar46 = (ForElementType<FMeshBatchElement>)
                                     ((longlong)
                                      (param_2->MeshBatchStorage).Chunks.Array.AllocatorInstance.
                                      Data[(int)uVar36] + (ulonglong)(uint)(iVar19 % 0x49) * 0xe0);
                            if (FVar46 != FVar48) {
                              FVar40 = FVar46;
                              if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar46 + 0x98) !=
                                  (ForElementType<FMeshBatchElement>)0x0) {
                                FVar40 = *(ForElementType<FMeshBatchElement> *)
                                          ((longlong)FVar46 + 0x98);
                              }
                              DestructItems<FMeshBatchElement,int>
                                        ((FMeshBatchElement *)FVar40,
                                         *(int *)((longlong)FVar46 + 0xa0));
                              piVar1 = (int *)((longlong)FVar46 + 0xa4);
                              iVar19 = *(int *)((longlong)FVar48 + 0xa0);
                              FVar40 = FVar48;
                              if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar48 + 0x98) !=
                                  (ForElementType<FMeshBatchElement>)0x0) {
                                FVar40 = *(ForElementType<FMeshBatchElement> *)
                                          ((longlong)FVar48 + 0x98);
                              }
                              *(int *)((longlong)FVar46 + 0xa0) = iVar19;
                              if ((iVar19 == 0) && (*piVar1 == 0)) {
                                *piVar1 = 1;
                              }
                              else {
                                UE::Core::Private::
                                ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshBatchElement>_>
                                          (0x98,8,iVar19,*piVar1,
                                           (ForElementType<FMeshBatchElement> *)FVar46,iVar19,piVar1
                                          );
                                FVar41 = FVar46;
                                if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar46 + 0x98)
                                    != (ForElementType<FMeshBatchElement>)0x0) {
                                  FVar41 = *(ForElementType<FMeshBatchElement> *)
                                            ((longlong)FVar46 + 0x98);
                                }
                                ConstructItems<FMeshBatchElement,FMeshBatchElement,int>
                                          ((void *)FVar41,(FMeshBatchElement *)FVar40,iVar19);
                              }
                            }
                            *(undefined8 *)((longlong)FVar46 + 0xa8) =
                                 *(undefined8 *)((longlong)FVar48 + 0xa8);
                            *(undefined8 *)((longlong)FVar46 + 0xb0) =
                                 *(undefined8 *)((longlong)FVar48 + 0xb0);
                            *(undefined8 *)((longlong)FVar46 + 0xb8) =
                                 *(undefined8 *)((longlong)FVar48 + 0xb8);
                            *(undefined4 *)((longlong)FVar46 + 0xc0) =
                                 *(undefined4 *)((longlong)FVar48 + 0xc0);
                            *(undefined4 *)((longlong)FVar46 + 0xc4) =
                                 *(undefined4 *)((longlong)FVar48 + 0xc4);
                            *(undefined4 *)((longlong)FVar46 + 200) =
                                 *(undefined4 *)((longlong)FVar48 + 200);
                            *(undefined4 *)((longlong)FVar46 + 0xcc) =
                                 *(undefined4 *)((longlong)FVar48 + 0xcc);
                            *(undefined2 *)((longlong)FVar46 + 0xd0) =
                                 *(undefined2 *)((longlong)FVar48 + 0xd0);
                            *(undefined1 *)((longlong)FVar46 + 0xd2) =
                                 *(undefined1 *)((longlong)FVar48 + 0xd2);
                            uVar36 = (*(uint *)((longlong)FVar46 + 0xd4) ^
                                     *(uint *)((longlong)FVar48 + 0xd4)) & 1 ^
                                     *(uint *)((longlong)FVar46 + 0xd4);
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 2 ^ uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 4 ^ uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 8 ^ uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x10 ^ uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x20 ^ uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x40 ^ uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x380 ^ uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x1c00 ^ uVar36
                            ;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x2000 ^ uVar36
                            ;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x4000 ^ uVar36
                            ;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x8000 ^ uVar36
                            ;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x10000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x20000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x40000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x380000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x400000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x800000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x1000000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x2000000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x4000000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            uVar36 = (uVar36 ^ *(uint *)((longlong)FVar48 + 0xd4)) & 0x8000000 ^
                                     uVar36;
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36;
                            *(undefined1 *)((longlong)FVar46 + 0xd8) =
                                 *(undefined1 *)((longlong)FVar48 + 0xd8);
                            *(undefined1 *)((longlong)FVar46 + 0xd9) =
                                 *(undefined1 *)((longlong)FVar48 + 0xd9);
                            *(uint *)((longlong)FVar46 + 0xd4) = uVar36 & 0xfffefffb | 0x400000;
                            uVar31 = (**(code **)(*(longlong *)this->_padding_ + 0x310))();
                            *(undefined8 *)((longlong)FVar46 + 0xb0) = uVar31;
                            *(short *)((longlong)FVar46 + 0xd0) =
                                 *(short *)((longlong)FVar46 + 0xd0) + (short)iVar47;
                            FMeshElementCollector::AddMesh
                                      (param_2,param_3->ViewIndex,(FMeshBatch *)FVar46);
                          }
                        }
                        local_238._16_4_ = local_238._16_4_ + 1;
                      } while ((int)local_238._16_4_ < local_260);
                    }
                  }
                }
                local_210._8_8_ = local_210._8_8_ + 1;
                local_280 = local_280 + 1;
              } while ((int)local_280 < iVar47);
            }
            if ((FRHIResource *)CONCAT44(local_238._4_4_,local_238._0_4_) != (FRHIResource *)0x0) {
              FRHIResource::Release((FRHIResource *)CONCAT44(local_238._4_4_,local_238._0_4_));
            }
            local_250 = local_250 + 1;
            local_270 = local_270 + 1;
          } while (local_270 < param_3->NumSelectionGroups);
        }
      }
      local_288 = EVar44 + UniformBuffer_SingleFrame;
      uVar45 = (ulonglong)local_288;
      uVar54 = uVar54 + 1;
    } while ((longlong)uVar54 < local_190);
  }
  local_240 = ((ulonglong)(this->_padding_ != 0) + 1) * local_240;
  uVar36 = 0x7fffffff;
  if (local_240 < 0x7fffffff) {
    uVar36 = (uint)local_240;
  }
  auVar55[4] = '\0';
  auVar55[5] = '\0';
  auVar55[6] = '\0';
  auVar55[7] = '\0';
  auVar55[0] = (char)uVar36;
  auVar55[1] = (char)(uVar36 >> 8);
  auVar55[2] = (char)(uVar36 >> 0x10);
  auVar55[3] = (char)(uVar36 >> 0x18);
  if ((uVar36 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar34 = StatPtr_STAT_FoliageTriangles;
    if (StatPtr_STAT_FoliageTriangles == (FThreadSafeStaticStat<FStat_STAT_FoliageTriangles>)0x0) {
      pFVar23 = ::FName::FName(&local_f0,"STAT_FoliageTriangles");
      FVar34 = (FThreadSafeStaticStat<FStat_STAT_FoliageTriangles>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageTriangles,*pFVar23,
                          L"Triangles","STATGROUP_Foliage","STATCAT_Advanced",L"Foliage",true,true,
                          ST_int64,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar34;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar27 == (FThreadStats *)0x0) {
        pFVar28 = FThreadStatsPool::Get();
        pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
      }
      local_138.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_188 = FVar5;
      local_138.StatData.Pad = auVar55;
      local_138.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar27,&local_138);
      FStatsTrace::Add(&local_188,(long64)auVar55);
      if (pFVar27->ScopeCount == 0) {
        FThreadStats::Flush(pFVar27,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar27,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar35 = StatPtr_STAT_StaticMeshTriangles;
      if (StatPtr_STAT_StaticMeshTriangles ==
          (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)0x0) {
        pFVar23 = ::FName::FName(&local_e8,"STAT_StaticMeshTriangles");
        FVar35 = (FThreadSafeStaticStat<FStat_STAT_StaticMeshTriangles>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StaticMeshTriangles,*pFVar23,
                            L"Static Mesh Tris","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true
                            ,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar5 = *(FName *)FVar35;
      if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar27 == (FThreadStats *)0x0) {
          pFVar28 = FThreadStatsPool::Get();
          pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
        }
        local_128.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
        local_180 = FVar5;
        local_128.StatData.Pad = auVar55;
        local_128.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar27,&local_128);
        FStatsTrace::Add(&local_180,(long64)auVar55);
        if (pFVar27->ScopeCount == 0) {
          FThreadStats::Flush(pFVar27,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar27,false,false);
        }
      }
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar49,CycleScopeEnd);
  }
  return;
}

// GetDynamicMeshElements @ 147cfc8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements
          (FHierarchicalStaticMeshSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FFoliageCullInstanceParams *this_00;
  FConvexVolume *this_01;
  FViewMatrices *pFVar1;
  double *pdVar2;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  bool bVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [12];
  bool bVar25;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *pTVar26
  ;
  TConsoleVariableData<float> *pTVar27;
  TConsoleVariableData<bool> *pTVar28;
  FSceneView *pFVar29;
  undefined8 uVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  uchar uVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  TStatId TVar41;
  longlong lVar42;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar43;
  FConvexVolume *pFVar44;
  TPlane<double> *pTVar45;
  FConvexVolume *pFVar46;
  TMatrix<double> *pTVar47;
  TVector<double> *pTVar48;
  FCachedSystemScalabilityCVars *pFVar49;
  FFoliageOcclusionResults *pFVar50;
  FThreadStats *this_02;
  FName *pFVar51;
  FThreadSafeStaticStat<FStat_STAT_FoliageTraversalTime> FVar52;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar53;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar54;
  FPrimitiveDrawInterface *pFVar55;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar56;
  FConvexVolume *pFVar57;
  FNameEntryId FVar58;
  uint uVar59;
  float *pfVar60;
  int *piVar61;
  TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar62;
  int *piVar63;
  uint uVar64;
  uchar *puVar65;
  undefined4 *puVar66;
  char cVar67;
  int iVar68;
  ForElementType<UE::Math::TPlane<double>_> FVar69;
  uchar *puVar70;
  ulonglong uVar71;
  FScriptContainerElement *pFVar72;
  uint uVar73;
  undefined8 *puVar74;
  FSceneView *this_03;
  ulonglong uVar75;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar76;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar77;
  FName FVar78;
  FName FVar79;
  longlong lVar80;
  FScriptContainerElement *pFVar81;
  ulonglong uVar82;
  FFoliageRenderInstanceParams *pFVar83;
  bool bVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  double dVar90;
  undefined1 auVar92 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar91;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  double dVar107;
  double dVar108;
  double dVar109;
  double dVar110;
  double dVar111;
  undefined4 uVar112;
  undefined4 uVar113;
  double dVar114;
  float fVar115;
  float fVar116;
  undefined1 auStackY_8c8 [32];
  bool local_868;
  char local_866;
  uint local_854;
  ulonglong local_850;
  longlong local_848;
  undefined1 local_83f;
  undefined1 local_83e;
  char local_83d;
  undefined1 local_83c;
  undefined1 local_83b [3];
  double local_838;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_828;
  FMeshElementCollector *local_820;
  FFoliageRenderInstanceParams *local_818;
  uint local_810;
  uint local_80c;
  uint local_808;
  uint local_804;
  uint local_800;
  uint local_7fc;
  uint local_7f8;
  uint local_7f4;
  uint local_7f0;
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  uint local_7e0;
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  uint local_7d0 [2];
  FSceneView *local_7c8;
  FName local_7b8;
  double local_7a8;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_798;
  longlong local_790;
  double local_788;
  FSceneViewFamily *local_780;
  double local_778;
  int local_768;
  FColor_u_0 local_764;
  FName local_760;
  byte local_758;
  FName local_750;
  byte local_748;
  uint local_740;
  uint uStack_73c;
  longlong *local_738;
  FName local_730;
  uint local_728;
  uint uStack_724;
  FFoliageElementParams local_720;
  FName local_6e8;
  undefined1 local_6d8 [16];
  FLinearColor_u_0 local_6c8;
  FLinearColor_u_0 local_6b8;
  undefined1 local_6a8 [16];
  double local_698;
  double dStack_690;
  FName local_688;
  TMatrix<double> *local_680;
  FStatMessage local_678;
  FSourceLocation local_668;
  FSourceLocation local_648;
  undefined1 local_628 [16];
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  TPlane<double> local_5f8;
  TPlane<double> local_5d8;
  undefined1 local_5b8 [16];
  double local_5a8;
  double dStack_5a0;
  FName local_578;
  TVector<double>_u_0 local_570;
  TVector<double>_u_0 local_558;
  uchar auStack_540 [8];
  TTransform<double> local_538;
  TVector<double> local_4d8;
  TVector<double> local_4c0;
  TVector<double> local_4a8;
  TVector<double> local_490;
  TBoxSphereBounds<double,double> local_478;
  TPlane<double> local_438;
  TMatrix<double> local_418;
  TMatrix<double> local_398;
  TMatrix<double> local_318;
  TVector<double>_u_0 local_298;
  double local_280;
  double local_278;
  double local_270;
  undefined1 local_268;
  TVector<double>_u_0 local_260;
  double local_248;
  double local_240;
  double local_238;
  undefined1 local_230;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  float local_128 [7];
  float afStack_10c [9];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  local_820 = param_4;
  local_7e4 = param_3;
  local_798 = param_1;
  local_780 = param_2;
  if ((param_1->ArrayNum < 1) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (*(char *)(*(longlong *)(param_1->AllocatorInstance).Data + 0xde4) == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FThreadSafeStaticStatInner<`FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements'::__l2::FStat_STAT_HierarchicalInstancedStaticMeshSceneProxy_GetMeshElements,1>
      ::GetStatId(&StatPtr_STAT_HierarchicalInstancedStaticMeshSceneProxy_GetMeshElements);
      _Init_thread_footer(&::_TSS0);
    }
    TVar41 = FThreadSafeStaticStatInner<`FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements'::__l2::FStat_STAT_HierarchicalInstancedStaticMeshSceneProxy_GetMeshElements,1>
             ::GetStatId(&StatPtr_STAT_HierarchicalInstancedStaticMeshSceneProxy_GetMeshElements);
    local_668.Impl._Line = 0x5e3;
    local_668.Impl._Column = 2;
    local_668.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
    ;
    local_668.Impl._Function =
         "void __cdecl FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements(const class TArray<class FSceneView const *,class TSizedDefaultAllocator<32> > &,const class FSceneViewFamily &,unsigned int,class FMeshElementCollector &) const"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_750,*(TStatIdData **)&(TVar41.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_668);
    TVar41 = FThreadSafeStaticStatInner<FStat_STAT_HISMCGetDynamicMeshElement,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_HISMCGetDynamicMeshElement,1> *)
                        &StatPtr_STAT_HISMCGetDynamicMeshElement);
    local_648.Impl._Line = 0x5e4;
    local_648.Impl._Column = 2;
    local_648.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
    ;
    local_648.Impl._Function =
         "void __cdecl FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements(const class TArray<class FSceneView const *,class TSizedDefaultAllocator<32> > &,const class FSceneViewFamily &,unsigned int,class FMeshElementCollector &) const"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_760,*(TStatIdData **)&(TVar41.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_648);
    if ((((this->bDitheredLODTransitions == false) ||
         (iVar35 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarDitheredLOD), iVar35 < 1))
        || (0 < (int)this->_padding_)) ||
       (iVar35 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarForceLOD), -1 < iVar35)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    iVar35 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarOverestimateLOD);
    local_768 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarMinVertsToSplitNode);
    local_738 = &this->_padding_;
    UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)local_738,&local_318);
    pTVar28 = CVarApplyViewOcclusionCullToShadow.Ref;
    bVar32 = IsInParallelGameThread();
    if ((bVar32) || (bVar32 = IsInGameThread(), bVar32)) {
      lVar42 = 0;
    }
    else {
      lVar42 = 1;
    }
    local_83d = pTVar28->ShadowedValue[lVar42];
    local_854 = 0;
    iVar36 = local_798->ArrayNum;
    if (0 < iVar36) {
      uVar112 = SUB84(__real_3ff0000000000000,0);
      uVar113 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_790 = 0;
      pTVar56 = local_798;
      fVar85 = __real_3f000000;
      fVar116 = __real_7f7fffff;
      dVar90 = ___xmm_3ff00000000000000000000000000000;
      dVar111 = _UNK_15061cbc8;
      dVar110 = ___xmm_00000000000000003ff0000000000000;
      dVar91 = _UNK_150689518;
      do {
        if ((param_3 >> (local_854 & 0x1f) & 1) == 0) goto LAB_147d00870;
        uVar64 = 0;
        if ((int)local_854 < iVar36) {
          uVar64 = ~local_854 >> 0x1f;
        }
        if ((uVar64 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_720.bSelectionRenderEnabled = false;
        local_720.BatchRenderSelection[0] = false;
        local_720.NumSelectionGroups = 1;
        local_720.BatchRenderSelection[1] = false;
        this_03 = *(FSceneView **)((local_798->AllocatorInstance).Data + local_790);
        local_720.PassUserData[0] = (FInstancingUserData *)&this->_padding_;
        local_720.PassUserData[1] = (FInstancingUserData *)&this->_padding_;
        local_720.bIsWireframe = (param_2->EngineShowFlags).Wireframe;
        local_720.bUseHoveredMaterial = (bool)(*(byte *)((longlong)&this->_padding_ + 1) >> 4 & 1);
        local_7c8 = this_03;
        iVar36 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarFoliageUseInstanceRuns.Ref);
        pTVar3 = this->ClusterTree;
        local_720.FeatureLevel = (Type)this->_padding_;
        local_720.bUseInstanceRuns = 0 < iVar36;
        local_720.View = this_03;
        local_720.ViewIndex = local_854;
        if (pTVar3->ArrayNum == 0) {
LAB_147cfe95c:
          iVar36 = this->InstanceCountToRender - this->FirstUnbuiltIndex;
          local_7a8 = (double)CONCAT44(local_7a8._4_4_,iVar36);
          if (0 < iVar36) {
            paVar4 = &param_4->OneFrameResources->Next;
            aVar43 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                      )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x160,8);
            *(undefined8 *)((longlong)aVar43 + 8) = 0;
            pFVar83 = (FFoliageRenderInstanceParams *)((longlong)aVar43 + 0x10);
            *(undefined ***)aVar43 =
                 &
                 ___7__TObject_UFFoliageRenderInstanceParams_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
            ;
            TVar53.Next = *paVar4;
            do {
              *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                *)((longlong)aVar43 + 8) = TVar53.Next;
              LOCK();
              aVar54 = *paVar4;
              bVar32 = TVar53.Next == aVar54;
              if (bVar32) {
                *paVar4 = aVar43;
                aVar54 = TVar53.Next;
              }
              UNLOCK();
              TVar53.Next = aVar54;
            } while (!bVar32);
            local_818 = pFVar83;
            FFoliageRenderInstanceParams::FFoliageRenderInstanceParams(pFVar83,true,false,false);
            local_720.bBlendLODs = false;
            if ((iVar36 < 1000) && (iVar36 <= (this->UnbuiltBounds).ArrayNum)) {
              uVar64 = *(uint *)(this->_padding_ + 8);
              dVar90 = (double)(longlong)(int)uVar64;
              local_788 = (double)CONCAT44(local_788._4_4_,uVar64);
              iVar37 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarForceLOD.Ref);
              if (iVar37 < 0) {
                iVar37 = (int)this->_padding_;
                if (0 < iVar37) goto LAB_147cfebd1;
              }
              else {
                iVar37 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarForceLOD.Ref);
                if (-1 < iVar37) {
LAB_147cfebd1:
                  uVar73 = this->FirstUnbuiltIndex;
                  iVar68 = uVar64 - 1;
                  if (iVar37 < (int)(uVar64 - 1)) {
                    iVar68 = iVar37;
                  }
                  iVar37 = uVar73 + iVar36;
                  local_838 = (double)CONCAT44(local_838._4_4_,iVar37);
                  uVar64 = iVar37 - 1;
                  iVar38 = 0;
                  if (0 < iVar68) {
                    iVar38 = iVar68;
                  }
                  if ((*(char *)((longlong)aVar43 + 0x18) != '\0') && (iVar38 < 8)) {
                    pTVar62 = pFVar83->SingleLODRuns + iVar38;
                    iVar37 = pTVar62->ArrayNum;
                    if (iVar37 == 0) {
LAB_147cfecdb:
                      puVar9 = (pTVar62->AllocatorInstance).Data;
                      local_810 = uVar73;
                      if (((puVar9 <= &local_810) && (&local_810 < puVar9 + pTVar62->ArrayMax)) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      iVar37 = pTVar62->ArrayNum;
                      if (iVar37 == pTVar62->ArrayMax) {
                        iVar37 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                           (0x404,&pTVar62->AllocatorInstance,&pTVar62->ArrayMax);
                      }
                      pTVar62->ArrayNum = iVar37 + 1;
                      (pTVar62->AllocatorInstance).Data[iVar37] = local_810;
                      puVar9 = (pTVar62->AllocatorInstance).Data;
                      local_80c = uVar64;
                      if (((puVar9 <= &local_80c) && (&local_80c < puVar9 + pTVar62->ArrayMax)) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      iVar37 = pTVar62->ArrayNum;
                      if (iVar37 == pTVar62->ArrayMax) {
                        iVar37 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                           (0x404,&pTVar62->AllocatorInstance,&pTVar62->ArrayMax);
                      }
                      pTVar62->ArrayNum = iVar37 + 1;
                      (pTVar62->AllocatorInstance).Data[iVar37] = local_80c;
                    }
                    else {
                      uVar39 = 0;
                      if ((int)(iVar37 - 1U) < iVar37) {
                        uVar39 = ~(iVar37 - 1U) >> 0x1f;
                      }
                      if ((uVar39 == 0) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      iVar37 = pTVar62->ArrayNum;
                      if ((pTVar62->AllocatorInstance).Data[(longlong)iVar37 + -1] + 1 != uVar73)
                      goto LAB_147cfecdb;
                      uVar39 = 0;
                      if ((int)(iVar37 - 1U) < iVar37) {
                        uVar39 = ~(iVar37 - 1U) >> 0x1f;
                      }
                      if ((uVar39 == 0) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      (pTVar62->AllocatorInstance).Data[(longlong)pTVar62->ArrayNum + -1] = uVar64;
                    }
                    piVar61 = (int *)((longlong)((longlong)aVar43 + 0x120) + (longlong)iVar38 * 4);
                    *piVar61 = *piVar61 + iVar36;
                    iVar37 = local_838._0_4_;
                  }
                  param_4 = local_820;
                  if (*(char *)((longlong)aVar43 + 0x19) != '\0') {
                    pTVar76 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(longlong)iVar38;
                    piVar63 = pFVar83->TotalMultipleLODInstances + (longlong)pTVar76;
                    piVar61 = &local_818->MultipleLODRuns[(longlong)pTVar76].ArrayNum;
                    pTVar77 = pTVar76;
                    local_828 = pTVar76;
                    do {
                      if ((longlong)pTVar77 < 8) {
                        *piVar63 = *piVar63 + (iVar37 - uVar73);
                        iVar36 = *piVar61;
                        if (iVar36 != 0) {
                          uVar39 = 0;
                          if ((int)(iVar36 - 1U) < iVar36) {
                            uVar39 = ~(iVar36 - 1U) >> 0x1f;
                          }
                          if ((uVar39 == 0) &&
                             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar32)) {
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          iVar36 = *piVar61;
                          if ((((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                 *)(piVar61 + -2))->AllocatorInstance).Data[(longlong)iVar36 + -1] +
                              1 == uVar73) {
                            uVar39 = 0;
                            if ((int)(iVar36 - 1U) < iVar36) {
                              uVar39 = ~(iVar36 - 1U) >> 0x1f;
                            }
                            if ((uVar39 == 0) &&
                               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar32)) {
                              pcVar11 = (code *)swi(3);
                              (*pcVar11)();
                              return;
                            }
                            (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                               *)(piVar61 + -2))->AllocatorInstance).Data[(longlong)*piVar61 + -1] =
                                 uVar64;
                            pTVar76 = local_828;
                            goto LAB_147cff05b;
                          }
                        }
                        puVar9 = (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                    *)(piVar61 + -2))->AllocatorInstance).Data;
                        local_808 = uVar73;
                        if (((puVar9 <= &local_808) && (&local_808 < puVar9 + piVar61[1])) &&
                           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar32)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        iVar36 = *piVar61;
                        if (iVar36 == piVar61[1]) {
                          iVar36 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                             (0x404,(ForElementType<unsigned_int> *)(piVar61 + -2),
                                              piVar61 + 1);
                        }
                        *piVar61 = iVar36 + 1;
                        (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                           *)(piVar61 + -2))->AllocatorInstance).Data[iVar36] = local_808;
                        puVar9 = (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                    *)(piVar61 + -2))->AllocatorInstance).Data;
                        local_804 = uVar64;
                        if (((puVar9 <= &local_804) && (&local_804 < puVar9 + piVar61[1])) &&
                           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar32)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        iVar36 = *piVar61;
                        if (iVar36 == piVar61[1]) {
                          iVar36 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                             (0x404,(ForElementType<unsigned_int> *)(piVar61 + -2),
                                              piVar61 + 1);
                        }
                        *piVar61 = iVar36 + 1;
                        (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                           *)(piVar61 + -2))->AllocatorInstance).Data[iVar36] = local_804;
                        pTVar76 = local_828;
                      }
LAB_147cff05b:
                      pTVar77 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                                ((longlong)&(pTVar77->AllocatorInstance).Data + 1);
                      piVar63 = piVar63 + 1;
                      piVar61 = piVar61 + 4;
                      param_4 = local_820;
                      pFVar83 = local_818;
                      iVar37 = local_838._0_4_;
                    } while ((longlong)pTVar77 <= (longlong)pTVar76);
                  }
                  goto LAB_147d00010;
                }
              }
              pTVar48 = FSceneView::GetTemporalLODOrigin(this_03,&local_490,0,bVar31);
              auVar92 = *(undefined1 (*) [16])&pTVar48->field0_0x0;
              dVar110 = auVar92._0_8_;
              dVar91 = auVar92._8_8_;
              dVar111 = (pTVar48->field0_0x0)._s_0.Z;
              dVar22 = (double)CONCAT44(uVar113,uVar112);
              auVar98._8_4_ = auVar92._0_4_;
              auVar98._0_8_ = dVar110;
              auVar98._12_4_ = auVar92._4_4_;
              auVar99._8_4_ = uVar112;
              auVar99._0_8_ = dVar22;
              auVar99._12_4_ = uVar113;
              dVar23 = dVar91 * local_318.M[1][1] + auVar98._8_8_ * local_318.M[0][1] +
                       dVar111 * local_318.M[2][1] + auVar99._8_8_ * local_318.M[3][1];
              dVar16 = dVar91 * local_318.M[1][3] + dVar110 * local_318.M[0][3] +
                       dVar111 * local_318.M[2][3] + dVar22 * local_318.M[3][3];
              local_6d8._8_4_ = SUB84(dVar23,0);
              local_6d8._0_8_ =
                   dVar91 * local_318.M[1][0] + dVar110 * local_318.M[0][0] +
                   dVar111 * local_318.M[2][0] + dVar22 * local_318.M[3][0];
              local_6d8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
              local_628._8_4_ = SUB84(dVar16,0);
              local_628._0_8_ =
                   dVar91 * local_318.M[1][2] + dVar110 * local_318.M[0][2] +
                   dVar111 * local_318.M[2][2] + dVar22 * local_318.M[3][2];
              local_628._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              pTVar48 = FSceneView::GetTemporalLODOrigin(this_03,&local_4d8,1,bVar31);
              pTVar27 = CVarFoliageMinimumScreenSize.Ref;
              auVar92 = *(undefined1 (*) [16])&pTVar48->field0_0x0;
              dVar110 = auVar92._0_8_;
              dVar91 = auVar92._8_8_;
              dVar111 = (pTVar48->field0_0x0)._s_0.Z;
              auVar100._8_4_ = auVar92._0_4_;
              auVar100._0_8_ = dVar110;
              auVar100._12_4_ = auVar92._4_4_;
              auVar101._8_4_ = SUB84(__real_3ff0000000000000,0);
              auVar101._0_8_ = __real_3ff0000000000000;
              auVar101._12_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
              dVar16 = dVar91 * local_318.M[1][1] + auVar100._8_8_ * local_318.M[0][1] +
                       dVar111 * local_318.M[2][1] + auVar101._8_8_ * local_318.M[3][1];
              pdVar2 = (this_03->ViewMatrices).ProjectionMatrix.M[3] + 3;
              dVar22 = dVar91 * local_318.M[1][3] + dVar110 * local_318.M[0][3] +
                       dVar111 * local_318.M[2][3] + __real_3ff0000000000000 * local_318.M[3][3];
              local_618._8_4_ = SUB84(dVar16,0);
              local_618._0_8_ =
                   dVar91 * local_318.M[1][0] + dVar110 * local_318.M[0][0] +
                   dVar111 * local_318.M[2][0] + __real_3ff0000000000000 * local_318.M[3][0];
              local_618._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              local_608._8_4_ = SUB84(dVar22,0);
              local_608._0_8_ =
                   dVar91 * local_318.M[1][2] + dVar110 * local_318.M[0][2] +
                   dVar111 * local_318.M[2][2] + __real_3ff0000000000000 * local_318.M[3][2];
              local_608._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              if (*pdVar2 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar2) {
                bVar32 = IsInParallelRenderingThread();
                if ((!bVar32) &&
                   (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<6409875433831007955>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                        ,0x6d3,"IsInParallelRenderingThread()"), bVar32)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                fVar85 = pTVar27->ShadowedValue[1];
              }
              else {
                fVar85 = 0.0;
              }
              fVar116 = *(float *)((longlong)&this->_padding_ + 4);
              iVar36 = TConsoleVariableData<int>::GetValueOnRenderThread
                                 (CVarFoliageMaxEndCullDistance.Ref);
              pTVar27 = CVarRandomLODRange.Ref;
              bVar32 = IsInParallelRenderingThread();
              if ((!bVar32) &&
                 (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<6409875433831007955>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x6d3,"IsInParallelRenderingThread()"), bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              fVar86 = pTVar27->ShadowedValue[1];
              pFVar49 = GetCachedScalabilityCVars();
              fVar89 = pFVar49->ViewDistanceScale;
              if (((this->_padding_ & 0x50000) == 0x50000) || ((this->_padding_ & 0x80000) != 0)) {
                fVar88 = *(float *)((longlong)&this->_padding_ + 4);
              }
              else {
                fVar88 = 0.0;
              }
              fVar87 = (float)((double)fVar88 + *(double *)(this->_padding_ + 0x80));
              fVar88 = __real_7f7fffff;
              if (0.0 < fVar85) {
                fVar88 = ComputeBoundsDrawDistance
                                   (fVar85,fVar87,&(this_03->ViewMatrices).ProjectionMatrix);
                fVar88 = fVar88 * fVar116;
              }
              pFVar29 = local_7c8;
              fVar85 = (this_03->SceneViewInitOptions).OverrideFarClippingPlaneDistance;
              fVar115 = fVar88;
              if ((0.0 < fVar85) && (fVar115 = fVar89 * fVar85, fVar88 <= fVar115)) {
                fVar115 = fVar88;
              }
              iVar68 = (int)((float)(int)this->_padding_ * fVar89);
              iVar37 = iVar68;
              if (((0 < iVar36) && (iVar37 = iVar36, 0 < iVar68)) &&
                 (iVar37 = iVar68, iVar36 < iVar68)) {
                iVar37 = iVar36;
              }
              fVar85 = (float)iVar37;
              if ((0.0 < fVar85) && (fVar85 <= fVar115)) {
                fVar115 = fVar85;
              }
              lVar42 = 1;
              local_778 = dVar90;
              local_720.FinalCullDistance = fVar115;
              if (1 < (longlong)dVar90) {
                do {
                  fVar89 = ComputeBoundsDrawDistance
                                     (*(float *)(this->_padding_ + 0x20 + lVar42 * 4),fVar87,
                                      &(pFVar29->ViewMatrices).ProjectionMatrix);
                  fVar89 = fVar89 * fVar116;
                  fVar85 = fVar89;
                  if (fVar115 <= fVar89) {
                    fVar85 = fVar115;
                  }
                  local_128[lVar42 + -1] = fVar85;
                  fVar85 = fVar89 - fVar86;
                  if (fVar115 - fVar86 <= fVar89 - fVar86) {
                    fVar85 = fVar115 - fVar86;
                  }
                  afStack_10c[lVar42] = fVar85;
                  lVar42 = lVar42 + 1;
                } while (lVar42 < (longlong)dVar90);
              }
              uVar73 = *(uint *)((longlong)&this->_padding_ + 4);
              local_128[(longlong)dVar90 + -1] = fVar115;
              afStack_10c[(longlong)dVar90] = fVar115 - fVar86;
              uVar34 = FStaticMeshSceneProxy::GetCurrentFirstLODIdx_Internal
                                 ((FStaticMeshSceneProxy *)this);
              uVar39 = (int)(char)uVar34;
              if ((int)(char)uVar34 < (int)uVar73) {
                uVar39 = uVar73;
              }
              uVar71 = (ulonglong)uVar39;
              if (((this->UnbuiltBounds).ArrayNum < 1) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar72 = (this->UnbuiltBounds).AllocatorInstance.Data;
              if (((this->UnbuiltBounds).ArrayNum < 1) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar30 = local_618._8_8_;
              pFVar81 = (this->UnbuiltBounds).AllocatorInstance.Data;
              if (uVar39 != uVar64) {
                dVar21 = *(double *)(pFVar81 + 8) - *(double *)(pFVar72 + 0x20);
                dVar16 = *(double *)pFVar81 - *(double *)(pFVar72 + 0x18);
                dVar22 = *(double *)(pFVar81 + 0x10) - *(double *)(pFVar72 + 0x28);
                dVar91 = (*(double *)(pFVar72 + 0x28) + *(double *)(pFVar81 + 0x10)) *
                         __real_3fe0000000000000;
                lVar42 = (longlong)(int)uVar39;
                dVar110 = (*(double *)(pFVar72 + 0x20) + *(double *)(pFVar81 + 8)) *
                          __real_3fe0000000000000;
                dVar111 = (*(double *)(pFVar72 + 0x18) + *(double *)pFVar81) *
                          __real_3fe0000000000000;
                dVar114 = (double)local_628._0_8_ - dVar91;
                dVar108 = (double)local_618._8_8_ - dVar110;
                dVar109 = (double)local_618._0_8_ - dVar111;
                dVar110 = dVar23 - dVar110;
                dVar111 = (double)local_6d8._0_8_ - dVar111;
                dVar91 = (double)local_608._0_8_ - dVar91;
                auVar102._0_8_ = SQRT(dVar109 * dVar109 + dVar108 * dVar108 + dVar91 * dVar91);
                auVar102._8_8_ = 0;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = dVar111 * dVar111 + dVar110 * dVar110 + dVar114 * dVar114;
                auVar92 = sqrtpd(auVar102,auVar18);
                auVar19._8_8_ = 0;
                auVar19._0_8_ = dVar21 * dVar21 + dVar16 * dVar16 + dVar22 * dVar22;
                auVar103 = sqrtpd(auVar92,auVar19);
                fVar85 = (float)auVar102._0_8_;
                if ((float)auVar92._0_8_ <= (float)auVar102._0_8_) {
                  fVar85 = (float)auVar92._0_8_;
                }
                fVar85 = fVar85 - (float)(auVar103._0_8_ * __real_3fe0000000000000);
                for (; (lVar42 < (longlong)dVar90 &&
                       (local_128[lVar42] <= fVar85 && fVar85 != local_128[lVar42]));
                    lVar42 = lVar42 + 1) {
                  uVar71 = (ulonglong)((int)uVar71 + 1);
                }
              }
              iVar36 = (int)uVar71;
              uVar64 = 0;
              local_838._0_4_ = 1;
              if (1 < local_7a8._0_4_) {
                local_848 = 0x38;
                local_828 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&DAT_00000001;
                do {
                  uVar39 = local_838._0_4_;
                  uVar59 = ~local_838._0_4_;
                  uVar73 = *(uint *)((longlong)&this->_padding_ + 4);
                  uVar75 = (ulonglong)(int)uVar73;
                  local_850 = (ulonglong)uVar73;
                  uVar40 = 0;
                  if ((int)local_838._0_4_ < (this->UnbuiltBounds).ArrayNum) {
                    uVar40 = uVar59 >> 0x1f;
                  }
                  if ((uVar40 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar72 = (this->UnbuiltBounds).AllocatorInstance.Data;
                  uVar40 = 0;
                  if ((int)uVar39 < (this->UnbuiltBounds).ArrayNum) {
                    uVar40 = uVar59 >> 0x1f;
                  }
                  if ((uVar40 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar83 = local_818;
                  pFVar81 = (this->UnbuiltBounds).AllocatorInstance.Data;
                  uVar82 = uVar75;
                  if (uVar73 != local_788._0_4_) {
                    dVar108 = *(double *)(pFVar81 + local_848 + 8) -
                              *(double *)(pFVar72 + local_848 + 0x20);
                    dVar22 = *(double *)(pFVar81 + local_848) -
                             *(double *)(pFVar72 + local_848 + 0x18);
                    dVar110 = (*(double *)(pFVar72 + local_848 + 0x20) +
                              *(double *)(pFVar81 + local_848 + 8)) * __real_3fe0000000000000;
                    dVar111 = (*(double *)(pFVar72 + local_848 + 0x18) +
                              *(double *)(pFVar81 + local_848)) * __real_3fe0000000000000;
                    auVar104._0_8_ =
                         (*(double *)(pFVar72 + local_848 + 0x28) +
                         *(double *)(pFVar81 + local_848 + 0x10)) * __real_3fe0000000000000;
                    auVar104._8_8_ = 0;
                    dVar16 = dVar23 - dVar110;
                    dVar91 = (double)local_6d8._0_8_ - dVar111;
                    dVar111 = (double)local_618._0_8_ - dVar111;
                    dVar110 = (double)uVar30 - dVar110;
                    dVar21 = *(double *)(pFVar81 + local_848 + 0x10) -
                             *(double *)(pFVar72 + local_848 + 0x28);
                    auVar17._8_8_ = 0;
                    auVar17._0_8_ =
                         dVar91 * dVar91 + dVar16 * dVar16 +
                         ((double)local_628._0_8_ - auVar104._0_8_) *
                         ((double)local_628._0_8_ - auVar104._0_8_);
                    auVar92 = sqrtpd(auVar104,auVar17);
                    auVar14._8_8_ = 0;
                    auVar14._0_8_ =
                         dVar111 * dVar111 + dVar110 * dVar110 +
                         ((double)local_608._0_8_ - auVar104._0_8_) *
                         ((double)local_608._0_8_ - auVar104._0_8_);
                    auVar103 = sqrtpd(auVar92,auVar14);
                    auVar20._8_8_ = 0;
                    auVar20._0_8_ = dVar108 * dVar108 + dVar22 * dVar22 + dVar21 * dVar21;
                    auVar105 = sqrtpd(auVar103,auVar20);
                    fVar85 = (float)auVar92._0_8_;
                    if ((float)auVar103._0_8_ <= (float)auVar92._0_8_) {
                      fVar85 = (float)auVar103._0_8_;
                    }
                    fVar85 = fVar85 - (float)(auVar105._0_8_ * __real_3fe0000000000000);
                    if ((longlong)uVar75 < (longlong)dVar90) {
                      do {
                        if (fVar85 < local_128[uVar75] || fVar85 == local_128[uVar75]) break;
                        uVar82 = (ulonglong)((int)uVar82 + 1);
                        uVar75 = uVar75 + 1;
                      } while ((longlong)uVar75 < (longlong)dVar90);
                      local_850 = uVar82 & 0xffffffff;
                    }
                  }
                  iVar36 = (int)uVar71;
                  if ((int)uVar82 != iVar36) {
                    if (iVar36 < (int)local_788._0_4_) {
                      uVar73 = (uVar39 - 2) + this->FirstUnbuiltIndex;
                      uVar64 = uVar64 + this->FirstUnbuiltIndex;
                      if ((local_818->bNeedsSingleLODRuns != false) && (iVar36 < 8)) {
                        pTVar62 = local_818->SingleLODRuns + iVar36;
                        iVar37 = pTVar62->ArrayNum;
                        if (iVar37 == 0) {
LAB_147cff79c:
                          puVar9 = (pTVar62->AllocatorInstance).Data;
                          local_800 = uVar64;
                          if (((puVar9 <= &local_800) && (&local_800 < puVar9 + pTVar62->ArrayMax))
                             && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                    (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar32)) {
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          iVar37 = pTVar62->ArrayNum;
                          if (iVar37 == pTVar62->ArrayMax) {
                            iVar37 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                               (0x404,&pTVar62->AllocatorInstance,&pTVar62->ArrayMax
                                               );
                          }
                          pTVar62->ArrayNum = iVar37 + 1;
                          (pTVar62->AllocatorInstance).Data[iVar37] = local_800;
                          puVar9 = (pTVar62->AllocatorInstance).Data;
                          local_7fc = uVar73;
                          if (((puVar9 <= &local_7fc) && (&local_7fc < puVar9 + pTVar62->ArrayMax))
                             && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                    (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar32)) {
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          iVar37 = pTVar62->ArrayNum;
                          if (iVar37 == pTVar62->ArrayMax) {
                            iVar37 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                               (0x404,&pTVar62->AllocatorInstance,&pTVar62->ArrayMax
                                               );
                          }
                          pTVar62->ArrayNum = iVar37 + 1;
                          (pTVar62->AllocatorInstance).Data[iVar37] = local_7fc;
                        }
                        else {
                          uVar39 = 0;
                          if ((int)(iVar37 - 1U) < iVar37) {
                            uVar39 = ~(iVar37 - 1U) >> 0x1f;
                          }
                          if ((uVar39 == 0) &&
                             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar32)) {
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          iVar37 = pTVar62->ArrayNum;
                          if ((pTVar62->AllocatorInstance).Data[(longlong)iVar37 + -1] + 1 != uVar64
                             ) goto LAB_147cff79c;
                          uVar39 = 0;
                          if ((int)(iVar37 - 1U) < iVar37) {
                            uVar39 = ~(iVar37 - 1U) >> 0x1f;
                          }
                          if ((uVar39 == 0) &&
                             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar32)) {
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                          (pTVar62->AllocatorInstance).Data[(longlong)pTVar62->ArrayNum + -1] =
                               uVar73;
                        }
                        pFVar83->TotalSingleLODInstances[iVar36] =
                             pFVar83->TotalSingleLODInstances[iVar36] + (uVar73 - uVar64) + 1;
                      }
                      dVar90 = local_778;
                      uVar39 = local_838._0_4_;
                      if (pFVar83->bNeedsMultipleLODRuns != false) {
                        FVar78 = (FName)(longlong)iVar36;
                        piVar63 = &pFVar83->MultipleLODRuns[(longlong)FVar78].ArrayNum;
                        piVar61 = pFVar83->TotalMultipleLODInstances + (longlong)FVar78;
                        FVar79 = FVar78;
                        local_7b8 = FVar78;
                        do {
                          if ((longlong)FVar79 < 8) {
                            *piVar61 = *piVar61 + (uVar73 - uVar64) + 1;
                            iVar36 = *piVar63;
                            if (iVar36 != 0) {
                              uVar39 = 0;
                              if ((int)(iVar36 - 1U) < iVar36) {
                                uVar39 = ~(iVar36 - 1U) >> 0x1f;
                              }
                              if ((uVar39 == 0) &&
                                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar32)) {
                                pcVar11 = (code *)swi(3);
                                (*pcVar11)();
                                return;
                              }
                              iVar36 = *piVar63;
                              if ((((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                     *)(piVar63 + -2))->AllocatorInstance).Data
                                  [(longlong)iVar36 + -1] + 1 == uVar64) {
                                uVar39 = 0;
                                if ((int)(iVar36 - 1U) < iVar36) {
                                  uVar39 = ~(iVar36 - 1U) >> 0x1f;
                                }
                                if ((uVar39 == 0) &&
                                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                       ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                                
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar32)) {
                                  pcVar11 = (code *)swi(3);
                                  (*pcVar11)();
                                  return;
                                }
                                (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                   *)(piVar63 + -2))->AllocatorInstance).Data
                                [(longlong)*piVar63 + -1] = uVar73;
                                FVar78 = local_7b8;
                                goto LAB_147cffb13;
                              }
                            }
                            puVar9 = (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                        *)(piVar63 + -2))->AllocatorInstance).Data;
                            local_7f8 = uVar64;
                            if (((puVar9 <= &local_7f8) && (&local_7f8 < puVar9 + piVar63[1])) &&
                               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar32)) {
                              pcVar11 = (code *)swi(3);
                              (*pcVar11)();
                              return;
                            }
                            iVar36 = *piVar63;
                            if (iVar36 == piVar63[1]) {
                              iVar36 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                                 (0x404,(ForElementType<unsigned_int> *)
                                                        (piVar63 + -2),piVar63 + 1);
                            }
                            *piVar63 = iVar36 + 1;
                            (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                               *)(piVar63 + -2))->AllocatorInstance).Data[iVar36] = local_7f8;
                            puVar9 = (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                        *)(piVar63 + -2))->AllocatorInstance).Data;
                            local_7d0[0] = uVar73;
                            if (((puVar9 <= local_7d0) && (local_7d0 < puVar9 + piVar63[1])) &&
                               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar32)) {
                              pcVar11 = (code *)swi(3);
                              (*pcVar11)();
                              return;
                            }
                            iVar36 = *piVar63;
                            if (iVar36 == piVar63[1]) {
                              iVar36 = UE::Core::Private::
                                       ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                                 (0x404,(ForElementType<unsigned_int> *)
                                                        (piVar63 + -2),piVar63 + 1);
                            }
                            *piVar63 = iVar36 + 1;
                            (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                               *)(piVar63 + -2))->AllocatorInstance).Data[iVar36] = local_7d0[0];
                            FVar78 = local_7b8;
                          }
LAB_147cffb13:
                          FVar79 = (FName)((longlong)FVar79 + 1);
                          piVar61 = piVar61 + 1;
                          piVar63 = piVar63 + 4;
                          dVar90 = local_778;
                          uVar82 = local_850;
                          uVar39 = local_838._0_4_;
                        } while ((longlong)FVar79 <= (longlong)FVar78);
                      }
                    }
                    uVar71 = uVar82 & 0xffffffff;
                    uVar64 = uVar39;
                  }
                  iVar36 = (int)uVar71;
                  local_838._0_4_ = uVar39 + 1;
                  local_848 = local_848 + 0x38;
                  local_828 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
                              ((longlong)&(local_828->AllocatorInstance).Data + 1);
                  pFVar83 = local_818;
                } while ((int)local_838._0_4_ < local_7a8._0_4_);
              }
              iVar37 = local_7a8._0_4_ + this->FirstUnbuiltIndex;
              local_838 = (double)CONCAT44(local_838._4_4_,iVar37);
              uVar73 = iVar37 - 1;
              uVar64 = uVar64 + this->FirstUnbuiltIndex;
              if ((pFVar83->bNeedsSingleLODRuns != false) && (iVar36 < 8)) {
                pTVar62 = pFVar83->SingleLODRuns + iVar36;
                iVar37 = pTVar62->ArrayNum;
                if (iVar37 == 0) {
LAB_147cffc62:
                  puVar9 = (pTVar62->AllocatorInstance).Data;
                  local_7d8 = uVar64;
                  if (((puVar9 <= &local_7d8) && (&local_7d8 < puVar9 + pTVar62->ArrayMax)) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar37 = pTVar62->ArrayNum;
                  if (iVar37 == pTVar62->ArrayMax) {
                    iVar37 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                       (0x404,&pTVar62->AllocatorInstance,&pTVar62->ArrayMax);
                  }
                  pTVar62->ArrayNum = iVar37 + 1;
                  (pTVar62->AllocatorInstance).Data[iVar37] = local_7d8;
                  puVar9 = (pTVar62->AllocatorInstance).Data;
                  local_7dc = uVar73;
                  if (((puVar9 <= &local_7dc) && (&local_7dc < puVar9 + pTVar62->ArrayMax)) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar37 = pTVar62->ArrayNum;
                  if (iVar37 == pTVar62->ArrayMax) {
                    iVar37 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                       (0x404,&pTVar62->AllocatorInstance,&pTVar62->ArrayMax);
                  }
                  pTVar62->ArrayNum = iVar37 + 1;
                  (pTVar62->AllocatorInstance).Data[iVar37] = local_7dc;
                }
                else {
                  uVar39 = 0;
                  if ((int)(iVar37 - 1U) < iVar37) {
                    uVar39 = ~(iVar37 - 1U) >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar37 = pTVar62->ArrayNum;
                  if ((pTVar62->AllocatorInstance).Data[(longlong)iVar37 + -1] + 1 != uVar64)
                  goto LAB_147cffc62;
                  uVar39 = 0;
                  if ((int)(iVar37 - 1U) < iVar37) {
                    uVar39 = ~(iVar37 - 1U) >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  (pTVar62->AllocatorInstance).Data[(longlong)pTVar62->ArrayNum + -1] = uVar73;
                }
                pFVar83->TotalSingleLODInstances[iVar36] =
                     pFVar83->TotalSingleLODInstances[iVar36] + (local_838._0_4_ - uVar64);
                iVar37 = local_838._0_4_;
              }
              param_4 = local_820;
              fVar116 = __real_7f7fffff;
              if (pFVar83->bNeedsMultipleLODRuns != false) {
                lVar80 = (longlong)iVar36;
                piVar63 = pFVar83->TotalMultipleLODInstances + lVar80;
                piVar61 = &local_818->MultipleLODRuns[lVar80].ArrayNum;
                lVar42 = lVar80;
                do {
                  if (lVar42 < 8) {
                    *piVar63 = *piVar63 + (iVar37 - uVar64);
                    iVar36 = *piVar61;
                    if (iVar36 != 0) {
                      uVar39 = 0;
                      if ((int)(iVar36 - 1U) < iVar36) {
                        uVar39 = ~(iVar36 - 1U) >> 0x1f;
                      }
                      if ((uVar39 == 0) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      iVar36 = *piVar61;
                      if ((((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                             *)(piVar61 + -2))->AllocatorInstance).Data[(longlong)iVar36 + -1] + 1
                          == uVar64) {
                        uVar39 = 0;
                        if ((int)(iVar36 - 1U) < iVar36) {
                          uVar39 = ~(iVar36 - 1U) >> 0x1f;
                        }
                        if ((uVar39 == 0) &&
                           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar32)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                           *)(piVar61 + -2))->AllocatorInstance).Data[(longlong)*piVar61 + -1] =
                             uVar73;
                        goto LAB_147cfffe0;
                      }
                    }
                    puVar9 = (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                *)(piVar61 + -2))->AllocatorInstance).Data;
                    local_7e0 = uVar64;
                    if (((puVar9 <= &local_7e0) && (&local_7e0 < puVar9 + piVar61[1])) &&
                       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar32)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    iVar36 = *piVar61;
                    if (iVar36 == piVar61[1]) {
                      iVar36 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                         (0x404,(ForElementType<unsigned_int> *)(piVar61 + -2),
                                          piVar61 + 1);
                    }
                    *piVar61 = iVar36 + 1;
                    (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)(piVar61 + -2))->AllocatorInstance).Data[iVar36] = local_7e0;
                    puVar9 = (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                *)(piVar61 + -2))->AllocatorInstance).Data;
                    local_7d4 = uVar73;
                    if (((puVar9 <= &local_7d4) && (&local_7d4 < puVar9 + piVar61[1])) &&
                       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar32)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    iVar36 = *piVar61;
                    if (iVar36 == piVar61[1]) {
                      iVar36 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                         (0x404,(ForElementType<unsigned_int> *)(piVar61 + -2),
                                          piVar61 + 1);
                    }
                    *piVar61 = iVar36 + 1;
                    (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)(piVar61 + -2))->AllocatorInstance).Data[iVar36] = local_7d4;
                  }
LAB_147cfffe0:
                  lVar42 = lVar42 + 1;
                  piVar63 = piVar63 + 1;
                  piVar61 = piVar61 + 4;
                  param_4 = local_820;
                  pFVar83 = local_818;
                  fVar116 = __real_7f7fffff;
                  iVar37 = local_838._0_4_;
                } while (lVar42 <= lVar80);
              }
            }
            else {
              uVar73 = this->FirstUnbuiltIndex;
              iVar36 = local_7a8._0_4_ + uVar73;
              cVar67 = *(char *)(this->_padding_ + 8) + -1;
              uVar64 = iVar36 - 1;
              lVar42 = (longlong)cVar67;
              if ((*(char *)((longlong)aVar43 + 0x18) != '\0') && (cVar67 < '\b')) {
                pTVar62 = pFVar83->SingleLODRuns + cVar67;
                iVar37 = pTVar62->ArrayNum;
                if (iVar37 == 0) {
LAB_147d00282:
                  puVar9 = (pTVar62->AllocatorInstance).Data;
                  local_7f4 = uVar73;
                  if (((puVar9 <= &local_7f4) && (&local_7f4 < puVar9 + pTVar62->ArrayMax)) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar37 = pTVar62->ArrayNum;
                  if (iVar37 == pTVar62->ArrayMax) {
                    iVar37 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                       (0x404,&pTVar62->AllocatorInstance,&pTVar62->ArrayMax);
                  }
                  pTVar62->ArrayNum = iVar37 + 1;
                  (pTVar62->AllocatorInstance).Data[iVar37] = local_7f4;
                  puVar9 = (pTVar62->AllocatorInstance).Data;
                  local_7f0 = uVar64;
                  if (((puVar9 <= &local_7f0) && (&local_7f0 < puVar9 + pTVar62->ArrayMax)) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar37 = pTVar62->ArrayNum;
                  if (iVar37 == pTVar62->ArrayMax) {
                    iVar37 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                       (0x404,&pTVar62->AllocatorInstance,&pTVar62->ArrayMax);
                  }
                  pTVar62->ArrayNum = iVar37 + 1;
                  (pTVar62->AllocatorInstance).Data[iVar37] = local_7f0;
                  param_4 = local_820;
                }
                else {
                  uVar39 = 0;
                  if ((int)(iVar37 - 1U) < iVar37) {
                    uVar39 = ~(iVar37 - 1U) >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  iVar37 = pTVar62->ArrayNum;
                  if ((pTVar62->AllocatorInstance).Data[(longlong)iVar37 + -1] + 1 != uVar73)
                  goto LAB_147d00282;
                  uVar39 = 0;
                  if ((int)(iVar37 - 1U) < iVar37) {
                    uVar39 = ~(iVar37 - 1U) >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  (pTVar62->AllocatorInstance).Data[(longlong)pTVar62->ArrayNum + -1] = uVar64;
                }
                piVar61 = (int *)((longlong)((longlong)aVar43 + 0x120) + (longlong)cVar67 * 4);
                *piVar61 = *piVar61 + local_7a8._0_4_;
              }
              if (*(char *)((longlong)aVar43 + 0x19) != '\0') {
                piVar63 = pFVar83->TotalMultipleLODInstances + lVar42;
                piVar61 = &local_818->MultipleLODRuns[lVar42].ArrayNum;
                lVar80 = lVar42;
                do {
                  if (lVar80 < 8) {
                    *piVar63 = *piVar63 + (iVar36 - uVar73);
                    iVar37 = *piVar61;
                    if (iVar37 != 0) {
                      uVar39 = 0;
                      if ((int)(iVar37 - 1U) < iVar37) {
                        uVar39 = ~(iVar37 - 1U) >> 0x1f;
                      }
                      if ((uVar39 == 0) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      iVar37 = *piVar61;
                      if ((((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                             *)(piVar61 + -2))->AllocatorInstance).Data[(longlong)iVar37 + -1] + 1
                          == uVar73) {
                        uVar39 = 0;
                        if ((int)(iVar37 - 1U) < iVar37) {
                          uVar39 = ~(iVar37 - 1U) >> 0x1f;
                        }
                        if ((uVar39 == 0) &&
                           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar32)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                           *)(piVar61 + -2))->AllocatorInstance).Data[(longlong)*piVar61 + -1] =
                             uVar64;
                        goto LAB_147d00600;
                      }
                    }
                    puVar9 = (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                *)(piVar61 + -2))->AllocatorInstance).Data;
                    local_7ec = uVar73;
                    if (((puVar9 <= &local_7ec) && (&local_7ec < puVar9 + piVar61[1])) &&
                       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar32)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    iVar37 = *piVar61;
                    if (iVar37 == piVar61[1]) {
                      iVar37 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                         (0x404,(ForElementType<unsigned_int> *)(piVar61 + -2),
                                          piVar61 + 1);
                    }
                    *piVar61 = iVar37 + 1;
                    (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)(piVar61 + -2))->AllocatorInstance).Data[iVar37] = local_7ec;
                    puVar9 = (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                                *)(piVar61 + -2))->AllocatorInstance).Data;
                    local_7e8 = uVar64;
                    if (((puVar9 <= &local_7e8) && (&local_7e8 < puVar9 + piVar61[1])) &&
                       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar32)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    iVar37 = *piVar61;
                    if (iVar37 == piVar61[1]) {
                      iVar37 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                         (0x404,(ForElementType<unsigned_int> *)(piVar61 + -2),
                                          piVar61 + 1);
                    }
                    *piVar61 = iVar37 + 1;
                    (((TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)(piVar61 + -2))->AllocatorInstance).Data[iVar37] = local_7e8;
                  }
LAB_147d00600:
                  lVar80 = lVar80 + 1;
                  piVar63 = piVar63 + 1;
                  piVar61 = piVar61 + 4;
                  param_4 = local_820;
                  pFVar83 = local_818;
                } while (lVar80 <= lVar42);
              }
            }
LAB_147d00010:
            this_03 = local_7c8;
            FillDynamicMeshElements(this,local_7c8,param_4,&local_720,pFVar83);
          }
          if ((this_03->Family->EngineShowFlags).HISMCOcclusionBounds != 0) {
            iVar36 = (this->OcclusionBounds).ArrayNum;
            pFVar72 = (this->OcclusionBounds).AllocatorInstance.Data;
            pFVar81 = pFVar72 + (longlong)iVar36 * 0x38;
            while( true ) {
              if ((this->OcclusionBounds).ArrayNum != iVar36) {
                local_83c = 0;
                `TCheckedPointerIterator<UE::Math::TBoxSphereBounds<double,double>_const_,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_83c);
              }
              if (pFVar72 == pFVar81) break;
              local_6c8._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
              local_298._s_0.X = *(double *)pFVar72 - *(double *)(pFVar72 + 0x18);
              local_6c8._s_0.G = FLinearColor::sRGBToLinearTable[0];
              local_280 = *(double *)(pFVar72 + 0x18) + *(double *)pFVar72;
              local_6c8._s_0.B = FLinearColor::sRGBToLinearTable[0];
              local_298._s_0.Y = *(double *)(pFVar72 + 8) - *(double *)(pFVar72 + 0x20);
              local_278 = *(double *)(pFVar72 + 8) + *(double *)(pFVar72 + 0x20);
              local_298._s_0.Z = *(double *)(pFVar72 + 0x10) - *(double *)(pFVar72 + 0x28);
              local_270 = *(double *)(pFVar72 + 0x10) + *(double *)(pFVar72 + 0x28);
              local_6c8._s_0.A = 1.0;
              local_268 = 1;
              pFVar55 = FMeshElementCollector::GetPDI(local_820,local_854);
              DrawWireBox(pFVar55,(TBox<double> *)&local_298._s_0,(FLinearColor *)&local_6c8._s_0,
                          ~(this_03->Family->EngineShowFlags).Game & 1,0.0,0.0,false);
              pFVar72 = pFVar72 + 0x38;
            }
          }
          if ((this_03->Family->EngineShowFlags).HISMCClusterTree != 0) {
            uVar71 = 0;
            if (((this->_padding_ & 0x50000) == 0x50000) || ((this->_padding_ & 0x80000) != 0)) {
              fVar85 = *(float *)((longlong)&this->_padding_ + 4);
            }
            else {
              fVar85 = 0.0;
            }
            pTVar3 = this->ClusterTree;
            iVar36 = pTVar3->ArrayNum;
            pFVar72 = (pTVar3->AllocatorInstance).Data;
            pFVar81 = pFVar72 + (longlong)iVar36 * 0x40;
            while( true ) {
              if (pTVar3->ArrayNum != iVar36) {
                local_83b[0] = 0;
                `TCheckedPointerIterator<FClusterNode_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_83b);
              }
              if (pFVar72 == pFVar81) break;
              local_6b8._s_0.A = 1.0;
              local_240 = (double)fVar85;
              local_230 = 1;
              local_6b8._s_0.R = FLinearColor::sRGBToLinearTable[(int)uVar71 + 100U & 0xff];
              local_260._s_0.Y = (double)*(float *)(pFVar72 + 4) - local_240;
              local_6b8._s_0.G = FLinearColor::sRGBToLinearTable[uVar71];
              local_260._s_0.X = (double)*(float *)pFVar72 - local_240;
              local_248 = (double)*(float *)(pFVar72 + 0x10) + local_240;
              local_260._s_0.Z = (double)*(float *)(pFVar72 + 8) - local_240;
              local_238 = (double)*(float *)(pFVar72 + 0x18) + local_240;
              local_240 = (double)*(float *)(pFVar72 + 0x14) + local_240;
              local_6b8._s_0.B = local_6b8._s_0.G;
              pFVar55 = FMeshElementCollector::GetPDI(local_820,local_854);
              DrawWireBox(pFVar55,(TMatrix<double> *)local_738,(TBox<double> *)&local_260._s_0,
                          (FLinearColor *)&local_6b8._s_0,
                          ~(this_03->Family->EngineShowFlags).Game & 1,0.0,0.0,false);
              uVar71 = (ulonglong)(byte)((char)uVar71 + 5);
              pFVar72 = pFVar72 + 0x40;
            }
          }
          param_4 = local_820;
          if ((this_03->Family->EngineShowFlags).InstancedStaticMeshes == 0) {
            uVar112 = SUB84(__real_3ff0000000000000,0);
            uVar113 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            pTVar56 = local_798;
            param_2 = local_780;
            fVar85 = __real_3f000000;
            param_3 = local_7e4;
            dVar90 = ___xmm_3ff00000000000000000000000000000;
            dVar111 = _UNK_15061cbc8;
            dVar110 = ___xmm_00000000000000003ff0000000000000;
            dVar91 = _UNK_150689518;
          }
          else {
            lVar42 = this->_padding_;
            pFVar55 = FMeshElementCollector::GetPDI(local_820,local_854);
            param_2 = local_780;
            FPrimitiveSceneProxy::RenderBounds
                      ((FPrimitiveSceneProxy *)this,pFVar55,&local_780->EngineShowFlags,
                       (TBoxSphereBounds<double,double> *)&this->_padding_,(lVar42 & 0x600) != 0);
            uVar112 = SUB84(__real_3ff0000000000000,0);
            uVar113 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            pTVar56 = local_798;
            fVar85 = __real_3f000000;
            param_3 = local_7e4;
            dVar90 = ___xmm_3ff00000000000000000000000000000;
            dVar111 = _UNK_15061cbc8;
            dVar110 = ___xmm_00000000000000003ff0000000000000;
            dVar91 = _UNK_150689518;
          }
        }
        else {
          paVar4 = &param_4->OneFrameResources->Next;
          aVar43 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x420,0x10);
          *(undefined8 *)((longlong)aVar43 + 8) = 0;
          this_00 = (FFoliageCullInstanceParams *)((longlong)aVar43 + 0x10);
          *(undefined ***)aVar43 =
               &
               ___7__TObject_UFFoliageCullInstanceParams_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar53.Next = *paVar4;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar43 + 8) = TVar53.Next;
            LOCK();
            aVar54 = *paVar4;
            bVar32 = TVar53.Next == aVar54;
            if (bVar32) {
              *paVar4 = aVar43;
              aVar54 = TVar53.Next;
            }
            UNLOCK();
            TVar53.Next = aVar54;
          } while (!bVar32);
          FFoliageRenderInstanceParams::FFoliageRenderInstanceParams
                    ((FFoliageRenderInstanceParams *)this_00,(bool)(bVar31 ^ 1),bVar31,0 < iVar35);
          this_01 = (FConvexVolume *)((longlong)aVar43 + 0x160);
          this_00->_padding_ = (longlong)&___7FFoliageCullInstanceParams__6B_;
          piVar61 = (int *)((longlong)aVar43 + 0x230);
          *(undefined8 *)((longlong)aVar43 + 0x220) = 0;
          *piVar61 = 0;
          *(undefined4 *)((longlong)aVar43 + 0x234) = 6;
          *(undefined8 *)((longlong)aVar43 + 0x340) = 0;
          *(undefined4 *)((longlong)aVar43 + 0x350) = 0;
          *(undefined4 *)((longlong)aVar43 + 0x354) = 8;
          *(undefined8 *)((longlong)aVar43 + 0x410) = 0;
          *(undefined8 *)((longlong)aVar43 + 0x418) = 0;
          *(TArray<FClusterNode,TSizedDefaultAllocator<32>_> **)((longlong)aVar43 + 0x380) = pTVar3;
          *(undefined8 *)((longlong)aVar43 + 0x404) = 0xffffffffffffffff;
          local_866 = GUseVectorCull;
          *(undefined4 *)((longlong)aVar43 + 0x3c0) = *(undefined4 *)(this->_padding_ + 8);
          *(FSceneView **)((longlong)aVar43 + 0x388) = this_03;
          iVar36 = TAutoConsoleVariable<int>::GetValueOnRenderThread(&CVarDisableCull);
          pFVar29 = local_7c8;
          FVar69 = (ForElementType<UE::Math::TPlane<double>_>)
                   this_03->DynamicMeshElementsShadowCullFrustum;
          local_720.ShadowFrustum = FVar69 != (ForElementType<UE::Math::TPlane<double>_>)0x0;
          if (FVar69 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
            uVar64 = 0;
            if (0 < *(int *)((longlong)FVar69 + 0xd0)) {
              lVar42 = 0;
              do {
                uVar73 = 0;
                if ((int)uVar64 < *(int *)((longlong)FVar69 + 0xd0)) {
                  uVar73 = ~uVar64 >> 0x1f;
                }
                if ((uVar73 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                if (*(ForElementType<UE::Math::TPlane<double>_> *)((longlong)FVar69 + 0xc0) !=
                    (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                  FVar69 = *(ForElementType<UE::Math::TPlane<double>_> *)((longlong)FVar69 + 0xc0);
                }
                local_5f8._padding_ = *(longlong *)(lVar42 + (longlong)FVar69);
                local_5f8._padding_ = (longlong)((double *)(lVar42 + (longlong)FVar69))[1];
                pdVar2 = (double *)(lVar42 + 0x10 + (longlong)FVar69);
                dVar111 = *pdVar2;
                dVar90 = (double)CONCAT44(uVar113,uVar112) /
                         SQRT((double)local_5f8._padding_ * (double)local_5f8._padding_ +
                              (double)local_5f8._padding_ * (double)local_5f8._padding_ +
                              dVar111 * dVar111);
                local_5f8._padding_ = (longlong)((double)local_5f8._padding_ * dVar90);
                local_5f8._padding_ = (longlong)(dVar90 * (double)local_5f8._padding_);
                local_5f8._padding_ = (longlong)(dVar111 * dVar90);
                local_5f8.W = pdVar2[1] * dVar90 -
                              ((double)local_5f8._padding_ *
                               (this_03->PreShadowTranslation).field0_0x0._s_0.Y +
                               (double)local_5f8._padding_ *
                               (this_03->PreShadowTranslation).field0_0x0._s_0.X +
                              (double)local_5f8._padding_ *
                              (this_03->PreShadowTranslation).field0_0x0._s_0.Z);
                UE::Math::TPlane<double>::TransformBy(&local_5f8,&local_5d8,&local_318);
                pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
                auVar92._0_8_ = (double)local_5d8._padding_ * (double)local_5d8._padding_;
                auVar92._8_8_ = 0;
                pFVar44 = this_01;
                if (pFVar57 != (FConvexVolume *)0x0) {
                  pFVar44 = pFVar57;
                }
                auVar103._8_8_ = 0;
                auVar103._0_8_ =
                     (double)local_5d8._padding_ * (double)local_5d8._padding_ + auVar92._0_8_ +
                     (double)local_5d8._padding_ * (double)local_5d8._padding_;
                auVar92 = sqrtpd(auVar92,auVar103);
                dStack_690 = (double)CONCAT44(uVar113,uVar112) / auVar92._0_8_;
                local_6a8._8_8_ = (double)local_5d8._padding_ * dStack_690;
                local_6a8._0_8_ = dStack_690 * (double)local_5d8._padding_;
                local_698 = (double)local_5d8._padding_ * dStack_690;
                dStack_690 = local_5d8.W * dStack_690;
                if (pFVar44 <= (FConvexVolume *)local_6a8) {
                  pFVar44 = this_01;
                  if (pFVar57 != (FConvexVolume *)0x0) {
                    pFVar44 = pFVar57;
                  }
                  if ((local_6a8 <
                       (pFVar44->Planes).AllocatorInstance.InlineData +
                       (longlong)*(int *)((longlong)aVar43 + 0x234) * 0x20) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
                iVar37 = *piVar61;
                if (iVar37 == *(int *)((longlong)aVar43 + 0x234)) {
                  iVar37 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                                     (0x1020,(ForElementType<UE::Math::TPlane<double>_> *)this_01,
                                      (int *)((longlong)aVar43 + 0x234));
                }
                *piVar61 = iVar37 + 1;
                pFVar57 = this_01;
                if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
                  pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
                }
                uVar64 = uVar64 + 1;
                lVar42 = lVar42 + 0x20;
                puVar65 = (pFVar57->Planes).AllocatorInstance.InlineData + (longlong)iVar37 * 0x20;
                *(undefined8 *)puVar65 = local_6a8._0_8_;
                *(undefined8 *)(puVar65 + 8) = local_6a8._8_8_;
                puVar65 = (pFVar57->Planes).AllocatorInstance.InlineData +
                          (longlong)iVar37 * 0x20 + 0x10;
                *(double *)puVar65 = local_698;
                *(double *)(puVar65 + 8) = dStack_690;
                FVar69 = (ForElementType<UE::Math::TPlane<double>_>)
                         this_03->DynamicMeshElementsShadowCullFrustum;
              } while ((int)uVar64 < *(int *)((longlong)FVar69 + 0xd0));
            }
            bVar32 = false;
            local_866 = *(int *)((longlong)aVar43 + 0x230) == 4;
LAB_147cfd7b9:
            fVar86 = 0.0;
            bVar84 = *piVar61 != 0;
            if (bVar84) {
              FConvexVolume::Init(this_01);
            }
            local_868 = !bVar84 || iVar36 != 0;
            local_720.bBlendLODs = bVar31;
            pTVar48 = FSceneView::GetTemporalLODOrigin(local_7c8,&local_4c0,0,bVar31);
            auVar92 = *(undefined1 (*) [16])&pTVar48->field0_0x0;
            dVar111 = auVar92._0_8_;
            dVar110 = auVar92._8_8_;
            dVar90 = (pTVar48->field0_0x0)._s_0.Z;
            dVar91 = (double)CONCAT44(uVar113,uVar112);
            auVar94._8_4_ = auVar92._0_4_;
            auVar94._0_8_ = dVar111;
            auVar94._12_4_ = auVar92._4_4_;
            auVar95._8_4_ = uVar112;
            auVar95._0_8_ = dVar91;
            auVar95._12_4_ = uVar113;
            *(double *)((longlong)aVar43 + 0x390) =
                 dVar110 * local_318.M[1][0] + dVar111 * local_318.M[0][0] +
                 dVar90 * local_318.M[2][0] + dVar91 * local_318.M[3][0];
            *(double *)((longlong)aVar43 + 0x398) =
                 dVar110 * local_318.M[1][1] + auVar94._8_8_ * local_318.M[0][1] +
                 dVar90 * local_318.M[2][1] + auVar95._8_8_ * local_318.M[3][1];
            *(double *)((longlong)aVar43 + 0x3a0) =
                 dVar110 * local_318.M[1][2] + dVar111 * local_318.M[0][2] +
                 dVar90 * local_318.M[2][2] + dVar91 * local_318.M[3][2];
            pTVar48 = FSceneView::GetTemporalLODOrigin(local_7c8,&local_4a8,1,bVar31);
            auVar92 = *(undefined1 (*) [16])&pTVar48->field0_0x0;
            dVar111 = auVar92._0_8_;
            dVar110 = auVar92._8_8_;
            dVar90 = (pTVar48->field0_0x0)._s_0.Z;
            dVar91 = (double)CONCAT44(uVar113,uVar112);
            auVar96._8_4_ = auVar92._0_4_;
            auVar96._0_8_ = dVar111;
            auVar96._12_4_ = auVar92._4_4_;
            auVar97._8_4_ = uVar112;
            auVar97._0_8_ = dVar91;
            auVar97._12_4_ = uVar113;
            *(double *)((longlong)aVar43 + 0x3a8) =
                 dVar110 * local_318.M[1][0] + dVar111 * local_318.M[0][0] +
                 dVar90 * local_318.M[2][0] + dVar91 * local_318.M[3][0];
            *(double *)((longlong)aVar43 + 0x3b0) =
                 dVar110 * local_318.M[1][1] + auVar96._8_8_ * local_318.M[0][1] +
                 dVar90 * local_318.M[2][1] + auVar97._8_8_ * local_318.M[3][1];
            *(double *)((longlong)aVar43 + 0x3b8) =
                 dVar110 * local_318.M[1][2] + dVar111 * local_318.M[0][2] +
                 dVar90 * local_318.M[2][2] + dVar91 * local_318.M[3][2];
            if (((this->_padding_ & 0x50000) == 0x50000) || ((this->_padding_ & 0x80000) != 0)) {
              uVar112 = *(undefined4 *)((longlong)&this->_padding_ + 4);
            }
            else {
              uVar112 = 0;
            }
            *(undefined4 *)((longlong)aVar43 + 0x41c) = uVar112;
            pTVar27 = CVarFoliageMinimumScreenSize.Ref;
            if (!bVar32) {
              bVar32 = IsInParallelRenderingThread();
              if ((!bVar32) &&
                 (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<6409875433831007955>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x6d3,"IsInParallelRenderingThread()"), bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              fVar86 = pTVar27->ShadowedValue[1];
            }
            fVar89 = *(float *)((longlong)&this->_padding_ + 4);
            iVar37 = TConsoleVariableData<int>::GetValueOnRenderThread
                               (CVarFoliageMaxEndCullDistance.Ref);
            pTVar27 = CVarRandomLODRange.Ref;
            bVar32 = IsInParallelRenderingThread();
            if ((!bVar32) &&
               (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<6409875433831007955>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                    ,0x6d3,"IsInParallelRenderingThread()"), bVar32)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar88 = pTVar27->ShadowedValue[1];
            pFVar49 = GetCachedScalabilityCVars();
            fVar87 = pFVar49->ViewDistanceScale;
            plVar5 = *(longlong **)((longlong)aVar43 + 0x380);
            if (((int)plVar5[1] < 1) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            plVar6 = *(longlong **)((longlong)aVar43 + 0x380);
            lVar42 = *plVar5;
            if (((int)plVar6[1] < 1) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            plVar5 = *(longlong **)((longlong)aVar43 + 0x380);
            lVar80 = *plVar6;
            if (((int)plVar5[1] < 1) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar7 = *plVar5;
            local_538.Rotation.XY.m128d_f64[0] = UE::Math::TQuat<double>::Identity.X;
            local_538.Rotation.XY.m128d_f64[1] = UE::Math::TQuat<double>::Identity.Y;
            local_538.Rotation.ZW.m128d_f64[0] = UE::Math::TQuat<double>::Identity.Z;
            local_538.Rotation.ZW.m128d_f64[1] = UE::Math::TQuat<double>::Identity.W;
            lVar8 = this->_padding_;
            local_538.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
            local_538.Translation.XY.m128d_f64[1]._4_4_ =
                 (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
            local_538.Translation.XY.m128d_f64[0]._0_1_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_1_;
            local_538.Translation.XY.m128d_f64[0]._1_1_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._1_1_;
            local_538.Translation.XY.m128d_f64[0]._2_1_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._2_1_;
            local_538.Translation.XY.m128d_f64[0]._3_1_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._3_1_;
            local_538.Translation.XY.m128d_f64[0]._4_1_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._4_1_;
            local_538.Translation.XY.m128d_f64[0]._5_1_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._5_1_;
            local_538.Translation.XY.m128d_f64[0]._6_1_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._6_1_;
            local_538.Translation.XY.m128d_f64[0]._7_1_ =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._7_1_;
            local_538.Translation.ZW.m128d_f64[0] =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_538.Translation.ZW.m128d_f64[1] = 0.0;
            dVar90 = (double)((*(float *)(lVar80 + 0x38) - *(float *)(lVar7 + 0x2c)) * fVar85 +
                             *(float *)(lVar42 + 0x2c));
            local_538.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar90,0);
            local_538.Scale3D.XY.m128d_f64[0] =
                 (double)((*(float *)(lVar80 + 0x34) - *(float *)(lVar7 + 0x28)) * fVar85 +
                         *(float *)(lVar42 + 0x28));
            local_538.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar90 >> 0x20);
            local_538.Scale3D.ZW.m128d_f64[0] =
                 (double)((*(float *)(lVar80 + 0x3c) - *(float *)(lVar7 + 0x30)) * fVar85 +
                         *(float *)(lVar42 + 0x30));
            local_538.Scale3D.ZW.m128d_f64[1] = 0.0;
            UE::Math::TTransform<double>::ToMatrixWithScale(&local_538,&local_418);
            UE::Math::TBoxSphereBounds<double,double>::TransformBy
                      ((TBoxSphereBounds<double,double> *)(lVar8 + 0x50),&local_478,&local_418);
            fVar115 = (float)((double)*(float *)((longlong)aVar43 + 0x41c) + local_478.SphereRadius)
            ;
            fVar85 = fVar116;
            if (0.0 < fVar86) {
              fVar85 = ComputeBoundsDrawDistance
                                 (fVar86,fVar115,&(local_7c8->ViewMatrices).ProjectionMatrix);
              fVar85 = fVar85 * fVar89;
            }
            fVar86 = (local_7c8->SceneViewInitOptions).OverrideFarClippingPlaneDistance;
            fVar106 = fVar85;
            if ((0.0 < fVar86) && (fVar106 = fVar87 * fVar86, fVar85 <= fVar106)) {
              fVar106 = fVar85;
            }
            iVar38 = (int)((float)(int)this->_padding_ * fVar87);
            iVar68 = iVar38;
            if (((0 < iVar37) && (iVar68 = iVar37, 0 < iVar38)) &&
               (iVar68 = iVar38, iVar37 < iVar38)) {
              iVar68 = iVar37;
            }
            fVar86 = (float)iVar68;
            fVar85 = fVar106;
            if ((0.0 < fVar86) && (fVar85 = fVar86, fVar106 <= fVar86)) {
              fVar85 = fVar106;
            }
            iVar37 = *(int *)((longlong)aVar43 + 0x3c0);
            iVar68 = 1;
            local_720.FinalCullDistance = fVar85;
            bVar32 = !bVar84 || iVar36 != 0;
            if (1 < iVar37) {
              pFVar1 = &local_7c8->ViewMatrices;
              pfVar60 = (float *)((longlong)aVar43 + 0x3c4);
              do {
                fVar87 = ComputeBoundsDrawDistance
                                   (*(float *)((longlong)pfVar60 +
                                              this->_padding_ + (-0x390 - (longlong)this_00)),
                                    fVar115,&pFVar1->ProjectionMatrix);
                fVar87 = fVar87 * fVar89;
                iVar68 = iVar68 + 1;
                fVar86 = fVar87 - fVar88;
                if (fVar85 - fVar88 <= fVar87 - fVar88) {
                  fVar86 = fVar85 - fVar88;
                }
                pfVar60[8] = fVar86;
                fVar86 = fVar85;
                if (fVar87 <= fVar85) {
                  fVar86 = fVar87;
                }
                *pfVar60 = fVar86;
                pfVar60 = pfVar60 + 1;
                iVar37 = *(int *)((longlong)aVar43 + 0x3c0);
                bVar32 = local_868;
              } while (iVar68 < iVar37);
            }
            *(float *)((longlong)((longlong)aVar43 + 0x3e0) + (longlong)iVar37 * 4) =
                 fVar85 - fVar88;
            *(float *)((longlong)((longlong)aVar43 + 0x3c0) +
                      (longlong)*(int *)((longlong)aVar43 + 0x3c0) * 4) = fVar85;
            if ((8 < *(int *)((longlong)aVar43 + 0x3c0)) &&
               (bVar84 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InstanceParams.LODs <= 8",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                                    ,0x6a0,L""), bVar84)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((this->_padding_ == 0) &&
               (bVar84 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RenderData != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                                    ,0x6a1,L""), bVar84)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar36 = local_768;
            uVar71 = 0;
            if (0 < *(int *)((longlong)aVar43 + 0x3c0)) {
              piVar61 = (int *)((longlong)aVar43 + 0x360);
              uVar75 = uVar71;
              do {
                *piVar61 = 2;
                uVar64 = (uint)uVar71;
                if ((((int)uVar64 < 0) || (*(int *)(this->_padding_ + 8) <= (int)uVar64)) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("RenderData->LODResources.IsValidIndex(LODIndex)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                                        ,0x6a8,L""), bVar32)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                plVar5 = (longlong *)this->_padding_;
                uVar73 = 0;
                if ((int)uVar64 < (int)plVar5[1]) {
                  uVar73 = ~uVar64 >> 0x1f;
                }
                if ((uVar73 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                iVar37 = *(int *)(*(longlong *)(*plVar5 + uVar75) + 0x17c);
                if (iVar37 != 0) {
                  *piVar61 = iVar36 / iVar37;
                }
                uVar71 = (ulonglong)(uVar64 + 1);
                piVar61 = piVar61 + 1;
                uVar75 = uVar75 + 8;
                bVar32 = local_868;
              } while ((int)(uVar64 + 1) < *(int *)((longlong)aVar43 + 0x3c0));
            }
            if ((local_720.ShadowFrustum == false) || (local_83d != '\0')) {
              bVar84 = true;
            }
            else {
              bVar84 = false;
            }
            if ((((-1 < this->FirstOcclusionNode) && (-1 < this->LastOcclusionNode)) &&
                (this->FirstOcclusionNode <= this->LastOcclusionNode)) && (bVar84)) {
              uVar64 = FSceneView::GetViewKey(local_7c8);
              pFVar50 = TMapBase<unsigned_int,FFoliageOcclusionResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>_>
                        ::Find((TMapBase<unsigned_int,FFoliageOcclusionResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FFoliageOcclusionResults,0>_>
                                *)&this->OcclusionResults,uVar64);
              if ((pFVar50 != (FFoliageOcclusionResults *)0x0) &&
                 (pFVar50->FrameNumberRenderThread == GFrameNumberRenderThread)) {
                iVar36 = this->LastOcclusionNode - this->FirstOcclusionNode;
                if ((((iVar36 + 1 == pFVar50->NumResults) &&
                     ((iVar37 = pFVar50->ResultsStart, -1 < iVar37 &&
                      (iVar68 = (pFVar50->Results).ArrayNum, iVar37 < iVar68)))) &&
                    (iVar36 = iVar36 + iVar37, -1 < iVar36)) && (iVar36 < iVar68)) {
                  *(int *)((longlong)aVar43 + 0x404) = this->FirstOcclusionNode;
                  *(int *)((longlong)aVar43 + 0x408) = this->LastOcclusionNode;
                  *(FFoliageOcclusionResults **)((longlong)aVar43 + 0x410) = pFVar50;
                  *(int *)((longlong)aVar43 + 0x418) = pFVar50->ResultsStart;
                }
              }
            }
            if (FThreadStats::bPrimaryEnable != false) {
              TVar41 = FThreadSafeStaticStatInner<FStat_STAT_FoliageTraversals,1>::GetStatId
                                 ((FThreadSafeStaticStatInner<FStat_STAT_FoliageTraversals,1> *)
                                  &StatPtr_STAT_FoliageTraversals);
              FVar78 = *(FName *)(TVar41.StatIdPtr)->Name;
              FVar58 = FVar78.ComparisonIndex.Value;
              uVar64 = FVar78.Number;
              local_740 = FVar58.Value;
              uStack_73c = uVar64;
              if (((FVar78 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                this_02 = FThreadStats::GetThreadStats();
                local_678.NameAndInfo.Number = uVar64 & 0xffffafff | 0xa000;
                local_678.StatData.Pad[0] = '\x01';
                local_678.StatData.Pad[1] = '\0';
                local_678.StatData.Pad[2] = '\0';
                local_678.StatData.Pad[3] = '\0';
                local_678.StatData.Pad[4] = '\0';
                local_678.StatData.Pad[5] = '\0';
                local_678.StatData.Pad[6] = '\0';
                local_678.StatData.Pad[7] = '\0';
                local_688 = FVar78;
                local_678.NameAndInfo.Index.Value = FVar58.Value;
                FThreadStats::AddStatMessage(this_02,&local_678);
                FStatsTrace::Add(&local_688,1);
                if (this_02->ScopeCount == 0) {
                  FThreadStats::Flush(this_02,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(this_02,false,false);
                }
              }
            }
            if ((GCaptureDebugRuns == GDebugTag) && (this->CaptureTag == GDebugTag)) {
              iVar36 = 0;
              if (0 < *(int *)((longlong)aVar43 + 0x3c0)) {
                puVar74 = (undefined8 *)((longlong)aVar43 + 0x120);
                piVar61 = (int *)((longlong)aVar43 + 0xa8);
                do {
                  iVar37 = *(int *)((longlong)piVar61 + (longlong)this + (0xdb8 - (longlong)this_00)
                                   );
                  uVar64 = 0;
                  if (0 < iVar37) {
                    lVar42 = 0;
                    do {
                      uVar73 = 0;
                      if ((int)uVar64 < iVar37) {
                        uVar73 = ~uVar64 >> 0x1f;
                      }
                      if ((uVar73 == 0) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      puVar66 = (undefined4 *)
                                (*(longlong *)
                                  ((longlong)this + (0xdb0 - (longlong)this_00) + (longlong)piVar61)
                                + lVar42);
                      if (((*(undefined4 **)(piVar61 + -2) <= puVar66) &&
                          (puVar66 < *(undefined4 **)(piVar61 + -2) + piVar61[1])) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      iVar37 = *piVar61;
                      if (iVar37 == piVar61[1]) {
                        iVar37 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                           (0x404,(ForElementType<unsigned_int> *)(piVar61 + -2),
                                            piVar61 + 1);
                      }
                      *piVar61 = iVar37 + 1;
                      uVar64 = uVar64 + 1;
                      lVar42 = lVar42 + 4;
                      *(undefined4 *)(*(longlong *)(piVar61 + -2) + (longlong)iVar37 * 4) = *puVar66
                      ;
                      iVar37 = *(int *)((longlong)piVar61 +
                                       (longlong)this + (0xdb8 - (longlong)this_00));
                    } while ((int)uVar64 < iVar37);
                  }
                  uVar64 = 0;
                  *(undefined4 *)puVar74 =
                       *(undefined4 *)
                        ((longlong)puVar74 + (longlong)this + (0xdb8 - (longlong)this_00));
                  iVar37 = *(int *)((longlong)piVar61 + (longlong)this + (0xe58 - (longlong)this_00)
                                   );
                  if (0 < iVar37) {
                    lVar42 = 0;
                    do {
                      uVar73 = 0;
                      if ((int)uVar64 < iVar37) {
                        uVar73 = ~uVar64 >> 0x1f;
                      }
                      if ((uVar73 == 0) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      puVar66 = (undefined4 *)
                                (*(longlong *)
                                  ((longlong)this + (0xe50 - (longlong)this_00) + (longlong)piVar61)
                                + lVar42);
                      if (((*(undefined4 **)(piVar61 + -0x22) <= puVar66) &&
                          (puVar66 < *(undefined4 **)(piVar61 + -0x22) + piVar61[-0x1f])) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar32)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      iVar37 = piVar61[-0x20];
                      if (iVar37 == piVar61[-0x1f]) {
                        iVar37 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                                           (0x404,(ForElementType<unsigned_int> *)(piVar61 + -0x22),
                                            piVar61 + -0x1f);
                      }
                      piVar61[-0x20] = iVar37 + 1;
                      uVar64 = uVar64 + 1;
                      lVar42 = lVar42 + 4;
                      *(undefined4 *)(*(longlong *)(piVar61 + -0x22) + (longlong)iVar37 * 4) =
                           *puVar66;
                      iVar37 = *(int *)((longlong)piVar61 +
                                       (longlong)this + (0xe58 - (longlong)this_00));
                    } while ((int)uVar64 < iVar37);
                  }
                  iVar36 = iVar36 + 1;
                  *(undefined4 *)(puVar74 + 4) =
                       *(undefined4 *)
                        ((longlong)puVar74 + (longlong)this + (0xe58 - (longlong)this_00));
                  piVar61 = piVar61 + 4;
                  puVar74 = (undefined8 *)((longlong)puVar74 + 4);
                } while (iVar36 < *(int *)((longlong)aVar43 + 0x3c0));
              }
            }
            else {
              FVar52 = StatPtr_STAT_FoliageTraversalTime;
              if (StatPtr_STAT_FoliageTraversalTime ==
                  (FThreadSafeStaticStat<FStat_STAT_FoliageTraversalTime>)0x0) {
                pFVar51 = ::FName::FName(&local_578,"STAT_FoliageTraversalTime");
                FVar52 = (FThreadSafeStaticStat<FStat_STAT_FoliageTraversalTime>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FoliageTraversalTime,
                                    *pFVar51,L"Traversal Time","STATGROUP_Foliage",
                                    "STATCAT_Advanced",L"Foliage",true,true,ST_int64,true,false,
                                    MCR_Invalid);
              }
              FVar78 = *(FName *)FVar52;
              bVar25 = false;
              bVar84 = false;
              local_6e8.ComparisonIndex.Value = 0;
              local_6e8.Number = 0;
              bVar10 = false;
              bVar33 = false;
              FVar58 = FVar78.ComparisonIndex.Value;
              uVar64 = FVar78.Number;
              if ((FVar58.Value == 0) && (uVar64 == 0)) {
LAB_147cfe48e:
                bVar25 = bVar10;
                bVar84 = bVar33;
                bVar33 = false;
                local_7b8 = local_6e8;
                FVar78 = local_6e8;
              }
              else {
                if (GCycleStatsShouldEmitNamedEvents != 0) {
                  local_764.Bits = 0;
                  FGenericPlatformMisc::BeginNamedEvent
                            ((FColor *)&local_764._s_0,(char *)*(FName *)((longlong)FVar52 + 0x10));
                  bVar25 = false;
                  bVar84 = true;
                  bVar10 = false;
                  bVar33 = true;
                  if (-1 < CpuChannel->Enabled) {
                    local_730.ComparisonIndex.Value = FVar58.Value;
                    local_730.Number = uVar64;
                    FCpuProfilerTrace::OutputBeginDynamicEventWithId
                              (&local_730,(wchar_t *)*(FName *)((longlong)FVar52 + 8),
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\HierarchicalInstancedStaticMesh.cpp"
                               ,0x6dd);
                    bVar25 = true;
                    bVar84 = true;
                    bVar10 = true;
                    bVar33 = true;
                  }
                }
                if (FThreadStats::bPrimaryEnable == false) goto LAB_147cfe48e;
                local_7b8 = FVar78;
                local_728 = FVar58.Value;
                uStack_724 = uVar64;
                local_6e8 = FVar78;
                FThreadStats::AddMessage(FVar78,CycleScopeStart);
                bVar33 = true;
              }
              iVar37 = *(int *)((longlong)aVar43 + 0x3c0) + -1;
              iVar36 = *(int *)((longlong)&this->_padding_ + 4);
              iVar68 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarMinLOD.Ref);
              if (iVar68 < iVar37) {
                iVar37 = iVar68;
              }
              iVar68 = iVar36;
              if ((-1 < iVar37) && (iVar68 = iVar37, iVar37 < iVar36)) {
                iVar68 = iVar36;
              }
              iVar36 = *(int *)((longlong)aVar43 + 0x3c0);
              iVar37 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarForceLOD.Ref);
              if (iVar37 < 0) {
                iVar37 = (int)this->_padding_;
                if (0 < iVar37) goto LAB_147cfe50a;
              }
              else {
                iVar37 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarForceLOD.Ref);
                if (-1 < iVar37) {
LAB_147cfe50a:
                  iVar38 = *(int *)((longlong)aVar43 + 0x3c0) + -1;
                  if (iVar37 < iVar38) {
                    iVar38 = iVar37;
                  }
                  iVar68 = 0;
                  iVar36 = 0;
                  if (0 < iVar38) {
                    iVar68 = iVar38;
                    iVar36 = iVar38;
                  }
                }
              }
              uVar34 = FStaticMeshSceneProxy::GetCurrentFirstLODIdx_Internal
                                 ((FStaticMeshSceneProxy *)this);
              iVar37 = (int)(char)uVar34;
              if ((char)uVar34 < iVar68) {
                iVar37 = iVar68;
              }
              iVar68 = TConsoleVariableData<int>::GetValueOnRenderThread(CVarCullAll.Ref);
              if (iVar68 < 1) {
                bVar10 = *(float *)((longlong)aVar43 + 0x41c) == 0.0;
                if (local_866 == '\0') {
                  if (bVar10) {
                    Traverse<0,0>(this,this_00,0,iVar37,iVar36,bVar32);
                  }
                  else {
                    Traverse<0,1>(this,this_00,0,iVar37,iVar36,bVar32);
                  }
                }
                else if (bVar10) {
                  Traverse<1,0>(this,this_00,0,iVar37,iVar36,bVar32);
                }
                else {
                  Traverse<1,1>(this,this_00,0,iVar37,iVar36,bVar32);
                }
              }
              if ((GCaptureDebugRuns == GDebugTag) && (this->CaptureTag != GDebugTag)) {
                this->CaptureTag = GDebugTag;
                local_838 = (double)((ulonglong)local_838 & 0xffffffff00000000);
                if (0 < *(int *)((longlong)aVar43 + 0x3c0)) {
                  pTVar76 = this->SingleDebugRuns;
                  pTVar77 = this->MultipleDebugRuns;
                  piVar63 = this->SingleDebugTotalInstances;
                  piVar61 = &this->SingleDebugRuns[0].ArrayMax;
                  do {
                    pTVar76->ArrayNum = 0;
                    local_828 = pTVar77;
                    if (pTVar76->ArrayMax != 0) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,0,&pTVar76->AllocatorInstance,0,piVar61);
                    }
                    uVar64 = 0;
                    *piVar63 = *(int *)((longlong)this_00 + (-0xdb8 - (longlong)this) +
                                       (longlong)piVar63);
                    if (0 < *(int *)((longlong)pTVar76 +
                                    (longlong)this_00 + (-0xdb0 - (longlong)this))) {
                      lVar42 = 0;
                      do {
                        uVar73 = 0;
                        if ((int)uVar64 <
                            *(int *)((longlong)this_00 + (-0xdb0 - (longlong)this) +
                                    (longlong)pTVar76)) {
                          uVar73 = ~uVar64 >> 0x1f;
                        }
                        if ((uVar73 == 0) &&
                           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar32)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        pFVar72 = (pTVar76->AllocatorInstance).Data;
                        pFVar81 = (FScriptContainerElement *)
                                  (*(longlong *)
                                    ((longlong)pTVar76 +
                                    (longlong)this_00 + (-0xdb8 - (longlong)this)) + lVar42);
                        if (((pFVar72 <= pFVar81) &&
                            (pFVar81 < pFVar72 + (longlong)pTVar76->ArrayMax * 4)) &&
                           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar32)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        iVar36 = pTVar76->ArrayNum;
                        if (iVar36 == pTVar76->ArrayMax) {
                          iVar36 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&pTVar76->AllocatorInstance,&pTVar76->ArrayMax);
                        }
                        pTVar76->ArrayNum = iVar36 + 1;
                        uVar64 = uVar64 + 1;
                        lVar42 = lVar42 + 4;
                        *(undefined4 *)((pTVar76->AllocatorInstance).Data + (longlong)iVar36 * 4) =
                             *(undefined4 *)pFVar81;
                        pTVar77 = local_828;
                      } while ((int)uVar64 <
                               *(int *)((longlong)pTVar76 +
                                       (longlong)this_00 + (-0xdb0 - (longlong)this)));
                    }
                    pTVar76[10].ArrayNum = 0;
                    if (pTVar76[10].ArrayMax != 0) {
                      UE::Core::Private::
                      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,0,&pTVar77->AllocatorInstance,0,&pTVar76[10].ArrayMax);
                    }
                    uVar64 = 0;
                    piVar63[0x28] =
                         *(int *)((longlong)this_00 + (-0xd98 - (longlong)this) + (longlong)piVar63)
                    ;
                    if (0 < *(int *)((longlong)pTVar76 +
                                    (longlong)this_00 + (-0xe30 - (longlong)this))) {
                      lVar42 = 0;
                      do {
                        uVar73 = 0;
                        if ((int)uVar64 <
                            *(int *)((longlong)pTVar76 +
                                    (longlong)this_00 + (-0xe30 - (longlong)this))) {
                          uVar73 = ~uVar64 >> 0x1f;
                        }
                        if ((uVar73 == 0) &&
                           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar32)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        pFVar72 = pTVar76[10].AllocatorInstance.Data;
                        pFVar81 = (FScriptContainerElement *)
                                  (*(longlong *)
                                    ((longlong)pTVar76 +
                                    (longlong)this_00 + (-0xe38 - (longlong)this)) + lVar42);
                        if (((pFVar72 <= pFVar81) &&
                            (pFVar81 < pFVar72 + (longlong)pTVar76[10].ArrayMax * 4)) &&
                           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar32)) {
                          pcVar11 = (code *)swi(3);
                          (*pcVar11)();
                          return;
                        }
                        iVar36 = pTVar76[10].ArrayNum;
                        if (iVar36 == pTVar76[10].ArrayMax) {
                          iVar36 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&pTVar76[10].AllocatorInstance,
                                              &pTVar76[10].ArrayMax);
                        }
                        pTVar76[10].ArrayNum = iVar36 + 1;
                        uVar64 = uVar64 + 1;
                        lVar42 = lVar42 + 4;
                        *(undefined4 *)(pTVar76[10].AllocatorInstance.Data + (longlong)iVar36 * 4) =
                             *(undefined4 *)pFVar81;
                        pTVar77 = local_828;
                      } while ((int)uVar64 <
                               *(int *)((longlong)pTVar76 +
                                       (longlong)this_00 + (-0xe30 - (longlong)this)));
                    }
                    piVar63 = piVar63 + 1;
                    iVar36 = local_838._0_4_ + 1;
                    pTVar77 = pTVar77 + 1;
                    local_838 = (double)CONCAT44(local_838._4_4_,iVar36);
                    pTVar76 = pTVar76 + 1;
                    piVar61 = piVar61 + 4;
                    FVar78 = local_7b8;
                    local_828 = pTVar77;
                  } while (iVar36 < *(int *)((longlong)aVar43 + 0x3c0));
                }
              }
              if (bVar84) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar25) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (bVar33) {
                FThreadStats::AddMessage(FVar78,CycleScopeEnd);
              }
            }
            this_03 = local_7c8;
            param_4 = local_820;
            FillDynamicMeshElements
                      (this,local_7c8,local_820,&local_720,(FFoliageRenderInstanceParams *)this_00);
            uVar112 = SUB84(__real_3ff0000000000000,0);
            uVar113 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            goto LAB_147cfe95c;
          }
          pdVar2 = (this_03->ViewMatrices).ProjectionMatrix.M[3] + 3;
          bVar32 = (double)CONCAT44(uVar113,uVar112) == *pdVar2;
          bVar84 = (double)CONCAT44(uVar113,uVar112) < *pdVar2;
          if (((local_7c8->bIsSinglePassStereo == false) ||
              (bVar33 = IStereoRendering::IsStereoEyeView(local_7c8), !bVar33)) ||
             ((GEngine->StereoRenderingDevice).Object == (IStereoRendering *)0x0)) {
            VectorMatrixMultiply
                      (&local_1a8,(TMatrix<double> *)local_738,
                       &(pFVar29->ViewMatrices).ViewProjectionMatrix);
            GetViewFrustumBounds(this_01,&local_1a8,false,false);
            if (bVar84 || bVar32) goto LAB_147cfd7c9;
            if (*(int *)((longlong)aVar43 + 0x230) == 4) goto LAB_147cfd1f0;
            local_680 = &local_1a8;
            `FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements'::__l35::<lambda_2>::
            operator()(&local_680);
            pTVar56 = local_798;
            param_4 = local_820;
            param_2 = local_780;
            param_3 = local_7e4;
          }
          else {
            pFVar57 = (pFVar29->StereoCullingFrustum).Object;
            if (pFVar57 == (FConvexVolume *)0x0) {
              pFVar57 = &pFVar29->ViewFrustum;
            }
            FConvexVolume::operator=(this_01,pFVar57);
            iVar37 = *piVar61;
            pFVar57 = this_01;
            if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
              pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
            }
            pTVar26 = &pFVar57->Planes;
            while( true ) {
              if (*piVar61 != iVar37) {
                local_83f = 0;
                `TCheckedPointerIterator<UE::Math::TPlane<double>,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_83f);
              }
              if (pFVar57 ==
                  (FConvexVolume *)
                  ((pTVar26->AllocatorInstance).InlineData + (longlong)iVar37 * 0x20)) break;
              pTVar45 = UE::Math::TPlane<double>::TransformBy
                                  ((TPlane<double> *)pFVar57,&local_438,&local_318);
              lVar42 = pTVar45->_padding_;
              *(longlong *)(pFVar57->Planes).AllocatorInstance.InlineData = pTVar45->_padding_;
              *(longlong *)((pFVar57->Planes).AllocatorInstance.InlineData + 8) = lVar42;
              dVar16 = pTVar45->W;
              *(longlong *)((pFVar57->Planes).AllocatorInstance.InlineData + 0x10) =
                   pTVar45->_padding_;
              *(double *)((pFVar57->Planes).AllocatorInstance.InlineData + 0x18) = dVar16;
              pFVar57 = (FConvexVolume *)((pFVar57->Planes).AllocatorInstance.InlineData + 0x20);
            }
            FConvexVolume::Init(this_01);
            if (bVar84 || bVar32) {
LAB_147cfd7c9:
              local_866 = '\0';
              bVar32 = true;
              goto LAB_147cfd7b9;
            }
            if (*(int *)((longlong)aVar43 + 0x230) == 4) {
LAB_147cfd1f0:
              local_228.M[0][2] = 0.0;
              local_228.M[0][3] = 0.0;
              local_228.M[1][2] = 0.0;
              local_228.M[1][3] = 0.0;
              local_228.M[2][0] = 0.0;
              local_228.M[2][1] = 0.0;
              local_228.M[3][0] = 0.0;
              local_228.M[3][1] = 0.0;
              local_228.M[0][0] = dVar110;
              local_228.M[0][1] = dVar91;
              local_228.M[1][0] = dVar90;
              local_228.M[1][1] = dVar111;
              local_228.M[2][2] = dVar110;
              local_228.M[2][3] = dVar91;
              local_228.M[3][2] = dVar90;
              local_228.M[3][3] = dVar111;
              if ((*piVar61 < 3) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar57 = this_01;
              if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
                pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
              }
              puVar65 = (pFVar57->Planes).AllocatorInstance.InlineData + 0x40;
              if ((*piVar61 < 2) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar44 = this_01;
              if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
                pFVar44 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
              }
              puVar70 = (pFVar44->Planes).AllocatorInstance.InlineData + 0x20;
              if ((*piVar61 < 1) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar46 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
              if ((*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) ||
                 (pFVar46 = this_01, this_01 != (FConvexVolume *)0x0)) {
                local_228.M[0][0] = *(double *)(pFVar46->Planes).AllocatorInstance.InlineData;
                local_228.M[0][1] = *(double *)((pFVar46->Planes).AllocatorInstance.InlineData + 8);
                local_228.M[0][2] =
                     *(double *)((pFVar46->Planes).AllocatorInstance.InlineData + 0x10);
              }
              if (puVar70 != (uchar *)0x0) {
                local_228.M[1][0] = *(double *)puVar70;
                local_228.M[1][1] =
                     *(double *)((pFVar44->Planes).AllocatorInstance.InlineData + 0x28);
                local_228.M[1][2] =
                     *(double *)((pFVar44->Planes).AllocatorInstance.InlineData + 0x30);
              }
              if (puVar65 != (uchar *)0x0) {
                local_228.M[2][0] = *(double *)puVar65;
                local_228.M[2][1] =
                     *(double *)((pFVar57->Planes).AllocatorInstance.InlineData + 0x48);
                local_228.M[2][2] =
                     *(double *)((pFVar57->Planes).AllocatorInstance.InlineData + 0x50);
              }
              pTVar47 = UE::Math::TMatrix<double>::Inverse(&local_228,&local_398);
              local_818 = (FFoliageRenderInstanceParams *)pTVar47->M[3][1];
              dVar90 = pTVar47->M[0][0];
              dVar111 = pTVar47->M[1][0];
              dVar110 = pTVar47->M[2][0];
              dVar91 = pTVar47->M[0][1];
              dVar16 = pTVar47->M[1][1];
              dVar22 = pTVar47->M[2][1];
              local_778 = pTVar47->M[0][2];
              dVar23 = pTVar47->M[1][2];
              local_838 = pTVar47->M[2][2];
              local_788 = pTVar47->M[3][2];
              local_7b8 = *(FName *)(pTVar47->M[0] + 3);
              local_828 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)pTVar47->M[1][3];
              local_7a8 = pTVar47->M[2][3];
              local_6d8._0_8_ = pTVar47->M[3][3];
              if ((*piVar61 < 3) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar57 = this_01;
              if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
                pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
              }
              dVar21 = *(double *)((pFVar57->Planes).AllocatorInstance.InlineData + 0x58);
              if ((*piVar61 < 2) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar57 = this_01;
              if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
                pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
              }
              dVar108 = *(double *)((pFVar57->Planes).AllocatorInstance.InlineData + 0x38);
              if ((*piVar61 < 1) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar57 = this_01;
              if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
                pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
              }
              uVar64 = 0;
              dVar109 = *(double *)((pFVar57->Planes).AllocatorInstance.InlineData + 0x18);
              auVar105._8_4_ = SUB84(dVar108,0);
              auVar105._0_8_ = dVar108;
              auVar105._12_4_ = (int)((ulonglong)dVar108 >> 0x20);
              dVar13 = dVar21 * local_778;
              dVar114 = (double)local_7b8 * 0.0;
              dVar12 = (double)local_828 * 0.0;
              dVar107 = dVar21 * local_838;
              dVar15 = local_7a8 * 0.0;
              if (0 < *(int *)((longlong)aVar43 + 0x230)) {
                lVar42 = 0;
                do {
                  uVar73 = 0;
                  if ((int)uVar64 < *piVar61) {
                    uVar73 = ~uVar64 >> 0x1f;
                  }
                  if ((uVar73 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar57 = this_01;
                  if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
                    pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
                  }
                  puVar65 = (pFVar57->Planes).AllocatorInstance.InlineData + lVar42;
                  local_558._s_0.X = (double)*(undefined8 *)puVar65;
                  local_558._s_0.Y = (double)*(undefined8 *)(puVar65 + 8);
                  puVar65 = (pFVar57->Planes).AllocatorInstance.InlineData + lVar42 + 0x10;
                  local_558._s_0.Z = (double)*(undefined8 *)puVar65;
                  auStack_540 = *(uchar (*) [8])(puVar65 + 8);
                  UE::Math::TVector<double>::GetSafeNormal
                            ((TVector<double> *)&local_558._s_0,(TVector<double> *)&local_570._s_0,
                             __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
                  auVar92 = local_570._0_16_;
                  auVar24._4_8_ = extraout_XMM0_Qb;
                  auVar24._0_4_ = local_570._4_4_;
                  auVar93._0_8_ = auVar24._0_8_ << 0x20;
                  auVar93._8_4_ = local_570._8_4_;
                  auVar93._12_4_ = local_570._12_4_;
                  local_5b8 = local_570._0_16_;
                  uVar73 = 0;
                  if ((int)uVar64 < *piVar61) {
                    uVar73 = ~uVar64 >> 0x1f;
                  }
                  local_5a8 = local_570._s_0.Z;
                  dStack_5a0 = (auVar105._8_8_ * dVar16 + dVar109 * dVar111 + dVar21 * dVar23 +
                               dVar12) * auVar93._8_8_ +
                               (dVar108 * dVar91 + dVar109 * dVar90 + dVar13 + dVar114) *
                               local_570._0_8_ +
                               (dVar108 * dVar22 + dVar109 * dVar110 + dVar107 + dVar15) *
                               local_570._s_0.Z;
                  if ((uVar73 == 0) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar32)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar57 = this_01;
                  if (*(FConvexVolume **)((longlong)aVar43 + 0x220) != (FConvexVolume *)0x0) {
                    pFVar57 = *(FConvexVolume **)((longlong)aVar43 + 0x220);
                  }
                  uVar64 = uVar64 + 1;
                  *(undefined1 (*) [16])((pFVar57->Planes).AllocatorInstance.InlineData + lVar42) =
                       auVar92;
                  puVar65 = (pFVar57->Planes).AllocatorInstance.InlineData + lVar42 + 0x10;
                  *(double *)puVar65 = local_5a8;
                  *(double *)(puVar65 + 8) = dStack_5a0;
                  lVar42 = lVar42 + 0x20;
                } while ((int)uVar64 < *(int *)((longlong)aVar43 + 0x230));
              }
              bVar32 = false;
              uVar112 = SUB84(__real_3ff0000000000000,0);
              uVar113 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              fVar85 = __real_3f000000;
              fVar116 = __real_7f7fffff;
              goto LAB_147cfd7b9;
            }
            local_83e = 0;
            `FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements'::__l30::<lambda_1>::
            operator()(&local_83e);
            pTVar56 = local_798;
            param_4 = local_820;
            param_2 = local_780;
            param_3 = local_7e4;
          }
        }
LAB_147d00870:
        iVar36 = pTVar56->ArrayNum;
        local_854 = local_854 + 1;
        local_790 = local_790 + 8;
      } while ((int)local_854 < iVar36);
    }
    if ((local_758 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_758 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_758 & 4) != 0) {
      FThreadStats::AddMessage(local_760,CycleScopeEnd);
    }
    local_758 = 0;
    if ((local_748 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_748 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_748 & 4) != 0) {
      FThreadStats::AddMessage(local_750,CycleScopeEnd);
    }
  }
  else {
    FInstancedStaticMeshSceneProxy::GetDynamicMeshElements
              ((FInstancedStaticMeshSceneProxy *)this,param_1,param_2,param_3,param_4);
  }
  return;
}

// GetInstanceDrawDistanceMinMax @ 147d06300

bool __thiscall
FHierarchicalStaticMeshSceneProxy::GetInstanceDrawDistanceMinMax
          (FHierarchicalStaticMeshSceneProxy *this,TVector2<float> *param_1)

{
  param_1->field0_0x0 = (TVector2<float>_u_0)0x0;
  return false;
}

// GetOcclusionQueries @ 147d098e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> * __thiscall
FHierarchicalStaticMeshSceneProxy::GetOcclusionQueries
          (FHierarchicalStaticMeshSceneProxy *this,FSceneView *param_1)

{
  return &this->OcclusionBounds;
}

// GetTypeHash @ 147d0fe20

ulong64 __thiscall
FHierarchicalStaticMeshSceneProxy::GetTypeHash(FHierarchicalStaticMeshSceneProxy *this)

{
  return 0x15520dc28;
}

// GetViewRelevance @ 147d13840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FHierarchicalStaticMeshSceneProxy::GetViewRelevance
          (FHierarchicalStaticMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  EHISMViewRelevanceType EVar2;
  undefined8 uVar3;
  FPrimitiveViewRelevance *pFVar4;
  uint uVar5;
  FPrimitiveViewRelevance local_18;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  EVar2 = this->ViewRelevance;
  if (EVar2 == Grass) {
    uVar5 = *(uint *)&(param_1->Family->EngineShowFlags).field_0x8 >> 0x16;
  }
  else if (EVar2 == Foliage) {
    uVar5 = *(uint *)&(param_1->Family->EngineShowFlags).field_0x8 >> 0x12;
  }
  else {
    if (EVar2 != HISM) goto LAB_147d138a6;
    uVar5 = *(uint *)&(param_1->Family->EngineShowFlags).field_0x8 >> 0x11;
  }
  if ((uVar5 & 1) == 0) {
    return __return_storage_ptr__;
  }
LAB_147d138a6:
  pFVar4 = FStaticMeshSceneProxy::GetViewRelevance((FStaticMeshSceneProxy *)this,&local_18,param_1);
  uVar3 = *(undefined8 *)&pFVar4->field_0x8;
  __return_storage_ptr__->_padding_ = pFVar4->_padding_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar3;
  uVar5 = *(uint *)&__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bStaticRelevance = 0;
  __return_storage_ptr__->bDynamicRelevance = 1;
  if ((0 < (int)this->_padding_) && ((this->_padding_ & 0x8000000) == 0)) {
    *(uint *)&__return_storage_ptr__->field_0x8 = uVar5 & 0xfffffffc;
  }
  return __return_storage_ptr__;
}

// HasSubprimitiveOcclusionQueries @ 147d13ad0

bool __thiscall
FHierarchicalStaticMeshSceneProxy::HasSubprimitiveOcclusionQueries
          (FHierarchicalStaticMeshSceneProxy *this)

{
  return 0 < this->FirstOcclusionNode;
}

// SetupOcclusion @ 147d2bff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FHierarchicalStaticMeshSceneProxy::SetupOcclusion
          (FHierarchicalStaticMeshSceneProxy *this,
          UHierarchicalInstancedStaticMeshComponent *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStackY_278 [32];
  longlong local_228;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined1 local_1e0 [16];
  double local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  undefined1 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  uVar24 = 0;
  this->FirstOcclusionNode = 0;
  this->LastOcclusionNode = 0;
  if ((this->ClusterTree->ArrayNum != 0) && (param_1->OcclusionLayerNumNodes != 0)) {
    while( true ) {
      pTVar4 = this->ClusterTree;
      uVar19 = 0;
      if ((int)(uint)uVar24 < pTVar4->ArrayNum) {
        uVar19 = ~(uint)uVar24 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = this->LastOcclusionNode;
      pTVar5 = this->ClusterTree;
      uVar3 = *(uint *)((pTVar4->AllocatorInstance).Data + uVar24 * 0x40 + 0xc);
      uVar24 = (ulonglong)uVar3;
      uVar20 = 0;
      if ((int)uVar19 < pTVar5->ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((((int)uVar3 < 0) ||
          (iVar25 = *(int *)((pTVar5->AllocatorInstance).Data + (longlong)(int)uVar19 * 0x40 + 0x1c)
          , iVar25 < 0)) || (param_1->OcclusionLayerNumNodes < (int)((iVar25 - uVar3) + 1))) break;
      this->FirstOcclusionNode = uVar3;
      this->LastOcclusionNode = iVar25;
    }
  }
  iVar25 = (this->LastOcclusionNode - this->FirstOcclusionNode) + 1;
  if (iVar25 < 2) {
    this->FirstOcclusionNode = -1;
    this->LastOcclusionNode = -1;
  }
  else {
    piVar1 = &(this->OcclusionBounds).ArrayMax;
    piVar2 = &(this->OcclusionBounds).ArrayNum;
    if (*piVar1 < iVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar25,&(this->OcclusionBounds).AllocatorInstance,*piVar2,piVar1);
    }
    (**(code **)(*(longlong *)param_1 + 0x808))(param_1,&local_168);
    dVar17 = _UNK_150689678;
    dVar16 = ___xmm_3fe00000000000003fe0000000000000;
    uVar15 = _UNK_15061cc8c;
    uVar20 = _UNK_15061cc88;
    uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if (((this->_padding_ & 0x50000) == 0x50000) || ((this->_padding_ & 0x80000) != 0)) {
      fVar26 = *(float *)((longlong)&this->_padding_ + 4);
    }
    else {
      fVar26 = 0.0;
    }
    uVar24 = (ulonglong)this->FirstOcclusionNode;
    if (this->FirstOcclusionNode <= this->LastOcclusionNode) {
      local_228 = uVar24 << 6;
      dVar14 = (double)fVar26;
      do {
        pTVar4 = this->ClusterTree;
        uVar23 = (uint)uVar24;
        uVar21 = 0;
        if ((int)uVar23 < pTVar4->ArrayNum) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (pTVar4->AllocatorInstance).Data;
        pTVar4 = this->ClusterTree;
        uVar21 = 0;
        if ((int)uVar23 < pTVar4->ArrayNum) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (pTVar4->AllocatorInstance).Data;
        local_178 = 1;
        dVar9 = (double)*(float *)(pFVar7 + local_228) - dVar14;
        local_180 = (double)*(float *)(pFVar6 + local_228 + 0x18) + dVar14;
        local_198 = (double)*(float *)(pFVar7 + local_228 + 8) - dVar14;
        dVar12 = (double)*(float *)(pFVar6 + local_228 + 0x10) + dVar14;
        dVar27 = (double)*(float *)(pFVar6 + local_228 + 0x14) + dVar14;
        dVar29 = (double)*(float *)(pFVar7 + local_228 + 4) - dVar14;
        local_190._8_4_ = SUB84(dVar27,0);
        local_190._0_8_ = dVar12;
        local_190._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        dVar10 = (local_180 + local_198) * dVar16;
        local_1a8._8_4_ = SUB84(dVar29,0);
        local_1a8._0_8_ = dVar9;
        local_1a8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        dVar11 = (dVar12 + dVar9) * dVar16;
        dVar28 = (dVar27 + dVar29) * dVar17;
        dVar13 = (dVar12 - dVar9) * dVar16;
        dVar27 = (dVar27 - dVar29) * dVar17;
        dVar9 = local_148 * dVar28 + local_168 * dVar11 + local_128 * dVar10 + local_108;
        dVar12 = dStack_140 * dVar28 + dStack_160 * dVar11 + dStack_120 * dVar10 + dStack_100;
        dVar29 = (local_180 - local_198) * dVar16;
        dVar30 = local_138 * dVar28 + local_158 * dVar11 + local_118 * dVar10 + local_f8;
        dVar10 = (double)CONCAT44((uint)((ulonglong)(local_148 * dVar27) >> 0x20) & uVar3,
                                  SUB84(local_148 * dVar27,0) & uVar19) +
                 (double)CONCAT44((uint)((ulonglong)(local_168 * dVar13) >> 0x20) & uVar3,
                                  SUB84(local_168 * dVar13,0) & uVar19) +
                 (double)CONCAT44((uint)((ulonglong)(local_128 * dVar29) >> 0x20) & uVar3,
                                  SUB84(local_128 * dVar29,0) & uVar19);
        dVar11 = (double)CONCAT44((uint)((ulonglong)(dStack_140 * dVar27) >> 0x20) & uVar15,
                                  SUB84(dStack_140 * dVar27,0) & uVar20) +
                 (double)CONCAT44((uint)((ulonglong)(dStack_160 * dVar13) >> 0x20) & uVar15,
                                  SUB84(dStack_160 * dVar13,0) & uVar20) +
                 (double)CONCAT44((uint)((ulonglong)(dStack_120 * dVar29) >> 0x20) & uVar15,
                                  SUB84(dStack_120 * dVar29,0) & uVar20);
        pFVar6 = (this->OcclusionBounds).AllocatorInstance.Data;
        local_1b0 = 1;
        local_1b8 = (double)CONCAT44((uint)((ulonglong)(local_138 * dVar27) >> 0x20) & uVar3,
                                     SUB84(local_138 * dVar27,0) & uVar19) +
                    (double)CONCAT44((uint)((ulonglong)(local_158 * dVar13) >> 0x20) & uVar3,
                                     SUB84(local_158 * dVar13,0) & uVar19) +
                    (double)CONCAT44((uint)((ulonglong)(local_118 * dVar29) >> 0x20) & uVar3,
                                     SUB84(local_118 * dVar29,0) & uVar19);
        local_218 = dVar9 - dVar10;
        dStack_210 = dVar12 - dVar11;
        dVar10 = dVar10 + dVar9;
        dVar11 = dVar11 + dVar12;
        dVar28 = dVar10 - local_218;
        local_1c8._8_4_ = SUB84(dVar11,0);
        local_1c8._0_8_ = dVar10;
        local_1c8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        dVar11 = dVar11 - dStack_210;
        dStack_200 = dVar28 * __real_3fe0000000000000;
        local_1d0 = dVar30 - local_1b8;
        local_1b8 = local_1b8 + dVar30;
        local_1e0._8_4_ = SUB84(dStack_210,0);
        local_1e0._0_8_ = local_218;
        local_1e0._12_4_ = (int)((ulonglong)dStack_210 >> 0x20);
        local_218 = local_218 + dStack_200;
        dVar9 = local_1b8 - local_1d0;
        local_1f8 = dVar11 * __real_3fe0000000000000;
        dStack_210 = dStack_210 + local_1f8;
        dStack_1f0 = dVar9 * __real_3fe0000000000000;
        local_208 = local_1d0 + dStack_1f0;
        local_1e8 = SQRT((dVar11 * dVar11 + dVar28 * dVar28 + dVar9 * dVar9) *
                         __real_3fd0000000000000);
        if (((pFVar6 <= (FScriptContainerElement *)&local_218) &&
            ((FScriptContainerElement *)&local_218 < pFVar6 + (longlong)*piVar1 * 0x38)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar25 = *piVar2;
        if (iVar25 == *piVar1) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&(this->OcclusionBounds).AllocatorInstance,piVar1);
          *piVar2 = iVar25;
        }
        local_228 = local_228 + 0x40;
        *piVar2 = iVar25 + 1;
        uVar24 = (ulonglong)(uVar23 + 1);
        lVar22 = (longlong)iVar25 * 0x38;
        pFVar6 = (this->OcclusionBounds).AllocatorInstance.Data;
        *(double *)(pFVar6 + lVar22) = local_218;
        *(double *)(pFVar6 + lVar22 + 8) = dStack_210;
        *(double *)(pFVar6 + lVar22 + 0x10) = local_208;
        *(double *)(pFVar6 + lVar22 + 0x10 + 8) = dStack_200;
        *(double *)(pFVar6 + lVar22 + 0x20) = local_1f8;
        *(double *)(pFVar6 + lVar22 + 0x20 + 8) = dStack_1f0;
        *(double *)(pFVar6 + lVar22 + 0x30) = local_1e8;
      } while ((int)(uVar23 + 1) <= this->LastOcclusionNode);
    }
  }
  return;
}

// operator() @ 15051b750

bool __thiscall
`FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements'::__l30::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8992910310864062009>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8992910310864062009>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15051b810

bool __thiscall
`FHierarchicalStaticMeshSceneProxy::GetDynamicMeshElements'::__l35::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8992910310864062023>);
  if (bVar2) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_48,L"[%g %g %g %g] ");
    iVar5 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_38,L"[%g %g %g %g] ");
    iVar6 = 0;
    iVar5 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar5 = iVar6;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar5);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L"[%g %g %g %g] ");
    iVar5 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = iVar6;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
    iVar5 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar5 = iVar6;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8992910310864062023>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15051b9dd;
    }
  }
  bVar2 = false;
  if (!bVar4) {
    return false;
  }
LAB_15051b9dd:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

