// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 47

// AddMeshCards @ 144c28490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLumenSceneData::AddMeshCards(FLumenSceneData *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  TArray<int,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FPrimitiveSceneInfo *this_00;
  FPrimitiveSceneProxy *pFVar4;
  ForElementType<int> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ForElementType<FPrimitiveSceneInfo_*> this_01;
  FInstanceSceneDataBuffers *this_02;
  TMatrix<double> *pTVar10;
  longlong lVar11;
  FLumenPrimitiveGroupCullingInfo *pFVar12;
  FLumenMeshCards *pFVar13;
  ForElementType<int> FVar14;
  ForElementType<FPrimitiveSceneInfo_*> FVar15;
  uint uVar16;
  undefined1 auStackY_3e8 [32];
  undefined1 local_398 [4];
  int local_394 [7];
  ForElementType<FPrimitiveSceneInfo_*> local_378;
  FLumenPrimitiveGroupCullingInfo *local_370;
  TMatrix<double> local_368;
  TMatrix<double> local_2e8;
  TVector<double>_u_0 local_268;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238;
  undefined8 local_237;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  undefined8 local_200;
  FSurfelCluster *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  TVector<double>_u_0 local_1d8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8;
  undefined8 local_1a7;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  FSurfelCluster *local_168;
  undefined8 local_160;
  undefined4 local_158;
  TMatrix<double> local_148;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  this_01 = (ForElementType<FPrimitiveSceneInfo_*>)
            TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator[]
                      (&this->PrimitiveGroups,param_1);
  if (*(int *)((longlong)this_01 + 0x1c) < 0) {
    if ((*(byte *)((longlong)this_01 + 0x38) & 4) == 0) {
      bVar7 = FLumenPrimitiveGroup::HasMergedInstances((FLumenPrimitiveGroup *)this_01);
      if (bVar7) {
        local_1a8 = 0;
        local_198 = (void *)0x0;
        local_1d8._s_0.X = 0.0;
        local_1d8._s_0.Y = 0.0;
        local_1d8._s_0.Z = 0.0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a7 = 0;
        local_190 = 0;
        local_188 = (void *)0x0;
        local_180 = 0;
        local_178 = (void *)0x0;
        local_170 = 0;
        local_168 = (FSurfelCluster *)0x0;
        local_160 = 0;
        local_158 = 0;
        BuildMeshCardsDataForMergedInstances
                  ((FLumenPrimitiveGroup *)this_01,(FMeshCardsBuildData *)&local_1d8._s_0,&local_148
                  );
        AddMeshCardsFromBuildData
                  (this,param_1,&local_148,(FMeshCardsBuildData *)&local_1d8._s_0,
                   (FLumenPrimitiveGroup *)this_01);
        DestructItems<FLumenCardBuildDebugData::FSurfelCluster,int>(local_168,(int)local_160);
        if (local_168 != (FSurfelCluster *)0x0) {
          FMemory::Free(local_168);
        }
        if (local_178 != (void *)0x0) {
          FMemory::Free(local_178);
        }
        if (local_188 != (void *)0x0) {
          FMemory::Free(local_188);
        }
        if (local_198 != (void *)0x0) {
          FMemory::Free(local_198);
        }
      }
      else {
        if ((*(int *)((longlong)this_01 + 0x10) != 1) &&
           (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_874545965275544725>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                               ,0x36b,"PrimitiveGroup.Primitives.Num() == 1"), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((*(int *)((longlong)this_01 + 0x10) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar15 = this_01;
        if (*(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)this_01 + 8) !=
            (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
          FVar15 = *(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)this_01 + 8);
        }
        this_00 = *(FPrimitiveSceneInfo **)FVar15;
        pFVar4 = this_00->Proxy;
        local_368.M[0][0] = (pFVar4->LocalToWorld).M[0][0];
        local_368.M[0][1] = (pFVar4->LocalToWorld).M[0][1];
        local_368.M[0][2] = (pFVar4->LocalToWorld).M[0][2];
        local_368.M[0][3] = (pFVar4->LocalToWorld).M[0][3];
        local_368.M[1][0] = (pFVar4->LocalToWorld).M[1][0];
        local_368.M[1][1] = (pFVar4->LocalToWorld).M[1][1];
        local_368.M[1][2] = (pFVar4->LocalToWorld).M[1][2];
        local_368.M[1][3] = (pFVar4->LocalToWorld).M[1][3];
        local_368.M[2][0] = (pFVar4->LocalToWorld).M[2][0];
        local_368.M[2][1] = (pFVar4->LocalToWorld).M[2][1];
        local_368.M[2][2] = (pFVar4->LocalToWorld).M[2][2];
        local_368.M[2][3] = (pFVar4->LocalToWorld).M[2][3];
        local_368.M[3][0] = (pFVar4->LocalToWorld).M[3][0];
        local_368.M[3][1] = (pFVar4->LocalToWorld).M[3][1];
        local_368.M[3][2] = (pFVar4->LocalToWorld).M[3][2];
        local_368.M[3][3] = (pFVar4->LocalToWorld).M[3][3];
        this_02 = FPrimitiveSceneInfo::GetInstanceSceneDataBuffers(this_00);
        if (this_02 != (FInstanceSceneDataBuffers *)0x0) {
          local_394[1] = 0;
          local_394[2] = 0;
          bVar7 = FInstanceSceneDataBuffers::IsInstanceDataGPUOnly(this_02,(FAccessTag)0x0);
          if ((bVar7) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!InstanceData->IsInstanceDataGPUOnly()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                                 ,0x372,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_394[3] = 0;
          local_394[4] = 0;
          iVar8 = FInstanceSceneDataBuffers::GetNumInstances(this_02,(FAccessTag)0x0);
          local_394[5] = 0;
          local_394[6] = 0;
          iVar9 = iVar8 + -1;
          if (*(int *)((longlong)this_01 + 0x18) < iVar8 + -1) {
            iVar9 = *(int *)((longlong)this_01 + 0x18);
          }
          iVar8 = 0;
          if (0 < iVar9) {
            iVar8 = iVar9;
          }
          pTVar10 = FInstanceSceneDataBuffers::GetInstanceToWorld
                              (this_02,&local_c8,iVar8,(FAccessTag)0x0);
          local_368.M[0][0] = pTVar10->M[0][0];
          local_368.M[0][1] = pTVar10->M[0][1];
          local_368.M[0][2] = pTVar10->M[0][2];
          local_368.M[0][3] = pTVar10->M[0][3];
          local_368.M[1][0] = pTVar10->M[1][0];
          local_368.M[1][1] = pTVar10->M[1][1];
          local_368.M[1][2] = pTVar10->M[1][2];
          local_368.M[1][3] = pTVar10->M[1][3];
          local_368.M[2][0] = pTVar10->M[2][0];
          local_368.M[2][1] = pTVar10->M[2][1];
          local_368.M[2][2] = pTVar10->M[2][2];
          local_368.M[2][3] = pTVar10->M[2][3];
          local_368.M[3][0] = pTVar10->M[3][0];
          local_368.M[3][1] = pTVar10->M[3][1];
          local_368.M[3][2] = pTVar10->M[3][2];
          local_368.M[3][3] = pTVar10->M[3][3];
        }
        lVar11 = (**(code **)(this_00->Proxy->_padding_ + 0xb0))();
        if (lVar11 != 0) {
          AddMeshCardsFromBuildData
                    (this,param_1,&local_368,(FMeshCardsBuildData *)(lVar11 + 8),
                     (FLumenPrimitiveGroup *)this_01);
        }
      }
    }
    else {
      local_238 = 0;
      local_228 = (void *)0x0;
      local_268._s_0.X = 0.0;
      local_268._s_0.Y = 0.0;
      local_268._s_0.Z = 0.0;
      uStack_250 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_237 = 0;
      local_220 = 0;
      local_218 = (void *)0x0;
      local_210 = 0;
      local_208 = (void *)0x0;
      local_200 = 0;
      local_1f8 = (FSurfelCluster *)0x0;
      local_1f0 = 0;
      local_1e8 = 0;
      BuildMeshCardsDataForHeightfield
                ((FLumenPrimitiveGroup *)this_01,(FMeshCardsBuildData *)&local_268._s_0,&local_2e8);
      AddMeshCardsFromBuildData
                (this,param_1,&local_2e8,(FMeshCardsBuildData *)&local_268._s_0,
                 (FLumenPrimitiveGroup *)this_01);
      DestructItems<FLumenCardBuildDebugData::FSurfelCluster,int>(local_1f8,(int)local_1f0);
      if (local_1f8 != (FSurfelCluster *)0x0) {
        FMemory::Free(local_1f8);
      }
      if (local_208 != (void *)0x0) {
        FMemory::Free(local_208);
      }
      if (local_218 != (void *)0x0) {
        FMemory::Free(local_218);
      }
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
    }
    pFVar12 = GetPrimitiveGroupCullingInfo(this,(FLumenPrimitiveGroup *)this_01,false);
    local_370 = pFVar12;
    if ((pFVar12->bVisible != 0 || pFVar12->bValidMeshCards != 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!CullingInfo.bVisible && CullingInfo.bValidMeshCards",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                           ,0x381,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)((longlong)this_01 + 0x1c) < 0) {
      *(byte *)((longlong)this_01 + 0x38) = *(byte *)((longlong)this_01 + 0x38) & 0xfe;
      FUniqueIndexList::Add(&this->PrimitiveGroupIndicesToUpdateInBuffer,param_1);
      pFVar12->bValidMeshCards = 0;
    }
    else {
      pFVar13 = TSparseSpanArray<FLumenMeshCards>::operator[]
                          (&this->MeshCards,*(int *)((longlong)this_01 + 0x1c));
      pTVar3 = &pFVar13->ScenePrimitiveIndices;
      (pFVar13->ScenePrimitiveIndices).ArrayNum = 0;
      piVar1 = &(pFVar13->ScenePrimitiveIndices).ArrayMax;
      if ((pFVar13->ScenePrimitiveIndices).ArrayMax < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
      }
      uVar16 = *(uint *)((longlong)this_01 + 0x10);
      puVar2 = (uint *)((longlong)this_01 + 0x10);
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (*piVar1 < (int)uVar16) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,uVar16,&pTVar3->AllocatorInstance,(pFVar13->ScenePrimitiveIndices).ArrayNum,
                   piVar1);
        uVar16 = *puVar2;
      }
      if (*(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)this_01 + 8) !=
          (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
        this_01 = *(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)this_01 + 8);
      }
      local_378 = (ForElementType<FPrimitiveSceneInfo_*>)
                  ((longlong)this_01 + (longlong)(int)uVar16 * 8);
      while( true ) {
        FVar15 = local_378;
        if (*puVar2 != uVar16) {
          local_398[0] = 0;
          `TCheckedPointerIterator<FPrimitiveSceneInfo_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_398);
        }
        if (this_01 == FVar15) break;
        lVar11 = *(longlong *)this_01;
        iVar9 = *(int *)(lVar11 + 0x188);
        if ((iVar9 != -1) && (iVar9 != 0x7fffffff)) {
          FVar5 = (pFVar13->ScenePrimitiveIndices).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<int>)pTVar3;
          if (FVar5 != (ForElementType<int>)0x0) {
            FVar14 = FVar5;
          }
          local_394[0] = iVar9;
          if ((ulonglong)FVar14 <= local_394) {
            FVar14 = (ForElementType<int>)pTVar3;
            if (FVar5 != (ForElementType<int>)0x0) {
              FVar14 = FVar5;
            }
            if ((local_394 < (int *)((longlong)FVar14 + (longlong)*piVar1 * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar9 = (pFVar13->ScenePrimitiveIndices).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                              (0x404,&pTVar3->AllocatorInstance,piVar1);
          }
          (pFVar13->ScenePrimitiveIndices).ArrayNum = iVar9 + 1;
          FVar5 = (pFVar13->ScenePrimitiveIndices).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<int>)pTVar3;
          if (FVar5 != (ForElementType<int>)0x0) {
            FVar14 = FVar5;
          }
          *(int *)((longlong)FVar14 + (longlong)iVar9 * 4) = local_394[0];
          FUniqueIndexList::Add(&this->PrimitivesToUpdateMeshCards,*(int *)(lVar11 + 0x188));
        }
        this_01 = (ForElementType<FPrimitiveSceneInfo_*>)((longlong)this_01 + 8);
      }
      local_370->bVisible = 1;
    }
  }
  return;
}

// AddMeshCardsFromBuildData @ 144c28b40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::AddMeshCardsFromBuildData
          (FLumenSceneData *this,int param_1,TMatrix<double> *param_2,FMeshCardsBuildData *param_3,
          FLumenPrimitiveGroup *param_4)

{
  TSparseSpanArray<FLumenCard> *this_00;
  int *piVar1;
  uint *puVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  TConsoleVariableData<float> *pTVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  TVector<double> *pTVar19;
  FLumenMeshCards *this_01;
  FLumenHeightfield *pFVar20;
  ForElementType<unsigned_int> FVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  FLumenCardBuildData *pFVar25;
  FUniqueIndexList *pFVar26;
  longlong lVar27;
  ForElementType<unsigned_int> this_02;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint local_c8 [2];
  uint local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_b0;
  TVector<double> local_a8 [4];
  
  dVar7 = __real_3e45798ee0000000;
  param_4->MeshCardsIndex = -1;
  param_4->HeightfieldIndex = -1;
  pTVar19 = UE::Math::TMatrix<double>::GetScaleVector(param_2,local_a8,dVar7);
  pTVar15 = CVarLumenMeshCardsMinSize.Ref;
  fVar35 = (float)(pTVar19->field0_0x0)._s_0.X;
  fVar34 = (float)((param_3->Bounds).Max.field0_0x0._s_0.X - (param_3->Bounds).Min.field0_0x0._s_0.X
                  ) * fVar35;
  fVar36 = (float)(pTVar19->field0_0x0)._s_0.Y;
  fVar33 = (float)((param_3->Bounds).Max.field0_0x0._s_0.Y - (param_3->Bounds).Min.field0_0x0._s_0.Y
                  ) * fVar36;
  fVar31 = (float)((param_3->Bounds).Max.field0_0x0._s_0.Z - (param_3->Bounds).Min.field0_0x0._s_0.Z
                  ) * (float)(pTVar19->field0_0x0)._s_0.Z;
  fVar32 = fVar31 * fVar34;
  fVar31 = fVar31 * fVar33;
  fVar33 = fVar33 * fVar34;
  if (fVar31 <= fVar32) {
    fVar31 = fVar32;
  }
  if (fVar31 <= fVar33) {
    fVar31 = fVar33;
  }
  bVar16 = IsInParallelRenderingThread();
  if ((!bVar16) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar16)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar32 = __real_3f800000;
  if (param_4->bEmissiveLightSource != '\0') {
    fVar32 = __real_3e4ccccd;
  }
  fVar32 = pTVar15->ShadowedValue[1] * pTVar15->ShadowedValue[1] * fVar32;
  if ((fVar32 < fVar31) && (bVar16 = IsMatrixOrthogonal(param_2), bVar16)) {
    uVar28 = 0;
    uVar23 = 0;
    iVar24 = (param_3->CardBuildData).ArrayNum;
    lVar30 = (longlong)iVar24;
    if (0 < iVar24) {
      lVar27 = 0;
      local_bc = iVar24;
      do {
        uVar29 = 0;
        if ((int)uVar23 < (param_3->CardBuildData).ArrayNum) {
          uVar29 = ~uVar23 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (GLumenMeshCardsDebugSingleCard < 0) {
          pFVar5 = (param_3->CardBuildData).AllocatorInstance.Data;
          fVar31 = *(float *)(pFVar5 + lVar27 + 0x30);
          fVar33 = *(float *)(pFVar5 + lVar27 + 0x34);
          if ((GLumenMeshCardsCullFaces == 0) ||
             (fVar32 < fVar36 * (fVar33 + fVar33) * fVar35 * (fVar31 + fVar31))) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
        }
        else {
          bVar16 = GLumenMeshCardsDebugSingleCard == uVar23;
        }
        uVar29 = uVar28 + 1;
        if (!bVar16) {
          uVar29 = uVar28;
        }
        uVar28 = uVar29;
        uVar23 = uVar23 + 1;
        lVar27 = lVar27 + 0x40;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      if (uVar28 != 0) {
        this_00 = &this->Cards;
        uVar23 = TSparseSpanArray<FLumenCard>::AddSpan(this_00,uVar28);
        local_c0 = uVar23;
        iVar17 = TSparseSpanArray<FLumenMeshCards>::AddSpan(&this->MeshCards,1);
        param_4->MeshCardsIndex = iVar17;
        this_01 = TSparseSpanArray<FLumenMeshCards>::operator[](&this->MeshCards,iVar17);
        this_01->PrimitiveGroupIndex = param_1;
        dVar7 = (param_3->Bounds).Min.field0_0x0._s_0.Y;
        (this_01->LocalBounds).Min.field0_0x0._s_0.X = (param_3->Bounds).Min.field0_0x0._s_0.X;
        (this_01->LocalBounds).Min.field0_0x0._s_0.Y = dVar7;
        dVar7 = (param_3->Bounds).Max.field0_0x0._s_0.X;
        (this_01->LocalBounds).Min.field0_0x0._s_0.Z = (param_3->Bounds).Min.field0_0x0._s_0.Z;
        (this_01->LocalBounds).Max.field0_0x0._s_0.X = dVar7;
        dVar7 = (param_3->Bounds).Max.field0_0x0._s_0.Z;
        (this_01->LocalBounds).Max.field0_0x0._s_0.Y = (param_3->Bounds).Max.field0_0x0._s_0.Y;
        (this_01->LocalBounds).Max.field0_0x0._s_0.Z = dVar7;
        uVar8 = (param_3->Bounds).Pad[0];
        uVar9 = (param_3->Bounds).Pad[1];
        uVar10 = (param_3->Bounds).Pad[2];
        uVar11 = (param_3->Bounds).Pad[3];
        uVar12 = (param_3->Bounds).Pad[4];
        uVar13 = (param_3->Bounds).Pad[5];
        uVar14 = (param_3->Bounds).Pad[6];
        (this_01->LocalBounds).IsValid = (param_3->Bounds).IsValid;
        (this_01->LocalBounds).Pad[0] = uVar8;
        (this_01->LocalBounds).Pad[1] = uVar9;
        (this_01->LocalBounds).Pad[2] = uVar10;
        (this_01->LocalBounds).Pad[3] = uVar11;
        (this_01->LocalBounds).Pad[4] = uVar12;
        (this_01->LocalBounds).Pad[5] = uVar13;
        (this_01->LocalBounds).Pad[6] = uVar14;
        bVar16 = param_3->bMostlyTwoSided;
        this_01->NumCards = uVar28;
        this_01->bMostlyTwoSided = bVar16;
        this_01->FirstCardIndex = uVar23;
        this_01->bFarField = param_4->bFarField;
        this_01->bHeightfield = param_4->bHeightfield;
        this_01->bEmissiveLightSource = param_4->bEmissiveLightSource;
        FLumenMeshCards::SetTransform(this_01,param_2);
        FUniqueIndexList::Add(&this->MeshCardsIndicesToUpdateInBuffer,iVar17);
        if (param_4->bHeightfield != '\0') {
          iVar18 = TSparseSpanArray<FLumenHeightfield>::AddSpan(&this->Heightfields,1);
          param_4->HeightfieldIndex = iVar18;
          pFVar20 = TSparseSpanArray<FLumenHeightfield>::operator[](&this->Heightfields,iVar18);
          pFVar20->MeshCardsIndex = iVar17;
          FUniqueIndexList::Add(&this->HeightfieldIndicesToUpdateInBuffer,iVar18);
        }
        uVar28 = 0;
        if (0 < iVar24) {
          local_b8 = 0;
          local_b0 = 0;
          uVar23 = local_c0;
          uVar29 = local_c0;
          do {
            lVar30 = local_b0;
            uVar22 = 0;
            if ((int)uVar28 < (param_3->CardBuildData).ArrayNum) {
              uVar22 = ~uVar28 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar25 = (FLumenCardBuildData *)
                      ((param_3->CardBuildData).AllocatorInstance.Data + lVar30);
            if (GLumenMeshCardsDebugSingleCard < 0) {
              fVar31 = (pFVar25->OBB).Extent.field0_0x0._s_0.X;
              fVar33 = (pFVar25->OBB).Extent.field0_0x0._s_0.Y;
              if ((GLumenMeshCardsCullFaces == 0) ||
                 (fVar32 < (fVar33 + fVar33) * fVar36 * (fVar31 + fVar31) * fVar35)) {
                bVar16 = true;
              }
              else {
                bVar16 = false;
              }
            }
            else {
              bVar16 = GLumenMeshCardsDebugSingleCard == uVar28;
            }
            if (bVar16) {
              uVar22 = 0;
              if ((int)uVar29 < (this->Cards).Elements.ArrayNum) {
                uVar22 = ~uVar29 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FLumenCard::Initialize
                        ((FLumenCard *)
                         ((this_00->Elements).AllocatorInstance.Data + (longlong)(int)uVar29 * 400),
                         param_4->CardResolutionScale,param_4->CustomId,param_2,this_01,pFVar25,
                         uVar29 - uVar23,iVar17,(uchar)uVar28);
              pFVar26 = &this->CardIndicesToUpdateInBuffer;
              iVar24 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits;
              this_02 = (ForElementType<unsigned_int>)
                        &(this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate;
              local_c8[0] = uVar29;
              if ((iVar24 < (int)(uVar29 + 1)) &&
                 (iVar24 = (uVar29 + 0x40 & 0xffffffc0) - iVar24, -1 < iVar24)) {
                iVar18 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                   ((TBitArray<FDefaultBitArrayAllocator> *)this_02,iVar24);
                TBitArray<FDefaultBitArrayAllocator>::SetRange
                          ((TBitArray<FDefaultBitArrayAllocator> *)this_02,iVar18,iVar24,false);
              }
              uVar23 = local_c8[0];
              if ((((int)local_c8[0] < 0) ||
                  ((this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits <=
                   (int)local_c8[0])) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar4 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
                      SecondaryData;
              FVar21 = this_02;
              if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                FVar21 = FVar4;
              }
              uVar22 = uVar23 & 0x1f;
              if ((int)uVar23 < 0) {
                uVar23 = uVar23 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar21 + (longlong)((int)uVar23 >> 5) * 4) >> uVar22 & 1) ==
                  0) {
                pFVar5 = (pFVar26->Indices).AllocatorInstance.Data;
                if (((pFVar5 <= (FScriptContainerElement *)local_c8) &&
                    ((FScriptContainerElement *)local_c8 <
                     pFVar5 + (longlong)(this->CardIndicesToUpdateInBuffer).Indices.ArrayMax * 4))
                   && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar24 = (this->CardIndicesToUpdateInBuffer).Indices.ArrayNum;
                piVar1 = &(this->CardIndicesToUpdateInBuffer).Indices.ArrayMax;
                if (iVar24 == *piVar1) {
                  iVar24 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,(ForAnyElementType *)pFVar26,piVar1);
                }
                uVar23 = local_c8[0];
                (this->CardIndicesToUpdateInBuffer).Indices.ArrayNum = iVar24 + 1;
                *(uint *)((pFVar26->Indices).AllocatorInstance.Data + (longlong)iVar24 * 4) =
                     local_c8[0];
                if ((((int)local_c8[0] < 0) ||
                    ((this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits <=
                     (int)local_c8[0])) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar4 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
                        SecondaryData;
                if (FVar4 != (ForElementType<unsigned_int>)0x0) {
                  this_02 = FVar4;
                }
                uVar22 = uVar23;
                if ((int)uVar23 < 0) {
                  uVar22 = uVar23 + 0x1f;
                }
                puVar2 = (uint *)((longlong)this_02 + (longlong)((int)uVar22 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)uVar23 & 0x1f);
              }
              uVar29 = uVar29 + 1;
              uVar23 = local_c0;
            }
            local_b8 = local_b8 + 1;
            local_b0 = local_b0 + 0x40;
            uVar28 = uVar28 + 1;
          } while ((int)uVar28 < local_bc);
        }
        this_01->CardLookup[0] = 0;
        this_01->CardLookup[1] = 0;
        uVar28 = 0;
        this_01->CardLookup[2] = 0;
        this_01->CardLookup[3] = 0;
        this_01->CardLookup[4] = 0;
        this_01->CardLookup[5] = 0;
        if (this_01->NumCards != 0) {
          do {
            uVar29 = this_01->FirstCardIndex + uVar28;
            uVar23 = 0;
            if ((int)uVar29 < (this->Cards).Elements.ArrayNum) {
              uVar23 = ~uVar29 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar23 = uVar28 + 1;
            this_01->CardLookup
            [(byte)(this_00->Elements).AllocatorInstance.Data[(longlong)(int)uVar29 * 400 + 0x171]]
                 = this_01->CardLookup
                   [(byte)(this_00->Elements).AllocatorInstance.Data
                          [(longlong)(int)uVar29 * 400 + 0x171]] | 1 << ((byte)uVar28 & 0x1f);
            uVar28 = uVar23;
          } while (uVar23 < this_01->NumCards);
        }
        FUniqueIndexList::Add(&this->PrimitiveGroupIndicesToUpdateInBuffer,param_1);
      }
    }
  }
  return;
}

// GetMeshCardsIndex @ 144c45f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FLumenSceneData::GetMeshCardsIndex(FLumenSceneData *this,FPrimitiveSceneInfo *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ForElementType<int> FVar5;
  uint uVar6;
  
  iVar3 = (param_1->LumenPrimitiveGroupIndices).ArrayNum;
  if (iVar3 < 1) {
    return -1;
  }
  uVar6 = iVar3 - 1U;
  if (param_2 < (int)(iVar3 - 1U)) {
    uVar6 = param_2;
  }
  uVar4 = 0;
  if ((int)uVar6 < iVar3) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  FVar5 = (param_1->LumenPrimitiveGroupIndices).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<int>)0x0) {
    FVar5 = (ForElementType<int>)&param_1->LumenPrimitiveGroupIndices;
  }
  iVar3 = *(int *)((longlong)FVar5 + (longlong)(int)uVar6 * 4);
  bVar2 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::IsAllocated
                    (&this->PrimitiveGroups,iVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAllocated(ElementIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                       ,0x192,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = (int)(iVar3 + (iVar3 >> 0x1f & 0x7fffU)) >> 0xf;
  uVar6 = 0;
  if ((int)uVar4 < (this->PrimitiveGroups).ElementChunks.ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((longlong)(int)(iVar3 + uVar4 * -0x8000) * 0x40 + 0x1c +
                 *(longlong *)
                  ((this->PrimitiveGroups).ElementChunks.AllocatorInstance.Data +
                  (longlong)(int)uVar4 * 8));
}

// GetPrimitiveGroupCullingInfo @ 144c46760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenPrimitiveGroupCullingInfo * __thiscall
FLumenSceneData::GetPrimitiveGroupCullingInfo
          (FLumenSceneData *this,FLumenPrimitiveGroup *param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FLumenPrimitiveGroupCullingInfo *pFVar5;
  
  if ((!param_2) && (-1 < param_1->InstanceCullingInfoIndex)) {
    if (param_1->PrimitiveInstanceIndex < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveGroup.PrimitiveInstanceIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                         ,600,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLumenPrimitiveGroupCullingInfo *)(*pcVar2)();
        return pFVar5;
      }
    }
    uVar1 = param_1->InstanceCullingInfoIndex;
    uVar4 = 0;
    if ((int)uVar1 < (this->InstanceCullingInfos).Elements.ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLumenPrimitiveGroupCullingInfo *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FLumenPrimitiveGroupCullingInfo *)
           ((this->InstanceCullingInfos).Elements.AllocatorInstance.Data +
           (longlong)(int)uVar1 * 0x20);
  }
  return (FLumenPrimitiveGroupCullingInfo *)
         ((longlong)param_1->PrimitiveCullingInfoIndex * 0x20 +
         *(longlong *)&this->PrimitiveCullingInfos);
}

// GetPrimitiveGroupCullingInfo @ 144c46840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenPrimitiveGroupCullingInfo * __thiscall
FLumenSceneData::GetPrimitiveGroupCullingInfo
          (FLumenSceneData *this,FLumenPrimitiveGroup *param_1,bool param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FLumenPrimitiveGroupCullingInfo *pFVar5;
  
  if ((!param_2) && (-1 < param_1->InstanceCullingInfoIndex)) {
    if (param_1->PrimitiveInstanceIndex < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveGroup.PrimitiveInstanceIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                         ,600,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLumenPrimitiveGroupCullingInfo *)(*pcVar2)();
        return pFVar5;
      }
    }
    uVar1 = param_1->InstanceCullingInfoIndex;
    uVar4 = 0;
    if ((int)uVar1 < (this->InstanceCullingInfos).Elements.ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLumenPrimitiveGroupCullingInfo *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FLumenPrimitiveGroupCullingInfo *)
           ((this->InstanceCullingInfos).Elements.AllocatorInstance.Data +
           (longlong)(int)uVar1 * 0x20);
  }
  return (FLumenPrimitiveGroupCullingInfo *)
         ((longlong)param_1->PrimitiveCullingInfoIndex * 0x20 +
         *(longlong *)&this->PrimitiveCullingInfos);
}

// InvalidateSurfaceCache @ 144c52af0

/* WARNING: Removing unreachable block (ram,0x000144c52d22) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::InvalidateSurfaceCache(FLumenSceneData *this,FRHIGPUMask param_1,int param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FBinaryHeap<unsigned_int,unsigned_int> *this_00;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  FLumenMeshCards *pFVar11;
  ulong64 uVar12;
  uint *_Dst;
  int iVar13;
  uint uVar14;
  int iVar15;
  FRHIGPUMask FVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint local_res18;
  int local_84;
  ulonglong uVar20;
  
  if (-1 < param_2) {
    pFVar11 = TSparseSpanArray<FLumenMeshCards>::operator[](&this->MeshCards,param_2);
    uVar18 = pFVar11->FirstCardIndex;
    if (uVar18 < pFVar11->NumCards + uVar18) {
      do {
        uVar8 = 0;
        if ((int)uVar18 < (this->Cards).Elements.ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->Cards).Elements.AllocatorInstance.Data;
        FVar3 = pFVar4[(longlong)(int)uVar18 * 400 + 0xf8];
        local_res18 = (uint)(byte)FVar3;
        if (local_res18 < (byte)pFVar4[(longlong)(int)uVar18 * 400 + 0xf9] ||
            (uint)(byte)FVar3 == (uint)(byte)pFVar4[(longlong)(int)uVar18 * 400 + 0xf9]) {
          iVar13 = (byte)FVar3 - 3;
          do {
            if (((iVar13 < 0) || (8 < (ulonglong)(longlong)iVar13)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                                   ,0x162,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar1 = (longlong)iVar13 + 0x15;
            pFVar2 = pFVar4 + lVar1 * 0xc + (longlong)(int)uVar18 * 400;
            if ((*(short *)(pFVar4 + lVar1 * 0xc + (longlong)(int)uVar18 * 400 + 8) != 0) &&
               (local_84 = 0, (uint)(byte)pFVar2[1] * (uint)(byte)*pFVar2 != 0)) {
              do {
                uVar23 = *(int *)(pFVar2 + 4) + local_84;
                uVar8 = 0;
                if ((int)uVar23 < (this->PageTable).Elements.ArrayNum) {
                  uVar8 = ~uVar23 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar5 = (this->PageTable).Elements.AllocatorInstance.Data;
                if ((-1 < *(int *)(pFVar5 + (longlong)(int)uVar23 * 0x50)) &&
                   (-1 < *(int *)(pFVar5 + (longlong)(int)uVar23 * 0x50 + 4))) {
                  uVar8 = 0;
                  bVar7 = param_1.GPUMask != 0;
                  FVar16.GPUMask = param_1.GPUMask;
                  if (bVar7) {
                    for (; (param_1.GPUMask >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
                    }
                  }
                  while (bVar7) {
                    this_00 = this->PagesToRecaptureHeap + uVar8;
                    if ((uVar23 < this->PagesToRecaptureHeap[uVar8].IndexSize) &&
                       (this_00->HeapIndexes[uVar23] != 0xffffffff)) {
                      uVar9 = GetSurfaceCacheUpdateFrameIndex(this);
                      this_00->Keys[uVar23] = uVar9;
                      uVar10 = this_00->HeapIndexes[uVar23];
                      if ((uVar10 == 0) || (this_00->Keys[this_00->Heap[uVar10 - 1 >> 1]] <= uVar9))
                      {
                        iVar15 = uVar10 * 2;
                        uVar19 = iVar15 + 1;
                        uVar14 = this_00->HeapNum;
                        uVar9 = this_00->Heap[uVar10];
                        uVar17 = uVar10;
                        if (uVar19 < uVar14) {
                          do {
                            uVar22 = iVar15 + 2;
                            uVar20 = (ulonglong)uVar19;
                            uVar21 = uVar20;
                            if ((uVar22 < uVar14) &&
                               (uVar21 = (ulonglong)uVar22,
                               this_00->Keys[this_00->Heap[uVar20]] <
                               this_00->Keys[this_00->Heap[uVar22]])) {
                              uVar21 = uVar20;
                            }
                            uVar22 = (uint)uVar21;
                            uVar14 = this_00->Heap[uVar21];
                            if (this_00->Keys[uVar9] <= this_00->Keys[uVar14]) break;
                            this_00->Heap[uVar17] = uVar14;
                            this_00->HeapIndexes[this_00->Heap[uVar17]] = uVar17;
                            uVar14 = this_00->HeapNum;
                            iVar15 = uVar22 * 2;
                            uVar19 = iVar15 + 1;
                            uVar17 = uVar22;
                          } while (uVar19 < uVar14);
                          if (uVar17 != uVar10) {
                            this_00->Heap[uVar17] = uVar9;
                            this_00->HeapIndexes[this_00->Heap[uVar17]] = uVar17;
                          }
                        }
                      }
                      else {
                        FBinaryHeap<unsigned_int,unsigned_int>::UpHeap(this_00,uVar10);
                      }
                    }
                    else {
                      uVar10 = GetSurfaceCacheUpdateFrameIndex(this);
                      if (this_00->HeapNum == this_00->HeapSize) {
                        uVar9 = this_00->HeapSize * 2;
                        if (uVar9 < 0x20) {
                          uVar9 = 0x20;
                        }
                        if (uVar9 == 0) {
                          this_00->HeapNum = 0;
                          this_00->HeapSize = 0;
                          operator_delete__(this_00->Heap);
                          this_00->Heap = (uint *)0x0;
                        }
                        else {
                          uVar12 = SUB168(ZEXT816(4) * ZEXT416(uVar9),0);
                          if (SUB168(ZEXT816(4) * ZEXT416(uVar9),8) != 0) {
                            uVar12 = 0xffffffffffffffff;
                          }
                          _Dst = operator_new__(uVar12);
                          if (this_00->HeapSize != 0) {
                            memcpy(_Dst,this_00->Heap,(ulonglong)this_00->HeapSize << 2);
                            operator_delete__(this_00->Heap);
                          }
                          this_00->Heap = _Dst;
                          uVar14 = uVar9;
                          if (this_00->HeapNum < uVar9) {
                            uVar14 = this_00->HeapNum;
                          }
                          this_00->HeapNum = uVar14;
                          this_00->HeapSize = uVar9;
                        }
                      }
                      if (this_00->IndexSize <= uVar23) {
                        iVar15 = 1;
                        if (uVar23 + 1 != 0) {
                          iVar15 = uVar23 + 1;
                        }
                        uVar21 = (ulonglong)(iVar15 - 1) * 2 + 1;
                        lVar1 = 0x3f;
                        if (uVar21 != 0) {
                          for (; uVar21 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                          }
                        }
                        uVar9 = 1 << ((byte)lVar1 & 0x1f);
                        if (uVar9 < 0x20) {
                          uVar9 = 0x20;
                        }
                        FBinaryHeap<unsigned_int,unsigned_int>::ResizeIndexes(this_00,uVar9);
                      }
                      uVar9 = this_00->HeapNum;
                      this_00->HeapNum = uVar9 + 1;
                      this_00->Heap[uVar9] = uVar23;
                      this_00->Keys[uVar23] = uVar10;
                      this_00->HeapIndexes[uVar23] = uVar9;
                      uVar10 = this_00->Heap[uVar9];
                      for (uVar14 = uVar9; uVar14 != 0; uVar14 = uVar14 - 1 >> 1) {
                        uVar17 = this_00->Heap[uVar14 - 1 >> 1];
                        if (this_00->Keys[uVar17] <= this_00->Keys[uVar10]) break;
                        this_00->Heap[uVar14] = uVar17;
                        this_00->HeapIndexes[this_00->Heap[uVar14]] = uVar14;
                      }
                      if (uVar14 != uVar9) {
                        this_00->Heap[uVar14] = uVar10;
                        this_00->HeapIndexes[this_00->Heap[uVar14]] = uVar14;
                      }
                    }
                    FVar16.GPUMask = FVar16.GPUMask & ~(1 << ((byte)uVar8 & 0x1f));
                    uVar8 = 0;
                    bVar7 = FVar16.GPUMask != 0;
                    if (bVar7) {
                      for (; (FVar16.GPUMask >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
                      }
                    }
                  }
                }
                local_84 = local_84 + 1;
              } while (local_84 < (int)((uint)(byte)pFVar2[1] * (uint)(byte)*pFVar2));
            }
            local_res18 = local_res18 + 1;
            iVar13 = iVar13 + 1;
          } while ((int)local_res18 <= (int)(uint)(byte)pFVar4[(longlong)(int)uVar18 * 400 + 0xf9]);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < pFVar11->NumCards + pFVar11->FirstCardIndex);
    }
  }
  return;
}

// RemoveCardFromAtlas @ 144c54c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLumenSceneData::RemoveCardFromAtlas(FLumenSceneData *this,int param_1)

{
  FLumenCard *pFVar1;
  
  pFVar1 = TSparseSpanArray<FLumenCard>::operator[](&this->Cards,param_1);
  pFVar1->DesiredLockedResLevel = '\0';
  FreeVirtualSurface(this,pFVar1,pFVar1->MinAllocatedResLevel,pFVar1->MaxAllocatedResLevel);
  FUniqueIndexList::Add(&this->CardIndicesToUpdateInBuffer,param_1);
  return;
}

// RemoveMeshCards @ 144c556a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLumenSceneData::RemoveMeshCards(FLumenSceneData *this,int param_1,bool param_2)

{
  int *piVar1;
  FUniqueIndexList *pFVar2;
  ForElementType<int> FVar3;
  uint *puVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FLumenSceneData *pFVar12;
  FLumenMeshCards *pFVar13;
  double *pdVar14;
  bool bVar15;
  int iVar16;
  FLumenPrimitiveGroup *pFVar17;
  FLumenMeshCards *pFVar18;
  FLumenCard *pFVar19;
  FLumenCard *pFVar20;
  double *pdVar21;
  FLumenPrimitiveGroupCullingInfo *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  ushort *puVar28;
  uint uVar29;
  longlong lVar30;
  ForElementType<unsigned_int> FVar31;
  uint uVar32;
  ForElementType<unsigned_int> FVar33;
  ulonglong uVar34;
  ForElementType<int> FVar35;
  undefined1 auStackY_3e8 [32];
  undefined1 local_398;
  char local_397;
  uint local_390 [2];
  FLumenSceneData *local_388;
  FLumenMeshCards *local_380;
  int local_378;
  FLumenPrimitiveGroup *local_370;
  double local_368 [50];
  FLumenCard local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  local_397 = param_2;
  local_388 = this;
  local_378 = param_1;
  pFVar17 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator[]
                      (&this->PrimitiveGroups,param_1);
  if (-1 < pFVar17->MeshCardsIndex) {
    local_370 = pFVar17;
    pFVar18 = TSparseSpanArray<FLumenMeshCards>::operator[]
                        (&this->MeshCards,pFVar17->MeshCardsIndex);
    uVar26 = pFVar18->FirstCardIndex;
    local_380 = pFVar18;
    if (uVar26 < pFVar18->NumCards + uVar26) {
      do {
        pFVar19 = TSparseSpanArray<FLumenCard>::operator[](&this->Cards,uVar26);
        pFVar19->DesiredLockedResLevel = '\0';
        FreeVirtualSurface(this,pFVar19,pFVar19->MinAllocatedResLevel,pFVar19->MaxAllocatedResLevel)
        ;
        FUniqueIndexList::Add(&this->CardIndicesToUpdateInBuffer,uVar26);
        uVar26 = uVar26 + 1;
      } while (uVar26 < pFVar18->NumCards + pFVar18->FirstCardIndex);
    }
    iVar5 = pFVar17->HeightfieldIndex;
    uVar34 = (ulonglong)iVar5;
    if (-1 < iVar5) {
      if (iVar5 < iVar5 + 1) {
        lVar30 = uVar34 * 4;
        do {
          uVar24 = (uint)uVar34;
          uVar26 = 0;
          if ((int)uVar24 < (this->Heightfields).Elements.ArrayNum) {
            uVar26 = ~uVar24 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar34 = (ulonglong)(uVar24 + 1);
          *(undefined4 *)((this->Heightfields).Elements.AllocatorInstance.Data + lVar30) =
               0xffffffff;
          lVar30 = lVar30 + 4;
          pFVar17 = local_370;
        } while ((int)(uVar24 + 1) < iVar5 + 1);
      }
      FSpanAllocator::Free(&(this->Heightfields).SpanAllocator,iVar5,1);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                (&(this->Heightfields).AllocatedElementsBitArray,iVar5,1,false);
      FUniqueIndexList::Add(&this->HeightfieldIndicesToUpdateInBuffer,pFVar17->HeightfieldIndex);
    }
    pFVar12 = local_388;
    FVar35 = (pFVar18->ScenePrimitiveIndices).AllocatorInstance.SecondaryData;
    iVar5 = (pFVar18->ScenePrimitiveIndices).ArrayNum;
    if (FVar35 == (ForElementType<int>)0x0) {
      FVar35 = (ForElementType<int>)&pFVar18->ScenePrimitiveIndices;
    }
    FVar3 = (ForElementType<int>)((longlong)FVar35 + (longlong)iVar5 * 4);
    while( true ) {
      if ((pFVar18->ScenePrimitiveIndices).ArrayNum != iVar5) {
        local_398 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_398);
      }
      pFVar13 = local_380;
      if (FVar35 == FVar3) break;
      local_390[0] = *(uint *)FVar35;
      pFVar2 = &pFVar12->PrimitivesToUpdateMeshCards;
      iVar27 = (pFVar12->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.NumBits;
      FVar31 = (ForElementType<unsigned_int>)
               &(pFVar12->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate;
      if ((iVar27 < (int)(local_390[0] + 1)) &&
         (iVar27 = (local_390[0] + 0x40 & 0xffffffc0) - iVar27, -1 < iVar27)) {
        iVar16 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)FVar31,iVar27);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  ((TBitArray<FDefaultBitArrayAllocator> *)FVar31,iVar16,iVar27,false);
      }
      uVar26 = local_390[0];
      if ((((int)local_390[0] < 0) ||
          ((pFVar12->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.NumBits <= (int)local_390[0]
          )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar33 = (pFVar12->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.AllocatorInstance.
               SecondaryData;
      if (FVar33 != (ForElementType<unsigned_int>)0x0) {
        FVar31 = FVar33;
      }
      uVar24 = uVar26 & 0x1f;
      if ((int)uVar26 < 0) {
        uVar26 = uVar26 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar31 + (longlong)((int)uVar26 >> 5) * 4) >> uVar24 & 1) == 0) {
        pFVar6 = (pFVar2->Indices).AllocatorInstance.Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_390) &&
            ((FScriptContainerElement *)local_390 <
             pFVar6 + (longlong)(pFVar12->PrimitivesToUpdateMeshCards).Indices.ArrayMax * 4)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar27 = (pFVar12->PrimitivesToUpdateMeshCards).Indices.ArrayNum;
        piVar1 = &(pFVar12->PrimitivesToUpdateMeshCards).Indices.ArrayMax;
        if (iVar27 == *piVar1) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar2,piVar1);
        }
        uVar26 = local_390[0];
        (pFVar12->PrimitivesToUpdateMeshCards).Indices.ArrayNum = iVar27 + 1;
        *(uint *)((pFVar2->Indices).AllocatorInstance.Data + (longlong)iVar27 * 4) = local_390[0];
        if ((((int)local_390[0] < 0) ||
            ((pFVar12->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.NumBits <=
             (int)local_390[0])) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar31 = (pFVar12->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.AllocatorInstance.
                 SecondaryData;
        FVar33 = (ForElementType<unsigned_int>)
                 &(pFVar12->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate;
        if (FVar31 != (ForElementType<unsigned_int>)0x0) {
          FVar33 = FVar31;
        }
        uVar24 = uVar26;
        if ((int)uVar26 < 0) {
          uVar24 = uVar26 + 0x1f;
        }
        puVar4 = (uint *)((longlong)FVar33 + (longlong)((int)uVar24 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << ((byte)uVar26 & 0x1f);
      }
      FVar35 = (ForElementType<int>)((longlong)FVar35 + 4);
    }
    (local_380->ScenePrimitiveIndices).ArrayNum = 0;
    if ((local_380->ScenePrimitiveIndices).ArrayMax < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,0,&(local_380->ScenePrimitiveIndices).AllocatorInstance,0,
                 &(local_380->ScenePrimitiveIndices).ArrayMax);
    }
    uVar26 = pFVar13->NumCards;
    uVar24 = pFVar13->FirstCardIndex;
    local_380 = (FLumenMeshCards *)CONCAT44(local_380._4_4_,uVar26);
    if (((int)uVar26 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumElements > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                            ,0x38,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((int)uVar24 < (int)(uVar26 + uVar24)) {
      lVar30 = (longlong)(int)uVar24 * 400;
      uVar29 = uVar24;
      do {
        pFVar12 = local_388;
        pFVar19 = FLumenCard::FLumenCard(&local_1d8);
        lVar25 = 3;
        pdVar14 = local_368;
        do {
          pdVar21 = pdVar14;
          pFVar20 = pFVar19;
          dVar8 = *(double *)((longlong)&(pFVar20->LocalOBB).Origin.field0_0x0 + 8);
          dVar9 = *(double *)((longlong)&(pFVar20->LocalOBB).AxisX.field0_0x0 + 4);
          dVar10 = *(double *)&(pFVar20->LocalOBB).AxisY.field0_0x0;
          pFVar19 = (FLumenCard *)((pFVar20->WorldOBB).AxisY.field0_0x0.XYZ + 2);
          *pdVar21 = *(double *)&(pFVar20->LocalOBB).Origin.field0_0x0;
          pdVar21[1] = dVar8;
          dVar8 = *(double *)((longlong)&(pFVar20->LocalOBB).AxisY.field0_0x0 + 8);
          dVar11 = *(double *)((longlong)&(pFVar20->LocalOBB).AxisZ.field0_0x0 + 4);
          pdVar21[2] = dVar9;
          pdVar21[3] = dVar10;
          dVar9 = *(double *)&(pFVar20->LocalOBB).Extent.field0_0x0;
          dVar10 = *(double *)((longlong)&(pFVar20->LocalOBB).Extent.field0_0x0 + 8);
          pdVar21[4] = dVar8;
          pdVar21[5] = dVar11;
          dVar8 = (pFVar20->WorldOBB).Origin.field0_0x0._s_0.X;
          dVar11 = (pFVar20->WorldOBB).Origin.field0_0x0._s_0.Y;
          pdVar21[6] = dVar9;
          pdVar21[7] = dVar10;
          dVar9 = (pFVar20->WorldOBB).Origin.field0_0x0._s_0.Z;
          dVar10 = (pFVar20->WorldOBB).AxisX.field0_0x0._s_0.X;
          pdVar21[8] = dVar8;
          pdVar21[9] = dVar11;
          dVar8 = (pFVar20->WorldOBB).AxisX.field0_0x0._s_0.Y;
          dVar11 = (pFVar20->WorldOBB).AxisX.field0_0x0._s_0.Z;
          pdVar21[10] = dVar9;
          pdVar21[0xb] = dVar10;
          dVar9 = (pFVar20->WorldOBB).AxisY.field0_0x0._s_0.X;
          dVar10 = (pFVar20->WorldOBB).AxisY.field0_0x0._s_0.Y;
          pdVar21[0xc] = dVar8;
          pdVar21[0xd] = dVar11;
          pdVar21[0xe] = dVar9;
          pdVar21[0xf] = dVar10;
          lVar25 = lVar25 + -1;
          pdVar14 = pdVar21 + 0x10;
        } while (lVar25 != 0);
        dVar8 = (pFVar20->WorldOBB).AxisZ.field0_0x0._s_0.X;
        iVar5 = (pFVar12->Cards).Elements.ArrayNum;
        pdVar21[0x10] = *(double *)&(pFVar19->LocalOBB).Origin.field0_0x0;
        pdVar21[0x11] = dVar8;
        uVar32 = 0;
        if ((int)uVar29 < iVar5) {
          uVar32 = ~uVar29 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar25 = 3;
        pdVar14 = local_368;
        pFVar6 = (pFVar12->Cards).Elements.AllocatorInstance.Data + lVar30;
        do {
          pFVar23 = pFVar6;
          pdVar21 = pdVar14;
          dVar8 = pdVar21[1];
          dVar9 = pdVar21[2];
          dVar10 = pdVar21[3];
          *(double *)pFVar23 = *pdVar21;
          *(double *)(pFVar23 + 8) = dVar8;
          dVar8 = pdVar21[4];
          dVar11 = pdVar21[5];
          *(double *)(pFVar23 + 0x10) = dVar9;
          *(double *)(pFVar23 + 0x18) = dVar10;
          dVar9 = pdVar21[6];
          dVar10 = pdVar21[7];
          *(double *)(pFVar23 + 0x20) = dVar8;
          *(double *)(pFVar23 + 0x28) = dVar11;
          dVar8 = pdVar21[8];
          dVar11 = pdVar21[9];
          *(double *)(pFVar23 + 0x30) = dVar9;
          *(double *)(pFVar23 + 0x38) = dVar10;
          dVar9 = pdVar21[10];
          dVar10 = pdVar21[0xb];
          *(double *)(pFVar23 + 0x40) = dVar8;
          *(double *)(pFVar23 + 0x48) = dVar11;
          dVar8 = pdVar21[0xc];
          dVar11 = pdVar21[0xd];
          *(double *)(pFVar23 + 0x50) = dVar9;
          *(double *)(pFVar23 + 0x58) = dVar10;
          dVar9 = pdVar21[0xe];
          dVar10 = pdVar21[0xf];
          *(double *)(pFVar23 + 0x60) = dVar8;
          *(double *)(pFVar23 + 0x68) = dVar11;
          *(double *)(pFVar23 + 0x70) = dVar9;
          *(double *)(pFVar23 + 0x78) = dVar10;
          lVar25 = lVar25 + -1;
          pdVar14 = pdVar21 + 0x10;
          pFVar6 = pFVar23 + 0x80;
        } while (lVar25 != 0);
        dVar8 = pdVar21[0x11];
        uVar32 = 0;
        puVar28 = &local_1d8.SurfaceMipMaps[0].PageTableSpanSize;
        *(double *)(pFVar23 + 0x80) = pdVar21[0x10];
        *(double *)(pFVar23 + 0x88) = dVar8;
        do {
          if ((*puVar28 != 0) &&
             (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_874545965275544426>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                                  ,0x496,"SurfaceMipMaps[MipIndex].PageTableSpanSize == 0"), bVar15)
             ) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar32 = uVar32 + 1;
          puVar28 = puVar28 + 6;
        } while (uVar32 < 9);
        uVar29 = uVar29 + 1;
        lVar30 = lVar30 + 400;
      } while ((int)uVar29 < (int)(uVar26 + uVar24));
      uVar26 = (uint)local_380;
    }
    pFVar12 = local_388;
    FSpanAllocator::Free(&(local_388->Cards).SpanAllocator,uVar24,uVar26);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              (&(pFVar12->Cards).AllocatedElementsBitArray,uVar24,uVar26,false);
    pFVar17 = local_370;
    TSparseSpanArray<FLumenMeshCards>::RemoveSpan(&pFVar12->MeshCards,local_370->MeshCardsIndex,1);
    FUniqueIndexList::Add(&pFVar12->MeshCardsIndicesToUpdateInBuffer,pFVar17->MeshCardsIndex);
    pFVar17->MeshCardsIndex = -1;
    pFVar17->HeightfieldIndex = -1;
    FUniqueIndexList::Add(&pFVar12->PrimitiveGroupIndicesToUpdateInBuffer,local_378);
    if (local_397 != '\0') {
      pFVar22 = GetPrimitiveGroupCullingInfo(pFVar12,pFVar17,false);
      if ((pFVar22->bVisible != 1 || pFVar22->bValidMeshCards != 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("CullingInfo.bVisible && CullingInfo.bValidMeshCards",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                              ,0x442,L""), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar22->bVisible = 0;
    }
  }
  return;
}

// RemovePrimitiveGroupCullingInfo @ 144c55da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::RemovePrimitiveGroupCullingInfo
          (FLumenSceneData *this,FLumenPrimitiveGroup *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  
  uVar13 = param_1->PrimitiveCullingInfoIndex;
  if ((int)uVar13 < 0) {
    if ((param_1->InstanceCullingInfoIndex != -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrimitiveGroup.InstanceCullingInfoIndex == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                           ,0x282,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((*(int *)&(this->PrimitiveCullingInfos).field_0x28 <= (int)uVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar16 = *(undefined1 **)&(this->PrimitiveCullingInfos).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->PrimitiveCullingInfos).field_0x10;
    }
    if ((*(uint *)(puVar16 + (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar13 & 0x1f) & 1) != 0) {
      lVar15 = *(longlong *)&this->PrimitiveCullingInfos;
      lVar14 = (longlong)param_1->PrimitiveCullingInfoIndex * 0x20;
      if ((*(uint *)(lVar14 + lVar15) & 0xffffffe0) != 0) {
        if ((param_1->PrimitiveInstanceIndex < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrimitiveGroup.PrimitiveInstanceIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                               ,0x270,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((param_1->InstanceCullingInfoIndex !=
             param_1->PrimitiveInstanceIndex + *(int *)(lVar14 + 4 + lVar15)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PrimitiveGroup.InstanceCullingInfoIndex == PrimitiveCullingInfo.InstanceCullingInfoOffset + PrimitiveGroup.PrimitiveInstanceIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                               ,0x271,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = *(uint *)(lVar14 + 4 + lVar15);
        uVar18 = *(uint *)(lVar14 + lVar15) >> 5;
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumElements > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                               ,0x38,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar7 = _UNK_150a9e6b8;
        uVar6 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
        if ((int)uVar13 < (int)(uVar18 + uVar13)) {
          lVar15 = (longlong)(int)uVar13 << 5;
          uVar12 = uVar13;
          do {
            uVar9 = 0;
            if ((int)uVar12 < (this->InstanceCullingInfos).Elements.ArrayNum) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = (this->InstanceCullingInfos).Elements.AllocatorInstance.Data;
            uVar12 = uVar12 + 1;
            pFVar1 = pFVar3 + lVar15;
            *(undefined8 *)pFVar1 = 0;
            *(undefined8 *)(pFVar1 + 8) = uVar6;
            pFVar3 = pFVar3 + lVar15 + 0x10;
            *(undefined8 *)pFVar3 = uVar7;
            *(undefined8 *)(pFVar3 + 8) = 0xff7fffffff7fffff;
            lVar15 = lVar15 + 0x20;
          } while ((int)uVar12 < (int)(uVar18 + uVar13));
        }
        FSpanAllocator::Free(&(this->InstanceCullingInfos).SpanAllocator,uVar13,uVar18);
        TBitArray<FDefaultBitArrayAllocator>::SetRange
                  (&(this->InstanceCullingInfos).AllocatedElementsBitArray,uVar13,uVar18,false);
      }
      puVar16 = &(this->PrimitiveCullingInfos).field_0x10;
      iVar2 = param_1->PrimitiveCullingInfoIndex;
      lVar15 = *(longlong *)&this->PrimitiveCullingInfos;
      bVar5 = (byte)iVar2 & 0x1f;
      uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      if (((iVar2 < 0) || (*(int *)&(this->PrimitiveCullingInfos).field_0x28 <= iVar2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar11 = *(undefined1 **)&(this->PrimitiveCullingInfos).field_0x20;
      lVar14 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5);
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar16;
      }
      if (((*(uint *)(puVar11 + lVar14 * 4) & uVar13) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(int *)&(this->PrimitiveCullingInfos).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->PrimitiveCullingInfos).field_0x30 * 0x20 + lVar15) =
             iVar2;
      }
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar15) = 0xffffffff;
      if (*(int *)&(this->PrimitiveCullingInfos).field_0x34 < 1) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x30;
      }
      *(undefined4 *)((longlong)iVar2 * 0x20 + 4 + lVar15) = uVar10;
      puVar11 = &(this->PrimitiveCullingInfos).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      *(int *)&(this->PrimitiveCullingInfos).field_0x30 = iVar2;
      if (((iVar2 < 0) || (*(int *)&(this->PrimitiveCullingInfos).field_0x28 <= iVar2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar11 = *(undefined1 **)&(this->PrimitiveCullingInfos).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar16;
      }
      *(uint *)(puVar11 + lVar14 * 4) = *(uint *)(puVar11 + lVar14 * 4) & ~uVar13;
    }
    uVar13 = param_1->InstanceCullingInfoIndex;
    param_1->PrimitiveCullingInfoIndex = -1;
    if (-1 < (int)uVar13) {
      lVar15 = 0x3d8;
      if ((this->InstanceCullingInfos).SpanAllocator.bGrowOnly == false) {
        lVar15 = 0x3d4;
      }
      if ((int)uVar13 <
          *(int *)((longlong)(&(this->Cards).AllocatedElementsBitArray.AllocatorInstance + -1) +
                  lVar15)) {
        if (((this->InstanceCullingInfos).AllocatedElementsBitArray.NumBits <= (int)uVar13) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar17 = (this->InstanceCullingInfos).AllocatedElementsBitArray.AllocatorInstance.
                 SecondaryData;
        if (FVar17 == (ForElementType<unsigned_int>)0x0) {
          FVar17 = (ForElementType<unsigned_int>)
                   &(this->InstanceCullingInfos).AllocatedElementsBitArray;
        }
        if (((*(uint *)((longlong)FVar17 +
                       (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4) >>
              (uVar13 & 0x1f) & 1) != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InstanceCullingInfos.IsAllocated(PrimitiveGroup.InstanceCullingInfoIndex)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                               ,0x27c,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      param_1->InstanceCullingInfoIndex = -1;
      return;
    }
  }
  return;
}

// UpdateMeshCards @ 144c67380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::UpdateMeshCards
          (FLumenSceneData *this,TMatrix<double> *param_1,int param_2,FMeshCardsBuildData *param_3)

{
  int *piVar1;
  FUniqueIndexList *pFVar2;
  uint *puVar3;
  ForElementType<unsigned_int> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FLumenMeshCards *this_00;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint local_28 [4];
  
  if ((-1 < param_2) && (bVar7 = IsMatrixOrthogonal(param_1), bVar7)) {
    this_00 = TSparseSpanArray<FLumenMeshCards>::operator[](&this->MeshCards,param_2);
    FLumenMeshCards::SetTransform(this_00,param_1);
    FUniqueIndexList::Add(&this->MeshCardsIndicesToUpdateInBuffer,param_2);
    uVar13 = 0;
    if (this_00->NumCards != 0) {
      pFVar2 = &this->CardIndicesToUpdateInBuffer;
      do {
        uVar10 = this_00->FirstCardIndex + uVar13;
        uVar12 = 0;
        if ((int)uVar10 < (this->Cards).Elements.ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FLumenCard::SetTransform
                  ((FLumenCard *)
                   ((this->Cards).Elements.AllocatorInstance.Data + (longlong)(int)uVar10 * 400),
                   param_1,this_00);
        iVar11 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits;
        local_28[0] = uVar10;
        if ((iVar11 < (int)(uVar10 + 1)) &&
           (iVar11 = (uVar10 + 0x40 & 0xffffffc0) - iVar11, -1 < iVar11)) {
          iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            (&(this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate,iVar11);
          TBitArray<FDefaultBitArrayAllocator>::SetRange
                    (&(this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate,iVar8,iVar11,false);
        }
        uVar12 = local_28[0];
        if ((((int)local_28[0] < 0) ||
            ((this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits <= (int)local_28[0]))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar4 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
                SecondaryData;
        FVar9 = (ForElementType<unsigned_int>)
                &(this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = FVar4;
        }
        uVar10 = uVar12 & 0x1f;
        if ((int)uVar12 < 0) {
          uVar12 = uVar12 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar9 + (longlong)((int)uVar12 >> 5) * 4) >> uVar10 & 1) == 0) {
          pFVar5 = (pFVar2->Indices).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_28) &&
              ((FScriptContainerElement *)local_28 <
               pFVar5 + (longlong)(this->CardIndicesToUpdateInBuffer).Indices.ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (this->CardIndicesToUpdateInBuffer).Indices.ArrayNum;
          piVar1 = &(this->CardIndicesToUpdateInBuffer).Indices.ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar2,piVar1);
          }
          uVar12 = local_28[0];
          (this->CardIndicesToUpdateInBuffer).Indices.ArrayNum = iVar11 + 1;
          *(uint *)((pFVar2->Indices).AllocatorInstance.Data + (longlong)iVar11 * 4) = local_28[0];
          if ((((int)local_28[0] < 0) ||
              ((this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits <= (int)local_28[0]
              )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar4 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
                  SecondaryData;
          FVar9 = (ForElementType<unsigned_int>)
                  &(this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar9 = FVar4;
          }
          uVar10 = uVar12;
          if ((int)uVar12 < 0) {
            uVar10 = uVar12 + 0x1f;
          }
          puVar3 = (uint *)((longlong)FVar9 + (longlong)((int)uVar10 >> 5) * 4);
          *puVar3 = *puVar3 | 1 << ((byte)uVar12 & 0x1f);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < this_00->NumCards);
    }
  }
  return;
}

// UpdatePrimitiveGroupCullingInfo @ 144c67700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::UpdatePrimitiveGroupCullingInfo
          (FLumenSceneData *this,FLumenPrimitiveGroup *param_1,FRenderBounds *param_2,bool param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FLumenPrimitiveGroupCullingInfo *pFVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_3) && (param_1->InstanceCullingInfoIndex < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bForcePrimitiveLevel || PrimitiveGroup.InstanceCullingInfoIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                       ,0x288,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = GetPrimitiveGroupCullingInfo(this,param_1,param_3);
  uVar2 = *(undefined8 *)((longlong)&(param_2->Min).field0_0x0 + 8);
  *(undefined8 *)&(pFVar4->WorldSpaceBoundingBox).Min.field0_0x0 =
       *(undefined8 *)&(param_2->Min).field0_0x0;
  *(undefined8 *)((longlong)&(pFVar4->WorldSpaceBoundingBox).Min.field0_0x0 + 8) = uVar2;
  *(undefined8 *)((longlong)&(pFVar4->WorldSpaceBoundingBox).Max.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_2->Max).field0_0x0 + 4);
  if (!param_3) {
    uVar5 = (uint)~param_1->MeshCardsIndex >> 0x1f;
    uVar6 = uVar5 | *(uint *)pFVar4 & 0xfffffffe;
    pFVar4->bVisible = uVar5;
    *(uint *)pFVar4 = ((uint)(byte)param_1->field_0x38 * 2 ^ uVar6) & 2 ^ uVar6;
  }
  return;
}

// GetRadiosityAtlasSize @ 144cccca0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TIntPoint<int> __thiscall FLumenSceneData::GetRadiosityAtlasSize(FLumenSceneData *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->PhysicalAtlasSize).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// FLumenSceneData @ 144d3f9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FLumenSceneData * __thiscall
FLumenSceneData::FLumenSceneData(FLumenSceneData *this,EShaderPlatform param_1,Type param_2)

{
  longlong lVar1;
  code *pcVar2;
  FLinearColor FVar3;
  void *pvVar4;
  bool bVar5;
  FLumenSceneData *pFVar6;
  IConsoleManager *pIVar7;
  longlong *plVar8;
  TConsoleVariableData<int> *pTVar9;
  ulonglong uVar10;
  
  pTVar9 = (TConsoleVariableData<int> *)0x0;
  this->bDebugClearAllCachedState = false;
  this->bAllowCardSharing = false;
  this->bAllowCardDownsampleFromSelf = false;
  this->bReuploadSceneRequest = false;
  (this->Cards).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cards).Elements.ArrayNum = 0;
  (this->Cards).Elements.ArrayMax = 0;
  (this->Cards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Cards).AllocatedElementsBitArray.NumBits = 0;
  (this->Cards).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->Cards).SpanAllocator,false);
  (this->CardIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CardIndicesToUpdateInBuffer).Indices.ArrayNum = 0;
  (this->CardIndicesToUpdateInBuffer).Indices.ArrayMax = 0;
  (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits = 0;
  (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.MaxBits = 0x80;
  (this->CardBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->CardUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CardUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).Indices.ArrayNum = 0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).Indices.ArrayMax = 0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
  SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits = 0;
  *(undefined8 *)&(this->PrimitiveGroupIndicesToUpdateInBuffer).IndicesMarkedToUpdate.MaxBits = 0x80
  ;
  (this->PrimitiveGroups).NumAllocatedElements = 0;
  (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne = 0;
  (this->PrimitiveGroups).ElementChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveGroups).ElementChunks.ArrayNum = 0;
  (this->PrimitiveGroups).ElementChunks.ArrayMax = 0;
  (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PrimitiveGroups).AllocatedElementsBitArray.NumBits = 0;
  (this->PrimitiveGroups).AllocatedElementsBitArray.MaxBits = 0x80;
  (this->PrimitiveGroupBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitiveGroupUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitiveGroupUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
  TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
              *)&this->RayTracingGroups);
  (this->LandscapePrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapePrimitives).ArrayNum = 0;
  (this->LandscapePrimitives).ArrayMax = 0;
  (this->MeshCardsIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MeshCardsIndicesToUpdateInBuffer).Indices.ArrayNum = 0;
  (this->MeshCardsIndicesToUpdateInBuffer).Indices.ArrayMax = 0;
  (this->MeshCardsIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->MeshCardsIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits = 0;
  (this->MeshCardsIndicesToUpdateInBuffer).IndicesMarkedToUpdate.MaxBits = 0x80;
  (this->MeshCards).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshCards).Elements.ArrayNum = 0;
  (this->MeshCards).Elements.ArrayMax = 0;
  (this->MeshCards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->MeshCards).AllocatedElementsBitArray.NumBits = 0;
  (this->MeshCards).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->MeshCards).SpanAllocator,false);
  (this->InstanceCullingInfos).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCullingInfos).Elements.ArrayNum = 0;
  (this->InstanceCullingInfos).Elements.ArrayMax = 0;
  (this->InstanceCullingInfos).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->InstanceCullingInfos).AllocatedElementsBitArray.NumBits = 0;
  (this->InstanceCullingInfos).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->InstanceCullingInfos).SpanAllocator,false);
  *(undefined8 *)&this->PrimitiveCullingInfos = 0;
  *(undefined8 *)&(this->PrimitiveCullingInfos).field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveCullingInfos).field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x34 = 0;
  (this->MeshCardsBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->MeshCardsUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->MeshCardsUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->HeightfieldIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HeightfieldIndicesToUpdateInBuffer).Indices.ArrayNum = 0;
  (this->HeightfieldIndicesToUpdateInBuffer).Indices.ArrayMax = 0;
  (this->HeightfieldIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->HeightfieldIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits = 0;
  (this->HeightfieldIndicesToUpdateInBuffer).IndicesMarkedToUpdate.MaxBits = 0x80;
  (this->Heightfields).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Heightfields).Elements.ArrayNum = 0;
  (this->Heightfields).Elements.ArrayMax = 0;
  (this->Heightfields).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Heightfields).AllocatedElementsBitArray.NumBits = 0;
  (this->Heightfields).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->Heightfields).SpanAllocator,false);
  (this->HeightfieldBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->HeightfieldUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->HeightfieldUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PageTable).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageTable).Elements.ArrayNum = 0;
  (this->PageTable).Elements.ArrayMax = 0;
  (this->PageTable).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PageTable).AllocatedElementsBitArray.NumBits = 0;
  (this->PageTable).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->PageTable).SpanAllocator,false);
  (this->PageTableIndicesToUpdateInBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageTableIndicesToUpdateInBuffer).ArrayNum = 0;
  (this->PageTableIndicesToUpdateInBuffer).ArrayMax = 0;
  (this->PageTableBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PageTableUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PageTableUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitivesToUpdateMeshCards).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitivesToUpdateMeshCards).Indices.ArrayNum = 0;
  (this->PrimitivesToUpdateMeshCards).Indices.ArrayMax = 0;
  (this->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.NumBits = 0;
  (this->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.MaxBits = 0x80;
  (this->SceneInstanceIndexToMeshCardsIndexBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->SceneInstanceIndexToMeshCardsIndexUploadBuffer).ScatterBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->SceneInstanceIndexToMeshCardsIndexUploadBuffer).UploadBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->CardPageBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->CardPageUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CardPageUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CardPageLastUsedBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->CardPageHighResLastUsedBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->AlbedoAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->OpacityAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->NormalAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->EmissiveAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->DepthAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->DirectLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->IndirectLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityNumFramesAccumulatedAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->FinalLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->TileShadowDownsampleFactorAtlas).Reference = (FRDGPooledBuffer *)0x0;
  (this->RadiosityTraceRadianceAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityTraceHitDistanceAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityProbeSHRedAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityProbeSHGreenAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityProbeSHBlueAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->DiffuseLightingAndSecondMomentHistoryAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->NumFramesAccumulatedHistoryAtlas).Reference = (IPooledRenderTarget *)0x0;
  FLumenSceneReadback::FLumenSceneReadback(&this->SceneReadback);
  FLumenSurfaceCacheFeedback::FLumenSurfaceCacheFeedback(&this->SurfaceCacheFeedback);
  (this->GlobalLightingState).DirectionalLightColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FVar3 = FLinearColor::Black;
  (this->GlobalLightingState).bDirectionalLightValid = false;
  (this->GlobalLightingState).bSkyLightValid = false;
  (this->GlobalLightingState).SkyLightColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0
  ;
  this->bFinalLightingAtlasContentsValid = false;
  this->NumMeshCardsToAdd = 0;
  this->NumLockedCardsToUpdate = 0;
  this->NumHiResPagesToAdd = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x34 = 0;
  (this->PendingAddOperations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingAddOperations).HashSize = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x34 = 0;
  (this->PendingUpdateOperations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingUpdateOperations).HashSize = 0;
  *(undefined8 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements = 0;
  *(undefined8 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x30 = 0xffffffff
  ;
  *(undefined4 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x34 = 0;
  (this->PendingSurfaceCacheInvalidationOperations).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->PendingSurfaceCacheInvalidationOperations).HashSize = 0;
  (this->PendingRemoveOperations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveOperations).ArrayNum = 0;
  (this->PendingRemoveOperations).ArrayMax = 0;
  this->SurfaceCacheResolution = 1.0;
  this->bViewSpecific = false;
  this->bViewSpecificMaskInitialized = false;
  (this->ViewSpecificMask).GPUMask = 1;
  this->SurfaceCacheUpdateFrameIndex = 1;
  this->CurrentLightingDataFormat = PF_Unknown;
  *(undefined8 *)&this->CurrentCachedLightingPreExposure = 0;
  (this->PhysicalAtlasSize).field0_0x0._s_0.Y = 0;
  (this->SurfaceCacheAllocator).PhysicalPageList.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SurfaceCacheAllocator).PhysicalPageList.NumBits = 0;
  *(undefined8 *)&(this->SurfaceCacheAllocator).PhysicalPageList.MaxBits = 0x400;
  (this->SurfaceCacheAllocator).PageAtlasSizeInPages.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->SurfaceCacheAllocator).PageBins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceCacheAllocator).PageBins.ArrayNum = 0;
  (this->SurfaceCacheAllocator).PageBins.ArrayMax = 0;
  (this->SurfaceCacheAllocator).bInitPageBinLookup = true;
  (this->UnlockedAllocationHeap).HeapNum = 0;
  (this->UnlockedAllocationHeap).HeapSize = 0;
  (this->UnlockedAllocationHeap).IndexSize = 0;
  (this->UnlockedAllocationHeap).Heap = (uint *)0x0;
  (this->UnlockedAllocationHeap).Keys = (uint *)0x0;
  (this->UnlockedAllocationHeap).HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[0].HeapNum = 0;
  this->PagesToRecaptureHeap[0].HeapSize = 0;
  this->PagesToRecaptureHeap[0].IndexSize = 0;
  this->PagesToRecaptureHeap[0].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[0].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[0].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[1].HeapNum = 0;
  this->PagesToRecaptureHeap[1].HeapSize = 0;
  this->PagesToRecaptureHeap[1].IndexSize = 0;
  this->PagesToRecaptureHeap[1].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[1].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[1].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[2].HeapNum = 0;
  this->PagesToRecaptureHeap[2].HeapSize = 0;
  this->PagesToRecaptureHeap[2].IndexSize = 0;
  this->PagesToRecaptureHeap[2].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[2].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[2].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[3].HeapNum = 0;
  this->PagesToRecaptureHeap[3].HeapSize = 0;
  this->PagesToRecaptureHeap[3].IndexSize = 0;
  this->PagesToRecaptureHeap[3].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[3].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[3].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[4].HeapNum = 0;
  this->PagesToRecaptureHeap[4].HeapSize = 0;
  this->PagesToRecaptureHeap[4].IndexSize = 0;
  this->PagesToRecaptureHeap[4].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[4].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[4].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[5].HeapNum = 0;
  this->PagesToRecaptureHeap[5].HeapSize = 0;
  this->PagesToRecaptureHeap[5].IndexSize = 0;
  this->PagesToRecaptureHeap[5].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[5].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[5].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[6].HeapNum = 0;
  this->PagesToRecaptureHeap[6].HeapSize = 0;
  this->PagesToRecaptureHeap[6].IndexSize = 0;
  this->PagesToRecaptureHeap[6].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[6].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[6].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[7].HeapNum = 0;
  this->PagesToRecaptureHeap[7].HeapSize = 0;
  this->PagesToRecaptureHeap[7].IndexSize = 0;
  this->PagesToRecaptureHeap[7].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[7].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[7].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[0].HeapNum = 0;
  this->LastCapturedPageHeap[0].HeapSize = 0;
  this->LastCapturedPageHeap[0].IndexSize = 0;
  this->LastCapturedPageHeap[0].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[0].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[0].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[1].HeapNum = 0;
  this->LastCapturedPageHeap[1].HeapSize = 0;
  this->LastCapturedPageHeap[1].IndexSize = 0;
  this->LastCapturedPageHeap[1].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[1].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[1].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[2].HeapNum = 0;
  this->LastCapturedPageHeap[2].HeapSize = 0;
  this->LastCapturedPageHeap[2].IndexSize = 0;
  this->LastCapturedPageHeap[2].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[2].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[2].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[3].HeapNum = 0;
  this->LastCapturedPageHeap[3].HeapSize = 0;
  this->LastCapturedPageHeap[3].IndexSize = 0;
  this->LastCapturedPageHeap[3].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[3].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[3].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[4].HeapNum = 0;
  this->LastCapturedPageHeap[4].HeapSize = 0;
  this->LastCapturedPageHeap[4].IndexSize = 0;
  pvVar4 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  this->LastCapturedPageHeap[4].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[4].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[4].HeapIndexes = (uint *)0x0;
  lVar1 = *(longlong *)((longlong)pvVar4 + uVar10 * 8);
  this->LastCapturedPageHeap[5].HeapNum = 0;
  this->LastCapturedPageHeap[5].HeapSize = 0;
  this->LastCapturedPageHeap[5].IndexSize = 0;
  this->LastCapturedPageHeap[5].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[5].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[5].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[6].HeapNum = 0;
  this->LastCapturedPageHeap[6].HeapSize = 0;
  this->LastCapturedPageHeap[6].IndexSize = 0;
  this->LastCapturedPageHeap[6].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[6].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[6].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[7].HeapNum = 0;
  this->LastCapturedPageHeap[7].HeapSize = 0;
  this->LastCapturedPageHeap[7].IndexSize = 0;
  this->LastCapturedPageHeap[7].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[7].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[7].HeapIndexes = (uint *)0x0;
  *(undefined8 *)&this->CardSharingInfoMap = 0;
  *(undefined8 *)&(this->CardSharingInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CardSharingInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->CardSharingInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x48 = 0;
  (this->PendingRemoveCardSharingInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveCardSharingInfos).ArrayNum = 0;
  (this->PendingRemoveCardSharingInfos).ArrayMax = 0;
  (this->PendingAddCardSharingInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAddCardSharingInfos).ArrayNum = 0;
  (this->PendingAddCardSharingInfos).ArrayMax = 0;
  if ((*(int *)(lVar1 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar7 = IConsoleManager::Get();
    plVar8 = (longlong *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.MeshCardRepresentation",1);
    if (plVar8 != (longlong *)0x0) {
      pTVar9 = (TConsoleVariableData<int> *)(**(code **)(*plVar8 + 0x68))(plVar8);
    }
    MeshCardCVar = pTVar9;
    _Init_thread_footer(&::_TSS0);
  }
  bVar5 = DoesPlatformSupportLumenGI(param_1,false);
  pTVar9 = MeshCardCVar;
  if (bVar5) {
    bVar5 = IsInParallelGameThread();
    if (((!bVar5) && (bVar5 = IsInGameThread(), !bVar5)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FLumenSceneData *)(*pcVar2)();
      return pFVar6;
    }
    if ((pTVar9->ShadowedValue[0] != 0) && (param_2 != EditorPreview)) {
      this->bTrackAllPrimitives = true;
      return this;
    }
  }
  this->bTrackAllPrimitives = false;
  return this;
}

// FLumenSceneData @ 144d402a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenSceneData * __thiscall FLumenSceneData::FLumenSceneData(FLumenSceneData *this,bool param_1)

{
  FLinearColor FVar1;
  
  this->bDebugClearAllCachedState = false;
  this->bAllowCardSharing = false;
  this->bAllowCardDownsampleFromSelf = false;
  this->bReuploadSceneRequest = false;
  (this->Cards).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cards).Elements.ArrayNum = 0;
  (this->Cards).Elements.ArrayMax = 0;
  (this->Cards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Cards).AllocatedElementsBitArray.NumBits = 0;
  (this->Cards).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->Cards).SpanAllocator,false);
  (this->CardIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CardIndicesToUpdateInBuffer).Indices.ArrayNum = 0;
  (this->CardIndicesToUpdateInBuffer).Indices.ArrayMax = 0;
  (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits = 0;
  (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.MaxBits = 0x80;
  (this->CardBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->CardUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CardUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).Indices.ArrayNum = 0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).Indices.ArrayMax = 0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
  SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->PrimitiveGroupIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits = 0;
  *(undefined8 *)&(this->PrimitiveGroupIndicesToUpdateInBuffer).IndicesMarkedToUpdate.MaxBits = 0x80
  ;
  (this->PrimitiveGroups).NumAllocatedElements = 0;
  (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne = 0;
  (this->PrimitiveGroups).ElementChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveGroups).ElementChunks.ArrayNum = 0;
  (this->PrimitiveGroups).ElementChunks.ArrayMax = 0;
  (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PrimitiveGroups).AllocatedElementsBitArray.NumBits = 0;
  (this->PrimitiveGroups).AllocatedElementsBitArray.MaxBits = 0x80;
  (this->PrimitiveGroupBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitiveGroupUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitiveGroupUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
  TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
              *)&this->RayTracingGroups);
  (this->LandscapePrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapePrimitives).ArrayNum = 0;
  (this->LandscapePrimitives).ArrayMax = 0;
  (this->MeshCardsIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MeshCardsIndicesToUpdateInBuffer).Indices.ArrayNum = 0;
  (this->MeshCardsIndicesToUpdateInBuffer).Indices.ArrayMax = 0;
  (this->MeshCardsIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->MeshCardsIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits = 0;
  (this->MeshCardsIndicesToUpdateInBuffer).IndicesMarkedToUpdate.MaxBits = 0x80;
  (this->MeshCards).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshCards).Elements.ArrayNum = 0;
  (this->MeshCards).Elements.ArrayMax = 0;
  (this->MeshCards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->MeshCards).AllocatedElementsBitArray.NumBits = 0;
  (this->MeshCards).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->MeshCards).SpanAllocator,false);
  (this->InstanceCullingInfos).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceCullingInfos).Elements.ArrayNum = 0;
  (this->InstanceCullingInfos).Elements.ArrayMax = 0;
  (this->InstanceCullingInfos).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->InstanceCullingInfos).AllocatedElementsBitArray.NumBits = 0;
  (this->InstanceCullingInfos).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->InstanceCullingInfos).SpanAllocator,false);
  *(undefined8 *)&this->PrimitiveCullingInfos = 0;
  *(undefined8 *)&(this->PrimitiveCullingInfos).field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveCullingInfos).field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x34 = 0;
  (this->MeshCardsBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->MeshCardsUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->MeshCardsUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->HeightfieldIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->HeightfieldIndicesToUpdateInBuffer).Indices.ArrayNum = 0;
  (this->HeightfieldIndicesToUpdateInBuffer).Indices.ArrayMax = 0;
  (this->HeightfieldIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->HeightfieldIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits = 0;
  (this->HeightfieldIndicesToUpdateInBuffer).IndicesMarkedToUpdate.MaxBits = 0x80;
  (this->Heightfields).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Heightfields).Elements.ArrayNum = 0;
  (this->Heightfields).Elements.ArrayMax = 0;
  (this->Heightfields).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Heightfields).AllocatedElementsBitArray.NumBits = 0;
  (this->Heightfields).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->Heightfields).SpanAllocator,false);
  (this->HeightfieldBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->HeightfieldUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->HeightfieldUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PageTable).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageTable).Elements.ArrayNum = 0;
  (this->PageTable).Elements.ArrayMax = 0;
  (this->PageTable).AllocatedElementsBitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PageTable).AllocatedElementsBitArray.NumBits = 0;
  (this->PageTable).AllocatedElementsBitArray.MaxBits = 0x80;
  FSpanAllocator::FSpanAllocator(&(this->PageTable).SpanAllocator,false);
  (this->PageTableIndicesToUpdateInBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageTableIndicesToUpdateInBuffer).ArrayNum = 0;
  (this->PageTableIndicesToUpdateInBuffer).ArrayMax = 0;
  (this->PageTableBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PageTableUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PageTableUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitivesToUpdateMeshCards).Indices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrimitivesToUpdateMeshCards).Indices.ArrayNum = 0;
  (this->PrimitivesToUpdateMeshCards).Indices.ArrayMax = 0;
  (this->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.NumBits = 0;
  (this->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.MaxBits = 0x80;
  (this->SceneInstanceIndexToMeshCardsIndexBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->SceneInstanceIndexToMeshCardsIndexUploadBuffer).ScatterBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->SceneInstanceIndexToMeshCardsIndexUploadBuffer).UploadBuffer.Reference =
       (FRDGPooledBuffer *)0x0;
  (this->CardPageBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->CardPageUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CardPageUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CardPageLastUsedBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->CardPageHighResLastUsedBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->AlbedoAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->OpacityAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->NormalAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->EmissiveAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->DepthAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->DirectLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->IndirectLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityNumFramesAccumulatedAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->FinalLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->TileShadowDownsampleFactorAtlas).Reference = (FRDGPooledBuffer *)0x0;
  (this->RadiosityTraceRadianceAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityTraceHitDistanceAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityProbeSHRedAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityProbeSHGreenAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->RadiosityProbeSHBlueAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->DiffuseLightingAndSecondMomentHistoryAtlas).Reference = (IPooledRenderTarget *)0x0;
  (this->NumFramesAccumulatedHistoryAtlas).Reference = (IPooledRenderTarget *)0x0;
  FLumenSceneReadback::FLumenSceneReadback(&this->SceneReadback);
  FLumenSurfaceCacheFeedback::FLumenSurfaceCacheFeedback(&this->SurfaceCacheFeedback);
  (this->GlobalLightingState).DirectionalLightColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  FVar1 = FLinearColor::Black;
  (this->GlobalLightingState).bDirectionalLightValid = false;
  (this->GlobalLightingState).bSkyLightValid = false;
  (this->GlobalLightingState).SkyLightColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0
  ;
  this->bFinalLightingAtlasContentsValid = false;
  this->NumMeshCardsToAdd = 0;
  this->NumLockedCardsToUpdate = 0;
  this->NumHiResPagesToAdd = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingAddOperations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingAddOperations).Elements.field_0x34 = 0;
  (this->PendingAddOperations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingAddOperations).HashSize = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingUpdateOperations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingUpdateOperations).Elements.field_0x34 = 0;
  (this->PendingUpdateOperations).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PendingUpdateOperations).HashSize = 0;
  *(undefined8 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements = 0;
  *(undefined8 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x30 = 0xffffffff
  ;
  *(undefined4 *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x34 = 0;
  (this->PendingSurfaceCacheInvalidationOperations).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->PendingSurfaceCacheInvalidationOperations).HashSize = 0;
  (this->PendingRemoveOperations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveOperations).ArrayNum = 0;
  (this->PendingRemoveOperations).ArrayMax = 0;
  this->SurfaceCacheResolution = 1.0;
  this->bViewSpecific = false;
  this->bViewSpecificMaskInitialized = false;
  (this->ViewSpecificMask).GPUMask = 1;
  this->SurfaceCacheUpdateFrameIndex = 1;
  this->CurrentLightingDataFormat = PF_Unknown;
  *(undefined8 *)&this->CurrentCachedLightingPreExposure = 0;
  (this->PhysicalAtlasSize).field0_0x0._s_0.Y = 0;
  (this->SurfaceCacheAllocator).PhysicalPageList.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->SurfaceCacheAllocator).PhysicalPageList.NumBits = 0;
  *(undefined8 *)&(this->SurfaceCacheAllocator).PhysicalPageList.MaxBits = 0x400;
  (this->SurfaceCacheAllocator).PageAtlasSizeInPages.field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  (this->SurfaceCacheAllocator).PageBins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SurfaceCacheAllocator).PageBins.ArrayNum = 0;
  (this->SurfaceCacheAllocator).PageBins.ArrayMax = 0;
  (this->SurfaceCacheAllocator).bInitPageBinLookup = true;
  (this->UnlockedAllocationHeap).HeapNum = 0;
  (this->UnlockedAllocationHeap).HeapSize = 0;
  (this->UnlockedAllocationHeap).IndexSize = 0;
  (this->UnlockedAllocationHeap).Heap = (uint *)0x0;
  (this->UnlockedAllocationHeap).Keys = (uint *)0x0;
  (this->UnlockedAllocationHeap).HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[0].HeapNum = 0;
  this->PagesToRecaptureHeap[0].HeapSize = 0;
  this->PagesToRecaptureHeap[0].IndexSize = 0;
  this->PagesToRecaptureHeap[0].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[0].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[0].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[1].HeapNum = 0;
  this->PagesToRecaptureHeap[1].HeapSize = 0;
  this->PagesToRecaptureHeap[1].IndexSize = 0;
  this->PagesToRecaptureHeap[1].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[1].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[1].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[2].HeapNum = 0;
  this->PagesToRecaptureHeap[2].HeapSize = 0;
  this->PagesToRecaptureHeap[2].IndexSize = 0;
  this->PagesToRecaptureHeap[2].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[2].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[2].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[3].HeapNum = 0;
  this->PagesToRecaptureHeap[3].HeapSize = 0;
  this->PagesToRecaptureHeap[3].IndexSize = 0;
  this->PagesToRecaptureHeap[3].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[3].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[3].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[4].HeapNum = 0;
  this->PagesToRecaptureHeap[4].HeapSize = 0;
  this->PagesToRecaptureHeap[4].IndexSize = 0;
  this->PagesToRecaptureHeap[4].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[4].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[4].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[5].HeapNum = 0;
  this->PagesToRecaptureHeap[5].HeapSize = 0;
  this->PagesToRecaptureHeap[5].IndexSize = 0;
  this->PagesToRecaptureHeap[5].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[5].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[5].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[6].HeapNum = 0;
  this->PagesToRecaptureHeap[6].HeapSize = 0;
  this->PagesToRecaptureHeap[6].IndexSize = 0;
  this->PagesToRecaptureHeap[6].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[6].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[6].HeapIndexes = (uint *)0x0;
  this->PagesToRecaptureHeap[7].HeapNum = 0;
  this->PagesToRecaptureHeap[7].HeapSize = 0;
  this->PagesToRecaptureHeap[7].IndexSize = 0;
  this->PagesToRecaptureHeap[7].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[7].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[7].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[0].HeapNum = 0;
  this->LastCapturedPageHeap[0].HeapSize = 0;
  this->LastCapturedPageHeap[0].IndexSize = 0;
  this->LastCapturedPageHeap[0].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[0].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[0].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[1].HeapNum = 0;
  this->LastCapturedPageHeap[1].HeapSize = 0;
  this->LastCapturedPageHeap[1].IndexSize = 0;
  this->LastCapturedPageHeap[1].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[1].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[1].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[2].HeapNum = 0;
  this->LastCapturedPageHeap[2].HeapSize = 0;
  this->LastCapturedPageHeap[2].IndexSize = 0;
  this->LastCapturedPageHeap[2].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[2].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[2].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[3].HeapNum = 0;
  this->LastCapturedPageHeap[3].HeapSize = 0;
  this->LastCapturedPageHeap[3].IndexSize = 0;
  this->LastCapturedPageHeap[3].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[3].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[3].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[4].HeapNum = 0;
  this->LastCapturedPageHeap[4].HeapSize = 0;
  this->LastCapturedPageHeap[4].IndexSize = 0;
  this->LastCapturedPageHeap[4].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[4].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[4].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[5].HeapNum = 0;
  this->LastCapturedPageHeap[5].HeapSize = 0;
  this->LastCapturedPageHeap[5].IndexSize = 0;
  this->LastCapturedPageHeap[5].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[5].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[5].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[6].HeapNum = 0;
  this->LastCapturedPageHeap[6].HeapSize = 0;
  this->LastCapturedPageHeap[6].IndexSize = 0;
  this->LastCapturedPageHeap[6].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[6].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[6].HeapIndexes = (uint *)0x0;
  this->LastCapturedPageHeap[7].HeapNum = 0;
  this->LastCapturedPageHeap[7].HeapSize = 0;
  this->LastCapturedPageHeap[7].IndexSize = 0;
  this->LastCapturedPageHeap[7].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[7].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[7].HeapIndexes = (uint *)0x0;
  *(undefined8 *)&this->CardSharingInfoMap = 0;
  *(undefined8 *)&(this->CardSharingInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CardSharingInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CardSharingInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x48 = 0;
  (this->PendingRemoveCardSharingInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveCardSharingInfos).ArrayNum = 0;
  (this->PendingRemoveCardSharingInfos).ArrayMax = 0;
  (this->PendingAddCardSharingInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingAddCardSharingInfos).ArrayNum = 0;
  (this->PendingAddCardSharingInfos).ArrayMax = 0;
  this->bTrackAllPrimitives = param_1;
  return this;
}

// ~FLumenSceneData @ 144d426a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLumenSceneData::~FLumenSceneData(FLumenSceneData *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  FLumenCard *pFVar5;
  FLumenMeshCards *pFVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  ForElementType<FSetElementId> FVar9;
  IPooledRenderTarget *pIVar10;
  FRDGPooledBuffer *pFVar11;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  uint uVar18;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Lumen.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Lumen.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  uVar18 = 0;
  while( true ) {
    lVar16 = 0x40;
    if ((this->Cards).SpanAllocator.bGrowOnly == false) {
      lVar16 = 0x3c;
    }
    if (*(int *)((longlong)(&(this->Cards).AllocatedElementsBitArray.AllocatorInstance + -1) +
                lVar16) <= (int)uVar18) break;
    lVar16 = 0x38;
    if ((this->Cards).SpanAllocator.bGrowOnly == false) {
      lVar16 = 0x34;
    }
    if ((int)uVar18 <
        *(int *)((this->Cards).AllocatedElementsBitArray.AllocatorInstance.InlineData +
                lVar16 + -0x10)) {
      if (((int)uVar18 < 0) || ((this->Cards).AllocatedElementsBitArray.NumBits <= (int)uVar18)) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L"");
        if (bVar14) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
      FVar4 = (this->Cards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&(this->Cards).AllocatedElementsBitArray;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar4;
      }
      uVar15 = uVar18;
      if ((int)uVar18 < 0) {
        uVar15 = uVar18 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar18 & 0x1f) & 1) !=
          0) {
        RemoveCardFromAtlas(this,uVar18);
      }
    }
    uVar18 = uVar18 + 1;
  }
  piVar1 = &(this->Cards).Elements.ArrayMax;
  pFVar5 = (FLumenCard *)(this->Cards).Elements.AllocatorInstance.Data;
  iVar3 = (this->Cards).Elements.ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FLumenCard,int>(pFVar5,iVar3);
    (this->Cards).Elements.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (400,8,0,(ForAnyElementType *)&this->Cards,0,piVar1);
    }
  }
  else {
    DestructItems<FLumenCard,int>(pFVar5,iVar3);
    (this->Cards).Elements.ArrayNum = 0;
  }
  FSpanAllocator::Reset(&(this->Cards).SpanAllocator);
  TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
            (&(this->Cards).AllocatedElementsBitArray,0);
  piVar1 = &(this->MeshCards).Elements.ArrayMax;
  pFVar6 = (FLumenMeshCards *)(this->MeshCards).Elements.AllocatorInstance.Data;
  iVar3 = (this->MeshCards).Elements.ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FLumenMeshCards,int>(pFVar6,iVar3);
    (this->MeshCards).Elements.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (400,0x10,0,(ForAnyElementType *)&this->MeshCards,0,piVar1);
    }
  }
  else {
    DestructItems<FLumenMeshCards,int>(pFVar6,iVar3);
    (this->MeshCards).Elements.ArrayNum = 0;
  }
  FSpanAllocator::Reset(&(this->MeshCards).SpanAllocator);
  TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
            (&(this->MeshCards).AllocatedElementsBitArray,0);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  pFVar7 = (this->PendingAddCardSharingInfos).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (this->PendingRemoveCardSharingInfos).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x48 = 0;
  pvVar8 = *(void **)&(this->CardSharingInfoMap).field_0x40;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  TSparseArray<TSparseSetElement<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CardSharingInfoMap);
  operator_delete__(this->LastCapturedPageHeap[7].Heap);
  operator_delete__(this->LastCapturedPageHeap[7].Keys);
  operator_delete__(this->LastCapturedPageHeap[7].HeapIndexes);
  this->LastCapturedPageHeap[7].HeapNum = 0;
  this->LastCapturedPageHeap[7].HeapSize = 0;
  this->LastCapturedPageHeap[7].IndexSize = 0;
  this->LastCapturedPageHeap[7].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[7].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[7].HeapIndexes = (uint *)0x0;
  operator_delete__(this->LastCapturedPageHeap[6].Heap);
  operator_delete__(this->LastCapturedPageHeap[6].Keys);
  operator_delete__(this->LastCapturedPageHeap[6].HeapIndexes);
  this->LastCapturedPageHeap[6].HeapNum = 0;
  this->LastCapturedPageHeap[6].HeapSize = 0;
  this->LastCapturedPageHeap[6].IndexSize = 0;
  this->LastCapturedPageHeap[6].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[6].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[6].HeapIndexes = (uint *)0x0;
  operator_delete__(this->LastCapturedPageHeap[5].Heap);
  operator_delete__(this->LastCapturedPageHeap[5].Keys);
  operator_delete__(this->LastCapturedPageHeap[5].HeapIndexes);
  this->LastCapturedPageHeap[5].HeapNum = 0;
  this->LastCapturedPageHeap[5].HeapSize = 0;
  this->LastCapturedPageHeap[5].IndexSize = 0;
  this->LastCapturedPageHeap[5].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[5].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[5].HeapIndexes = (uint *)0x0;
  operator_delete__(this->LastCapturedPageHeap[4].Heap);
  operator_delete__(this->LastCapturedPageHeap[4].Keys);
  operator_delete__(this->LastCapturedPageHeap[4].HeapIndexes);
  this->LastCapturedPageHeap[4].HeapNum = 0;
  this->LastCapturedPageHeap[4].HeapSize = 0;
  this->LastCapturedPageHeap[4].IndexSize = 0;
  this->LastCapturedPageHeap[4].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[4].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[4].HeapIndexes = (uint *)0x0;
  operator_delete__(this->LastCapturedPageHeap[3].Heap);
  operator_delete__(this->LastCapturedPageHeap[3].Keys);
  operator_delete__(this->LastCapturedPageHeap[3].HeapIndexes);
  this->LastCapturedPageHeap[3].HeapNum = 0;
  this->LastCapturedPageHeap[3].HeapSize = 0;
  this->LastCapturedPageHeap[3].IndexSize = 0;
  this->LastCapturedPageHeap[3].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[3].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[3].HeapIndexes = (uint *)0x0;
  operator_delete__(this->LastCapturedPageHeap[2].Heap);
  operator_delete__(this->LastCapturedPageHeap[2].Keys);
  operator_delete__(this->LastCapturedPageHeap[2].HeapIndexes);
  this->LastCapturedPageHeap[2].HeapNum = 0;
  this->LastCapturedPageHeap[2].HeapSize = 0;
  this->LastCapturedPageHeap[2].IndexSize = 0;
  this->LastCapturedPageHeap[2].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[2].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[2].HeapIndexes = (uint *)0x0;
  operator_delete__(this->LastCapturedPageHeap[1].Heap);
  operator_delete__(this->LastCapturedPageHeap[1].Keys);
  operator_delete__(this->LastCapturedPageHeap[1].HeapIndexes);
  this->LastCapturedPageHeap[1].HeapNum = 0;
  this->LastCapturedPageHeap[1].HeapSize = 0;
  this->LastCapturedPageHeap[1].IndexSize = 0;
  this->LastCapturedPageHeap[1].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[1].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[1].HeapIndexes = (uint *)0x0;
  operator_delete__(this->LastCapturedPageHeap[0].Heap);
  operator_delete__(this->LastCapturedPageHeap[0].Keys);
  operator_delete__(this->LastCapturedPageHeap[0].HeapIndexes);
  this->LastCapturedPageHeap[0].HeapNum = 0;
  this->LastCapturedPageHeap[0].HeapSize = 0;
  this->LastCapturedPageHeap[0].IndexSize = 0;
  this->LastCapturedPageHeap[0].Heap = (uint *)0x0;
  this->LastCapturedPageHeap[0].Keys = (uint *)0x0;
  this->LastCapturedPageHeap[0].HeapIndexes = (uint *)0x0;
  operator_delete__(this->PagesToRecaptureHeap[7].Heap);
  operator_delete__(this->PagesToRecaptureHeap[7].Keys);
  operator_delete__(this->PagesToRecaptureHeap[7].HeapIndexes);
  this->PagesToRecaptureHeap[7].HeapNum = 0;
  this->PagesToRecaptureHeap[7].HeapSize = 0;
  this->PagesToRecaptureHeap[7].IndexSize = 0;
  this->PagesToRecaptureHeap[7].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[7].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[7].HeapIndexes = (uint *)0x0;
  operator_delete__(this->PagesToRecaptureHeap[6].Heap);
  operator_delete__(this->PagesToRecaptureHeap[6].Keys);
  operator_delete__(this->PagesToRecaptureHeap[6].HeapIndexes);
  this->PagesToRecaptureHeap[6].HeapNum = 0;
  this->PagesToRecaptureHeap[6].HeapSize = 0;
  this->PagesToRecaptureHeap[6].IndexSize = 0;
  this->PagesToRecaptureHeap[6].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[6].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[6].HeapIndexes = (uint *)0x0;
  operator_delete__(this->PagesToRecaptureHeap[5].Heap);
  operator_delete__(this->PagesToRecaptureHeap[5].Keys);
  operator_delete__(this->PagesToRecaptureHeap[5].HeapIndexes);
  this->PagesToRecaptureHeap[5].HeapNum = 0;
  this->PagesToRecaptureHeap[5].HeapSize = 0;
  this->PagesToRecaptureHeap[5].IndexSize = 0;
  this->PagesToRecaptureHeap[5].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[5].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[5].HeapIndexes = (uint *)0x0;
  operator_delete__(this->PagesToRecaptureHeap[4].Heap);
  operator_delete__(this->PagesToRecaptureHeap[4].Keys);
  operator_delete__(this->PagesToRecaptureHeap[4].HeapIndexes);
  this->PagesToRecaptureHeap[4].HeapNum = 0;
  this->PagesToRecaptureHeap[4].HeapSize = 0;
  this->PagesToRecaptureHeap[4].IndexSize = 0;
  this->PagesToRecaptureHeap[4].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[4].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[4].HeapIndexes = (uint *)0x0;
  operator_delete__(this->PagesToRecaptureHeap[3].Heap);
  operator_delete__(this->PagesToRecaptureHeap[3].Keys);
  operator_delete__(this->PagesToRecaptureHeap[3].HeapIndexes);
  this->PagesToRecaptureHeap[3].HeapNum = 0;
  this->PagesToRecaptureHeap[3].HeapSize = 0;
  this->PagesToRecaptureHeap[3].IndexSize = 0;
  this->PagesToRecaptureHeap[3].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[3].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[3].HeapIndexes = (uint *)0x0;
  operator_delete__(this->PagesToRecaptureHeap[2].Heap);
  operator_delete__(this->PagesToRecaptureHeap[2].Keys);
  operator_delete__(this->PagesToRecaptureHeap[2].HeapIndexes);
  this->PagesToRecaptureHeap[2].HeapNum = 0;
  this->PagesToRecaptureHeap[2].HeapSize = 0;
  this->PagesToRecaptureHeap[2].IndexSize = 0;
  this->PagesToRecaptureHeap[2].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[2].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[2].HeapIndexes = (uint *)0x0;
  operator_delete__(this->PagesToRecaptureHeap[1].Heap);
  operator_delete__(this->PagesToRecaptureHeap[1].Keys);
  operator_delete__(this->PagesToRecaptureHeap[1].HeapIndexes);
  this->PagesToRecaptureHeap[1].HeapNum = 0;
  this->PagesToRecaptureHeap[1].HeapSize = 0;
  this->PagesToRecaptureHeap[1].IndexSize = 0;
  this->PagesToRecaptureHeap[1].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[1].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[1].HeapIndexes = (uint *)0x0;
  operator_delete__(this->PagesToRecaptureHeap[0].Heap);
  operator_delete__(this->PagesToRecaptureHeap[0].Keys);
  operator_delete__(this->PagesToRecaptureHeap[0].HeapIndexes);
  this->PagesToRecaptureHeap[0].HeapNum = 0;
  this->PagesToRecaptureHeap[0].HeapSize = 0;
  this->PagesToRecaptureHeap[0].IndexSize = 0;
  this->PagesToRecaptureHeap[0].Heap = (uint *)0x0;
  this->PagesToRecaptureHeap[0].Keys = (uint *)0x0;
  this->PagesToRecaptureHeap[0].HeapIndexes = (uint *)0x0;
  operator_delete__((this->UnlockedAllocationHeap).Heap);
  operator_delete__((this->UnlockedAllocationHeap).Keys);
  operator_delete__((this->UnlockedAllocationHeap).HeapIndexes);
  (this->UnlockedAllocationHeap).HeapNum = 0;
  (this->UnlockedAllocationHeap).HeapSize = 0;
  (this->UnlockedAllocationHeap).IndexSize = 0;
  (this->UnlockedAllocationHeap).Heap = (uint *)0x0;
  (this->UnlockedAllocationHeap).Keys = (uint *)0x0;
  (this->UnlockedAllocationHeap).HeapIndexes = (uint *)0x0;
  DestructItems<FLumenSurfaceCacheAllocator::FPageBin,int>
            ((FPageBin *)(this->SurfaceCacheAllocator).PageBins.AllocatorInstance.Data,
             (this->SurfaceCacheAllocator).PageBins.ArrayNum);
  pFVar7 = (this->SurfaceCacheAllocator).PageBins.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar4 = (this->SurfaceCacheAllocator).PhysicalPageList.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  DestructItems<FLumenPrimitiveGroupRemoveInfo,int>
            ((FLumenPrimitiveGroupRemoveInfo *)
             (this->PendingRemoveOperations).AllocatorInstance.Data,
             (this->PendingRemoveOperations).ArrayNum);
  pFVar7 = (this->PendingRemoveOperations).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  (this->PendingSurfaceCacheInvalidationOperations).HashSize = 0;
  FVar9 = (this->PendingSurfaceCacheInvalidationOperations).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingSurfaceCacheInvalidationOperations).Elements);
  (this->PendingUpdateOperations).HashSize = 0;
  FVar9 = (this->PendingUpdateOperations).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingUpdateOperations).Elements);
  (this->PendingAddOperations).HashSize = 0;
  FVar9 = (this->PendingAddOperations).Hash.SecondaryData;
  if (FVar9 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar9);
  }
  TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveSceneInfo_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingAddOperations).Elements);
  FLumenSurfaceCacheFeedback::~FLumenSurfaceCacheFeedback(&this->SurfaceCacheFeedback);
  FLumenSceneReadback::~FLumenSceneReadback(&this->SceneReadback);
  pIVar10 = (this->NumFramesAccumulatedHistoryAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->DiffuseLightingAndSecondMomentHistoryAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->RadiosityProbeSHBlueAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->RadiosityProbeSHGreenAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->RadiosityProbeSHRedAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->RadiosityTraceHitDistanceAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->RadiosityTraceRadianceAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pFVar11 = (this->TileShadowDownsampleFactorAtlas).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  pIVar10 = (this->FinalLightingAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->RadiosityNumFramesAccumulatedAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->IndirectLightingAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->DirectLightingAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->DepthAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->EmissiveAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->NormalAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->OpacityAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pIVar10 = (this->AlbedoAtlas).Reference;
  if (pIVar10 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar10->_padding_ + 0x38))();
  }
  pFVar11 = (this->CardPageHighResLastUsedBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  pFVar11 = (this->CardPageLastUsedBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->CardPageUploadBuffer);
  pFVar11 = (this->CardPageBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer
            (&this->SceneInstanceIndexToMeshCardsIndexUploadBuffer);
  pFVar11 = (this->SceneInstanceIndexToMeshCardsIndexBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  FVar4 = (this->PrimitivesToUpdateMeshCards).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->PrimitivesToUpdateMeshCards).Indices.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->PageTableUploadBuffer);
  pFVar11 = (this->PageTableBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  pFVar7 = (this->PageTableIndicesToUpdateInBuffer).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar12 = (this->PageTable).SpanAllocator.PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->PageTable).SpanAllocator.FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar4 = (this->PageTable).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->PageTable).Elements.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->HeightfieldUploadBuffer);
  pFVar11 = (this->HeightfieldBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  FVar12 = (this->Heightfields).SpanAllocator.PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->Heightfields).SpanAllocator.FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar4 = (this->Heightfields).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->Heightfields).Elements.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar4 = (this->HeightfieldIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
          SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->HeightfieldIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->MeshCardsUploadBuffer);
  pFVar11 = (this->MeshCardsBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator>
            (&this->PrimitiveCullingInfos);
  FVar12 = (this->InstanceCullingInfos).SpanAllocator.PendingFreeSpans.AllocatorInstance.
           SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->InstanceCullingInfos).SpanAllocator.FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar4 = (this->InstanceCullingInfos).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->InstanceCullingInfos).Elements.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar12 = (this->MeshCards).SpanAllocator.PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->MeshCards).SpanAllocator.FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar4 = (this->MeshCards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  DestructItems<FLumenMeshCards,int>
            ((FLumenMeshCards *)(this->MeshCards).Elements.AllocatorInstance.Data,
             (this->MeshCards).Elements.ArrayNum);
  pFVar7 = (this->MeshCards).Elements.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar4 = (this->MeshCardsIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
          SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->MeshCardsIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (this->LandscapePrimitives).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pvVar8 = *(void **)&(this->RayTracingGroups).field_0x60;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  pvVar8 = *(void **)&(this->RayTracingGroups).field_0x48;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
  FData::~FData((FData *)&this->RayTracingGroups);
  FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->PrimitiveGroupUploadBuffer);
  pFVar11 = (this->PrimitiveGroupBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::Empty(&this->PrimitiveGroups);
  FVar4 = (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->PrimitiveGroups).ElementChunks.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar4 = (this->PrimitiveGroupIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
          SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->PrimitiveGroupIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->CardUploadBuffer);
  pFVar11 = (this->CardBuffer).Reference;
  if (pFVar11 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar11->_padding_;
    LOCK();
    lVar16 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar16 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar11->_padding_)(pFVar11,1);
    }
  }
  FVar4 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar7 = (this->CardIndicesToUpdateInBuffer).Indices.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  FVar12 = (this->Cards).SpanAllocator.PendingFreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar12 = (this->Cards).SpanAllocator.FreeSpans.AllocatorInstance.SecondaryData;
  if (FVar12 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
    FMemory::Free((void *)FVar12);
  }
  FVar4 = (this->Cards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  DestructItems<FLumenCard,int>
            ((FLumenCard *)(this->Cards).Elements.AllocatorInstance.Data,
             (this->Cards).Elements.ArrayNum);
  pFVar7 = (this->Cards).Elements.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// operator() @ 144d4dcc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FLumenSceneData::UploadPageTable'::__l16::<lambda_2>::operator()
          (void *this,FRDGScatterUploader *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  undefined8 local_res18;
  
  lVar5 = *(longlong *)this;
  puVar11 = *(uint **)(lVar5 + 0x750);
  iVar2 = *(int *)(lVar5 + 0x758);
  puVar1 = puVar11 + iVar2;
  while( true ) {
    if (*(int *)(lVar5 + 0x758) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar11 == puVar1) break;
    lVar10 = *(longlong *)this;
    lVar9 = 0x680;
    uVar3 = *puVar11;
    if (*(char *)(lVar10 + 0x748) == '\0') {
      lVar9 = 0x67c;
    }
    if ((int)uVar3 < *(int *)(lVar9 + lVar10)) {
      local_res18 = 0;
      if ((int)uVar3 < *(int *)(lVar9 + lVar10)) {
        if (((int)uVar3 < 0) || (*(int *)(lVar10 + 0x670) <= (int)uVar3)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar9 = *(longlong *)(lVar10 + 0x668);
        if (*(longlong *)(lVar10 + 0x668) == 0) {
          lVar9 = lVar10 + 0x658;
        }
        uVar8 = uVar3;
        if ((int)uVar3 < 0) {
          uVar8 = uVar3 + 0x1f;
        }
        if ((*(uint *)(lVar9 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
          lVar10 = *(longlong *)this;
          uVar8 = 0;
          if ((int)uVar3 < *(int *)(lVar10 + 0x650)) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          lVar10 = (longlong)(int)uVar3 * 0x50 + *(longlong *)(lVar10 + 0x648);
          local_res18 = CONCAT44(*(undefined4 *)(lVar10 + 0x18),
                                 (uint)local_res18 |
                                 ((*(ushort *)(lVar10 + 0x20) & 0xf |
                                  (uint)*(ushort *)(lVar10 + 0x22) << 4) << 0xc |
                                 *(ushort *)(lVar10 + 0x1e) & 0xfff) << 0xc |
                                 *(ushort *)(lVar10 + 0x1c) & 0xfff);
        }
      }
      *(uint *)(param_1->_padding_ + (ulonglong)(uint)param_1->_padding_ * 4) = uVar3;
      iVar4 = (int)param_1->_padding_;
      uVar3 = (uint)param_1->_padding_;
      *(int *)&param_1->_padding_ = iVar4 + 1;
      memcpy((void *)((ulonglong)(iVar4 * uVar3) + param_1->_padding_),&local_res18,(ulonglong)uVar3
            );
    }
    puVar11 = puVar11 + 1;
  }
  return;
}

// operator() @ 144d4e370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FLumenSceneData::UploadPageTable'::__l20::<lambda_3>::operator()
          (void *this,FRDGScatterUploader *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  TIntPoint<int>_u_0_s_0 TVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  FLumenPageTableEntry *pFVar14;
  FLumenCard *pFVar15;
  ulonglong uVar16;
  TVector4<float> *pTVar17;
  TIntPoint<int>_u_0 TVar18;
  uint *puVar19;
  double dVar20;
  double dVar21;
  undefined1 local_res8 [8];
  int iStack_f4;
  TVector2<double>_u_0 local_c8 [3];
  undefined4 local_94;
  
  uVar8 = _UNK_150689648;
  uVar7 = ___xmm_3f800000000000000000000000000000;
  lVar4 = *(longlong *)this;
  uVar2 = *(uint *)(lVar4 + 0x758);
  uVar16 = (ulonglong)(int)uVar2;
  puVar19 = *(uint **)(lVar4 + 0x750);
  puVar1 = puVar19 + uVar16;
  local_94 = 0xffffffff;
  dVar20 = __real_3ff0000000000000 / (double)(int)*(undefined8 *)(lVar4 + 0xa48);
  dVar21 = __real_3ff0000000000000 /
           (double)(int)((ulonglong)*(undefined8 *)(lVar4 + 0xa48) >> 0x20);
  do {
    while( true ) {
      if (*(int *)(lVar4 + 0x758) != (int)uVar16) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar19 == puVar1) {
        return;
      }
      lVar12 = 0x680;
      uVar3 = *puVar19;
      if (*(char *)(*(longlong *)this + 0x748) == '\0') {
        lVar12 = 0x67c;
      }
      if ((int)uVar3 < *(int *)(lVar12 + *(longlong *)this)) break;
LAB_144d4e70b:
      uVar16 = (ulonglong)uVar2;
      puVar19 = puVar19 + 1;
    }
    *(uint *)(param_1->_padding_ + (ulonglong)(uint)param_1->_padding_ * 4) = uVar3;
    iVar11 = (int)param_1->_padding_;
    *(int *)&param_1->_padding_ = iVar11 + 1;
    lVar13 = 0x680;
    lVar12 = *(longlong *)this;
    pTVar17 = (TVector4<float> *)
              ((ulonglong)(uint)(iVar11 * (int)param_1->_padding_) + param_1->_padding_);
    if (*(char *)(lVar12 + 0x748) == '\0') {
      lVar13 = 0x67c;
    }
    if (*(int *)(lVar13 + lVar12) <= (int)uVar3) {
LAB_144d4e6a5:
      pTVar17[3].field0_0x0._s_0.Z = 0.0;
      pTVar17[3].field0_0x0._s_0.W = 0.0;
      (pTVar17->field0_0x0)._s_0.X = -NAN;
      *(undefined8 *)((longlong)&pTVar17->field0_0x0 + 4) = 0;
      (pTVar17->field0_0x0)._s_0.W = 0.0;
      *(undefined8 *)&pTVar17[1].field0_0x0 = uVar7;
      *(undefined8 *)((longlong)&pTVar17[1].field0_0x0 + 8) = uVar8;
      *(undefined8 *)&pTVar17[2].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar17[2].field0_0x0 + 8) = 0;
      *(undefined8 *)&pTVar17[3].field0_0x0 = 0;
      *(undefined8 *)&pTVar17[4].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar17[4].field0_0x0 + 8) = 0;
      goto LAB_144d4e70b;
    }
    if ((((int)uVar3 < 0) || (*(int *)(lVar12 + 0x670) <= (int)uVar3)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar13 = *(longlong *)(lVar12 + 0x668);
    if (*(longlong *)(lVar12 + 0x668) == 0) {
      lVar13 = lVar12 + 0x658;
    }
    uVar10 = uVar3;
    if ((int)uVar3 < 0) {
      uVar10 = uVar3 + 0x1f;
    }
    if ((*(uint *)(lVar13 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0)
    goto LAB_144d4e6a5;
    lVar12 = *(longlong *)this;
    uVar10 = 0;
    if ((int)uVar3 < *(int *)(lVar12 + 0x650)) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar12 = *(longlong *)(lVar12 + 0x648);
    if ((*(int *)(lVar12 + (longlong)(int)uVar3 * 0x50) < 0) ||
       (*(int *)(lVar12 + 4 + (longlong)(int)uVar3 * 0x50) < 0)) goto LAB_144d4e6a5;
    pFVar14 = TSparseSpanArray<FLumenPageTableEntry>::operator[]
                        ((TSparseSpanArray<FLumenPageTableEntry> *)(*(longlong *)this + 0x648),uVar3
                        );
    pFVar15 = TSparseSpanArray<FLumenCard>::operator[]
                        ((TSparseSpanArray<FLumenCard> *)(*(longlong *)this + 8),pFVar14->CardIndex)
    ;
    uVar16 = (ulonglong)pFVar14->ResLevel;
    if (((pFVar14->ResLevel < 3) || (8 < uVar16 - 3)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                           ,0x162,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TVar18 = (TIntPoint<int>_u_0)
             ((ulonglong)pFVar15->SurfaceMipMaps[uVar16 - 3].SizeInPagesX << 4 |
             (ulonglong)pFVar15->SurfaceMipMaps[uVar16 - 3].SizeInPagesY << 0x24);
    if ((-1 < (pFVar14->SubAllocationSize).field0_0x0._s_0.X) ||
       (-1 < (pFVar14->SubAllocationSize).field0_0x0._s_0.Y)) {
      TVar5 = (pFVar14->SubAllocationSize).field0_0x0._s_0;
      iStack_f4 = TVar5.Y;
      iVar11 = TVar5.X;
      TVar18._0_4_ = (int)((iVar11 >> 0x1f & 7U) + iVar11) >> 3;
      TVar18._s_0.Y = (int)((iStack_f4 >> 0x1f & 7U) + iStack_f4) >> 3;
    }
    local_c8[0]._0_8_ = dVar20;
    local_c8[0]._8_8_ = dVar21;
    FLumenCardPageGPUData::FillData
              (pFVar14,pFVar15->SurfaceMipMaps[uVar16 - 3].PageTableSpanOffset,
               (TIntPoint<int>)TVar18,(TVector2<double> *)&local_c8[0]._s_0,pTVar17);
    uVar16 = (ulonglong)uVar2;
    puVar19 = puVar19 + 1;
  } while( true );
}

// CopyInitialData @ 144d67500

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLumenSceneData::CopyInitialData(FLumenSceneData *this,FLumenSceneData *param_1)

{
  undefined1 *puVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator> *pTVar3;
  TSparseSpanArray<FLumenPrimitiveGroupCullingInfo> *pTVar4;
  TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FLumenPrimitiveGroupRemoveInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FLumenPrimitiveGroupRemoveInfo *pFVar10;
  ForElementType<unsigned_int> FVar11;
  undefined1 *puVar12;
  code *pcVar13;
  bool bVar14;
  FLumenPrimitiveGroup *pFVar15;
  int *piVar16;
  ForElementType<unsigned_int> FVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator> *pTVar22;
  int iVar23;
  undefined1 *puVar24;
  uint *puVar25;
  uint uVar26;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  TRangedForIterator local_a8;
  int local_98;
  uint uStack_94;
  undefined1 *puStack_90;
  undefined4 local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_70;
  int local_50;
  
  this->bTrackAllPrimitives = param_1->bTrackAllPrimitives;
  TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator=
            (&this->PrimitiveGroups,&param_1->PrimitiveGroups);
  pTVar3 = &this->PrimitiveCullingInfos;
  if (pTVar3 != &param_1->PrimitiveCullingInfos) {
    iVar23 = *(int *)&(param_1->PrimitiveCullingInfos).field_0x8;
    TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator>::Empty(pTVar3,iVar23)
    ;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,iVar23,(ForAnyElementType *)pTVar3,
               (int *)&(this->PrimitiveCullingInfos).field_0x8,
               (int *)&(this->PrimitiveCullingInfos).field_0xc);
    puVar1 = &(param_1->PrimitiveCullingInfos).field_0x10;
    puVar12 = &(this->PrimitiveCullingInfos).field_0x10;
    *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x30 =
         *(undefined4 *)&(param_1->PrimitiveCullingInfos).field_0x30;
    *(undefined4 *)&(this->PrimitiveCullingInfos).field_0x34 =
         *(undefined4 *)&(param_1->PrimitiveCullingInfos).field_0x34;
    if (puVar12 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar12,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar23 != 0) {
      memcpy(*(void **)pTVar3,*(void **)&param_1->PrimitiveCullingInfos,(longlong)iVar23 << 5);
    }
  }
  pTVar4 = &this->InstanceCullingInfos;
  if (pTVar4 != &param_1->InstanceCullingInfos) {
    iVar23 = (param_1->InstanceCullingInfos).Elements.ArrayNum;
    piVar16 = &(this->InstanceCullingInfos).Elements.ArrayMax;
    pFVar9 = (param_1->InstanceCullingInfos).Elements.AllocatorInstance.Data;
    iVar8 = *piVar16;
    (this->InstanceCullingInfos).Elements.ArrayNum = iVar23;
    if ((iVar23 == 0) && (iVar8 == 0)) {
      *piVar16 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,iVar23,iVar8,(ForAnyElementType *)pTVar4,iVar23,piVar16);
      if (iVar23 != 0) {
        memcpy((pTVar4->Elements).AllocatorInstance.Data,pFVar9,(longlong)iVar23 << 5);
      }
    }
  }
  pTVar2 = &(param_1->InstanceCullingInfos).AllocatedElementsBitArray;
  this_00 = &(this->InstanceCullingInfos).AllocatedElementsBitArray;
  if (this_00 != pTVar2) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>(this_00,pTVar2);
  }
  (this->InstanceCullingInfos).SpanAllocator.CurrentSize =
       (param_1->InstanceCullingInfos).SpanAllocator.CurrentSize;
  (this->InstanceCullingInfos).SpanAllocator.CurrentMaxSize =
       (param_1->InstanceCullingInfos).SpanAllocator.CurrentMaxSize;
  (this->InstanceCullingInfos).SpanAllocator.PeakMaxSize =
       (param_1->InstanceCullingInfos).SpanAllocator.PeakMaxSize;
  (this->InstanceCullingInfos).SpanAllocator.FirstNonEmptySpan =
       (param_1->InstanceCullingInfos).SpanAllocator.FirstNonEmptySpan;
  TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  ::operator=(&(this->InstanceCullingInfos).SpanAllocator.FreeSpans,
              &(param_1->InstanceCullingInfos).SpanAllocator.FreeSpans);
  TArray<FSpanAllocator::FLinearAllocation,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
  ::operator=(&(this->InstanceCullingInfos).SpanAllocator.PendingFreeSpans,
              &(param_1->InstanceCullingInfos).SpanAllocator.PendingFreeSpans);
  (this->InstanceCullingInfos).SpanAllocator.bGrowOnly =
       (param_1->InstanceCullingInfos).SpanAllocator.bGrowOnly;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>::
  operator=((TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
             *)&this->RayTracingGroups,
            (TRobinHoodHashTable<int,int,TDefaultMapHashableKeyFuncs<int,int,0>,TSizedDefaultAllocator<32>_>
             *)&param_1->RayTracingGroups);
  pTVar5 = &this->LandscapePrimitives;
  if (pTVar5 != &param_1->LandscapePrimitives) {
    iVar23 = (param_1->LandscapePrimitives).ArrayNum;
    piVar16 = &(this->LandscapePrimitives).ArrayMax;
    pFVar9 = (param_1->LandscapePrimitives).AllocatorInstance.Data;
    (this->LandscapePrimitives).ArrayNum = iVar23;
    if ((iVar23 == 0) && (*piVar16 == 0)) {
      *piVar16 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar23,*piVar16,&pTVar5->AllocatorInstance,iVar23,piVar16);
      if (iVar23 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar23 << 3);
      }
    }
  }
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
  operator=(&this->PendingAddOperations,&param_1->PendingAddOperations);
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
  operator=(&this->PendingUpdateOperations,&param_1->PendingUpdateOperations);
  pTVar6 = &this->PendingRemoveOperations;
  if (pTVar6 != &param_1->PendingRemoveOperations) {
    DestructItems<FLumenPrimitiveGroupRemoveInfo,int>
              ((FLumenPrimitiveGroupRemoveInfo *)(pTVar6->AllocatorInstance).Data,
               (this->PendingRemoveOperations).ArrayNum);
    iVar23 = (param_1->PendingRemoveOperations).ArrayNum;
    piVar16 = &(this->PendingRemoveOperations).ArrayMax;
    pFVar10 = (FLumenPrimitiveGroupRemoveInfo *)
              (param_1->PendingRemoveOperations).AllocatorInstance.Data;
    (this->PendingRemoveOperations).ArrayNum = iVar23;
    if ((iVar23 == 0) && (*piVar16 == 0)) {
      *piVar16 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar23,*piVar16,&pTVar6->AllocatorInstance,iVar23,piVar16);
      ConstructItems<FLumenPrimitiveGroupRemoveInfo,FLumenPrimitiveGroupRemoveInfo,int>
                ((pTVar6->AllocatorInstance).Data,pFVar10,iVar23);
    }
  }
  uVar19 = 0;
  if (0 < (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne) {
    do {
      if ((((int)uVar19 < 0) ||
          ((this->PrimitiveGroups).AllocatedElementsBitArray.NumBits <= (int)uVar19)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar11 = (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&(this->PrimitiveGroups).AllocatedElementsBitArray;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar11;
      }
      uVar26 = uVar19;
      if ((int)uVar19 < 0) {
        uVar26 = uVar19 + 0x1f;
      }
    } while (((*(uint *)((longlong)FVar17 + (longlong)((int)uVar26 >> 5) * 4) >> (uVar19 & 0x1f) & 1
              ) == 0) &&
            (uVar19 = uVar19 + 1,
            (int)uVar19 < (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne));
  }
  uVar26 = (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne;
joined_r0x000144d67807:
  if (uVar19 != uVar26) {
    pFVar15 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator[]
                        (&this->PrimitiveGroups,uVar19);
    pFVar15->MeshCardsIndex = -1;
    uVar20 = uVar19;
    do {
      uVar19 = uVar20 + 1;
      if ((this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne <= (int)uVar19) break;
      if ((((int)uVar19 < 0) ||
          ((this->PrimitiveGroups).AllocatedElementsBitArray.NumBits <= (int)uVar19)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar11 = (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&(this->PrimitiveGroups).AllocatedElementsBitArray;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar11;
      }
      uVar21 = uVar19;
      if ((int)uVar19 < 0) {
        uVar21 = uVar20 + 0x20;
      }
      uVar20 = uVar19;
    } while ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar19 & 0x1f) & 1)
             == 0);
    goto joined_r0x000144d67807;
  }
  uStack_94 = 1;
  pTVar3 = &this->PrimitiveCullingInfos;
  local_98 = 0;
  iVar23 = *(int *)&(this->PrimitiveCullingInfos).field_0x28;
  puStack_90 = &(this->PrimitiveCullingInfos).field_0x10;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar23 != 0) {
    puVar25 = *(uint **)&(this->PrimitiveCullingInfos).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puStack_90;
    }
    uVar19 = *puVar25;
    local_98 = 0;
    while (uVar19 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar18 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_144d67927;
      uVar19 = puVar25[lVar18 + 1];
    }
    uStack_94 = -uVar19 & uVar19;
    uVar7 = (ulonglong)uStack_94 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_res18 = (int)lVar18;
    iStack_84 = local_res18 + -1 + iStack_80;
    if (iVar23 < iStack_84) {
LAB_144d67927:
      iStack_84 = iVar23;
    }
  }
  local_88 = 0xffffffff;
  uVar19 = *(uint *)&(this->PrimitiveCullingInfos).field_0x28;
  puVar1 = &(this->PrimitiveCullingInfos).field_0x10;
  local_50 = *(int *)&(this->PrimitiveCullingInfos).field_0x8 -
             *(int *)&(this->PrimitiveCullingInfos).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar23 = (int)uVar19 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar26 = uVar19 & 0xffffffe0;
  local_78 = pTVar3;
  local_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_90;
  if (((int)uVar19 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar20 = *(uint *)&(this->PrimitiveCullingInfos).field_0x28;
  pTVar22 = pTVar3;
  if (uVar19 != uVar20) {
    puVar12 = *(undefined1 **)&(this->PrimitiveCullingInfos).field_0x20;
    puVar24 = puVar1;
    if (puVar12 != (undefined1 *)0x0) {
      puVar24 = puVar12;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar23 * 4);
    while (uVar19 == 0) {
      lVar18 = (longlong)iVar23;
      uVar26 = uVar26 + 0x20;
      iVar23 = iVar23 + 1;
      uVar19 = uVar20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_144d67a10;
      uVar19 = *(uint *)(puVar24 + lVar18 * 4 + 4);
    }
    uVar7 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_res20 = (int)lVar18;
    uVar19 = local_res20 + -1 + uVar26;
    if ((int)uVar20 < (int)uVar19) {
      uVar19 = uVar20;
    }
  }
LAB_144d67a10:
  while( true ) {
    if (*(int *)&pTVar22->field_0x8 - *(int *)&pTVar22->field_0x34 != local_50) {
      local_res10[0] = 0;
      `TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((local_70.CurrentBitIndex == uVar19) &&
        (local_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar22 == pTVar3))
    break;
    puVar25 = (uint *)((longlong)local_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar22);
    *puVar25 = *puVar25 & 0xfffffffe;
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_70);
    pTVar22 = local_78;
  }
  TSparseSpanArray<FLumenPrimitiveGroupCullingInfo>::TRangedForIterator::TRangedForIterator
            (&local_a8,&this->InstanceCullingInfos,0);
  lVar18 = 0x38;
  if ((this->InstanceCullingInfos).SpanAllocator.bGrowOnly == false) {
    lVar18 = 0x34;
  }
  uVar19 = *(uint *)((this->InstanceCullingInfos).AllocatedElementsBitArray.AllocatorInstance.
                     InlineData + lVar18 + -0x10);
  while( true ) {
    piVar16 = &(this->InstanceCullingInfos).SpanAllocator.PeakMaxSize;
    if ((this->InstanceCullingInfos).SpanAllocator.bGrowOnly == false) {
      piVar16 = &(this->InstanceCullingInfos).SpanAllocator.CurrentMaxSize;
    }
    uVar26 = local_a8.ElementIndex;
    if (*piVar16 <= (int)uVar19) break;
    if ((((int)uVar19 < 0) ||
        ((this->InstanceCullingInfos).AllocatedElementsBitArray.NumBits <= (int)uVar19)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    FVar11 = (this->InstanceCullingInfos).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
    FVar17 = (ForElementType<unsigned_int>)&(this->InstanceCullingInfos).AllocatedElementsBitArray;
    if (FVar11 != (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar11;
    }
    uVar20 = uVar19;
    if ((int)uVar19 < 0) {
      uVar20 = uVar19 + 0x1f;
    }
    uVar26 = local_a8.ElementIndex;
    if ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar19 & 0x1f) & 1) != 0
       ) break;
    uVar19 = uVar19 + 1;
  }
  do {
    if (uVar26 == uVar19) {
      return;
    }
    uVar20 = 0;
    if ((int)uVar26 < ((local_a8.Array)->Elements).ArrayNum) {
      uVar20 = ~uVar26 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar9 = ((local_a8.Array)->Elements).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x20;
    *(uint *)pFVar9 = *(uint *)pFVar9 & 0xfffffffe;
    uVar20 = uVar26;
    do {
      uVar26 = uVar20 + 1;
      lVar18 = 8;
      if (((local_a8.Array)->SpanAllocator).bGrowOnly == false) {
        lVar18 = 4;
      }
      local_a8.ElementIndex = uVar26;
      if (*(int *)(((local_a8.Array)->SpanAllocator).FreeSpans.AllocatorInstance.InlineData +
                  lVar18 + -0x10) <= (int)uVar26) break;
      if ((((int)uVar26 < 0) ||
          (((local_a8.Array)->AllocatedElementsBitArray).NumBits <= (int)uVar26)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar11 = ((local_a8.Array)->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<unsigned_int>)&(local_a8.Array)->AllocatedElementsBitArray;
      if (FVar11 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar11;
      }
      uVar21 = uVar26;
      if ((int)uVar26 < 0) {
        uVar21 = uVar20 + 0x20;
      }
      uVar20 = uVar26;
    } while ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar26 & 0x1f) & 1)
             == 0);
  } while( true );
}

// DumpStats @ 144d6c390

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLumenSceneData::DumpStats
          (FLumenSceneData *this,FDistanceFieldSceneData *param_1,bool param_2,bool param_3,
          bool param_4)

{
  TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator> *pTVar1;
  ForElementType<FPrimitiveSceneInfo_*> FVar2;
  float fVar3;
  ForElementType<unsigned_int> FVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  ForElementType<FPrimitiveSceneInfo_*> FVar13;
  FLumenCard *pFVar14;
  ulonglong uVar15;
  ForElementType<unsigned_int> FVar16;
  ulonglong uVar17;
  uint uVar18;
  ForElementType<FPrimitiveSceneInfo_*> FVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator> *pTVar22;
  longlong *plVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *pTVar28;
  TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *this_00;
  undefined1 *puVar29;
  uint *puVar30;
  longlong lVar31;
  uint uVar32;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4 [4];
  uint local_1a0;
  uint local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *local_178;
  FSurfaceStats local_170;
  FSurfaceStats local_158;
  uint local_140;
  int local_13c;
  ulonglong local_138;
  TRangedForIterator local_130;
  FStats local_120;
  int local_100;
  uint uStack_fc;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  FName local_d8;
  FName local_d0;
  TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  int local_a0;
  int local_98;
  int local_94;
  ForElementType<FPrimitiveSceneInfo_*> local_90;
  FString local_88;
  FString local_78 [3];
  
  pTVar8 = CVarLumenSceneSurfaceCacheAtlasSize.Ref;
  fVar3 = this->SurfaceCacheResolution;
  bVar9 = IsInParallelRenderingThread();
  if ((!bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (int)((float)(pTVar8->ShadowedValue[1] + 0x7fU >> 7) * fVar3);
  iVar25 = 0x40;
  if (iVar10 < 0x40) {
    iVar25 = iVar10;
  }
  local_13c = 1;
  if (1 < iVar25) {
    local_13c = iVar25;
  }
  uVar20 = 0;
  local_13c = local_13c * local_13c;
  local_138 = 0;
  local_18c = 0;
  local_170.NumVirtualTexels = 0;
  local_170.NumLockedVirtualTexels = 0;
  local_170.NumPhysicalTexels = 0;
  local_170.NumLockedPhysicalTexels = 0;
  local_170.DroppedResLevels = 0;
  TSparseSpanArray<FLumenCard>::TRangedForIterator::TRangedForIterator(&local_130,&this->Cards,0);
  lVar11 = 0x38;
  if ((this->Cards).SpanAllocator.bGrowOnly == false) {
    lVar11 = 0x34;
  }
  uVar32 = *(uint *)((this->Cards).AllocatedElementsBitArray.AllocatorInstance.InlineData +
                    lVar11 + -0x10);
  while( true ) {
    piVar12 = &(this->Cards).SpanAllocator.PeakMaxSize;
    if ((this->Cards).SpanAllocator.bGrowOnly == false) {
      piVar12 = &(this->Cards).SpanAllocator.CurrentMaxSize;
    }
    uVar26 = local_130.ElementIndex;
    if (*piVar12 <= (int)uVar32) break;
    if ((((int)uVar32 < 0) || ((this->Cards).AllocatedElementsBitArray.NumBits <= (int)uVar32)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FVar4 = (this->Cards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<unsigned_int>)&(this->Cards).AllocatedElementsBitArray;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = FVar4;
    }
    uVar24 = uVar32;
    if ((int)uVar32 < 0) {
      uVar24 = uVar32 + 0x1f;
    }
    uVar26 = local_130.ElementIndex;
    if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar24 >> 5) * 4) >> (uVar32 & 0x1f) & 1) != 0
       ) break;
    uVar32 = uVar32 + 1;
  }
joined_r0x000144d6c501:
  uVar24 = uVar26;
  if (uVar24 != uVar32) {
    uVar26 = 0;
    if ((int)uVar24 < ((local_130.Array)->Elements).ArrayNum) {
      uVar26 = ~uVar24 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_18c = local_18c + 1;
    pFVar14 = (FLumenCard *)
              (((local_130.Array)->Elements).AllocatorInstance.Data + (longlong)(int)uVar24 * 400);
    if (pFVar14->bVisible != false) {
      FLumenCard::GetSurfaceStats(pFVar14,&this->PageTable,&local_170);
    }
    do {
      uVar26 = uVar24 + 1;
      lVar11 = 8;
      if (((local_130.Array)->SpanAllocator).bGrowOnly == false) {
        lVar11 = 4;
      }
      local_130.ElementIndex = uVar26;
      if (*(int *)(((local_130.Array)->SpanAllocator).FreeSpans.AllocatorInstance.InlineData +
                  lVar11 + -0x10) <= (int)uVar26) break;
      if ((((int)uVar26 < 0) ||
          (((local_130.Array)->AllocatedElementsBitArray).NumBits <= (int)uVar26)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar4 = ((local_130.Array)->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&(local_130.Array)->AllocatedElementsBitArray;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar4;
      }
      uVar18 = uVar26;
      if ((int)uVar26 < 0) {
        uVar18 = uVar24 + 0x20;
      }
      uVar24 = uVar26;
    } while ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar18 >> 5) * 4) >> (uVar26 & 0x1f) & 1)
             == 0);
    goto joined_r0x000144d6c501;
  }
  local_1a0 = 0;
  local_198 = 0;
  local_194 = 0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0;
  local_180 = 0;
  local_158.NumVirtualTexels = 0;
  local_158.NumLockedVirtualTexels = 0;
  local_158.NumPhysicalTexels = 0;
  local_158.NumLockedPhysicalTexels = 0;
  local_158.DroppedResLevels = 0;
  uVar32 = (this->InstanceCullingInfos).SpanAllocator.FreeSpans.ArrayMax;
  uVar17 = uVar20;
  if (10 < uVar32) {
    uVar17 = (longlong)(int)uVar32 << 3;
  }
  uVar32 = (this->InstanceCullingInfos).SpanAllocator.PendingFreeSpans.ArrayMax;
  uVar15 = uVar20;
  if (10 < uVar32) {
    uVar15 = (longlong)(int)uVar32 << 3;
  }
  local_19c = 0;
  this_00 = &this->PrimitiveGroups;
  local_e0 = (ulonglong)
             (((this->InstanceCullingInfos).AllocatedElementsBitArray.MaxBits + 0x1fU >> 5) << 2) +
             0x40 + uVar15 + uVar17 +
             (ulonglong)((*(int *)&(this->PrimitiveCullingInfos).field_0x2c + 0x1fU >> 5) << 2) +
             ((longlong)(this->PrimitiveGroups).ElementChunks.ArrayMax +
             (longlong)*(int *)&(this->PrimitiveCullingInfos).field_0xc * 4) * 8 +
             (ulonglong)
             (((this->PrimitiveGroups).AllocatedElementsBitArray.MaxBits + 0x1fU >> 5) << 2) +
             (ulonglong)(uint)((this->PrimitiveGroups).ElementChunks.ArrayNum << 0x15) +
             (longlong)(this->InstanceCullingInfos).Elements.ArrayMax * 0x20;
  uVar17 = uVar20;
  local_178 = this_00;
  if (0 < (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne) {
    do {
      uVar32 = (uint)uVar17;
      if ((((int)uVar32 < 0) ||
          ((this->PrimitiveGroups).AllocatedElementsBitArray.NumBits <= (int)uVar32)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), this_00 = local_178, bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar4 = (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<unsigned_int>)&(this->PrimitiveGroups).AllocatedElementsBitArray;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FVar4;
      }
      uVar26 = uVar32;
      if ((int)uVar32 < 0) {
        uVar26 = uVar32 + 0x1f;
      }
    } while (((*(uint *)((longlong)FVar16 + (longlong)((int)uVar26 >> 5) * 4) >> (uVar32 & 0x1f) & 1
              ) == 0) &&
            (uVar17 = (ulonglong)(uVar32 + 1),
            (int)(uVar32 + 1) < this_00->MaxAllocatedElementIndexPlusOne));
    local_19c = (uint)uVar17;
  }
  local_140 = this_00->MaxAllocatedElementIndexPlusOne;
  if ((uint)uVar17 != local_140) {
    do {
      uVar32 = 0;
      FVar13 = (ForElementType<FPrimitiveSceneInfo_*>)
               TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator[](this_00,(int)uVar17);
      local_1a0 = (int)uVar20 + 1;
      local_90 = FVar13;
      if (*(int *)((longlong)FVar13 + 0x18) < 0) {
        iVar25 = *(int *)((longlong)FVar13 + 0x10);
        FVar19 = FVar13;
        if (*(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar13 + 8) !=
            (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
          FVar19 = *(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar13 + 8);
        }
        FVar2 = (ForElementType<FPrimitiveSceneInfo_*>)((longlong)FVar19 + (longlong)iVar25 * 8);
        while( true ) {
          if (*(int *)((longlong)FVar13 + 0x10) != iVar25) {
            local_1a8 = 0;
            `TCheckedPointerIterator<FPrimitiveSceneInfo_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_1a8);
          }
          if (FVar19 == FVar2) goto LAB_144d6c88c;
          uVar32 = uVar32 + *(int *)(*(longlong *)FVar19 + 0x228);
          if (1 < uVar32) break;
          FVar19 = (ForElementType<FPrimitiveSceneInfo_*>)((longlong)FVar19 + 8);
        }
        iVar25 = *(int *)((longlong)FVar13 + 0x10);
        FVar19 = FVar13;
        if (*(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar13 + 8) !=
            (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
          FVar19 = *(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar13 + 8);
        }
        FVar2 = (ForElementType<FPrimitiveSceneInfo_*>)((longlong)FVar19 + (longlong)iVar25 * 8);
        iVar10 = local_198;
        while( true ) {
          if (*(int *)((longlong)FVar13 + 0x10) != iVar25) {
            local_1a7 = 0;
            `TCheckedPointerIterator<FPrimitiveSceneInfo_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_1a7);
          }
          if (FVar19 == FVar2) break;
          iVar10 = iVar10 + 1;
          local_194 = local_194 + *(int *)(*(longlong *)FVar19 + 0x228);
          FVar19 = (ForElementType<FPrimitiveSceneInfo_*>)((longlong)FVar19 + 8);
        }
        uVar17 = (ulonglong)local_19c;
        local_198 = iVar10;
      }
LAB_144d6c88c:
      lVar11 = 0;
      uVar32 = *(uint *)((longlong)FVar13 + 0x1c);
      if (-1 < (int)uVar32) {
        local_190 = local_190 + 1;
      }
      if (((*(byte *)((longlong)FVar13 + 0x38) & 2) != 0) &&
         (local_188 = local_188 + 1, -1 < (int)uVar32)) {
        local_184 = local_184 + 1;
        uVar26 = 0;
        if ((int)uVar32 < (this->MeshCards).Elements.ArrayNum) {
          uVar26 = ~uVar32 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar21 = (this->MeshCards).Elements.AllocatorInstance.Data;
        lVar31 = (longlong)(int)uVar32 * 400;
        uVar32 = 0;
        local_180 = local_180 + *(int *)(pFVar21 + lVar31 + 0x154);
        if (*(int *)(pFVar21 + lVar31 + 0x154) != 0) {
          do {
            uVar24 = *(int *)(pFVar21 + lVar31 + 0x150) + uVar32;
            uVar26 = 0;
            if ((int)uVar24 < (this->Cards).Elements.ArrayNum) {
              uVar26 = ~uVar24 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar14 = (FLumenCard *)
                      ((this->Cards).Elements.AllocatorInstance.Data + (longlong)(int)uVar24 * 400);
            if (pFVar14->MinAllocatedResLevel <= pFVar14->MaxAllocatedResLevel) {
              FLumenCard::GetSurfaceStats(pFVar14,&this->PageTable,&local_158);
            }
            uVar32 = uVar32 + 1;
            FVar13 = local_90;
          } while (uVar32 < *(uint *)(pFVar21 + lVar31 + 0x154));
        }
      }
      if (1 < *(uint *)((longlong)FVar13 + 0x14)) {
        lVar11 = (longlong)(int)*(uint *)((longlong)FVar13 + 0x14) << 3;
      }
      local_e0 = local_e0 + lVar11;
      pTVar28 = local_178;
      do {
        iVar25 = (int)uVar17;
        uVar32 = iVar25 + 1;
        uVar17 = (ulonglong)uVar32;
        this_00 = pTVar28;
        if (pTVar28->MaxAllocatedElementIndexPlusOne <= (int)uVar32) break;
        if ((((int)uVar32 < 0) || ((pTVar28->AllocatedElementsBitArray).NumBits <= (int)uVar32)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), this_00 = local_178, bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar4 = (pTVar28->AllocatedElementsBitArray).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)&pTVar28->AllocatedElementsBitArray;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        uVar26 = uVar32;
        if ((int)uVar32 < 0) {
          uVar26 = iVar25 + 0x20;
        }
        pTVar28 = this_00;
      } while ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar26 >> 5) * 4) >> (uVar32 & 0x1f) &
               1) == 0);
      uVar20 = (ulonglong)local_1a0;
      local_19c = uVar32;
    } while (uVar32 != local_140);
  }
  local_120.NumFreePages = 0;
  local_120.BinNumPages = 0;
  local_120.BinNumWastedPages = 0;
  local_120.BinPageFreeTexels = 0;
  local_120.Bins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.Bins.ArrayNum = 0;
  local_120.Bins.ArrayMax = 0;
  FLumenSurfaceCacheAllocator::GetStats(&this->SurfaceCacheAllocator,&local_120);
  if (((((4 < (byte)LogRenderer._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
        4 < (byte)LogRenderer._0_1_)) &&
       ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
        4 < (byte)LogRenderer._0_1_ &&
        ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
         4 < (byte)LogRenderer._0_1_ &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
         4 < (byte)LogRenderer._0_1_)))))) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
      4 < (byte)LogRenderer._0_1_)) &&
     (((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
       4 < (byte)LogRenderer._0_1_ &&
       (UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u___Cards___d_150e95e70,
                   (FLogCategoryBase *)&LogRenderer), 4 < (byte)LogRenderer._0_1_)) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
      4 < (byte)LogRenderer._0_1_)))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  if (((4 < (byte)LogRenderer._0_1_) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
      4 < (byte)LogRenderer._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
     4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  if (((((4 < (byte)LogRenderer._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
        4 < (byte)LogRenderer._0_1_)) &&
       ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
        4 < (byte)LogRenderer._0_1_ &&
        (((((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
            4 < (byte)LogRenderer._0_1_ &&
            (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
            4 < (byte)LogRenderer._0_1_)) &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
           4 < (byte)LogRenderer._0_1_)) &&
          ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
           4 < (byte)LogRenderer._0_1_ &&
           (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
           4 < (byte)LogRenderer._0_1_)))) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
         4 < (byte)LogRenderer._0_1_)))))) &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
       4 < (byte)LogRenderer._0_1_ &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
       4 < (byte)LogRenderer._0_1_)))) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
      4 < (byte)LogRenderer._0_1_ &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
      4 < (byte)LogRenderer._0_1_)))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  if (((4 < (byte)LogRenderer._0_1_) &&
      (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
      4 < (byte)LogRenderer._0_1_)) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
     4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  iVar25 = local_120.Bins.ArrayNum;
  pFVar27 = local_120.Bins.AllocatorInstance.Data + (longlong)local_120.Bins.ArrayNum * 0x10;
  pFVar21 = local_120.Bins.AllocatorInstance.Data + 8;
  while( true ) {
    if (local_120.Bins.ArrayNum != iVar25) {
      local_1a6 = 0;
      `TCheckedPointerIterator<FLumenSurfaceCacheAllocator::FBinStats,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1a6);
    }
    if (pFVar21 + -8 == pFVar27) break;
    if (4 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    pFVar21 = pFVar21 + 0x10;
  }
  if ((((4 < (byte)LogRenderer._0_1_) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
       4 < (byte)LogRenderer._0_1_)) &&
      ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
       4 < (byte)LogRenderer._0_1_ &&
       ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
        4 < (byte)LogRenderer._0_1_ &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
        4 < (byte)LogRenderer._0_1_)))))) &&
     ((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
      4 < (byte)LogRenderer._0_1_ &&
      ((((UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
         4 < (byte)LogRenderer._0_1_ &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
         4 < (byte)LogRenderer._0_1_)) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
        4 < (byte)LogRenderer._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer),
       4 < (byte)LogRenderer._0_1_)))))) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  if (param_2) {
    FDistanceFieldSceneData::ListMeshDistanceFields(param_1,true);
  }
  if (param_3) {
    if (4 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    pTVar1 = &this->PrimitiveCullingInfos;
    uStack_fc = 1;
    iVar25 = *(int *)&(this->PrimitiveCullingInfos).field_0x28;
    puStack_f8 = &(this->PrimitiveCullingInfos).field_0x10;
    local_100 = 0;
    iStack_ec = 0;
    iStack_e8 = 0;
    if (iVar25 != 0) {
      puVar30 = *(uint **)&(this->PrimitiveCullingInfos).field_0x20;
      if (puVar30 == (uint *)0x0) {
        puVar30 = (uint *)puStack_f8;
      }
      uVar32 = *puVar30;
      iStack_e8 = 0;
      local_100 = 0;
      while (uVar32 == 0) {
        iStack_e8 = iStack_e8 + 0x20;
        lVar11 = (longlong)local_100;
        local_100 = local_100 + 1;
        if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < local_100) goto LAB_144d6d477;
        uVar32 = puVar30[lVar11 + 1];
      }
      uStack_fc = -uVar32 & uVar32;
      uVar20 = (ulonglong)uStack_fc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_98 = (int)lVar11;
      iStack_ec = local_98 + -1 + iStack_e8;
      if (iVar25 < iStack_ec) {
LAB_144d6d477:
        iStack_ec = iVar25;
      }
    }
    local_f0 = 0xffffffff;
    uVar32 = *(uint *)&(this->PrimitiveCullingInfos).field_0x28;
    local_a0 = *(int *)&(this->PrimitiveCullingInfos).field_0x8 -
               *(int *)&(this->PrimitiveCullingInfos).field_0x34;
    local_c0._padding_ = CONCAT44(uStack_fc,local_100);
    iVar25 = (int)uVar32 >> 5;
    local_c0.CurrentBitIndex = iStack_ec;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_e4;
    local_c0.BaseBitIndex = iStack_e8;
    uVar26 = uVar32 & 0xffffffe0;
    local_c8 = pTVar1;
    local_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_f8;
    if (((int)uVar32 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar24 = *(uint *)&(this->PrimitiveCullingInfos).field_0x28;
    pTVar22 = pTVar1;
    if (uVar32 != uVar24) {
      puVar5 = *(undefined1 **)&(this->PrimitiveCullingInfos).field_0x20;
      puVar29 = &(this->PrimitiveCullingInfos).field_0x10;
      if (puVar5 != (undefined1 *)0x0) {
        puVar29 = puVar5;
      }
      uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar25 * 4);
      while (uVar32 == 0) {
        lVar11 = (longlong)iVar25;
        uVar26 = uVar26 + 0x20;
        iVar25 = iVar25 + 1;
        uVar32 = uVar24;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
        goto LAB_144d6d560;
        uVar32 = *(uint *)(puVar29 + lVar11 * 4 + 4);
      }
      uVar20 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_94 = (int)lVar11;
      uVar32 = local_94 + -1 + uVar26;
      if ((int)uVar24 < (int)uVar32) {
        uVar32 = uVar24;
      }
    }
LAB_144d6d560:
    while( true ) {
      if (*(int *)&pTVar22->field_0x8 - *(int *)&pTVar22->field_0x34 != local_a0) {
        local_1a5 = 0;
        `TSparseArray<FLumenPrimitiveGroupCullingInfo,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a5);
      }
      lVar11 = (longlong)local_c0.CurrentBitIndex;
      if (((local_c0.CurrentBitIndex == uVar32) &&
          (local_c0.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->PrimitiveCullingInfos).field_0x10)) &&
         (pTVar22 == pTVar1)) break;
      lVar31 = *(longlong *)pTVar22;
      uVar26 = *(uint *)(lVar11 * 0x20 + 4 + lVar31);
      if ((0 < (int)uVar26) &&
         ((int)uVar26 < (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne)) {
        if (((this->PrimitiveGroups).AllocatedElementsBitArray.NumBits <= (int)uVar26) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar4 = (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)&(this->PrimitiveGroups).AllocatedElementsBitArray;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        uVar24 = uVar26 & 0x1f;
        if ((int)uVar26 < 0) {
          uVar26 = uVar26 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar26 >> 5) * 4) >> uVar24 & 1) != 0) {
          iVar25 = *(int *)(lVar11 * 0x20 + 4 + lVar31);
          bVar9 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::IsAllocated
                            (&this->PrimitiveGroups,iVar25);
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsAllocated(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                                 ,0x18a,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar24 = (int)(iVar25 + (iVar25 >> 0x1f & 0x7fffU)) >> 0xf;
          uVar26 = 0;
          if ((int)uVar24 < (this->PrimitiveGroups).ElementChunks.ArrayNum) {
            uVar26 = ~uVar24 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar23 = (longlong *)
                    (*(longlong *)
                      ((this->PrimitiveGroups).ElementChunks.AllocatorInstance.Data +
                      (longlong)(int)uVar24 * 8) + (longlong)(int)(iVar25 + uVar24 * -0x8000) * 0x40
                    );
          if (0 < (int)plVar23[2]) {
            if ((longlong *)plVar23[1] != (longlong *)0x0) {
              plVar23 = (longlong *)plVar23[1];
            }
            if (((*plVar23 != 0) && (lVar11 = *(longlong *)(*plVar23 + 8), lVar11 != 0)) &&
               (4 < (byte)LogRenderer._0_1_)) {
              uVar6 = **(undefined8 **)(lVar11 + 0x70);
              local_d8.ComparisonIndex.Value = (uint)uVar6;
              local_d8.Number = (uint)((ulonglong)uVar6 >> 0x20);
              ::FName::ToString(&local_d8,&local_88);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
            }
          }
        }
      }
      local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
      pTVar22 = local_c8;
    }
  }
  uVar20 = 0;
  if (param_4) {
    if (4 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    uVar17 = local_138;
    if (0 < (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne) {
      do {
        uVar32 = (uint)uVar20;
        if ((((int)uVar32 < 0) ||
            ((this->PrimitiveGroups).AllocatedElementsBitArray.NumBits <= (int)uVar32)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar4 = (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)&(this->PrimitiveGroups).AllocatedElementsBitArray;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        uVar26 = uVar32;
        if ((int)uVar32 < 0) {
          uVar26 = uVar32 + 0x1f;
        }
        uVar17 = uVar20;
      } while (((*(uint *)((longlong)FVar16 + (longlong)((int)uVar26 >> 5) * 4) >> (uVar32 & 0x1f) &
                1) == 0) &&
              (uVar20 = (ulonglong)(uVar32 + 1), uVar17 = uVar20,
              (int)(uVar32 + 1) < (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne));
    }
    local_138 = uVar17;
    uVar32 = (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne;
    uVar26 = (uint)uVar20;
    uVar17 = local_138;
joined_r0x000144d6d854:
    local_138 = uVar17;
    if (uVar26 != uVar32) {
      FVar19 = (ForElementType<FPrimitiveSceneInfo_*>)
               TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator[]
                         (&this->PrimitiveGroups,(int)uVar20);
      iVar25 = *(int *)((longlong)FVar19 + 0x10);
      FVar13 = FVar19;
      if (*(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar19 + 8) !=
          (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
        FVar13 = *(ForElementType<FPrimitiveSceneInfo_*> *)((longlong)FVar19 + 8);
      }
      FVar2 = (ForElementType<FPrimitiveSceneInfo_*>)((longlong)FVar13 + (longlong)iVar25 * 8);
      while( true ) {
        if (*(int *)((longlong)FVar19 + 0x10) != iVar25) {
          local_1a4[0] = 0;
          `TCheckedPointerIterator<FPrimitiveSceneInfo_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_1a4);
        }
        uVar15 = local_138;
        if (FVar13 == FVar2) break;
        if (((*(longlong *)FVar13 != 0) &&
            (lVar11 = *(longlong *)(*(longlong *)FVar13 + 8), lVar11 != 0)) &&
           (4 < (byte)LogRenderer._0_1_)) {
          uVar6 = **(undefined8 **)(lVar11 + 0x70);
          local_d0.ComparisonIndex.Value = (uint)uVar6;
          local_d0.Number = (uint)((ulonglong)uVar6 >> 0x20);
          ::FName::ToString(&local_d0,local_78);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
          if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
          }
        }
        FVar13 = (ForElementType<FPrimitiveSceneInfo_*>)((longlong)FVar13 + 8);
      }
      do {
        uVar26 = (int)uVar15 + 1;
        uVar20 = (ulonglong)uVar26;
        uVar17 = uVar20;
        if ((this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne <= (int)uVar26) break;
        if ((((int)uVar26 < 0) ||
            ((this->PrimitiveGroups).AllocatedElementsBitArray.NumBits <= (int)uVar26)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar4 = (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)&(this->PrimitiveGroups).AllocatedElementsBitArray;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        uVar24 = uVar26;
        if ((int)uVar26 < 0) {
          uVar24 = (int)uVar15 + 0x20;
        }
        uVar15 = uVar20;
      } while ((*(uint *)((longlong)FVar16 + (longlong)((int)uVar24 >> 5) * 4) >> (uVar26 & 0x1f) &
               1) == 0);
      goto joined_r0x000144d6d854;
    }
  }
  if (local_120.Bins.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Bins.AllocatorInstance.Data);
  }
  return;
}

// EvictOldestAllocation @ 144d6de90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FLumenSceneData::EvictOldestAllocation
          (FLumenSceneData *this,uint param_1,
          TSparseUniqueList<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  FLumenPageTableEntry *pFVar5;
  FBinaryHeap<unsigned_int,unsigned_int> *this_00;
  
  this_00 = &this->UnlockedAllocationHeap;
  if ((this_00->HeapNum != 0) &&
     (uVar2 = *(this->UnlockedAllocationHeap).Heap,
     (this->UnlockedAllocationHeap).Keys[uVar2] + param_1 <= (this->SurfaceCacheFeedback).FrameIndex
     )) {
    puVar4 = (this->UnlockedAllocationHeap).Heap;
    uVar1 = this_00->HeapNum - 1;
    uVar3 = *puVar4;
    this_00->HeapNum = uVar1;
    *puVar4 = puVar4[uVar1];
    (this->UnlockedAllocationHeap).HeapIndexes[*(this->UnlockedAllocationHeap).Heap] = 0;
    (this->UnlockedAllocationHeap).HeapIndexes[uVar3] = 0xffffffff;
    FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(this_00,0);
    pFVar5 = TSparseSpanArray<FLumenPageTableEntry>::operator[](&this->PageTable,uVar2);
    if ((-1 < (pFVar5->PhysicalPageCoord).field0_0x0._s_0.X) &&
       (-1 < (pFVar5->PhysicalPageCoord).field0_0x0._s_0.Y)) {
      UnmapSurfaceCachePage(this,false,pFVar5,uVar2);
      TSparseUniqueList<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::Add
                (param_2,pFVar5->CardIndex);
    }
    return true;
  }
  return false;
}

// FillFrameTemporaries @ 144d79900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLumenSceneData::FillFrameTemporaries
          (FLumenSceneData *this,FRDGBuilder *param_1,FLumenSceneFrameTemporaries *param_2)

{
  FRDGBufferSRV *pFVar1;
  FRDGTexture *pFVar2;
  FRDGBuffer *pFVar3;
  FRDGBufferSRVDesc local_38;
  
  if ((param_2->CardBufferSRV == (FRDGBufferSRV *)0x0) &&
     ((this->CardBuffer).Reference != (FRDGPooledBuffer *)0x0)) {
    local_38.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->CardBuffer,None);
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    local_38._padding_._0_1_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
    param_2->CardBufferSRV = pFVar1;
  }
  if ((param_2->MeshCardsBufferSRV == (FRDGBufferSRV *)0x0) &&
     ((this->MeshCardsBuffer).Reference != (FRDGPooledBuffer *)0x0)) {
    local_38.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->MeshCardsBuffer,None);
    local_38._padding_._0_1_ = 0;
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
    param_2->MeshCardsBufferSRV = pFVar1;
  }
  if ((param_2->HeightfieldBufferSRV == (FRDGBufferSRV *)0x0) &&
     ((this->HeightfieldBuffer).Reference != (FRDGPooledBuffer *)0x0)) {
    local_38.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->HeightfieldBuffer,None);
    local_38._padding_._0_1_ = 0;
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
    param_2->HeightfieldBufferSRV = pFVar1;
  }
  if ((param_2->PrimitiveGroupBufferSRV == (FRDGBufferSRV *)0x0) &&
     ((this->PrimitiveGroupBuffer).Reference != (FRDGPooledBuffer *)0x0)) {
    local_38.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PrimitiveGroupBuffer,None);
    local_38._padding_._0_1_ = 0;
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
    param_2->PrimitiveGroupBufferSRV = pFVar1;
  }
  if ((param_2->SceneInstanceIndexToMeshCardsIndexBufferSRV == (FRDGBufferSRV *)0x0) &&
     ((this->SceneInstanceIndexToMeshCardsIndexBuffer).Reference != (FRDGPooledBuffer *)0x0)) {
    local_38.Buffer =
         FRDGBuilder::RegisterExternalBuffer
                   (param_1,&this->SceneInstanceIndexToMeshCardsIndexBuffer,None);
    local_38._padding_._0_1_ = 0;
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
    param_2->SceneInstanceIndexToMeshCardsIndexBufferSRV = pFVar1;
  }
  if ((param_2->PageTableBufferSRV == (FRDGBufferSRV *)0x0) &&
     ((this->PageTableBuffer).Reference != (FRDGPooledBuffer *)0x0)) {
    local_38.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PageTableBuffer,None);
    local_38._padding_._0_1_ = 0;
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
    param_2->PageTableBufferSRV = pFVar1;
  }
  if ((param_2->CardPageBufferSRV == (FRDGBufferSRV *)0x0) &&
     ((this->CardPageBuffer).Reference != (FRDGPooledBuffer *)0x0)) {
    local_38.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->CardPageBuffer,None);
    local_38._padding_._0_1_ = 0;
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_38);
    param_2->CardPageBufferSRV = pFVar1;
  }
  if ((param_2->AlbedoAtlas == (FRDGTexture *)0x0) &&
     ((this->AlbedoAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture(param_1,&this->AlbedoAtlas,None);
    param_2->AlbedoAtlas = pFVar2;
  }
  if ((param_2->OpacityAtlas == (FRDGTexture *)0x0) &&
     ((this->OpacityAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture(param_1,&this->OpacityAtlas,None);
    param_2->OpacityAtlas = pFVar2;
  }
  if ((param_2->NormalAtlas == (FRDGTexture *)0x0) &&
     ((this->NormalAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture(param_1,&this->NormalAtlas,None);
    param_2->NormalAtlas = pFVar2;
  }
  if ((param_2->EmissiveAtlas == (FRDGTexture *)0x0) &&
     ((this->EmissiveAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture(param_1,&this->EmissiveAtlas,None);
    param_2->EmissiveAtlas = pFVar2;
  }
  if ((param_2->DepthAtlas == (FRDGTexture *)0x0) &&
     ((this->DepthAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture(param_1,&this->DepthAtlas,None);
    param_2->DepthAtlas = pFVar2;
  }
  if ((param_2->DirectLightingAtlas == (FRDGTexture *)0x0) &&
     ((this->DirectLightingAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture(param_1,&this->DirectLightingAtlas,None);
    param_2->DirectLightingAtlas = pFVar2;
  }
  if ((param_2->IndirectLightingAtlas == (FRDGTexture *)0x0) &&
     ((this->IndirectLightingAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture(param_1,&this->IndirectLightingAtlas,None);
    param_2->IndirectLightingAtlas = pFVar2;
  }
  if ((param_2->RadiosityNumFramesAccumulatedAtlas == (FRDGTexture *)0x0) &&
     ((this->RadiosityNumFramesAccumulatedAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture
                       (param_1,&this->RadiosityNumFramesAccumulatedAtlas,None);
    param_2->RadiosityNumFramesAccumulatedAtlas = pFVar2;
  }
  if ((param_2->FinalLightingAtlas == (FRDGTexture *)0x0) &&
     ((this->FinalLightingAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture(param_1,&this->FinalLightingAtlas,None);
    param_2->FinalLightingAtlas = pFVar2;
  }
  if ((param_2->TileShadowDownsampleFactorAtlas == (FRDGBuffer *)0x0) &&
     ((this->TileShadowDownsampleFactorAtlas).Reference != (FRDGPooledBuffer *)0x0)) {
    pFVar3 = FRDGBuilder::RegisterExternalBuffer
                       (param_1,&this->TileShadowDownsampleFactorAtlas,None);
    param_2->TileShadowDownsampleFactorAtlas = pFVar3;
  }
  if ((param_2->DiffuseLightingAndSecondMomentHistoryAtlas == (FRDGTexture *)0x0) &&
     ((this->DiffuseLightingAndSecondMomentHistoryAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture
                       (param_1,&this->DiffuseLightingAndSecondMomentHistoryAtlas,None);
    param_2->DiffuseLightingAndSecondMomentHistoryAtlas = pFVar2;
  }
  if ((param_2->NumFramesAccumulatedHistoryAtlas == (FRDGTexture *)0x0) &&
     ((this->NumFramesAccumulatedHistoryAtlas).Reference != (IPooledRenderTarget *)0x0)) {
    pFVar2 = FRDGBuilder::RegisterExternalTexture
                       (param_1,&this->NumFramesAccumulatedHistoryAtlas,None);
    param_2->NumFramesAccumulatedHistoryAtlas = pFVar2;
  }
  return;
}

// FindMatchingCardForCopy @ 144d79fe0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLumenCardSharingInfo * __thiscall
FLumenSceneData::FindMatchingCardForCopy(FLumenSceneData *this,FLumenCardId *param_1,uint param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *pTVar7;
  FLumenCardSharingInfo *pFVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  if (((this->bAllowCardSharing != false) && (param_1->PackedValue != 0xffffffffffffffff)) &&
     (pTVar7 = TMapBase<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
               ::Find((TMapBase<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
                       *)&this->CardSharingInfoMap,*param_1),
     pTVar7 != (TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator> *)0x0)) {
    iVar3 = *(int *)&pTVar7->field_0x28;
    puVar1 = &pTVar7->field_0x10;
    local_88 = 0;
    uStack_84 = 1;
    iStack_74 = 0;
    iStack_70 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)&pTVar7->field_0x20;
      if (*(uint **)&pTVar7->field_0x20 == (uint *)0x0) {
        puVar13 = (uint *)puVar1;
      }
      uVar11 = *puVar13;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar11 == 0) {
        iStack_70 = iStack_70 + 0x20;
        lVar9 = (longlong)local_88;
        local_88 = local_88 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_144d7a0c7;
        uVar11 = puVar13[lVar9 + 1];
      }
      uStack_84 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uStack_84 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_74 = (int)lVar9 + -1 + iStack_70;
      if (iVar3 < iStack_74) {
LAB_144d7a0c7:
        iStack_74 = iVar3;
      }
    }
    uVar11 = *(uint *)&pTVar7->field_0x28;
    local_40 = *(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34;
    local_60._padding_ = CONCAT44(uStack_84,local_88);
    iVar10 = (int)uVar11 >> 5;
    local_60.CurrentBitIndex = iStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = iStack_70;
    uVar14 = uVar11 & 0xffffffe0;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FLumenCardSharingInfo *)(*pcVar5)();
      return pFVar8;
    }
    uVar4 = *(uint *)&pTVar7->field_0x28;
    if (uVar11 != uVar4) {
      puVar12 = *(undefined1 **)&pTVar7->field_0x20;
      if (*(undefined1 **)&pTVar7->field_0x20 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar10;
        uVar14 = uVar14 + 0x20;
        iVar10 = iVar10 + 1;
        uVar11 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_144d7a1c0;
        uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar14;
      if ((int)uVar4 < (int)uVar11) {
        uVar11 = uVar4;
      }
    }
LAB_144d7a1c0:
    while( true ) {
      if (*(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34 != local_40) {
        `TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>::TRangedForConstIterator::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((local_60.CurrentBitIndex == uVar11) &&
         (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      if (param_2 <=
          (*(uint *)(*(longlong *)pTVar7 + (longlong)local_60.CurrentBitIndex * 8) >> 0x1b & 0xf)) {
        return (FLumenCardSharingInfo *)
               (*(longlong *)pTVar7 + (longlong)local_60.CurrentBitIndex * 8);
      }
      local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
    }
  }
  return (FLumenCardSharingInfo *)0x0;
}

// FlushPendingCardSharingInfos @ 144d7a240

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLumenSceneData::FlushPendingCardSharingInfos(FLumenSceneData *this)

{
  TArray<FLumenCardSharingInfoPendingAdd,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *this_00;
  longlong lVar16;
  longlong lVar17;
  undefined1 *puVar18;
  longlong lVar19;
  FLumenCardId *pFVar20;
  FSetElementId FVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  FIdentityFunctor local_res8;
  uint local_res10;
  longlong local_res20;
  longlong local_78;
  FSparseArrayAllocationInfo local_60 [2];
  
  if (this->bAllowCardSharing == false) {
    return;
  }
  local_res8 = SUB81(this,0);
  pTVar1 = &this->PendingAddCardSharingInfos;
  AlgoImpl::IntroSortInternal<FLumenCardSharingInfoPendingRemove,int,FIdentityFunctor,TLess<void>_>
            ((FLumenCardSharingInfoPendingRemove *)
             (this->PendingRemoveCardSharingInfos).AllocatorInstance.Data,
             (this->PendingRemoveCardSharingInfos).ArrayNum,local_res8,(TLess<void>)local_res8);
  AlgoImpl::IntroSortInternal<FLumenCardSharingInfoPendingAdd,int,FIdentityFunctor,TLess<void>_>
            ((FLumenCardSharingInfoPendingAdd *)(pTVar1->AllocatorInstance).Data,
             (this->PendingAddCardSharingInfos).ArrayNum,local_res8,(TLess<void>)local_res8);
  lVar16 = (longlong)(this->PendingRemoveCardSharingInfos).ArrayNum;
  lVar15 = (longlong)(this->PendingAddCardSharingInfos).ArrayNum;
  uVar23 = 0;
  local_res10 = 0;
  local_res20 = 0;
  local_78 = 0;
  lVar19 = 0;
  lVar26 = 0;
  uVar25 = 0;
LAB_144d7a310:
  if (lVar19 < lVar16) goto LAB_144d7a3cb;
  if (lVar15 <= lVar26) {
    (this->PendingRemoveCardSharingInfos).ArrayNum = 0;
    if ((this->PendingRemoveCardSharingInfos).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PendingRemoveCardSharingInfos).AllocatorInstance,0,
                 &(this->PendingRemoveCardSharingInfos).ArrayMax);
    }
    (this->PendingAddCardSharingInfos).ArrayNum = 0;
    if (-1 < (this->PendingAddCardSharingInfos).ArrayMax) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,&(this->PendingAddCardSharingInfos).ArrayMax);
    return;
  }
  goto LAB_144d7a79b;
LAB_144d7a3cb:
  lVar24 = lVar19 << 4;
  do {
    if (lVar26 < lVar15) {
      uVar11 = 0;
      if ((int)uVar25 < (this->PendingRemoveCardSharingInfos).ArrayNum) {
        uVar11 = ~uVar25 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar22 = (this->PendingRemoveCardSharingInfos).AllocatorInstance.Data;
      uVar11 = 0;
      if ((int)uVar23 < (this->PendingAddCardSharingInfos).ArrayNum) {
        uVar11 = ~uVar23 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(ulonglong *)((pTVar1->AllocatorInstance).Data + lVar26 * 0x10) <
          *(ulonglong *)(pFVar22 + lVar24)) goto LAB_144d7a79b;
    }
    uVar11 = 0;
    if ((int)uVar25 < (this->PendingRemoveCardSharingInfos).ArrayNum) {
      uVar11 = ~uVar25 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar22 = (this->PendingRemoveCardSharingInfos).AllocatorInstance.Data +
              (longlong)(int)uVar25 * 0x10;
    uVar6 = *(ulonglong *)pFVar22;
    if (*(int *)&(this->CardSharingInfoMap).field_0x8 !=
        *(int *)&(this->CardSharingInfoMap).field_0x34) {
      puVar7 = *(undefined1 **)&(this->CardSharingInfoMap).field_0x40;
      puVar18 = &(this->CardSharingInfoMap).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar18 = puVar7;
      }
      FVar21.Index = *(int *)(puVar18 +
                             (ulonglong)
                             (*(int *)&(this->CardSharingInfoMap).field_0x48 - 1U &
                             (int)(uVar6 >> 0x20) * 0x17 + (int)uVar6) * 4);
      if (FVar21.Index != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)&this->CardSharingInfoMap + (longlong)FVar21.Index * 0x48)
              == uVar6) goto LAB_144d7a559;
          FVar21.Index = *(int *)(*(longlong *)&this->CardSharingInfoMap + 0x40 +
                                 (longlong)FVar21.Index * 0x48);
        } while (FVar21.Index != -1);
      }
    }
    FVar21.Index = -1;
LAB_144d7a559:
    iVar14 = *(int *)(pFVar22 + 8);
    lVar26 = *(longlong *)
              (*(longlong *)&this->CardSharingInfoMap + 8 + (longlong)FVar21.Index * 0x48);
    lVar19 = *(longlong *)&this->CardSharingInfoMap + (longlong)FVar21.Index * 0x48;
    bVar3 = (byte)iVar14 & 0x1f;
    uVar25 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    if (((iVar14 < 0) || (*(int *)(lVar19 + 0x30) <= iVar14)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar17 = lVar19 + 0x18;
    if (*(longlong *)(lVar19 + 0x28) != 0) {
      lVar17 = *(longlong *)(lVar19 + 0x28);
    }
    iVar12 = iVar14;
    if (iVar14 < 0) {
      iVar12 = iVar14 + 0x1f;
    }
    if (((*(uint *)(lVar17 + (longlong)(iVar12 >> 5) * 4) & uVar25) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocationFlags[Index]",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                            ,0xc5,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(int *)(lVar19 + 0x3c) != 0) {
      *(int *)(lVar26 + (longlong)*(int *)(lVar19 + 0x38) * 8) = iVar14;
    }
    *(undefined4 *)(lVar26 + (longlong)iVar14 * 8) = 0xffffffff;
    if (*(int *)(lVar19 + 0x3c) < 1) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = *(undefined4 *)(lVar19 + 0x38);
    }
    *(undefined4 *)(lVar26 + 4 + (longlong)iVar14 * 8) = uVar13;
    *(int *)(lVar19 + 0x3c) = *(int *)(lVar19 + 0x3c) + 1;
    *(int *)(lVar19 + 0x38) = iVar14;
    if (((iVar14 < 0) || (*(int *)(lVar19 + 0x30) <= iVar14)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar26 = lVar19 + 0x18;
    if (*(longlong *)(lVar19 + 0x28) != 0) {
      lVar26 = *(longlong *)(lVar19 + 0x28);
    }
    if (iVar14 < 0) {
      iVar14 = iVar14 + 0x1f;
    }
    puVar2 = (uint *)(lVar26 + (longlong)(iVar14 >> 5) * 4);
    *puVar2 = *puVar2 & ~uVar25;
    if (*(int *)(lVar19 + 0x10) == *(int *)(lVar19 + 0x3c)) {
      if (local_78 < lVar15) {
        uVar25 = 0;
        if ((int)uVar23 < (this->PendingAddCardSharingInfos).ArrayNum) {
          uVar25 = ~uVar23 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(ulonglong *)
             ((this->PendingAddCardSharingInfos).AllocatorInstance.Data + local_78 * 0x10) <=
            *(ulonglong *)pFVar22) goto LAB_144d7a720;
      }
      TSet<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>,FDefaultSetAllocator>
                *)&this->CardSharingInfoMap,FVar21);
    }
LAB_144d7a720:
    uVar25 = local_res10 + 1;
    lVar19 = local_res20 + 1;
    lVar24 = lVar24 + 0x10;
    lVar26 = local_78;
    local_res10 = uVar25;
    local_res20 = lVar19;
  } while (lVar19 < lVar16);
  if (local_78 < lVar15) {
LAB_144d7a79b:
    lVar24 = lVar26 << 4;
    do {
      if (lVar19 < lVar16) {
        uVar11 = 0;
        if ((int)uVar23 < (this->PendingAddCardSharingInfos).ArrayNum) {
          uVar11 = ~uVar23 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar22 = (pTVar1->AllocatorInstance).Data;
        uVar11 = 0;
        if ((int)uVar25 < (this->PendingRemoveCardSharingInfos).ArrayNum) {
          uVar11 = ~uVar25 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*(ulonglong *)
             ((this->PendingRemoveCardSharingInfos).AllocatorInstance.Data + lVar19 * 0x10) <=
            *(ulonglong *)(pFVar22 + lVar24)) break;
      }
      uVar25 = 0;
      if ((int)uVar23 < (this->PendingAddCardSharingInfos).ArrayNum) {
        uVar25 = ~uVar23 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar20 = (FLumenCardId *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar23 * 0x10);
      this_00 = (TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)
                TMapBase<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
                ::FindOrAddImpl<FLumenCardId_const_&>
                          ((TMapBase<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
                            *)&this->CardSharingInfoMap,
                           (int)(pFVar20->PackedValue >> 0x20) * 0x17 + (int)pFVar20->PackedValue,
                           pFVar20);
      uVar25 = *(uint *)(pFVar20 + 1);
      uVar11 = 0;
      if ((int)uVar25 < (this->Cards).Elements.ArrayNum) {
        uVar11 = ~uVar25 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar22 = (this->Cards).Elements.AllocatorInstance.Data;
      if ((((pFVar20->PackedValue != *(ulong64 *)(pFVar22 + (longlong)(int)uVar25 * 400 + 0x180)) ||
           (*(FScriptContainerElement *)((longlong)pFVar20 + 0xc) !=
            pFVar22[(longlong)(int)uVar25 * 400 + 0xf8])) ||
          (*(FScriptContainerElement *)((longlong)pFVar20 + 0xd) !=
           pFVar22[(longlong)(int)uVar25 * 400 + 0xf6])) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Info.CardId == Card.CardSharingId && Info.MinAllocatedResLevel == Card.MinAllocatedResLevel && Info.bAxisXFlipped == Card.bAxisXFlipped"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                              ,0x602,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar3 = *(byte *)((longlong)pFVar20 + 0xc);
      bVar4 = *(byte *)((longlong)pFVar20 + 0xd);
      uVar11 = *(uint *)(pFVar20 + 1);
      if (this_00->NumFreeIndices == 0) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,1,(ForAnyElementType *)this_00,&(this_00->Data).ArrayNum,
                            &(this_00->Data).ArrayMax);
        TBitArray<FDefaultBitArrayAllocator>::Add(&this_00->AllocationFlags,false);
      }
      else {
        iVar14 = this_00->FirstFreeIndex;
        iVar12 = this_00->NumFreeIndices + -1;
        pFVar8 = (this_00->Data).AllocatorInstance.Data;
        iVar5 = *(int *)(pFVar8 + (longlong)iVar14 * 8 + 4);
        this_00->FirstFreeIndex = iVar5;
        this_00->NumFreeIndices = iVar12;
        if (iVar12 != 0) {
          *(undefined4 *)(pFVar8 + (longlong)iVar5 * 8) = 0xffffffff;
        }
      }
      TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::AllocateIndex(this_00,local_60,iVar14);
      if (local_60[0].Pointer != (uint *)0x0) {
        *(uint *)local_60[0].Pointer = (bVar3 & 0xf | (uint)bVar4 << 4) << 0x1b | uVar11 & 0x7ffffff
        ;
      }
      lVar26 = lVar26 + 1;
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 0x10;
      *(int *)(pFVar22 + (longlong)(int)uVar25 * 400 + 0x188) = local_60[0].Index;
      lVar19 = local_res20;
      uVar25 = local_res10;
      local_78 = lVar26;
    } while (lVar26 < lVar15);
  }
  goto LAB_144d7a310;
}

// ForceEvictEntireCache @ 144d7aa80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLumenSceneData::ForceEvictEntireCache(FLumenSceneData *this)

{
  FUniqueIndexList *pFVar1;
  uint *puVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  ulonglong uVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ForElementType<unsigned_int> this_02;
  uint *puVar15;
  int *piVar16;
  ForElementType<int> FVar17;
  undefined1 local_res10 [8];
  uint local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  TSparseUniqueList<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_68;
  
  local_68.Array.AllocatorInstance.Data = (int *)0x0;
  local_68.Array.ArrayNum = 0;
  local_68.Array.ArrayMax = 0;
  local_68.Set.Table.CurrentData._0_8_ = local_68.Set.Table.CurrentData._0_8_ & 0xffffffff00000000;
  local_68.Set.Table.CurrentData.Distances = (schar *)0x0;
  local_68.Set.Table.CurrentData.Keys = (int *)0x0;
  local_68.Set.Table.CurrentData.Values = (FNoopStruct *)0x0;
  local_68.Set.Table.NumSlotsMinusOne = 0;
  local_68.Set.Table.MaxLookups = '\0';
  local_68.Set.Table.NumElements = 0;
  do {
    bVar8 = EvictOldestAllocation(this,0,&local_68);
  } while (bVar8);
  iVar3 = local_68.Array.ArrayNum;
  uVar10 = (ulonglong)local_68.Array.ArrayNum;
  puVar15 = (uint *)(local_68.Array.AllocatorInstance.Data + uVar10);
  FVar17.Data = local_68.Array.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((uint *)FVar17.Data == puVar15) break;
    uVar14 = *FVar17.Data;
    uVar12 = 0;
    if ((int)uVar14 < (this->Cards).Elements.ArrayNum) {
      uVar12 = ~uVar14 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    UpdateCardMipMapHierarchy
              (this,(FLumenCard *)
                    ((this->Cards).Elements.AllocatorInstance.Data + (longlong)(int)uVar14 * 400));
    pFVar1 = &this->CardIndicesToUpdateInBuffer;
    iVar13 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits;
    this_02 = (ForElementType<unsigned_int>)
              &(this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate;
    local_98[0] = uVar14;
    if ((iVar13 < (int)(uVar14 + 1)) &&
       (iVar13 = (uVar14 + 0x40 & 0xffffffc0) - iVar13, -1 < iVar13)) {
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_02,iVar13);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                ((TBitArray<FDefaultBitArrayAllocator> *)this_02,iVar9,iVar13,false);
    }
    uVar14 = local_98[0];
    if (((int)local_98[0] < 0) ||
       ((this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits <= (int)local_98[0])) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FVar4 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
            SecondaryData;
    FVar11 = this_02;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar4;
    }
    uVar12 = uVar14 & 0x1f;
    if ((int)uVar14 < 0) {
      uVar14 = uVar14 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar11 + (longlong)((int)uVar14 >> 5) * 4) >> uVar12 & 1) == 0) {
      pFVar5 = (pFVar1->Indices).AllocatorInstance.Data;
      if ((pFVar5 <= (FScriptContainerElement *)local_98) &&
         ((FScriptContainerElement *)local_98 <
          pFVar5 + (longlong)(this->CardIndicesToUpdateInBuffer).Indices.ArrayMax * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar13 = (this->CardIndicesToUpdateInBuffer).Indices.ArrayNum;
      piVar16 = &(this->CardIndicesToUpdateInBuffer).Indices.ArrayMax;
      if (iVar13 == *piVar16) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar1,piVar16);
      }
      uVar14 = local_98[0];
      (this->CardIndicesToUpdateInBuffer).Indices.ArrayNum = iVar13 + 1;
      *(uint *)((pFVar1->Indices).AllocatorInstance.Data + (longlong)iVar13 * 4) = local_98[0];
      if (((int)local_98[0] < 0) ||
         ((this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits <= (int)local_98[0])) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FVar4 = (this->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
              SecondaryData;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        this_02 = FVar4;
      }
      uVar12 = uVar14;
      if ((int)uVar14 < 0) {
        uVar12 = uVar14 + 0x1f;
      }
      puVar2 = (uint *)((longlong)this_02 + (longlong)((int)uVar12 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar14 & 0x1f);
    }
    uVar10 = local_68.Array._8_8_ & 0xffffffff;
    FVar17.Data = FVar17.Data + 1;
  }
  if (local_68.Set.Table.CurrentData.Distances != (schar *)0x0) {
    FMemory::Free(local_68.Set.Table.CurrentData.Distances);
    FMemory::Free(local_68.Set.Table.CurrentData.Keys);
    FMemory::Free(local_68.Set.Table.CurrentData.Values);
  }
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_68.Set.Table.NumSlotsMinusOne = 0;
  local_68.Set.Table.NumElements = 0;
  local_68.Set.Table.CurrentData.AllocatedCount = 0;
  local_68.Set.Table.CurrentData._4_4_ = 0;
  local_68.Set.Table.CurrentData.Distances = (schar *)0x0;
  local_68.Set.Table.CurrentData.Keys = (int *)0x0;
  local_68.Set.Table.CurrentData.Values = (FNoopStruct *)0x0;
  local_68.Set.Table.MaxLookups = '\0';
  if ((uint *)local_68.Array.AllocatorInstance.Data != (uint *)0x0) {
    puVar15 = (uint *)(local_68.Array.AllocatorInstance.Data + -2);
    MemoryTrace_Free((ulong64)puVar15,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,puVar15,FMalloc,true);
    }
    piVar16 = (int *)((longlong)puVar15 - (ulonglong)*puVar15);
    LOCK();
    iVar3 = *piVar16;
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      lVar6 = *(longlong *)(piVar16 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar16,0,0);
      if (lVar6 - (longlong)piVar16 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar16);
        return;
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar16);
    }
  }
  return;
}

// FreeVirtualSurface @ 144d7b040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::FreeVirtualSurface
          (FLumenSceneData *this,FLumenCard *param_1,uchar param_2,uchar param_3)

{
  int *piVar1;
  TArray<FLumenCardSharingInfoPendingRemove,TSizedDefaultAllocator<32>_> *pTVar2;
  ushort uVar3;
  FLumenCardId *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FLumenCardId FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  FLumenPageTableEntry *pFVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  TIntPoint<int>_u_0 TVar16;
  TIntPoint<int>_u_0 TVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_c8 [2];
  FLumenCardId local_c0;
  int iStack_b8;
  undefined4 uStack_b4;
  TIntPoint<int>_u_0 local_a8;
  TIntPoint<int>_u_0 TStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  TVar17 = _UNK_15076adc8;
  TVar16 = ___xmm_0000000000000000ffffffffffffffff;
  uVar19 = _UNK_150689648;
  uVar18 = ___xmm_3f800000000000000000000000000000;
  if (param_1->MinAllocatedResLevel <= param_1->MaxAllocatedResLevel) {
    if (param_2 <= param_3) {
      do {
        uVar12 = (ulonglong)param_2;
        if (((param_2 < 3) || (8 < uVar12 - 3)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                               ,0x158,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanSize != 0) {
          if (((this->bAllowCardSharing != false) && (param_2 == param_1->MinAllocatedResLevel)) &&
             (((param_1->CardSharingId).PackedValue != 0xffffffffffffffff &&
              (-1 < param_1->CardSharingListIndex)))) {
            if ((param_1->SurfaceMipMaps[uVar12 - 3].bLocked == false) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("MipMap.bLocked",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                                   ,0x68e,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_c0 = param_1->CardSharingId;
            pTVar2 = &this->PendingRemoveCardSharingInfos;
            pFVar4 = (FLumenCardId *)(pTVar2->AllocatorInstance).Data;
            iStack_b8 = param_1->CardSharingListIndex;
            if (((pFVar4 <= &local_c0) &&
                (&local_c0 < pFVar4 + (longlong)(this->PendingRemoveCardSharingInfos).ArrayMax * 2))
               && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = (this->PendingRemoveCardSharingInfos).ArrayNum;
            piVar1 = &(this->PendingRemoveCardSharingInfos).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&pTVar2->AllocatorInstance,piVar1);
            }
            FVar7._s_1.CustomId = uStack_b4;
            FVar7.PackedValue._0_4_ = iStack_b8;
            (this->PendingRemoveCardSharingInfos).ArrayNum = iVar9 + 1;
            pFVar4 = (FLumenCardId *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10);
            *pFVar4 = local_c0;
            pFVar4[1] = FVar7;
            param_1->CardSharingListIndex = -1;
          }
          iVar9 = 0;
          if ((uint)param_1->SurfaceMipMaps[uVar12 - 3].SizeInPagesX *
              (uint)param_1->SurfaceMipMaps[uVar12 - 3].SizeInPagesY != 0) {
            do {
              uVar15 = param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanOffset + iVar9;
              uVar10 = 0;
              if ((int)uVar15 < (this->PageTable).Elements.ArrayNum) {
                uVar10 = ~uVar15 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar13 = (FLumenPageTableEntry *)
                        ((this->PageTable).Elements.AllocatorInstance.Data +
                        (longlong)(int)uVar15 * 0x50);
              UnmapSurfaceCachePage(this,param_1->SurfaceMipMaps[uVar12 - 3].bLocked,pFVar13,uVar15)
              ;
              (pFVar13->PhysicalPageCoord).field0_0x0 = TVar16;
              local_68 = 0xffffffffffffffff;
              (pFVar13->PhysicalAtlasRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
              iVar9 = iVar9 + 1;
              (pFVar13->PhysicalAtlasRect).field0_0x0._s_0.Min.field0_0x0 = TVar17;
              (pFVar13->SubAllocationSize).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
              pFVar13->SamplePageIndex = 0;
              pFVar13->SampleAtlasBiasX = 0;
              pFVar13->SampleAtlasBiasY = 0;
              pFVar13->SampleCardResLevelX = 0;
              pFVar13->SampleCardResLevelY = 0;
              pFVar13->CardIndex = -1;
              pFVar13->ResLevel = '\0';
              *(undefined8 *)&(pFVar13->CardUVRect).field0_0x0 = uVar18;
              *(undefined8 *)((longlong)&(pFVar13->CardUVRect).field0_0x0 + 8) = uVar19;
              local_7f = 0;
              local_7b = 0;
              local_79 = 0;
              local_60 = 0;
              local_a8 = TVar16;
              TStack_a0 = TVar17;
              local_98 = 0;
              local_90 = 0;
              local_88 = 0;
              local_84 = 0xffffffff;
              local_80 = 0;
              local_78 = uVar18;
              uStack_70 = uVar19;
            } while (iVar9 < (int)((uint)param_1->SurfaceMipMaps[uVar12 - 3].SizeInPagesY *
                                  (uint)param_1->SurfaceMipMaps[uVar12 - 3].SizeInPagesX));
          }
          uVar3 = param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanSize;
          if (uVar3 != 0) {
            TSparseSpanArray<FLumenPageTableEntry>::RemoveSpan
                      (&this->PageTable,param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanOffset,
                       (uint)uVar3);
            iVar9 = 0;
            if (param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanSize != 0) {
              pTVar14 = &this->PageTableIndicesToUpdateInBuffer;
              do {
                local_c8[0] = param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanOffset + iVar9;
                pFVar5 = (pTVar14->AllocatorInstance).Data;
                if (((pFVar5 <= (FScriptContainerElement *)local_c8) &&
                    ((FScriptContainerElement *)local_c8 <
                     pFVar5 + (longlong)(this->PageTableIndicesToUpdateInBuffer).ArrayMax * 4)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar11 = (this->PageTableIndicesToUpdateInBuffer).ArrayNum;
                if (iVar11 == (this->PageTableIndicesToUpdateInBuffer).ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&pTVar14->AllocatorInstance,
                                      &(this->PageTableIndicesToUpdateInBuffer).ArrayMax);
                }
                iVar9 = iVar9 + 1;
                (this->PageTableIndicesToUpdateInBuffer).ArrayNum = iVar11 + 1;
                *(int *)((pTVar14->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_c8[0];
              } while (iVar9 < (int)(uint)param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanSize);
            }
            param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanOffset = -1;
            param_1->SurfaceMipMaps[uVar12 - 3].PageTableSpanSize = 0;
            param_1->SurfaceMipMaps[uVar12 - 3].bLocked = false;
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
    FLumenCard::UpdateMinMaxAllocatedLevel(param_1);
  }
  return;
}

// GetCardCaptureAtlasSize @ 144d7c8e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TIntPoint<int> __thiscall FLumenSceneData::GetCardCaptureAtlasSize(FLumenSceneData *this)

{
  TIntPoint<int> TVar1;
  TIntPoint<int>_u_0 in_RDX;
  undefined8 local_res10;
  
  TVar1 = GetCardCaptureAtlasSizeInPages(this);
  local_res10._4_4_ = (int)((ulonglong)*(undefined8 *)TVar1.field0_0x0 >> 0x20);
  local_res10 = CONCAT44(local_res10._4_4_ << 7,(int)*(undefined8 *)TVar1.field0_0x0 << 7);
  *(undefined8 *)in_RDX = local_res10;
  return (TIntPoint<int>)in_RDX;
}

// GetCardCaptureAtlasSizeInPages @ 144d7c920

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TIntPoint<int> __thiscall FLumenSceneData::GetCardCaptureAtlasSizeInPages(FLumenSceneData *this)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  code *pcVar2;
  int iVar3;
  TIntPoint<int> TVar4;
  uint uVar5;
  TIntPoint<int>_u_0 in_RDX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  int iStackX_c;
  
  uVar7 = (this->PhysicalAtlasSize).field0_0x0._s_0.X;
  uVar5 = (this->PhysicalAtlasSize).field0_0x0._s_0.Y;
  fVar10 = (float)GLumenSceneCardCaptureFactor;
  if (__real_44800000 <= (float)GLumenSceneCardCaptureFactor) {
    fVar10 = __real_44800000;
  }
  if (fVar10 <= __real_3f800000) {
    fVar10 = __real_3f800000;
  }
  fVar10 = __real_3f800000 / SQRT(fVar10);
  *(uint *)in_RDX = (int)(longlong)((float)(int)uVar7 * fVar10 + __real_3f000000) + 0x7fU >> 7;
  bVar9 = GLumenFastCameraMode != 0;
  *(uint *)((longlong)in_RDX + 4) =
       (int)(longlong)((float)(int)uVar5 * fVar10 + __real_3f000000) + 0x7fU >> 7;
  iVar3 = GLumenSceneCardMaxResolution;
  if (bVar9) {
    iVar3 = GLumenSceneCardMaxResolution / 2;
  }
  uVar6 = (int)((iVar3 + 0x7f >> 0x1f & 0x7fU) + iVar3 + 0x7f) >> 7;
  if (((uVar7 | uVar5) & 0x7f) != 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicalAtlasSize.X % Lumen::PhysicalPageSize == 0 && PhysicalAtlasSize.Y % Lumen::PhysicalPageSize == 0"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                       ,0x942,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
      return (TIntPoint<int>)TVar4.field0_0x0;
    }
  }
  TVar1 = (this->PhysicalAtlasSize).field0_0x0._s_0;
  iVar3 = TVar1.X;
  iStackX_c = TVar1.Y;
  iVar8 = (int)((iVar3 >> 0x1f & 0x7fU) + iVar3) >> 7;
  iVar3 = (int)((iStackX_c >> 0x1f & 0x7fU) + iStackX_c) >> 7;
  uVar7 = *(uint *)in_RDX;
  uVar5 = *(uint *)((longlong)in_RDX + 4);
  if ((int)(*(uint *)((longlong)in_RDX + 4) * *(uint *)in_RDX) < (int)(uVar6 * uVar6)) {
    *(ulonglong *)in_RDX = CONCAT44(uVar6,uVar6);
    uVar7 = uVar6;
    uVar5 = uVar6;
  }
  if (iVar3 * iVar8 < (int)(uVar5 * uVar7)) {
    *(ulonglong *)in_RDX = CONCAT44(iVar3,iVar8);
  }
  return (TIntPoint<int>)in_RDX;
}

// GetCardCaptureRefreshNumPages @ 144d7ca90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FLumenSceneData::GetCardCaptureRefreshNumPages(FLumenSceneData *this)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  pTVar2 = CVarLumenSceneCardCaptureRefreshFraction.Ref;
  bVar3 = IsInParallelRenderingThread();
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  fVar9 = pTVar2->ShadowedValue[1];
  if (__real_3f800000 <= pTVar2->ShadowedValue[1]) {
    fVar9 = __real_3f800000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar9 <= 0.0) {
    return 0;
  }
  iVar7 = 0;
  if (GLumenSurfaceCacheFreeze == 0) {
    if (GLumenSceneRecaptureLumenSceneEveryFrame == 0) {
      iVar5 = ((GLumenFastCameraMode != 0) + 1) * GLumenSceneCardCapturesPerFrame;
      iVar7 = 0;
      if (0 < iVar5) {
        iVar7 = iVar5;
      }
    }
    else {
      iVar7 = 0x7fffffff;
    }
  }
  iVar5 = 0;
  if (GLumenSurfaceCacheFreeze == 0) {
    if (GLumenSceneRecaptureLumenSceneEveryFrame == 0) {
      iVar6 = ((GLumenFastCameraMode != 0) + 1) * GLumenSceneCardCapturesPerFrame;
      iVar5 = 0;
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
    }
    else {
      iVar5 = 0x7fffffff;
    }
  }
  fVar8 = (float)iVar5 * fVar9;
  if ((float)iVar7 <= (float)iVar5 * fVar9) {
    fVar8 = (float)iVar7;
  }
  if (fVar8 <= __real_3f800000) {
    fVar8 = __real_3f800000;
  }
  return (uint)(longlong)fVar8;
}

// GetCardCaptureRefreshNumTexels @ 144d7cba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FLumenSceneData::GetCardCaptureRefreshNumTexels(FLumenSceneData *this)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  uint uVar4;
  TIntPoint<int> TVar5;
  float fVar6;
  int iStackX_14;
  
  pTVar2 = CVarLumenSceneCardCaptureRefreshFraction.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  fVar6 = pTVar2->ShadowedValue[1];
  if (__real_3f800000 <= pTVar2->ShadowedValue[1]) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (0.0 < fVar6) {
    TVar5 = GetCardCaptureAtlasSizeInPages(this);
    iStackX_14 = (int)((ulonglong)*(undefined8 *)TVar5.field0_0x0 >> 0x20);
    fVar6 = (float)(iStackX_14 * 0x80 * (int)*(undefined8 *)TVar5.field0_0x0 * 0x80) * fVar6;
    if (fVar6 <= __real_46800000) {
      fVar6 = __real_46800000;
    }
    return (uint)(longlong)fVar6;
  }
  return 0;
}

// GetSurfaceCacheUpdateFrameIndex @ 144d8ad90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FLumenSceneData::GetSurfaceCacheUpdateFrameIndex(FLumenSceneData *this)

{
  return this->SurfaceCacheUpdateFrameIndex;
}

// IncrementSurfaceCacheUpdateFrameIndex @ 144d8b530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLumenSceneData::IncrementSurfaceCacheUpdateFrameIndex(FLumenSceneData *this)

{
  uint *puVar1;
  
  if ((GLumenSurfaceCacheFreeze == 0) && (GLumenSurfaceCacheFreezeUpdateFrame == 0)) {
    puVar1 = &this->SurfaceCacheUpdateFrameIndex;
    *puVar1 = *puVar1 + 1;
    if (*puVar1 == 0) {
      this->SurfaceCacheUpdateFrameIndex = 1;
    }
  }
  return;
}

// MapSurfaceCachePage @ 144d8e2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::MapSurfaceCachePage
          (FLumenSceneData *this,FLumenSurfaceMipMap *param_1,int param_2,FRHIGPUMask param_3)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FBinaryHeap<unsigned_int,unsigned_int> *this_00;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TIntPoint<int>_u_0 *pTVar13;
  ulong64 uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint local_res18 [2];
  TIntPoint<int>_u_0 local_50;
  TIntPoint<int>_u_0_s_0 TStack_48;
  TIntPoint<int>_u_0 local_40;
  
  local_res18[0] = param_2;
  pTVar13 = (TIntPoint<int>_u_0 *)
            TSparseSpanArray<FLumenPageTableEntry>::operator[](&this->PageTable,param_2);
  if (((((TIntPoint<int> *)&(pTVar13->_s_0).X)->field0_0x0)._s_0.X < 0) || ((pTVar13->_s_0).Y < 0))
  {
    local_40 = (TIntPoint<int>_u_0)0x0;
    local_50 = ___xmm_0000000000000000ffffffffffffffff;
    TStack_48 = _UNK_15076adc8;
    FLumenSurfaceCacheAllocator::Allocate
              (&this->SurfaceCacheAllocator,(FLumenPageTableEntry *)&pTVar13->_s_0,
               (FAllocation *)&local_50._s_0);
    *pTVar13 = local_50;
    pTVar13[1]._s_0 = TStack_48;
    pTVar13[2] = local_40;
    if ((-1 < (((TIntPoint<int> *)&(pTVar13->_s_0).X)->field0_0x0)._s_0.X) &&
       (-1 < (pTVar13->_s_0).Y)) {
      pTVar13[3]._s_0.X = local_res18[0];
      uVar16 = 0;
      *(ushort *)((longlong)pTVar13 + 0x1e) = (ushort)((ulonglong)TStack_48 >> 0x23);
      *(ushort *)((longlong)pTVar13 + 0x1c) = (ushort)((uint)TStack_48.X >> 3);
      *(ushort *)(pTVar13 + 4) = (ushort)param_1->ResLevelX;
      *(ushort *)((longlong)pTVar13 + 0x22) = (ushort)param_1->ResLevelY;
      if (GNumExplicitGPUsForRendering != 0) {
        do {
          uVar19 = local_res18[0];
          uVar17 = 0;
          uVar20 = (ulonglong)local_res18[0];
          this_00 = this->LastCapturedPageHeap + uVar16;
          if ((param_3.GPUMask >> (uVar16 & 0x1f) & 1) != 0) {
            uVar17 = this->SurfaceCacheUpdateFrameIndex;
          }
          uVar18 = this->LastCapturedPageHeap[uVar16].HeapSize;
          if (this_00->HeapNum == uVar18) {
            uVar18 = uVar18 * 2;
            if (uVar18 < 0x20) {
              uVar18 = 0x20;
            }
            if (uVar18 == 0) {
              this_00->HeapNum = 0;
              this->LastCapturedPageHeap[uVar16].HeapSize = 0;
              operator_delete__(this->LastCapturedPageHeap[uVar16].Heap);
              this->LastCapturedPageHeap[uVar16].Heap = (uint *)0x0;
            }
            else {
              uVar14 = SUB168(ZEXT816(4) * ZEXT416(uVar18),0);
              if (SUB168(ZEXT816(4) * ZEXT416(uVar18),8) != 0) {
                uVar14 = 0xffffffffffffffff;
              }
              puVar15 = operator_new__(uVar14);
              uVar4 = this->LastCapturedPageHeap[uVar16].HeapSize;
              if (uVar4 != 0) {
                memcpy(puVar15,this->LastCapturedPageHeap[uVar16].Heap,(ulonglong)uVar4 << 2);
                operator_delete__(this->LastCapturedPageHeap[uVar16].Heap);
              }
              uVar4 = this_00->HeapNum;
              this->LastCapturedPageHeap[uVar16].Heap = puVar15;
              uVar10 = uVar18;
              if (uVar4 < uVar18) {
                uVar10 = this_00->HeapNum;
              }
              this_00->HeapNum = uVar10;
              this->LastCapturedPageHeap[uVar16].HeapSize = uVar18;
            }
          }
          if (this->LastCapturedPageHeap[uVar16].IndexSize <= uVar19) {
            iVar12 = 1;
            if (uVar19 + 1 != 0) {
              iVar12 = uVar19 + 1;
            }
            uVar3 = (ulonglong)(iVar12 - 1) * 2 + 1;
            lVar7 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar18 = 1 << ((byte)lVar7 & 0x1f);
            if (uVar18 < 0x20) {
              uVar18 = 0x20;
            }
            FBinaryHeap<unsigned_int,unsigned_int>::ResizeIndexes(this_00,uVar18);
          }
          uVar18 = this_00->HeapNum;
          this_00->HeapNum = uVar18 + 1;
          this->LastCapturedPageHeap[uVar16].Heap[uVar18] = uVar19;
          this->LastCapturedPageHeap[uVar16].Keys[uVar20] = uVar17;
          this->LastCapturedPageHeap[uVar16].HeapIndexes[uVar20] = uVar18;
          uVar17 = this->LastCapturedPageHeap[uVar16].Heap[uVar18];
          uVar19 = uVar18;
          if (uVar18 != 0) {
            do {
              puVar15 = this->LastCapturedPageHeap[uVar16].Keys;
              uVar4 = uVar19 - 1;
              puVar5 = this->LastCapturedPageHeap[uVar16].Heap;
              uVar11 = uVar4 >> 1;
              uVar10 = puVar5[uVar11];
              if (puVar15[uVar10] <= puVar15[uVar17]) break;
              puVar5[uVar19] = uVar10;
              this->LastCapturedPageHeap[uVar16].HeapIndexes
              [this->LastCapturedPageHeap[uVar16].Heap[uVar19]] = uVar19;
              uVar19 = uVar11;
            } while (uVar4 >> 1 != 0);
            if (uVar19 != uVar18) {
              this->LastCapturedPageHeap[uVar16].Heap[uVar19] = uVar17;
              this->LastCapturedPageHeap[uVar16].HeapIndexes
              [this->LastCapturedPageHeap[uVar16].Heap[uVar19]] = uVar19;
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < GNumExplicitGPUsForRendering);
      }
      if (param_1->bLocked == false) {
        FBinaryHeap<unsigned_int,unsigned_int>::Add
                  (&this->UnlockedAllocationHeap,(this->SurfaceCacheFeedback).FrameIndex,
                   local_res18[0]);
      }
    }
    pTVar2 = &this->PageTableIndicesToUpdateInBuffer;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_res18) &&
        ((FScriptContainerElement *)local_res18 <
         pFVar6 + (longlong)(this->PageTableIndicesToUpdateInBuffer).ArrayMax * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar12 = (this->PageTableIndicesToUpdateInBuffer).ArrayNum;
    piVar1 = &(this->PageTableIndicesToUpdateInBuffer).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PageTableIndicesToUpdateInBuffer).ArrayNum = iVar12 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_res18[0];
  }
  return;
}

// ProcessLumenSurfaceCacheRequests @ 144d8ed10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144d8f60b) */
/* WARNING: Removing unreachable block (ram,0x000144d8ff51) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FLumenSceneData::ProcessLumenSurfaceCacheRequests
          (FLumenSceneData *this,FViewInfo *param_1,float param_2,int param_3,
          FLumenCardRenderer *param_4,FRHIGPUMask param_5,
          TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_6)

{
  int *piVar1;
  FLumenSurfaceCacheAllocator *pFVar2;
  FUniqueIndexList *pFVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  TAtomic<FMinimalName> TVar8;
  FCardPageRenderData *pFVar9;
  uint *puVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  FVirtualPageIndex FVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  TIntPoint<int>_u_0_s_0 TVar17;
  TIntPoint<int>_u_0 TVar18;
  TConsoleVariableData<float> *pTVar19;
  TConsoleVariableData<int> *pTVar20;
  FLumenSceneData *pFVar21;
  FViewInfo *pFVar22;
  FVirtualPageIndex *pFVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  TStatId TVar32;
  TIntPoint<int> TVar33;
  FLumenCardSharingInfo *pFVar34;
  FLumenSurfaceMipMap *pFVar35;
  FLumenPageTableEntry *pFVar36;
  FCardPageRenderData *pFVar37;
  longlong lVar38;
  FName *pFVar39;
  FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_114_::FStat_SceneCardCaptureInvalidation>
  FVar40;
  ulonglong uVar41;
  FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_127_::FStat_SceneCardCaptureRefresh>
  FVar42;
  FBinaryHeap<unsigned_int,unsigned_int> *pFVar43;
  char cVar44;
  uint uVar45;
  FNoopStruct FVar46;
  int iVar47;
  FName FVar48;
  FLumenCard *pFVar49;
  FName FVar50;
  ForElementType<unsigned_int> FVar51;
  uint uVar52;
  ulonglong uVar53;
  FLumenSceneData *this_00;
  ForElementType<unsigned_int> FVar54;
  FRHIGPUMask FVar55;
  FLumenCardRenderer *pFVar56;
  ForElementType<int> FVar57;
  float fVar58;
  float fVar59;
  undefined1 auStackY_1878 [32];
  FNoopStruct local_1818;
  FNoopStruct local_1815 [5];
  FName local_1810;
  int local_1808;
  FLumenSceneData *local_1800;
  uint local_17f8;
  FLumenCardRenderer *local_17f0;
  undefined1 local_17e8 [8];
  FName local_17e0;
  uint local_17d8 [2];
  uint local_17d0;
  uint local_17c8 [2];
  uint local_17c0 [2];
  ForElementType<FVirtualPageIndex> local_17b8;
  int local_17b0;
  int iStack_17ac;
  FName local_17a8;
  FVirtualPageIndex local_17a0;
  TSparseUniqueList<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_1798;
  FName local_1758;
  FViewInfo *local_1750;
  FColor_u_0 local_1748 [2];
  FLumenPageTableEntry *local_1740;
  FColor_u_0 local_1738;
  FColor_u_0 local_1734;
  FLumenPageTableEntry *local_1730;
  FLumenCard *local_1728;
  FScriptContainerElement *local_1720;
  FVirtualPageIndex *local_1718;
  FName local_1710;
  FName local_1708;
  FName local_1700;
  FName local_16f8;
  FName local_16e8;
  FName local_16d8;
  TIntPoint<int>_u_0 local_16c8;
  TIntPoint<int>_u_0 TStack_16c0;
  TIntPoint<int>_u_0 local_16b8;
  TIntPoint<int>_u_0 local_16b0;
  TIntPoint<int>_u_0 TStack_16a8;
  TIntPoint<int>_u_0 local_16a0;
  uint local_1698;
  undefined4 local_1694;
  uint local_1690;
  uint local_168c;
  uint local_1688;
  undefined4 local_1684;
  uint local_1680;
  uint local_167c;
  TIntRect<int>_u_0 local_1678;
  TIntRect<int>_u_0 local_1668;
  TIntRect<int>_u_0 local_1658;
  TIntRect<int>_u_0 local_1648;
  undefined8 local_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  FName local_1618 [3];
  FName local_1600;
  FName local_15f8;
  FName local_15f0;
  FName local_15e8 [2];
  TVector4<float>_u_0 local_15d8;
  TVector4<float>_u_0 local_15c8;
  FLumenMipMapDesc local_15b8;
  FLumenSurfaceCacheAllocator local_1598;
  FCardPageRenderData local_1498;
  FCardPageRenderData local_a88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1878;
  local_17f0 = param_4;
  local_1730 = (FLumenPageTableEntry *)param_6;
  local_1808 = param_3;
  local_1800 = this;
  local_1750 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_ProcessLumenSurfaceCacheRequests ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_2_::FStat_ProcessLumenSurfaceCacheRequests>
         )0x0) {
      pFVar39 = ::FName::FName(local_1618,"ProcessLumenSurfaceCacheRequests");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_ProcessLumenSurfaceCacheRequests,*pFVar39,
                 L"ProcessLumenSurfaceCacheRequests","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  TVar32 = FThreadSafeStaticStatInner<`FLumenSceneData::ProcessLumenSurfaceCacheRequests'::__l2::FStat_ProcessLumenSurfaceCacheRequests,1>
           ::GetStatId(&StatPtr_ProcessLumenSurfaceCacheRequests);
  bVar14 = false;
  bVar15 = false;
  local_16f8.ComparisonIndex.Value = 0;
  local_16f8.Number = 0;
  bVar24 = false;
  bVar25 = false;
  TVar8 = (TVar32.StatIdPtr)->Name;
  FVar48 = *(FName *)TVar8;
  if ((FVar48.ComparisonIndex.Value.Value != 0) || (FVar48.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1748[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1748[0]._s_0,(char *)*(FName *)((longlong)TVar8 + 0x10));
      bVar14 = false;
      bVar15 = true;
      bVar24 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1700.ComparisonIndex.Value = FVar48.ComparisonIndex.Value.Value;
        local_1700.Number = FVar48.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1700,(wchar_t *)*(FName *)((longlong)TVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                   ,0x374);
        bVar14 = true;
        bVar15 = true;
        bVar24 = true;
        bVar25 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_17a8 = FVar48;
      local_1758 = FVar48;
      FThreadStats::AddMessage(FVar48,CycleScopeStart);
      bVar24 = true;
      goto LAB_144d8ee99;
    }
  }
  bVar15 = bVar25;
  bVar14 = bVar24;
  bVar24 = false;
  local_1758 = local_16f8;
LAB_144d8ee99:
  local_1598.PageAtlasSizeInPages.field0_0x0._s_0 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  local_1798.Set.Table.CurrentData.Keys = (int *)0x0;
  local_1798.Set.Table.CurrentData.Values = (FNoopStruct *)0x0;
  local_17b8.Data = (FVirtualPageIndex *)0x0;
  local_17b0 = 0;
  iStack_17ac = 0;
  local_1798.Array.AllocatorInstance.Data = (int *)0x0;
  local_1798.Array.ArrayNum = 0;
  local_1798.Array.ArrayMax = 0;
  local_1798.Set.Table.CurrentData._0_8_ =
       (ulonglong)(uint)local_1798.Set.Table.CurrentData._4_4_ << 0x20;
  local_1798.Set.Table.CurrentData.Distances = (schar *)0x0;
  local_1798.Set.Table.NumSlotsMinusOne = 0;
  local_1798.Set.Table.MaxLookups = '\0';
  local_1798.Set.Table.NumElements = 0;
  local_1598.PhysicalPageList.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1598.PhysicalPageList.NumBits = 0;
  local_1598.PhysicalPageList.MaxBits = 0x400;
  local_1598.PhysicalPageFreeCount = 0;
  local_1598.PageBins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1598.PageBins.ArrayNum = 0;
  local_1598.PageBins.ArrayMax = 0;
  local_1598.bInitPageBinLookup = true;
  TVar33 = GetCardCaptureAtlasSizeInPages(this);
  FLumenSurfaceCacheAllocator::Init(&local_1598,(TIntPoint<int> *)TVar33.field0_0x0);
  TVar18 = _UNK_15076adc8;
  TVar17 = ___xmm_0000000000000000ffffffffffffffff;
  iVar47 = param_6->ArrayNum;
  local_17f8 = 0;
  if (0 < iVar47) {
    local_1810.ComparisonIndex.Value = 0;
    local_1810.Number = 0;
    FVar46 = local_1818;
LAB_144d8ef60:
    uVar52 = local_17f8;
    FVar48 = local_1810;
    uVar29 = 0;
    if ((int)local_17f8 < iVar47) {
      uVar29 = ~local_17f8 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    FVar50 = *(FName *)(((FLumenPageTableEntry *)param_6)->PhysicalPageCoord).field0_0x0.XY;
    uVar29 = *(uint *)((longlong)FVar50 + (longlong)FVar48 * 0xc);
    local_17e0 = FVar50;
    if (*(short *)((longlong)FVar50 + 6 + (longlong)FVar48 * 0xc) == -1) {
      uVar45 = 0;
      if ((int)uVar29 < (this->Cards).Elements.ArrayNum) {
        uVar45 = ~uVar29 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar7 = *(ushort *)((longlong)local_17e0 + 4 + (longlong)FVar48 * 0xc);
      uVar45 = (uint)uVar7;
      pFVar49 = (FLumenCard *)
                ((this->Cards).Elements.AllocatorInstance.Data + (longlong)(int)uVar29 * 400);
      local_1728 = pFVar49;
      if (pFVar49->DesiredLockedResLevel == uVar7) goto LAB_144d8f99a;
      pFVar2 = &this->SurfaceCacheAllocator;
      bVar27 = true;
      bVar25 = FLumenSurfaceCacheAllocator::IsSpaceAvailable(pFVar2,pFVar49,uVar45 & 0xff,false);
      while (!bVar25) {
        bVar25 = EvictOldestAllocation(local_1800,2,&local_1798);
        if (!bVar25) {
          bVar27 = false;
          goto LAB_144d8f0a1;
        }
        bVar25 = FLumenSurfaceCacheAllocator::IsSpaceAvailable(pFVar2,pFVar49,uVar45 & 0xff,false);
      }
      goto LAB_144d8f0c5;
    }
    lVar38 = 0x38;
    if ((this->Cards).SpanAllocator.bGrowOnly == false) {
      lVar38 = 0x34;
    }
    if ((int)uVar29 <
        *(int *)((this->Cards).AllocatedElementsBitArray.AllocatorInstance.InlineData +
                lVar38 + -0x10)) {
      if ((((int)uVar29 < 0) || ((this->Cards).AllocatedElementsBitArray.NumBits <= (int)uVar29)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar54 = (this->Cards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
      FVar51 = (ForElementType<unsigned_int>)&(this->Cards).AllocatedElementsBitArray;
      if (FVar54 != (ForElementType<unsigned_int>)0x0) {
        FVar51 = FVar54;
      }
      uVar45 = uVar29 & 0x1f;
      if ((int)uVar29 < 0) {
        uVar29 = uVar29 + 0x1f;
      }
      uVar52 = local_17f8;
      if ((*(uint *)((longlong)FVar51 + (longlong)((int)uVar29 >> 5) * 4) >> uVar45 & 1) != 0) {
        uVar29 = *(uint *)((longlong)FVar50 + (longlong)FVar48 * 0xc);
        uVar52 = 0;
        if ((int)uVar29 < (this->Cards).Elements.ArrayNum) {
          uVar52 = ~uVar29 >> 0x1f;
        }
        if ((uVar52 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar11 = (this->Cards).Elements.AllocatorInstance.Data;
        uVar52 = local_17f8;
        if ((pFVar11[(longlong)(int)uVar29 * 400 + 0xf4] != (FScriptContainerElement)0x0) &&
           (uVar7 = *(ushort *)((longlong)FVar50 + 4 + (longlong)FVar48 * 0xc),
           (byte)pFVar11[(longlong)(int)uVar29 * 400 + 0xf8] < uVar7)) {
          local_17a0._s_1.CardIndex = *(int *)((longlong)FVar50 + (longlong)FVar48 * 0xc);
          local_17a0._s_1.LocalPageIndex =
               *(ushort *)((longlong)FVar50 + 6 + (longlong)FVar48 * 0xc);
          local_17a0._s_1.ResLevel = uVar7;
          if ((local_17b8.Data <= &local_17a0) &&
             ((&local_17a0 < local_17b8.Data + iStack_17ac &&
              (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar25)))) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (local_17b0 == iStack_17ac) {
            local_17b0 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVirtualPageIndex>_>
                                   (0x808,&local_17b8,&iStack_17ac);
          }
          lVar38 = (longlong)local_17b0;
          local_17b0 = local_17b0 + 1;
          FVar13._s_1.ResLevel = local_17a0._s_1.ResLevel;
          FVar13._s_1.CardIndex = local_17a0._s_1.CardIndex;
          FVar13._s_1.LocalPageIndex = local_17a0._s_1.LocalPageIndex;
          local_17b8.Data[lVar38] = FVar13;
          uVar52 = local_17f8;
        }
      }
    }
    goto LAB_144d8f99a;
  }
LAB_144d8f9d9:
  iVar47 = local_17b0;
  FVar48 = (FName)((longlong)local_17b8.Data + 4);
  local_1718 = local_17b8.Data + local_17b0;
  FVar46 = local_1815[0];
  while( true ) {
    pFVar23 = local_1718;
    local_1810 = FVar48;
    if (local_17b0 != iVar47) {
      local_1815[0] = (FNoopStruct)0x0;
      `TCheckedPointerIterator<FVirtualPageIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1815);
    }
    pFVar21 = local_1800;
    if ((FVirtualPageIndex *)((longlong)FVar48 + -4) == pFVar23) break;
    uVar52 = (((FVirtualPageIndex *)((longlong)FVar48 + -4))->_s_1).CardIndex;
    uVar29 = 0;
    if ((int)uVar52 < (local_1800->Cards).Elements.ArrayNum) {
      uVar29 = ~uVar52 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar49 = (FLumenCard *)
              ((local_1800->Cards).Elements.AllocatorInstance.Data + (longlong)(int)uVar52 * 400);
    if ((ushort)pFVar49->MinAllocatedResLevel < *(ushort *)FVar48) {
      local_1818 = (FNoopStruct)0x1;
      pFVar2 = &local_1800->SurfaceCacheAllocator;
      bVar25 = FLumenSurfaceCacheAllocator::IsSpaceAvailable
                         (pFVar2,pFVar49,(uint)*(ushort *)FVar48,true);
      while (!bVar25) {
        uVar52 = Lumen::GetFeedbackBufferTileSize();
        uVar29 = Lumen::GetFeedbackBufferTileSize();
        bVar25 = EvictOldestAllocation(local_1800,uVar52 * uVar29,&local_1798);
        if (!bVar25) {
          local_1818 = (FNoopStruct)0x0;
          break;
        }
        bVar25 = FLumenSurfaceCacheAllocator::IsSpaceAvailable
                           (pFVar2,pFVar49,(uint)*(ushort *)FVar48,true);
      }
      bVar25 = FLumenSurfaceCacheAllocator::IsSpaceAvailable
                         (&local_1598,pFVar49,(uint)*(ushort *)FVar48,true);
      uVar52 = pFVar49->MeshCardsIndex;
      uVar29 = 0;
      if ((int)uVar52 < (local_1800->MeshCards).Elements.ArrayNum) {
        uVar29 = ~uVar52 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_1728 = (FLumenCard *)((longlong)(int)uVar52 * 400);
      local_1720 = (local_1800->MeshCards).Elements.AllocatorInstance.Data;
      iVar30 = *(int *)((longlong)&local_1728->SurfaceMipMaps[6].PageTableSpanOffset +
                       (longlong)local_1720);
      bVar27 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::IsAllocated
                         (&local_1800->PrimitiveGroups,iVar30);
      if ((!bVar27) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsAllocated(ElementIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                              ,0x18a,L""), bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar29 = (int)(iVar30 + (iVar30 >> 0x1f & 0x7fffU)) >> 0xf;
      uVar52 = 0;
      if ((int)uVar29 < (local_1800->PrimitiveGroups).ElementChunks.ArrayNum) {
        uVar52 = ~uVar29 >> 0x1f;
      }
      if ((uVar52 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar21 = local_1800;
      FVar48 = local_1810;
      if (((bVar25 & (byte)local_1818) == 0) ||
         (bVar25 = UpdateStaticMeshes((FLumenPrimitiveGroup *)
                                      (*(longlong *)
                                        ((local_1800->PrimitiveGroups).ElementChunks.
                                         AllocatorInstance.Data + (longlong)(int)uVar29 * 8) +
                                      (longlong)(int)(iVar30 + uVar29 * -0x8000) * 0x40),local_17f0)
         , FVar48 = local_1810, !bVar25)) goto LAB_144d9011f;
      bVar5 = pFVar49->MaxAllocatedResLevel;
      bVar6 = pFVar49->MinAllocatedResLevel;
      ReallocVirtualSurface
                (pFVar21,pFVar49,((FVirtualPageIndex_s_1 *)((longlong)local_1810 + -4))->CardIndex,
                 (uint)*(ushort *)local_1810,false);
      uVar7 = *(ushort *)FVar48;
      uVar53 = (ulonglong)uVar7;
      if (((uVar7 < 3) || (8 < uVar53 - 3)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                              ,0x158,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar52 = (uint)*(ushort *)((longlong)FVar48 + 2) +
               pFVar49->SurfaceMipMaps[uVar53 - 3].PageTableSpanOffset;
      local_1730 = TSparseSpanArray<FLumenPageTableEntry>::operator[](&local_1800->PageTable,uVar52)
      ;
      piVar1 = &(local_1730->PhysicalPageCoord).field0_0x0._s_0.Y;
      if ((-1 < (local_1730->PhysicalPageCoord).field0_0x0._s_0.X) &&
         (FVar48 = local_1810, -1 < *piVar1)) goto LAB_144d9011f;
      MapSurfaceCachePage(local_1800,pFVar49->SurfaceMipMaps + (uVar53 - 3),uVar52,param_5);
      pFVar36 = local_1730;
      if ((((local_1730->PhysicalPageCoord).field0_0x0._s_0.X < 0) || (*piVar1 < 0)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("PageTableEntry.IsMapped()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                              ,0x436,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_16a0 = (TIntPoint<int>_u_0)0x0;
      local_16b0._s_0 = TVar17;
      TStack_16a8 = TVar18;
      FLumenSurfaceCacheAllocator::Allocate(&local_1598,pFVar36,(FAllocation *)&local_16b0._s_0);
      if ((local_16b0._s_0.X < 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("CardCaptureAllocation.PhysicalPageCoord.X >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                              ,0x43b,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_1658._s_0.Min.field0_0x0 =
           (TIntPoint<int>)(pFVar36->PhysicalAtlasRect).field0_0x0._s_0.Min.field0_0x0;
      local_15c8._0_8_ = *(undefined8 *)&(pFVar36->CardUVRect).field0_0x0;
      local_15c8._8_8_ = *(undefined8 *)((longlong)&(pFVar36->CardUVRect).field0_0x0 + 8);
      local_1658._s_0.Max.field0_0x0 =
           (TIntPoint<int>)(pFVar36->PhysicalAtlasRect).field0_0x0._s_0.Max.field0_0x0;
      local_1648._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TStack_16a8;
      local_1648._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_16a0;
      pFVar37 = FCardPageRenderData::FCardPageRenderData
                          (&local_a88,local_1750,pFVar49,(TVector4<float> *)&local_15c8._s_0,
                           (TIntRect<int> *)&local_1648._s_0,(TIntRect<int> *)&local_1658._s_0,
                           *(int *)((longlong)&local_1728->SurfaceMipMaps[6].PageTableSpanOffset +
                                   (longlong)local_1720),
                           ((FVirtualPageIndex_s_1 *)((longlong)local_1810 + -4))->CardIndex,uVar52,
                           bVar6 <= bVar5,false,-1);
      pFVar56 = local_17f0;
      pFVar9 = (local_17f0->CardPagesToRender).AllocatorInstance.Data;
      if (((pFVar9 <= pFVar37) && (pFVar37 < pFVar9 + (local_17f0->CardPagesToRender).ArrayMax)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar30 = (pFVar56->CardPagesToRender).ArrayNum;
      piVar1 = &(pFVar56->CardPagesToRender).ArrayMax;
      if (iVar30 == *piVar1) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FCardPageRenderData>_>
                           (0xa10,0x10,(ForElementType<FCardPageRenderData> *)pFVar56,piVar1);
      }
      (pFVar56->CardPagesToRender).ArrayNum = iVar30 + 1;
      FCardPageRenderData::FCardPageRenderData
                ((pFVar56->CardPagesToRender).AllocatorInstance.Data + iVar30,pFVar37);
      if (local_a88.InstanceRuns.AllocatorInstance.Data != (uint *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_a88.InstanceRuns.AllocatorInstance.Data);
      }
      if (local_a88.NaniteShadingBins.AllocatorInstance.Data != (FNaniteShadingBin *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_a88.NaniteShadingBins.AllocatorInstance.Data);
      }
      if (local_a88.NaniteInstanceIds.AllocatorInstance.Data != (uint *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_a88.NaniteInstanceIds.AllocatorInstance.Data);
      }
      pFVar21 = local_1800;
      local_1680 = 0;
      if (param_5.GPUMask != 0) {
        for (; (param_5.GPUMask >> local_1680 & 1) == 0; local_1680 = local_1680 + 1) {
        }
      }
      uVar53 = 0x20;
      if (param_5.GPUMask != 0) {
        uVar53 = (ulonglong)local_1680;
      }
      local_1684 = 0;
      FVar55.GPUMask = param_5.GPUMask;
      FVar48 = local_1810;
      while (local_1810 = FVar48, FVar55.GPUMask != 0) {
        uVar29 = pFVar21->SurfaceCacheUpdateFrameIndex;
        pFVar43 = pFVar21->LastCapturedPageHeap + uVar53;
        pFVar21->LastCapturedPageHeap[uVar53].Keys[uVar52] = uVar29;
        uVar45 = pFVar43->HeapIndexes[uVar52];
        if ((uVar45 == 0) || (pFVar43->Keys[pFVar43->Heap[uVar45 - 1 >> 1]] <= uVar29)) {
          FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(pFVar43,uVar45);
        }
        else {
          FBinaryHeap<unsigned_int,unsigned_int>::UpHeap(pFVar43,uVar45);
        }
        FVar55.GPUMask = FVar55.GPUMask & ~(1 << ((byte)uVar53 & 0x1f));
        local_1688 = 0;
        if (FVar55.GPUMask != 0) {
          for (; (FVar55.GPUMask >> local_1688 & 1) == 0; local_1688 = local_1688 + 1) {
          }
        }
        uVar29 = 0x20;
        if (FVar55.GPUMask != 0) {
          uVar29 = local_1688;
        }
        uVar53 = (ulonglong)uVar29;
        FVar46 = local_1815[0];
        FVar48 = local_1810;
      }
      cVar44 = '\0';
      local_17f0->NumCardTexelsToCapture =
           local_17f0->NumCardTexelsToCapture +
           (*(int *)((longlong)&(pFVar36->PhysicalAtlasRect).field0_0x0 + 0xc) -
           *(int *)((longlong)&(pFVar36->PhysicalAtlasRect).field0_0x0 + 4)) *
           (*(int *)((longlong)&(pFVar36->PhysicalAtlasRect).field0_0x0 + 8) -
           *(int *)&(pFVar36->PhysicalAtlasRect).field0_0x0);
      local_17c0[0] = ((FVirtualPageIndex_s_1 *)((longlong)FVar48 + -4))->CardIndex;
      uVar52 = local_1798.Set.Table.NumSlotsMinusOne & local_17c0[0];
      uVar53 = (ulonglong)uVar52;
      if ((local_1798.Set.Table.CurrentData.Distances != (schar *)0x0) &&
         (-1 < local_1798.Set.Table.CurrentData.Distances[uVar53])) {
        do {
          if (local_17c0[0] == local_1798.Set.Table.CurrentData.Keys[uVar53]) goto LAB_144d9011f;
          uVar52 = (int)uVar53 + 1;
          uVar53 = (ulonglong)uVar52;
          cVar44 = cVar44 + '\x01';
        } while (cVar44 <= local_1798.Set.Table.CurrentData.Distances[uVar53]);
      }
      Experimental::TSherwoodHashTable_Private::
      TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>::Add
                (&local_1798.Set.Table,cVar44,(FData *)&local_1798.Set,uVar52,local_17c0[0],
                 local_17c0[0],FVar46);
      if (((local_1798.Array.AllocatorInstance.Data <= local_17c0) &&
          (local_17c0 < local_1798.Array.AllocatorInstance.Data + local_1798.Array.ArrayMax)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar30 = local_1798.Array.ArrayNum;
      if (local_1798.Array.ArrayNum == local_1798.Array.ArrayMax) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                           (0x404,(ForElementType<int> *)&local_1798,&local_1798.Array.ArrayMax);
      }
      FVar48 = (FName)((longlong)FVar48 + 8);
      local_1798.Array.ArrayNum = iVar30 + 1;
      local_1798.Array.AllocatorInstance.Data[iVar30] = local_17c0[0];
    }
    else {
LAB_144d9011f:
      FVar48 = (FName)((longlong)FVar48 + 8);
    }
  }
  FlushPendingCardSharingInfos(local_1800);
  uVar53 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar53 * 8) + 0x9d4c) < ::_TSS4)
     && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    if (StatPtr_SceneCardCaptureInvalidation ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_114_::FStat_SceneCardCaptureInvalidation>
         )0x0) {
      pFVar39 = ::FName::FName(&local_1600,"SceneCardCaptureInvalidation");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SceneCardCaptureInvalidation,*pFVar39,
                 L"SceneCardCaptureInvalidation","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS4);
    }
    else {
      _Init_thread_footer(&::_TSS4);
    }
  }
  FVar40 = StatPtr_SceneCardCaptureInvalidation;
  if (StatPtr_SceneCardCaptureInvalidation ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_114_::FStat_SceneCardCaptureInvalidation>
       )0x0) {
    pFVar39 = ::FName::FName(&local_15f8,"SceneCardCaptureInvalidation");
    FVar40 = (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_114_::FStat_SceneCardCaptureInvalidation>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_SceneCardCaptureInvalidation,
                          *pFVar39,L"SceneCardCaptureInvalidation","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar48 = *(FName *)FVar40;
  local_16e8.ComparisonIndex.Value = 0;
  local_16e8.Number = 0;
  bVar25 = false;
  bVar27 = false;
  if ((FVar48.ComparisonIndex.Value.Value == 0) && (FVar48.Number == 0)) {
LAB_144d9027b:
    bVar26 = false;
    FVar48 = local_16e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1738.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1738._s_0,(char *)*(FName *)((longlong)FVar40 + 0x10));
      bVar25 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1710.ComparisonIndex.Value = FVar48.ComparisonIndex.Value.Value;
        local_1710.Number = FVar48.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1710,(wchar_t *)*(FName *)((longlong)FVar40 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                   ,0x45a);
        bVar25 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144d9027b;
    local_17e0 = FVar48;
    FThreadStats::AddMessage(FVar48,CycleScopeStart);
    bVar26 = true;
  }
  pTVar20 = CVarLumenSceneCardCaptureEnableInvalidation.Ref;
  bVar28 = IsInParallelRenderingThread();
  if ((!bVar28) &&
     (bVar28 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar28)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((pTVar20->ShadowedValue[1] == 0) && (uVar41 = 0, GNumExplicitGPUsForRendering != 0)) {
    do {
      uVar52 = pFVar21->PagesToRecaptureHeap[uVar41].IndexSize;
      pFVar21->PagesToRecaptureHeap[uVar41].HeapNum = 0;
      memset(pFVar21->PagesToRecaptureHeap[uVar41].HeapIndexes,0xff,(ulonglong)uVar52 << 2);
      uVar52 = (int)uVar41 + 1;
      uVar41 = (ulonglong)uVar52;
    } while (uVar52 < GNumExplicitGPUsForRendering);
  }
  pFVar22 = local_1750;
  pFVar56 = local_17f0;
  local_168c = 0;
  if (param_5.GPUMask != 0) {
    for (; (param_5.GPUMask >> local_168c & 1) == 0; local_168c = local_168c + 1) {
    }
  }
  uVar41 = 0x20;
  if (param_5.GPUMask != 0) {
    uVar41 = (ulonglong)local_168c;
  }
  pFVar43 = pFVar21->PagesToRecaptureHeap + uVar41;
  if (pFVar21->PagesToRecaptureHeap[uVar41].HeapNum != 0) {
    do {
      bVar28 = RecaptureCardPage(pFVar21,pFVar22,pFVar56,&local_1598,param_5,*pFVar43->Heap);
      if (!bVar28) break;
      puVar10 = pFVar43->Heap;
      uVar52 = *puVar10;
      pFVar43->HeapNum = pFVar43->HeapNum - 1;
      *puVar10 = puVar10[pFVar43->HeapNum];
      pFVar43->HeapIndexes[*pFVar43->Heap] = 0;
      pFVar43->HeapIndexes[uVar52] = 0xffffffff;
      FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(pFVar43,0);
    } while (pFVar43->HeapNum != 0);
    uVar53 = (ulonglong)_tls_index;
  }
  if (bVar27) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar26) {
    FThreadStats::AddMessage(FVar48,CycleScopeEnd);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar53 * 8) + 0x9d4c) < ::_TSS5)
     && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    if (StatPtr_SceneCardCaptureRefresh ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_127_::FStat_SceneCardCaptureRefresh>
         )0x0) {
      pFVar39 = ::FName::FName(&local_15f0,"SceneCardCaptureRefresh");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SceneCardCaptureRefresh,*pFVar39,
                 L"SceneCardCaptureRefresh","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS5);
  }
  FVar42 = StatPtr_SceneCardCaptureRefresh;
  if (StatPtr_SceneCardCaptureRefresh ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_127_::FStat_SceneCardCaptureRefresh>
       )0x0) {
    pFVar39 = ::FName::FName(local_15e8,"SceneCardCaptureRefresh");
    FVar42 = (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::ProcessLumenSurfaceCacheRequests(FViewInfo_const_&,float,int,FLumenCardRenderer_&,FRHIGPUMask,TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&)_::_127_::FStat_SceneCardCaptureRefresh>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_SceneCardCaptureRefresh,*pFVar39,
                          L"SceneCardCaptureRefresh","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar48 = *(FName *)FVar42;
  bVar25 = false;
  bVar26 = false;
  local_16d8.ComparisonIndex.Value = 0;
  local_16d8.Number = 0;
  bVar27 = false;
  bVar28 = false;
  if ((FVar48.ComparisonIndex.Value.Value != 0) || (FVar48.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1734.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1734._s_0,(char *)*(FName *)((longlong)FVar42 + 0x10));
      bVar25 = false;
      bVar26 = true;
      bVar27 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1708.ComparisonIndex.Value = FVar48.ComparisonIndex.Value.Value;
        local_1708.Number = FVar48.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1708,(wchar_t *)*(FName *)((longlong)FVar42 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                   ,0x478);
        bVar25 = true;
        bVar26 = true;
        bVar27 = true;
        bVar28 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1810 = FVar48;
      local_17e0 = FVar48;
      FThreadStats::AddMessage(FVar48,CycleScopeStart);
      bVar27 = true;
      goto LAB_144d90547;
    }
  }
  bVar26 = bVar28;
  bVar25 = bVar27;
  bVar27 = false;
  local_1810 = local_16d8;
  FVar48 = local_16d8;
LAB_144d90547:
  pTVar19 = CVarLumenSceneCardCaptureRefreshFraction.Ref;
  bVar28 = IsInParallelRenderingThread();
  if ((!bVar28) &&
     (bVar28 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar28)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  fVar16 = __real_3f800000;
  fVar58 = pTVar19->ShadowedValue[1];
  if (__real_3f800000 <= pTVar19->ShadowedValue[1]) {
    fVar58 = __real_3f800000;
  }
  if (fVar58 <= 0.0) {
    fVar58 = 0.0;
  }
  if (fVar58 <= 0.0) {
    local_17e0 = (FName)0x0;
  }
  else {
    TVar33 = GetCardCaptureAtlasSizeInPages(pFVar21);
    local_17a8.Number = (uint)((ulonglong)*(undefined8 *)TVar33.field0_0x0 >> 0x20);
    local_17a8.Number = local_17a8.Number * 0x80;
    local_17a8.ComparisonIndex.Value = (int)*(undefined8 *)TVar33.field0_0x0 * 0x80;
    fVar58 = (float)(int)(local_17a8.Number * local_17a8.ComparisonIndex.Value) * fVar58;
    if (fVar58 <= __real_46800000) {
      fVar58 = __real_46800000;
    }
    local_17e0 = (FName)(longlong)fVar58;
  }
  pFVar56 = local_17f0;
  pTVar19 = CVarLumenSceneCardCaptureRefreshFraction.Ref;
  local_1808 = local_1808 - (local_17f0->CardPagesToRender).ArrayNum;
  bVar28 = IsInParallelRenderingThread();
  if ((!bVar28) &&
     (bVar28 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar28)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar21 = local_1800;
  fVar58 = pTVar19->ShadowedValue[1];
  if (fVar16 <= pTVar19->ShadowedValue[1]) {
    fVar58 = fVar16;
  }
  if (fVar58 <= 0.0) {
    fVar58 = 0.0;
  }
  iVar47 = 0;
  if (0.0 < fVar58) {
    if (GLumenSurfaceCacheFreeze == 0) {
      if (GLumenSceneRecaptureLumenSceneEveryFrame == 0) {
        iVar30 = ((GLumenFastCameraMode != 0) + 1) * GLumenSceneCardCapturesPerFrame;
        if (0 < iVar30) {
          iVar47 = iVar30;
        }
      }
      else {
        iVar47 = 0x7fffffff;
      }
    }
    iVar30 = 0;
    if (((GLumenSurfaceCacheFreeze == 0) &&
        (iVar30 = 0x7fffffff, GLumenSceneRecaptureLumenSceneEveryFrame == 0)) &&
       (iVar31 = ((GLumenFastCameraMode != 0) + 1) * GLumenSceneCardCapturesPerFrame, iVar30 = 0,
       0 < iVar31)) {
      iVar30 = iVar31;
    }
    fVar59 = (float)iVar30 * fVar58;
    if ((float)iVar47 <= (float)iVar30 * fVar58) {
      fVar59 = (float)iVar47;
    }
    if (fVar59 <= fVar16) {
      fVar59 = fVar16;
    }
    iVar47 = (int)(longlong)fVar59;
  }
  bVar28 = true;
  if (iVar47 < local_1808) {
    local_1808 = iVar47;
  }
  local_1690 = 0;
  if (param_5.GPUMask != 0) {
    for (; (param_5.GPUMask >> local_1690 & 1) == 0; local_1690 = local_1690 + 1) {
    }
  }
  uVar53 = 0x20;
  if (param_5.GPUMask != 0) {
    uVar53 = (ulonglong)local_1690;
  }
  uVar52 = local_1800->LastCapturedPageHeap[uVar53].HeapNum;
  this_00 = local_1800;
  FVar50 = local_17e0;
  while ((local_1800 = this_00, uVar52 != 0 && (FVar48 = local_1810, bVar28 != false))) {
    bVar28 = false;
    uVar52 = *pFVar21->LastCapturedPageHeap[uVar53].Heap;
    uVar29 = pFVar21->LastCapturedPageHeap[uVar53].Keys[uVar52];
    if (0 < (int)(pFVar21->SurfaceCacheUpdateFrameIndex - uVar29)) {
      if ((uVar29 != 0) || (GNumExplicitGPUsForRendering == 1)) {
        pFVar36 = TSparseSpanArray<FLumenPageTableEntry>::operator[](&pFVar21->PageTable,uVar52);
        if ((((pFVar36->PhysicalPageCoord).field0_0x0._s_0.X < 0) ||
            ((pFVar36->PhysicalPageCoord).field0_0x0._s_0.Y < 0)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("PageTableEntry.IsMapped()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                                ,0x494,L""), bVar28)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar56 = local_17f0;
        if ((-1 < (pFVar36->PhysicalPageCoord).field0_0x0._s_0.X) &&
           (-1 < (pFVar36->PhysicalPageCoord).field0_0x0._s_0.Y)) {
          uVar29 = pFVar36->CardIndex;
          uVar45 = 0;
          if ((int)uVar29 < (pFVar21->Cards).Elements.ArrayNum) {
            uVar45 = ~uVar29 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FLumenCard::GetMipMapDesc
                    ((FLumenCard *)
                     ((pFVar21->Cards).Elements.AllocatorInstance.Data + (longlong)(int)uVar29 * 400
                     ),(uint)pFVar36->ResLevel,&local_15b8);
          FVar50 = (FName)(ulonglong)
                          ((uint)SUB84(FVar50,0) -
                          local_15b8.PageResolution.field0_0x0._s_0.Y *
                          local_15b8.PageResolution.field0_0x0._s_0.X);
          local_1808 = local_1808 + -1;
          pFVar56 = local_17f0;
        }
      }
      bVar28 = false;
      if ((-1 < (int)SUB84(FVar50,0)) && (-1 < local_1808)) {
        bVar28 = RecaptureCardPage(pFVar21,local_1750,pFVar56,&local_1598,param_5,uVar52);
      }
    }
    uVar52 = pFVar21->LastCapturedPageHeap[uVar53].HeapNum;
    FVar48 = local_1810;
    this_00 = local_1800;
  }
  if (bVar26) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar27) {
    FThreadStats::AddMessage(FVar48,CycleScopeEnd);
  }
  if (GLumenSurfaceCacheFreeze == 0) {
    uVar52 = 0;
    if (0 < GSurfaceCacheNumFramesToKeepUnusedPages) {
      uVar52 = GSurfaceCacheNumFramesToKeepUnusedPages;
    }
    do {
      bVar25 = EvictOldestAllocation(this_00,uVar52,&local_1798);
    } while (bVar25);
  }
  iVar47 = local_1798.Array.ArrayNum;
  uVar53 = (ulonglong)local_1798.Array.ArrayNum;
  puVar10 = (uint *)(local_1798.Array.AllocatorInstance.Data + uVar53);
  FVar57.Data = local_1798.Array.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar53 != iVar47) {
      local_17e8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_17e8);
    }
    if ((uint *)FVar57.Data == puVar10) {
      DestructItems<FLumenSurfaceCacheAllocator::FPageBin,int>
                ((FPageBin *)local_1598.PageBins.AllocatorInstance.Data,local_1598.PageBins.ArrayNum
                );
      FVar48 = local_1758;
      if ((FPageBin *)local_1598.PageBins.AllocatorInstance.Data != (FPageBin *)0x0) {
        FMemory::Free(local_1598.PageBins.AllocatorInstance.Data);
      }
      if (local_1598.PhysicalPageList.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1598.PhysicalPageList.AllocatorInstance.SecondaryData);
      }
      if (local_1798.Set.Table.CurrentData.Distances != (schar *)0x0) {
        FMemory::Free(local_1798.Set.Table.CurrentData.Distances);
        FMemory::Free(local_1798.Set.Table.CurrentData.Keys);
        FMemory::Free(local_1798.Set.Table.CurrentData.Values);
      }
      local_1638 = 0;
      uStack_1620 = 0;
      local_1798.Set.Table.NumSlotsMinusOne = 0;
      local_1798.Set.Table.MaxLookups = '\0';
      local_1798.Set.Table.NumElements = 0;
      uStack_1630 = 0;
      uStack_1628 = 0;
      local_1798.Set.Table.CurrentData.AllocatedCount = 0;
      local_1798.Set.Table.CurrentData._4_4_ = 0;
      local_1798.Set.Table.CurrentData.Distances = (schar *)0x0;
      local_1798.Set.Table.CurrentData.Keys = (int *)0x0;
      local_1798.Set.Table.CurrentData.Values = (FNoopStruct *)0x0;
      if ((uint *)local_1798.Array.AllocatorInstance.Data != (uint *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                  (local_1798.Array.AllocatorInstance.Data);
      }
      if (local_17b8.Data != (FVirtualPageIndex *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_17b8.Data);
      }
      if (bVar15) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar24) {
        FThreadStats::AddMessage(FVar48,CycleScopeEnd);
      }
      return;
    }
    uVar52 = *FVar57.Data;
    uVar29 = 0;
    if ((int)uVar52 < (this_00->Cards).Elements.ArrayNum) {
      uVar29 = ~uVar52 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) break;
    UpdateCardMipMapHierarchy
              (this_00,(FLumenCard *)
                       ((this_00->Cards).Elements.AllocatorInstance.Data +
                       (longlong)(int)uVar52 * 400));
    pFVar3 = &this_00->CardIndicesToUpdateInBuffer;
    iVar30 = (this_00->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits;
    FVar54 = (ForElementType<unsigned_int>)
             &(this_00->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate;
    local_17d8[0] = uVar52;
    if ((iVar30 < (int)(uVar52 + 1)) &&
       (iVar30 = (uVar52 + 0x40 & 0xffffffc0) - iVar30, -1 < iVar30)) {
      iVar31 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)FVar54,iVar30);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                ((TBitArray<FDefaultBitArrayAllocator> *)FVar54,iVar31,iVar30,false);
    }
    uVar52 = local_17d8[0];
    if ((((int)local_17d8[0] < 0) ||
        ((this_00->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits <= (int)local_17d8[0])
        ) && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar25)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    FVar51 = (this_00->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
             SecondaryData;
    if (FVar51 != (ForElementType<unsigned_int>)0x0) {
      FVar54 = FVar51;
    }
    uVar29 = uVar52 & 0x1f;
    if ((int)uVar52 < 0) {
      uVar52 = uVar52 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar54 + (longlong)((int)uVar52 >> 5) * 4) >> uVar29 & 1) == 0) {
      pFVar11 = (pFVar3->Indices).AllocatorInstance.Data;
      if (((pFVar11 <= (FScriptContainerElement *)local_17d8) &&
          ((FScriptContainerElement *)local_17d8 <
           pFVar11 + (longlong)(this_00->CardIndicesToUpdateInBuffer).Indices.ArrayMax * 4)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar30 = (this_00->CardIndicesToUpdateInBuffer).Indices.ArrayNum;
      piVar1 = &(this_00->CardIndicesToUpdateInBuffer).Indices.ArrayMax;
      if (iVar30 == *piVar1) {
        iVar30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar3,piVar1);
      }
      uVar52 = local_17d8[0];
      (this_00->CardIndicesToUpdateInBuffer).Indices.ArrayNum = iVar30 + 1;
      *(uint *)((pFVar3->Indices).AllocatorInstance.Data + (longlong)iVar30 * 4) = local_17d8[0];
      if ((((int)local_17d8[0] < 0) ||
          ((this_00->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.NumBits <=
           (int)local_17d8[0])) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar25)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      FVar54 = (this_00->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate.AllocatorInstance.
               SecondaryData;
      FVar51 = (ForElementType<unsigned_int>)
               &(this_00->CardIndicesToUpdateInBuffer).IndicesMarkedToUpdate;
      if (FVar54 != (ForElementType<unsigned_int>)0x0) {
        FVar51 = FVar54;
      }
      uVar29 = uVar52;
      if ((int)uVar52 < 0) {
        uVar29 = uVar52 + 0x1f;
      }
      puVar4 = (uint *)((longlong)FVar51 + (longlong)((int)uVar29 >> 5) * 4);
      *puVar4 = *puVar4 | 1 << ((byte)uVar52 & 0x1f);
    }
    uVar53 = local_1798.Array._8_8_ & 0xffffffff;
    FVar57.Data = FVar57.Data + 1;
    this_00 = local_1800;
  }
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
  while( true ) {
    uVar45 = (uint)(byte)((byte)uVar45 - 1);
    bVar27 = FLumenSurfaceCacheAllocator::IsSpaceAvailable(pFVar2,pFVar49,uVar45,false);
    if (bVar27) break;
LAB_144d8f0a1:
    if ((byte)uVar45 < 4) break;
  }
LAB_144d8f0c5:
  local_17d0 = uVar45 & 0xff;
  bVar25 = FLumenSurfaceCacheAllocator::IsSpaceAvailable(&local_1598,pFVar49,local_17d0,false);
  uVar52 = pFVar49->MeshCardsIndex;
  uVar29 = 0;
  if ((int)uVar52 < (local_1800->MeshCards).Elements.ArrayNum) {
    uVar29 = ~uVar52 >> 0x1f;
  }
  if ((uVar29 == 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar26)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_1718 = (FVirtualPageIndex *)((longlong)(int)uVar52 * 400);
  local_1720 = (local_1800->MeshCards).Elements.AllocatorInstance.Data;
  iVar47 = *(int *)(local_1720 + (longlong)local_1718 + 0x148);
  bVar26 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::IsAllocated
                     (&local_1800->PrimitiveGroups,iVar47);
  if ((!bVar26) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsAllocated(ElementIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                          ,0x18a,L""), bVar26)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar29 = (int)(iVar47 + (iVar47 >> 0x1f & 0x7fffU)) >> 0xf;
  uVar52 = 0;
  if ((int)uVar29 < (local_1800->PrimitiveGroups).ElementChunks.ArrayNum) {
    uVar52 = ~uVar29 >> 0x1f;
  }
  if ((uVar52 == 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar26)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this = local_1800;
  uVar52 = local_17f8;
  if (((bVar25 & bVar27) != 0) &&
     (bVar25 = UpdateStaticMeshes((FLumenPrimitiveGroup *)
                                  (*(longlong *)
                                    ((local_1800->PrimitiveGroups).ElementChunks.AllocatorInstance.
                                     Data + (longlong)(int)uVar29 * 8) +
                                  (longlong)(int)(iVar47 + uVar29 * -0x8000) * 0x40),local_17f0),
     FVar48 = local_1810, uVar52 = local_17f8, bVar25)) {
    bVar5 = pFVar49->MinAllocatedResLevel;
    pFVar49->bVisible = true;
    pFVar49->DesiredLockedResLevel =
         *(uchar *)((longlong)local_17e0 + 4 + (longlong)local_1810 * 0xc);
    bVar6 = pFVar49->MaxAllocatedResLevel;
    if ((this->bAllowCardDownsampleFromSelf == false) || ((bVar6 < bVar5 || (bVar5 < (byte)uVar45)))
       ) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    FreeVirtualSurface(this,pFVar49,bVar5,bVar5);
    FreeVirtualSurface(this,pFVar49,pFVar49->MinAllocatedResLevel,(byte)uVar45 - 1);
    FVar50 = local_17e0;
    ReallocVirtualSurface
              (this,pFVar49,*(int *)((longlong)local_17e0 + (longlong)FVar48 * 0xc),local_17d0,true)
    ;
    local_17d0 = 0xffffffff;
    local_1818 = (FNoopStruct)0x0;
    if (bVar25) {
      local_17d0 = *(uint *)((longlong)FVar50 + (longlong)FVar48 * 0xc);
    }
    else {
      pFVar34 = FindMatchingCardForCopy
                          (this,&pFVar49->CardSharingId,(uint)pFVar49->MinAllocatedResLevel);
      if (pFVar34 != (FLumenCardSharingInfo *)0x0) {
        if ((pFVar34->MinAllocatedResLevel < (uint)pFVar49->MinAllocatedResLevel) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Card.MinAllocatedResLevel <= CardSharingInfo->MinAllocatedResLevel"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                                ,0x3c2,L""), bVar25)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_17d0 = pFVar34->CardIndex;
        local_1818 = (FNoopStruct)(pFVar49->bAxisXFlipped != pFVar34->bAxisXFlipped);
      }
    }
    pFVar35 = FLumenCard::GetMipMap(pFVar49,(uint)pFVar49->MinAllocatedResLevel);
    if ((uint)pFVar35->SizeInPagesY * (uint)pFVar35->SizeInPagesX != 0) {
      iVar47 = 0;
      do {
        uVar52 = pFVar35->PageTableSpanOffset + iVar47;
        pFVar36 = TSparseSpanArray<FLumenPageTableEntry>::operator[](&this->PageTable,uVar52);
        local_1740 = pFVar36;
        if (((pFVar36->PhysicalPageCoord).field0_0x0._s_0.X < 0) ||
           ((pFVar36->PhysicalPageCoord).field0_0x0._s_0.Y < 0)) {
          MapSurfaceCachePage(this,pFVar35,uVar52,param_5);
          if ((((pFVar36->PhysicalPageCoord).field0_0x0._s_0.X < 0) ||
              ((pFVar36->PhysicalPageCoord).field0_0x0._s_0.Y < 0)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PageTableEntry.IsMapped()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                                  ,0x3d1,L""), bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_16b8 = (TIntPoint<int>_u_0)0x0;
          local_16c8._s_0 = TVar17;
          TStack_16c0 = TVar18;
          FLumenSurfaceCacheAllocator::Allocate(&local_1598,pFVar36,(FAllocation *)&local_16c8._s_0)
          ;
          if ((local_16c8._s_0.X < 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CardCaptureAllocation.PhysicalPageCoord.X >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                                  ,0x3d6,L""), bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar29 = local_17d0;
          local_1678._s_0.Min.field0_0x0 =
               (TIntPoint<int>)(pFVar36->PhysicalAtlasRect).field0_0x0._s_0.Min.field0_0x0;
          local_15d8._0_8_ = *(undefined8 *)&(pFVar36->CardUVRect).field0_0x0;
          local_15d8._8_8_ = *(undefined8 *)((longlong)&(pFVar36->CardUVRect).field0_0x0 + 8);
          local_1678._s_0.Max.field0_0x0 =
               (TIntPoint<int>)(pFVar36->PhysicalAtlasRect).field0_0x0._s_0.Max.field0_0x0;
          local_1668._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TStack_16c0;
          local_1668._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_16b8;
          pFVar37 = FCardPageRenderData::FCardPageRenderData
                              (&local_1498,local_1750,local_1728,(TVector4<float> *)&local_15d8._s_0
                               ,(TIntRect<int> *)&local_1668._s_0,(TIntRect<int> *)&local_1678._s_0,
                               *(int *)(local_1720 + (longlong)local_1718 + 0x148),
                               *(int *)((longlong)local_17e0 + (longlong)local_1810 * 0xc),uVar52,
                               bVar5 <= bVar6,(bool)local_1818,local_17d0);
          pFVar9 = (local_17f0->CardPagesToRender).AllocatorInstance.Data;
          if (((pFVar9 <= pFVar37) && (pFVar37 < pFVar9 + (local_17f0->CardPagesToRender).ArrayMax))
             && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar25)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar30 = (local_17f0->CardPagesToRender).ArrayNum;
          piVar1 = &(local_17f0->CardPagesToRender).ArrayMax;
          if (iVar30 == *piVar1) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FCardPageRenderData>_>
                               (0xa10,0x10,(ForElementType<FCardPageRenderData> *)local_17f0,piVar1)
            ;
          }
          (local_17f0->CardPagesToRender).ArrayNum = iVar30 + 1;
          FCardPageRenderData::FCardPageRenderData
                    ((local_17f0->CardPagesToRender).AllocatorInstance.Data + iVar30,pFVar37);
          if (local_1498.InstanceRuns.AllocatorInstance.Data != (uint *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                      (local_1498.InstanceRuns.AllocatorInstance.Data);
          }
          if (local_1498.NaniteShadingBins.AllocatorInstance.Data != (FNaniteShadingBin *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                      (local_1498.NaniteShadingBins.AllocatorInstance.Data);
          }
          if (local_1498.NaniteInstanceIds.AllocatorInstance.Data != (uint *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                      (local_1498.NaniteInstanceIds.AllocatorInstance.Data);
          }
          if (-1 < (int)uVar29) {
            local_17f0->bHasAnyCardCopy = true;
          }
          local_1698 = 0;
          if (param_5.GPUMask != 0) {
            for (; (param_5.GPUMask >> local_1698 & 1) == 0; local_1698 = local_1698 + 1) {
            }
          }
          uVar53 = 0x20;
          if (param_5.GPUMask != 0) {
            uVar53 = (ulonglong)local_1698;
          }
          local_1694 = 0;
          FVar55.GPUMask = param_5.GPUMask;
          while (FVar55.GPUMask != 0) {
            uVar29 = this->SurfaceCacheUpdateFrameIndex;
            pFVar43 = this->LastCapturedPageHeap + uVar53;
            pFVar43->Keys[uVar52] = uVar29;
            uVar45 = pFVar43->HeapIndexes[uVar52];
            if ((uVar45 == 0) || (pFVar43->Keys[pFVar43->Heap[uVar45 - 1 >> 1]] <= uVar29)) {
              FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(pFVar43,uVar45);
            }
            else {
              FBinaryHeap<unsigned_int,unsigned_int>::UpHeap(pFVar43,uVar45);
            }
            FVar55.GPUMask = FVar55.GPUMask & ~(1 << ((byte)uVar53 & 0x1f));
            local_167c = 0;
            if (FVar55.GPUMask != 0) {
              for (; (FVar55.GPUMask >> local_167c & 1) == 0; local_167c = local_167c + 1) {
              }
            }
            uVar29 = 0x20;
            if (FVar55.GPUMask != 0) {
              uVar29 = local_167c;
            }
            uVar53 = (ulonglong)uVar29;
          }
          local_17f0->NumCardTexelsToCapture =
               local_17f0->NumCardTexelsToCapture +
               (*(int *)((longlong)&(local_1740->PhysicalAtlasRect).field0_0x0 + 0xc) -
               *(int *)((longlong)&(local_1740->PhysicalAtlasRect).field0_0x0 + 4)) *
               (*(int *)((longlong)&(local_1740->PhysicalAtlasRect).field0_0x0 + 8) -
               *(int *)&(local_1740->PhysicalAtlasRect).field0_0x0);
        }
        iVar47 = iVar47 + 1;
        FVar46 = local_1818;
      } while (iVar47 < (int)((uint)pFVar35->SizeInPagesX * (uint)pFVar35->SizeInPagesY));
    }
    FVar48 = local_1810;
    cVar44 = '\0';
    local_17c8[0] = *(uint *)((longlong)local_17e0 + (longlong)local_1810 * 0xc);
    uVar52 = local_17c8[0] & local_1798.Set.Table.NumSlotsMinusOne;
    uVar53 = (ulonglong)uVar52;
    if ((local_1798.Set.Table.CurrentData.Distances != (schar *)0x0) &&
       (-1 < local_1798.Set.Table.CurrentData.Distances[uVar53])) {
      do {
        local_1810 = FVar48;
        uVar52 = local_17f8;
        if (local_17c8[0] == local_1798.Set.Table.CurrentData.Keys[uVar53]) goto LAB_144d8f99a;
        uVar52 = (int)uVar53 + 1;
        uVar53 = (ulonglong)uVar52;
        cVar44 = cVar44 + '\x01';
      } while (cVar44 <= local_1798.Set.Table.CurrentData.Distances[uVar53]);
    }
    Experimental::TSherwoodHashTable_Private::
    TSherwoodHashTable<int,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<int,FNoopStruct>_>::Add
              (&local_1798.Set.Table,cVar44,(FData *)&local_1798.Set,uVar52,local_17c8[0],
               local_17c8[0],FVar46);
    if (((local_1798.Array.AllocatorInstance.Data <= local_17c8) &&
        (local_17c8 < local_1798.Array.AllocatorInstance.Data + local_1798.Array.ArrayMax)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar47 = local_1798.Array.ArrayNum;
    if (local_1798.Array.ArrayNum == local_1798.Array.ArrayMax) {
      iVar47 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                         (0x404,(ForElementType<int> *)&local_1798,&local_1798.Array.ArrayMax);
    }
    local_1798.Array.ArrayNum = iVar47 + 1;
    local_1798.Array.AllocatorInstance.Data[iVar47] = local_17c8[0];
    local_1810 = FVar48;
    uVar52 = local_17f8;
  }
LAB_144d8f99a:
  if (local_1808 <= (local_17f0->CardPagesToRender).ArrayNum + local_17b0) goto LAB_144d8f9d9;
  local_17f8 = uVar52 + 1;
  local_1810 = (FName)((longlong)local_1810 + 1);
  iVar47 = *(int *)&(local_1730->PhysicalAtlasRect).field0_0x0;
  param_6 = (TArray<FSurfaceCacheRequest,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
             *)local_1730;
  if (iVar47 <= (int)local_17f8) goto LAB_144d8f9d9;
  goto LAB_144d8ef60;
}

// ReallocVirtualSurface @ 144d91b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::ReallocVirtualSurface
          (FLumenSceneData *this,FLumenCard *param_1,int param_2,int param_3,bool param_4)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  FLumenCardId *pFVar5;
  code *pcVar6;
  FLumenCardId FVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  bool bVar11;
  FLumenPageTableEntry *pFVar12;
  TIntPoint<int>_u_0 TVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  TArray<FLumenCardSharingInfoPendingAdd,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_138 [32];
  FLumenCardId *local_118;
  FLumenCardId *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  FLumenCardId local_e8;
  int local_e0;
  FLumenCardId local_d8;
  int iStack_d0;
  uchar uStack_cc;
  undefined1 uStack_cb;
  undefined2 uStack_ca;
  TSparseSpanArray<FLumenPageTableEntry> *local_c8;
  TIntPoint<int>_u_0 local_b8;
  uint local_b0;
  uint local_ac;
  uchar local_a0;
  uchar local_9e;
  char local_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar16 = (ulonglong)(param_3 + -3);
  local_e8._s_1.CustomId = param_3;
  local_e0 = param_2;
  if (((param_3 + -3 < 0) || (8 < uVar16)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                          ,0x158,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = param_1->SurfaceMipMaps[uVar16].PageTableSpanSize;
  if (uVar3 != 0) {
    bVar11 = param_1->SurfaceMipMaps[uVar16].bLocked;
    if (bVar11 != param_4) {
      iVar15 = 0;
      iVar14 = (uint)param_1->SurfaceMipMaps[uVar16].SizeInPagesX *
               (uint)param_1->SurfaceMipMaps[uVar16].SizeInPagesY;
      if (bVar11 == false) {
        if (iVar14 != 0) {
          do {
            uVar20 = param_1->SurfaceMipMaps[uVar16].PageTableSpanOffset + iVar15;
            pFVar12 = TSparseSpanArray<FLumenPageTableEntry>::operator[](&this->PageTable,uVar20);
            if ((-1 < (pFVar12->PhysicalPageCoord).field0_0x0._s_0.X) &&
               (-1 < (pFVar12->PhysicalPageCoord).field0_0x0._s_0.Y)) {
              FBinaryHeap<unsigned_int,unsigned_int>::Remove(&this->UnlockedAllocationHeap,uVar20);
            }
            iVar15 = iVar15 + 1;
            param_3 = local_e8._s_1.CustomId;
          } while (iVar15 < (int)((uint)param_1->SurfaceMipMaps[uVar16].SizeInPagesX *
                                 (uint)param_1->SurfaceMipMaps[uVar16].SizeInPagesY));
        }
        param_1->SurfaceMipMaps[uVar16].bLocked = true;
      }
      else {
        if (iVar14 != 0) {
          do {
            uVar20 = param_1->SurfaceMipMaps[uVar16].PageTableSpanOffset + iVar15;
            pFVar12 = TSparseSpanArray<FLumenPageTableEntry>::operator[](&this->PageTable,uVar20);
            if ((-1 < (pFVar12->PhysicalPageCoord).field0_0x0._s_0.X) &&
               (-1 < (pFVar12->PhysicalPageCoord).field0_0x0._s_0.Y)) {
              FBinaryHeap<unsigned_int,unsigned_int>::Add
                        (&this->UnlockedAllocationHeap,(this->SurfaceCacheFeedback).FrameIndex,
                         uVar20);
            }
            iVar15 = iVar15 + 1;
            param_3 = local_e8._s_1.CustomId;
          } while (iVar15 < (int)((uint)param_1->SurfaceMipMaps[uVar16].SizeInPagesX *
                                 (uint)param_1->SurfaceMipMaps[uVar16].SizeInPagesY));
        }
        param_1->SurfaceMipMaps[uVar16].bLocked = false;
      }
      goto LAB_144d92003;
    }
    if (uVar3 != 0) goto LAB_144d92003;
  }
  FLumenCard::GetMipMapDesc(param_1,param_3,(FLumenMipMapDesc *)&local_b8._s_0);
  param_1->SurfaceMipMaps[uVar16].ResLevelX = local_a0;
  param_1->SurfaceMipMaps[uVar16].SizeInPagesY = (uchar)local_ac;
  param_1->SurfaceMipMaps[uVar16].ResLevelY = local_9e;
  uVar20 = (local_b0 & 0xffff) * (local_ac & 0xffff);
  local_c8 = &this->PageTable;
  param_1->SurfaceMipMaps[uVar16].SizeInPagesX = (uchar)local_b0;
  param_1->SurfaceMipMaps[uVar16].bLocked = param_4;
  param_1->SurfaceMipMaps[uVar16].PageTableSpanSize = (ushort)uVar20;
  iVar14 = TSparseSpanArray<FLumenPageTableEntry>::AddSpan(local_c8,uVar20 & 0xffff);
  param_1->SurfaceMipMaps[uVar16].PageTableSpanOffset = iVar14;
  fVar10 = __real_3c000000;
  dVar9 = __real_3fe0000000000000;
  fVar8 = __real_3f800000;
  iVar14 = 0;
  if (0 < (int)(local_ac * local_b0)) {
    pTVar2 = &this->PageTableIndicesToUpdateInBuffer;
    do {
      uVar21 = param_1->SurfaceMipMaps[uVar16].PageTableSpanOffset + iVar14;
      iVar15 = (local_c8->Elements).ArrayNum;
      uVar20 = 0;
      if ((int)uVar21 < iVar15) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      local_e8.PackedValue._0_4_ = uVar21;
      if (uVar20 == 0) {
        local_118 = (FLumenCardId *)(longlong)(int)uVar21;
        local_110 = (FLumenCardId *)(longlong)iVar15;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar18 = (longlong)(int)uVar21;
      pFVar4 = (local_c8->Elements).AllocatorInstance.Data;
      *(int *)(pFVar4 + lVar18 * 0x50 + 0x24) = local_e0;
      pFVar4[lVar18 * 0x50 + 0x28] = SUB41(local_e8._s_1.CustomId,0);
      TVar13 = (TIntPoint<int>_u_0)0xffffffffffffffff;
      if (local_9c != '\0') {
        TVar13 = local_b8;
      }
      *(TIntPoint<int>_u_0 *)(pFVar4 + lVar18 * 0x50 + 0x40) = TVar13;
      *(undefined8 *)(pFVar4 + lVar18 * 0x50 + 0x1c) = 0;
      iVar17 = iVar14 % (int)local_b0;
      iVar15 = iVar14 / (int)local_b0;
      fVar26 = (fVar8 / (float)(int)local_b0) * (float)iVar17;
      fVar25 = ((float)iVar17 + fVar8) * (fVar8 / (float)(int)local_b0);
      fVar27 = (fVar8 / (float)(int)local_ac) * (float)iVar15;
      fVar24 = ((float)iVar15 + fVar8) * (fVar8 / (float)(int)local_ac);
      dVar22 = (double)((fVar25 - fVar26) * fVar10) * dVar9;
      dVar23 = (double)((fVar24 - fVar27) * fVar10) * dVar9;
      if (0 < iVar17) {
        fVar26 = (float)((double)fVar26 - dVar22);
      }
      if (0 < iVar15) {
        fVar27 = (float)((double)fVar27 - dVar23);
      }
      if (iVar17 < (int)(local_b0 - 1)) {
        fVar25 = (float)((double)fVar25 + dVar22);
      }
      if (iVar15 < (int)(local_ac - 1)) {
        fVar24 = (float)((double)fVar24 + dVar23);
      }
      *(float *)(pFVar4 + lVar18 * 0x50 + 0x30) = fVar26;
      *(float *)(pFVar4 + lVar18 * 0x50 + 0x34) = fVar27;
      *(float *)(pFVar4 + lVar18 * 0x50 + 0x38) = fVar25;
      *(float *)(pFVar4 + lVar18 * 0x50 + 0x3c) = fVar24;
      pFVar5 = (FLumenCardId *)(pTVar2->AllocatorInstance).Data;
      if ((pFVar5 <= &local_e8) &&
         (lVar18 = (longlong)(this->PageTableIndicesToUpdateInBuffer).ArrayMax,
         &local_e8 < (FLumenCardId *)((longlong)pFVar5 + lVar18 * 4))) {
        local_100 = (longlong)(this->PageTableIndicesToUpdateInBuffer).ArrayNum;
        local_f8 = 4;
        local_118 = &local_e8;
        local_110 = pFVar5;
        local_108 = lVar18;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar15 = (this->PageTableIndicesToUpdateInBuffer).ArrayNum;
      if (iVar15 == (this->PageTableIndicesToUpdateInBuffer).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,
                            &(this->PageTableIndicesToUpdateInBuffer).ArrayMax);
      }
      iVar14 = iVar14 + 1;
      (this->PageTableIndicesToUpdateInBuffer).ArrayNum = iVar15 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 4) =
           local_e8.PackedValue._0_4_;
      param_3 = local_e8._s_1.CustomId;
    } while (iVar14 < (int)(local_ac * local_b0));
  }
  FLumenCard::UpdateMinMaxAllocatedLevel(param_1);
  param_2 = local_e0;
  FUniqueIndexList::Add(&this->CardIndicesToUpdateInBuffer,local_e0);
LAB_144d92003:
  if (((this->bAllowCardSharing != false) && (param_4)) &&
     ((param_1->CardSharingId).PackedValue != 0xffffffffffffffff)) {
    if (((param_3 != (uint)param_1->MinAllocatedResLevel) || (param_1->CardSharingListIndex != -1))
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("ResLevel == Card.MinAllocatedResLevel && Card.CardSharingListIndex == INDEX_NONE"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                               ,0x67d,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_d8 = param_1->CardSharingId;
    pTVar19 = &this->PendingAddCardSharingInfos;
    uStack_cc = param_1->MinAllocatedResLevel;
    uStack_cb = param_1->bAxisXFlipped;
    pFVar5 = (FLumenCardId *)(pTVar19->AllocatorInstance).Data;
    iStack_d0 = param_2;
    if ((pFVar5 <= &local_d8) &&
       (lVar18 = (longlong)(this->PendingAddCardSharingInfos).ArrayMax,
       &local_d8 < pFVar5 + lVar18 * 2)) {
      local_100 = (longlong)(this->PendingAddCardSharingInfos).ArrayNum;
      local_f8 = 0x10;
      local_118 = &local_d8;
      local_110 = pFVar5;
      local_108 = lVar18;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar14 = (this->PendingAddCardSharingInfos).ArrayNum;
    piVar1 = &(this->PendingAddCardSharingInfos).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar19->AllocatorInstance,piVar1);
    }
    FVar7.PackedValue._4_1_ = uStack_cc;
    FVar7.PackedValue._0_4_ = iStack_d0;
    FVar7.PackedValue._5_1_ = uStack_cb;
    FVar7.PackedValue._6_2_ = uStack_ca;
    (this->PendingAddCardSharingInfos).ArrayNum = iVar14 + 1;
    pFVar5 = (FLumenCardId *)((pTVar19->AllocatorInstance).Data + (longlong)iVar14 * 0x10);
    *pFVar5 = local_d8;
    pFVar5[1] = FVar7;
  }
  return;
}

// RecaptureCardPage @ 144d92170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FLumenSceneData::RecaptureCardPage
          (FLumenSceneData *this,FViewInfo *param_1,FLumenCardRenderer *param_2,
          FLumenSurfaceCacheAllocator *param_3,FRHIGPUMask param_4,int param_5)

{
  int *piVar1;
  FBinaryHeap<unsigned_int,unsigned_int> *this_00;
  uint uVar2;
  uint uVar3;
  FCardPageRenderData *pFVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FLumenPageTableEntry *pFVar10;
  FLumenCard *pFVar11;
  FLumenMeshCards *pFVar12;
  FCardPageRenderData *pFVar13;
  undefined1 auStackY_b18 [32];
  TIntPoint<int>_u_0 local_ab8;
  TIntPoint<int>_u_0 TStack_ab0;
  TIntPoint<int>_u_0 local_aa8;
  TIntRect<int>_u_0 local_a98;
  TIntRect<int>_u_0 local_a88;
  TVector4<float>_u_0 local_a78;
  FCardPageRenderData local_a68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_b18;
  pFVar10 = TSparseSpanArray<FLumenPageTableEntry>::operator[](&this->PageTable,param_5);
  pFVar11 = TSparseSpanArray<FLumenCard>::operator[](&this->Cards,pFVar10->CardIndex);
  pFVar12 = TSparseSpanArray<FLumenMeshCards>::operator[](&this->MeshCards,pFVar11->MeshCardsIndex);
  bVar7 = FLumenSurfaceCacheAllocator::IsSpaceAvailable
                    (param_3,pFVar11,(uint)pFVar10->ResLevel,true);
  if (bVar7) {
    local_aa8 = (TIntPoint<int>_u_0)0x0;
    local_ab8 = ___xmm_0000000000000000ffffffffffffffff;
    TStack_ab0 = _UNK_15076adc8;
    FLumenSurfaceCacheAllocator::Allocate(param_3,pFVar10,(FAllocation *)&local_ab8._s_0);
    if ((local_ab8._s_0.X < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CardCaptureAllocation.PhysicalPageCoord.X >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                           ,0x350,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_a98._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(pFVar10->PhysicalAtlasRect).field0_0x0._s_0.Min.field0_0x0;
    local_a78._0_8_ = *(undefined8 *)&(pFVar10->CardUVRect).field0_0x0;
    local_a78._8_8_ = *(undefined8 *)((longlong)&(pFVar10->CardUVRect).field0_0x0 + 8);
    local_a98._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(pFVar10->PhysicalAtlasRect).field0_0x0._s_0.Max.field0_0x0;
    local_a88._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TStack_ab0;
    local_a88._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_aa8;
    pFVar13 = FCardPageRenderData::FCardPageRenderData
                        (&local_a68,param_1,pFVar11,(TVector4<float> *)&local_a78._s_0,
                         (TIntRect<int> *)&local_a88._s_0,(TIntRect<int> *)&local_a98._s_0,
                         pFVar12->PrimitiveGroupIndex,pFVar10->CardIndex,param_5,true,false,-1);
    pFVar4 = (param_2->CardPagesToRender).AllocatorInstance.Data;
    if (((pFVar4 <= pFVar13) && (pFVar13 < pFVar4 + (param_2->CardPagesToRender).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar9 = (param_2->CardPagesToRender).ArrayNum;
    piVar1 = &(param_2->CardPagesToRender).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FCardPageRenderData>_>
                        (0xa10,0x10,(ForElementType<FCardPageRenderData> *)param_2,piVar1);
    }
    (param_2->CardPagesToRender).ArrayNum = iVar9 + 1;
    FCardPageRenderData::FCardPageRenderData
              ((param_2->CardPagesToRender).AllocatorInstance.Data + iVar9,pFVar13);
    if (local_a68.InstanceRuns.AllocatorInstance.Data != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_a68.InstanceRuns.AllocatorInstance.Data);
    }
    if (local_a68.NaniteShadingBins.AllocatorInstance.Data != (FNaniteShadingBin *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_a68.NaniteShadingBins.AllocatorInstance.Data);
    }
    if (local_a68.NaniteInstanceIds.AllocatorInstance.Data != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_a68.NaniteInstanceIds.AllocatorInstance.Data);
    }
    uVar5 = 0;
    bVar7 = param_4.GPUMask != 0;
    if (bVar7) {
      for (; (param_4.GPUMask >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    while (bVar7) {
      uVar2 = this->SurfaceCacheUpdateFrameIndex;
      this_00 = this->LastCapturedPageHeap + uVar5;
      this->LastCapturedPageHeap[uVar5].Keys[(uint)param_5] = uVar2;
      uVar3 = this_00->HeapIndexes[(uint)param_5];
      if ((uVar3 == 0) || (this_00->Keys[this_00->Heap[uVar3 - 1 >> 1]] <= uVar2)) {
        FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(this_00,uVar3);
      }
      else {
        FBinaryHeap<unsigned_int,unsigned_int>::UpHeap(this_00,uVar3);
      }
      param_4.GPUMask = param_4.GPUMask & ~(1 << ((byte)uVar5 & 0x1f));
      uVar5 = 0;
      bVar7 = param_4.GPUMask != 0;
      if (bVar7) {
        for (; (param_4.GPUMask >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
    bVar7 = true;
    param_2->NumCardTexelsToCapture =
         param_2->NumCardTexelsToCapture +
         (*(int *)((longlong)&(pFVar10->PhysicalAtlasRect).field0_0x0 + 0xc) -
         *(int *)((longlong)&(pFVar10->PhysicalAtlasRect).field0_0x0 + 4)) *
         (*(int *)((longlong)&(pFVar10->PhysicalAtlasRect).field0_0x0 + 8) -
         *(int *)&(pFVar10->PhysicalAtlasRect).field0_0x0);
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}

// ReleaseAtlas @ 144d92fb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLumenSceneData::ReleaseAtlas(FLumenSceneData *this)

{
  longlong *plVar1;
  IPooledRenderTarget *pIVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  RemoveAllMeshCards(this);
  (this->PhysicalAtlasSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  pIVar2 = (this->AlbedoAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->AlbedoAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->OpacityAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->OpacityAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->NormalAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->NormalAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->EmissiveAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->EmissiveAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->DepthAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->DepthAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->DirectLightingAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->DirectLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->IndirectLightingAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->IndirectLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->RadiosityNumFramesAccumulatedAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->RadiosityNumFramesAccumulatedAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->FinalLightingAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->FinalLightingAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pFVar3 = (this->TileShadowDownsampleFactorAtlas).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->TileShadowDownsampleFactorAtlas).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pIVar2 = (this->DiffuseLightingAndSecondMomentHistoryAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->DiffuseLightingAndSecondMomentHistoryAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->NumFramesAccumulatedHistoryAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->NumFramesAccumulatedHistoryAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->RadiosityTraceRadianceAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->RadiosityTraceRadianceAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->RadiosityTraceHitDistanceAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->RadiosityTraceHitDistanceAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->RadiosityProbeSHRedAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->RadiosityProbeSHRedAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->RadiosityProbeSHGreenAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->RadiosityProbeSHGreenAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->RadiosityProbeSHBlueAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->RadiosityProbeSHBlueAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  return;
}

// RemoveAllMeshCards @ 144d93380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLumenSceneData::RemoveAllMeshCards(FLumenSceneData *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>_>
  *this_00;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::RemoveAllMeshCards(void)_::_2_::FStat_RemoveAllCards>
  FVar12;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar13;
  FName FVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  FLLMScope local_res8 [2];
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FMemScope local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Lumen.UniqueName,false,None,Default,true);
  local_78 = LLMTagDeclaration_Lumen.UniqueName;
  FMemScope::FMemScope(&local_70,&local_78,true);
  uVar16 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_RemoveAllCards ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::RemoveAllMeshCards(void)_::_2_::FStat_RemoveAllCards>
         )0x0) {
      pFVar11 = ::FName::FName(&local_68,"RemoveAllCards");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_RemoveAllCards,*pFVar11,L"RemoveAllCards",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_RemoveAllCards;
  if (StatPtr_RemoveAllCards ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::RemoveAllMeshCards(void)_::_2_::FStat_RemoveAllCards>
       )0x0) {
    pFVar11 = ::FName::FName(&local_60,"RemoveAllCards");
    FVar12 = (FThreadSafeStaticStat<_public:_void___cdecl_FLumenSceneData::RemoveAllMeshCards(void)_::_2_::FStat_RemoveAllCards>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_RemoveAllCards,*pFVar11,
                          L"RemoveAllCards","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                          ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar10 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                   ,0x55d);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar13.Value;
      local_res20.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar7 = true;
      goto LAB_144d93540;
    }
  }
  bVar7 = false;
  FVar14 = local_58;
LAB_144d93540:
  iVar3 = (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne;
  if (0 < iVar3) {
    uVar10 = 0;
    if (iVar3 < 1) goto LAB_144d935bb;
    do {
      uVar16 = uVar10;
      if ((((int)uVar16 < 0) ||
          ((this->PrimitiveGroups).AllocatedElementsBitArray.NumBits <= (int)uVar16)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar4 = (this->PrimitiveGroups).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<unsigned_int>)&(this->PrimitiveGroups).AllocatedElementsBitArray;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = FVar4;
      }
      uVar10 = uVar16;
      if ((int)uVar16 < 0) {
        uVar10 = uVar16 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar15 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar16 & 0x1f) & 1) !=
          0) {
        RemoveMeshCards(this,uVar16,true);
      }
LAB_144d935bb:
      uVar10 = uVar16 + 1;
    } while ((int)(uVar16 + 1) < (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne);
  }
  this_00 = &this->CardSharingInfoMap;
  bVar9 = 1 < *(int *)&(this->CardSharingInfoMap).field_0x48;
  if (!bVar9) {
    TSet<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->CardSharingInfoMap).field_0x8);
  puVar1 = &(this->CardSharingInfoMap).field_0xc;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->CardSharingInfoMap).field_0x2c;
  *(undefined4 *)&(this->CardSharingInfoMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->CardSharingInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CardSharingInfoMap).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->CardSharingInfoMap).field_0x48 = 1;
    TSet<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>_>,TDefaultMapHashableKeyFuncs<FLumenCardId,TSparseArray<FLumenCardSharingInfo,FDefaultSparseArrayAllocator>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar2 = &(this->PendingRemoveCardSharingInfos).ArrayMax;
  (this->PendingRemoveCardSharingInfos).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->PendingRemoveCardSharingInfos).AllocatorInstance,0,piVar2);
  }
  piVar2 = &(this->PendingAddCardSharingInfos).ArrayMax;
  (this->PendingAddCardSharingInfos).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->PendingAddCardSharingInfos).AllocatorInstance,0,piVar2);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar14 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ResetAndConsolidate @ 144d98640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FLumenSceneData::ResetAndConsolidate(FLumenSceneData *this)

{
  int *piVar1;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator> *pTVar2;
  TSparseSpanArray<FLumenMeshCards> *this_00;
  FScriptContainerElement *_Dst;
  int iVar3;
  FLumenPrimitiveGroupRemoveInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::Reset
            (&this->PendingAddOperations);
  piVar1 = &(this->PendingRemoveOperations).ArrayMax;
  pFVar4 = (FLumenPrimitiveGroupRemoveInfo *)(this->PendingRemoveOperations).AllocatorInstance.Data;
  iVar3 = (this->PendingRemoveOperations).ArrayNum;
  if ((this->PendingRemoveOperations).ArrayMax < 0x400) {
    DestructItems<FLumenPrimitiveGroupRemoveInfo,int>(pFVar4,iVar3);
    (this->PendingRemoveOperations).ArrayNum = 0;
    if (*piVar1 != 0x400) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0x400,&(this->PendingRemoveOperations).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FLumenPrimitiveGroupRemoveInfo,int>(pFVar4,iVar3);
    (this->PendingRemoveOperations).ArrayNum = 0;
  }
  pTVar2 = &this->PendingUpdateOperations;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::Reset
            (pTVar2);
  if ((uint)(*(int *)&(this->PendingUpdateOperations).Elements.field_0x8 -
            *(int *)&(this->PendingUpdateOperations).Elements.field_0x34) < 0x400) {
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar2,0x400);
    for (lVar13 = 0x3f; 0x40fUL >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
    iVar7 = 1 << ((byte)lVar13 & 0x1f);
    iVar3 = (this->PendingUpdateOperations).HashSize;
    if ((iVar3 == 0) || (iVar3 < iVar7)) {
      (this->PendingUpdateOperations).HashSize = iVar7;
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Rehash(pTVar2);
    }
  }
  pTVar2 = &this->PendingSurfaceCacheInvalidationOperations;
  TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::Reset
            (pTVar2);
  if ((uint)(*(int *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x8 -
            *(int *)&(this->PendingSurfaceCacheInvalidationOperations).Elements.field_0x34) < 0x40)
  {
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar2,0x40);
    for (lVar13 = 0x3f; 0x4fUL >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
    iVar3 = (this->PendingSurfaceCacheInvalidationOperations).HashSize;
    iVar7 = 1 << ((byte)lVar13 & 0x1f);
    if ((iVar3 == 0) || (iVar3 < iVar7)) {
      (this->PendingSurfaceCacheInvalidationOperations).HashSize = iVar7;
      TSet<FPrimitiveSceneInfo_*,DefaultKeyFuncs<FPrimitiveSceneInfo_*,0>,FDefaultSetAllocator>::
      Rehash(pTVar2);
    }
  }
  iVar3 = (this->PrimitiveGroups).ElementChunks.ArrayNum;
  iVar7 = (this->PrimitiveGroups).MaxAllocatedElementIndexPlusOne + 0xbfff;
  iVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 0x7fffU)) >> 0xf;
  iVar7 = iVar8;
  if (iVar3 < iVar8) {
    iVar7 = iVar3;
  }
  TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
            (&(this->PrimitiveGroups).AllocatedElementsBitArray,iVar7 << 0xf);
  iVar3 = (this->PrimitiveGroups).ElementChunks.ArrayNum;
  while( true ) {
    if (iVar3 <= iVar8) {
      TSparseArrayBase<32,4,FDefaultSparseArrayAllocator>::Shrink
                ((TSparseArrayBase<32,4,FDefaultSparseArrayAllocator> *)&this->PrimitiveCullingInfos
                );
      TSparseSpanArray<FLumenPrimitiveGroupCullingInfo>::Consolidate(&this->InstanceCullingInfos);
      TSparseSpanArray<FLumenHeightfield>::Consolidate(&this->Heightfields);
      this_00 = &this->MeshCards;
      FSpanAllocator::Consolidate(&(this->MeshCards).SpanAllocator);
      bVar6 = (this->MeshCards).SpanAllocator.bGrowOnly;
      iVar3 = (this->MeshCards).Elements.ArrayNum;
      lVar13 = 0x38;
      piVar1 = &(this->MeshCards).Elements.ArrayNum;
      piVar14 = &(this->MeshCards).SpanAllocator.CurrentMaxSize;
      piVar15 = &(this->MeshCards).SpanAllocator.PeakMaxSize;
      lVar10 = 0x38;
      if (bVar6 == false) {
        lVar10 = 0x34;
      }
      if (*(int *)((longlong)&(this_00->Elements).AllocatorInstance.Data + lVar10) * 2 < iVar3) {
        piVar11 = piVar15;
        if (bVar6 == false) {
          piVar11 = piVar14;
        }
        uVar9 = *piVar11;
        if (iVar3 < (int)uVar9) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (400,0x10,uVar9 - iVar3,(ForAnyElementType *)this_00,piVar1,
                             &(this->MeshCards).Elements.ArrayMax);
          DefaultConstructItems<FLumenMeshCards,int>
                    ((this_00->Elements).AllocatorInstance.Data + (longlong)iVar7 * 400,
                     uVar9 - iVar3);
        }
        else {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          if ((int)uVar9 < iVar3) {
            uVar12 = iVar3 - uVar9;
            if (((int)(uVar12 | uVar9) < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (uVar12 != 0) {
              TArray<FLumenMeshCards,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (&this_00->Elements,uVar9,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (400,0x10,(ForAnyElementType *)this_00,*piVar1,
                         &(this->MeshCards).Elements.ArrayMax);
            }
          }
        }
        if ((this->MeshCards).SpanAllocator.bGrowOnly != false) {
          piVar14 = piVar15;
        }
        TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                  (&(this->MeshCards).AllocatedElementsBitArray,*piVar14);
      }
      FSpanAllocator::Consolidate(&(this->Cards).SpanAllocator);
      bVar6 = (this->Cards).SpanAllocator.bGrowOnly;
      iVar3 = (this->Cards).Elements.ArrayNum;
      piVar1 = &(this->Cards).Elements.ArrayNum;
      if (bVar6 == false) {
        lVar13 = 0x34;
      }
      piVar14 = &(this->Cards).SpanAllocator.CurrentMaxSize;
      piVar15 = &(this->Cards).SpanAllocator.PeakMaxSize;
      if (*(int *)((this->Cards).AllocatedElementsBitArray.AllocatorInstance.InlineData +
                  lVar13 + -0x10) * 2 < iVar3) {
        piVar11 = piVar15;
        if (bVar6 == false) {
          piVar11 = piVar14;
        }
        uVar9 = *piVar11;
        if (iVar3 < (int)uVar9) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (400,8,uVar9 - iVar3,(ForAnyElementType *)&this->Cards,piVar1,
                             &(this->Cards).Elements.ArrayMax);
          DefaultConstructItems<FLumenCard,int>
                    ((this->Cards).Elements.AllocatorInstance.Data + (longlong)iVar7 * 400,
                     uVar9 - iVar3);
        }
        else {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          if ((int)uVar9 < iVar3) {
            uVar12 = iVar3 - uVar9;
            if (((int)(uVar9 | uVar12) < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (uVar12 != 0) {
              TArray<FLumenCard,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                        (&(this->Cards).Elements,uVar9,uVar12);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (400,8,(ForAnyElementType *)&this->Cards,*piVar1,
                         &(this->Cards).Elements.ArrayMax);
            }
          }
        }
        if ((this->Cards).SpanAllocator.bGrowOnly != false) {
          piVar14 = piVar15;
        }
        TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized
                  (&(this->Cards).AllocatedElementsBitArray,*piVar14);
      }
      TSparseSpanArray<FLumenPageTableEntry>::Consolidate(&this->PageTable);
      return;
    }
    iVar3 = (this->PrimitiveGroups).ElementChunks.ArrayNum;
    uVar12 = iVar3 - 1;
    uVar9 = 0;
    if ((int)uVar12 < iVar3) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    FMemory::Free(*(void **)((this->PrimitiveGroups).ElementChunks.AllocatorInstance.Data +
                            (longlong)(this->PrimitiveGroups).ElementChunks.ArrayNum * 8 + -8));
    if (((this->PrimitiveGroups).ElementChunks.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (this->PrimitiveGroups).ElementChunks.ArrayNum;
    uVar9 = iVar3 - 1;
    _Dst = (this->PrimitiveGroups).ElementChunks.AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
    iVar3 = ~uVar9 + iVar3;
    if (iVar3 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar3 << 3);
    }
    piVar1 = &(this->PrimitiveGroups).ElementChunks.ArrayNum;
    *piVar1 = *piVar1 + -1;
    iVar3 = (this->PrimitiveGroups).ElementChunks.ArrayNum;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// UnmapSurfaceCachePage @ 144da42b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::UnmapSurfaceCachePage
          (FLumenSceneData *this,bool param_1,FLumenPageTableEntry *param_2,int param_3)

{
  int *piVar1;
  FBinaryHeap<unsigned_int,unsigned_int> *this_00;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  FPageBin *this_01;
  uint uVar10;
  FPageBin *pFVar11;
  char cVar9;
  
  if ((param_2->PhysicalPageCoord).field0_0x0._s_0.X < 0) {
    return;
  }
  if ((param_2->PhysicalPageCoord).field0_0x0._s_0.Y < 0) {
    return;
  }
  this_01 = (FPageBin *)0x0;
  pFVar11 = this_01;
  if (GNumExplicitGPUsForRendering != 0) {
    do {
      if ((uint)param_3 < this->LastCapturedPageHeap[(longlong)pFVar11].IndexSize) {
        uVar10 = this->LastCapturedPageHeap[(longlong)pFVar11].HeapIndexes[(uint)param_3];
        if (uVar10 != 0xffffffff) {
          puVar4 = this->LastCapturedPageHeap[(longlong)pFVar11].Heap;
          uVar3 = this->LastCapturedPageHeap[(longlong)pFVar11].Keys[(uint)param_3];
          this->LastCapturedPageHeap[(longlong)pFVar11].HeapNum =
               this->LastCapturedPageHeap[(longlong)pFVar11].HeapNum - 1;
          puVar4[uVar10] = puVar4[this->LastCapturedPageHeap[(longlong)pFVar11].HeapNum];
          this->LastCapturedPageHeap[(longlong)pFVar11].HeapIndexes
          [this->LastCapturedPageHeap[(longlong)pFVar11].Heap[uVar10]] = uVar10;
          this->LastCapturedPageHeap[(longlong)pFVar11].HeapIndexes[(uint)param_3] = 0xffffffff;
          if (uVar3 < this->LastCapturedPageHeap[(longlong)pFVar11].Keys
                      [this->LastCapturedPageHeap[(longlong)pFVar11].Heap[uVar10]]) {
            FBinaryHeap<unsigned_int,unsigned_int>::DownHeap
                      (this->LastCapturedPageHeap + (longlong)pFVar11,uVar10);
          }
          else {
            FBinaryHeap<unsigned_int,unsigned_int>::UpHeap
                      (this->LastCapturedPageHeap + (longlong)pFVar11,uVar10);
          }
        }
      }
      if ((uint)param_3 < this->PagesToRecaptureHeap[(longlong)pFVar11].IndexSize) {
        uVar10 = this->PagesToRecaptureHeap[(longlong)pFVar11].HeapIndexes[(uint)param_3];
        if (uVar10 != 0xffffffff) {
          puVar4 = this->PagesToRecaptureHeap[(longlong)pFVar11].Heap;
          uVar3 = this->PagesToRecaptureHeap[(longlong)pFVar11].Keys[(uint)param_3];
          this->PagesToRecaptureHeap[(longlong)pFVar11].HeapNum =
               this->PagesToRecaptureHeap[(longlong)pFVar11].HeapNum - 1;
          puVar4[uVar10] = puVar4[this->PagesToRecaptureHeap[(longlong)pFVar11].HeapNum];
          this->PagesToRecaptureHeap[(longlong)pFVar11].HeapIndexes
          [this->PagesToRecaptureHeap[(longlong)pFVar11].Heap[uVar10]] = uVar10;
          this->PagesToRecaptureHeap[(longlong)pFVar11].HeapIndexes[(uint)param_3] = 0xffffffff;
          if (uVar3 < this->PagesToRecaptureHeap[(longlong)pFVar11].Keys
                      [this->PagesToRecaptureHeap[(longlong)pFVar11].Heap[uVar10]]) {
            FBinaryHeap<unsigned_int,unsigned_int>::DownHeap
                      (this->PagesToRecaptureHeap + (longlong)pFVar11,uVar10);
          }
          else {
            FBinaryHeap<unsigned_int,unsigned_int>::UpHeap
                      (this->PagesToRecaptureHeap + (longlong)pFVar11,uVar10);
          }
        }
      }
      uVar10 = (int)pFVar11 + 1;
      pFVar11 = (FPageBin *)(ulonglong)uVar10;
    } while (uVar10 < GNumExplicitGPUsForRendering);
  }
  if ((!param_1) &&
     (this_00 = &this->UnlockedAllocationHeap,
     (uint)param_3 < (this->UnlockedAllocationHeap).IndexSize)) {
    uVar10 = (this->UnlockedAllocationHeap).HeapIndexes[(uint)param_3];
    if (uVar10 != 0xffffffff) {
      puVar4 = (this->UnlockedAllocationHeap).Heap;
      uVar3 = (this->UnlockedAllocationHeap).Keys[(uint)param_3];
      this_00->HeapNum = this_00->HeapNum - 1;
      puVar4[uVar10] = puVar4[this_00->HeapNum];
      (this->UnlockedAllocationHeap).HeapIndexes[(this->UnlockedAllocationHeap).Heap[uVar10]] =
           uVar10;
      (this->UnlockedAllocationHeap).HeapIndexes[(uint)param_3] = 0xffffffff;
      if (uVar3 < (this->UnlockedAllocationHeap).Keys[(this->UnlockedAllocationHeap).Heap[uVar10]])
      {
        FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(this_00,uVar10);
      }
      else {
        FBinaryHeap<unsigned_int,unsigned_int>::UpHeap(this_00,uVar10);
      }
    }
  }
  uVar10 = (param_2->SubAllocationSize).field0_0x0._s_0.X;
  piVar1 = &(param_2->SubAllocationSize).field0_0x0._s_0.Y;
  if ((-1 < (int)uVar10) || (-1 < *piVar1)) {
    iVar5 = 0x1f;
    if (*piVar1 != 0) {
      for (; (uint)*piVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    cVar8 = '\0';
    cVar9 = cVar8;
    if (*piVar1 != 0) {
      cVar9 = (char)iVar5;
    }
    iVar5 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar10 != 0) {
      cVar8 = (char)iVar5;
    }
    bVar2 = (this->SurfaceCacheAllocator).PageBinLookup.Elements[(byte)(cVar9 * '\b' + cVar8)];
    if (bVar2 == 0xff) {
LAB_144da45cc:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MatchingBin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                         ,0x1ac,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      if (((this->SurfaceCacheAllocator).PageBins.ArrayNum <= (int)(uint)bVar2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_01 = (FPageBin *)
                ((this->SurfaceCacheAllocator).PageBins.AllocatorInstance.Data +
                (ulonglong)bVar2 * 0x4a0);
      if (this_01 == (FPageBin *)0x0) goto LAB_144da45cc;
    }
    bVar7 = FLumenSurfaceCacheAllocator::FPageBin::RemoveBinAllocation(this_01,param_2);
    if (!bVar7) goto LAB_144da4610;
  }
  FLumenSurfaceCacheAllocator::FreePhysicalAtlasPage
            (&this->SurfaceCacheAllocator,&param_2->PhysicalPageCoord);
LAB_144da4610:
  (param_2->PhysicalPageCoord).field0_0x0 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  param_2->SampleAtlasBiasX = 0;
  param_2->SampleAtlasBiasY = 0;
  param_2->SampleCardResLevelX = 0;
  param_2->SampleCardResLevelY = 0;
  return;
}

// UpdateAtlasSize @ 144da4640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FLumenSceneData::UpdateAtlasSize(FLumenSceneData *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  ESurfaceCacheCompression EVar3;
  EPixelFormat EVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  TIntPoint<int> TVar8;
  int iVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float extraout_XMM0_Da_00;
  TIntPoint<int>_u_0 local_res8 [3];
  
  EVar3 = GetSurfaceCacheCompression();
  TVar8 = GetDesiredPhysicalAtlasSize(extraout_XMM0_Da);
  if (((((this->PhysicalAtlasSize).field0_0x0._s_0.X == *(int *)TVar8.field0_0x0) &&
       ((this->PhysicalAtlasSize).field0_0x0._s_0.Y == *(int *)((longlong)TVar8.field0_0x0 + 4))) &&
      (this->PhysicalAtlasCompression == EVar3)) &&
     ((EVar4 = Lumen::GetLightingDataFormat(), this->CurrentLightingDataFormat == EVar4 &&
      (fVar10 = Lumen::GetCachedLightingPreExposure(),
      fVar10 == this->CurrentCachedLightingPreExposure)))) {
    return false;
  }
  RemoveAllMeshCards(this);
  TVar8 = GetDesiredPhysicalAtlasSize(extraout_XMM0_Da_00);
  fVar10 = this->SurfaceCacheResolution;
                    /* WARNING: Load size is inaccurate */
  (this->PhysicalAtlasSize).field0_0x0 = (TIntPoint<int>_u_0)*TVar8.field0_0x0;
  pTVar2 = CVarLumenSceneSurfaceCacheAtlasSize.Ref;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  iVar7 = (int)((float)(pTVar2->ShadowedValue[1] + 0x7fU >> 7) * fVar10);
  iVar9 = 0x40;
  if (iVar7 < 0x40) {
    iVar9 = iVar7;
  }
  local_res8[0]._0_4_ = 1;
  if (1 < iVar9) {
    local_res8[0]._0_4_ = iVar9;
  }
  local_res8[0]._4_4_ = local_res8[0]._0_4_;
  FLumenSurfaceCacheAllocator::Init
            (&this->SurfaceCacheAllocator,(TIntPoint<int> *)&local_res8[0]._s_0);
  this->PhysicalAtlasCompression = EVar3;
  EVar4 = Lumen::GetLightingDataFormat();
  this->CurrentLightingDataFormat = EVar4;
  fVar10 = Lumen::GetCachedLightingPreExposure();
  this->CurrentCachedLightingPreExposure = fVar10;
  return true;
}

// UpdateCardMipMapHierarchy @ 144da47c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FLumenSceneData::UpdateCardMipMapHierarchy(FLumenSceneData *this,FLumenCard *param_1)

{
  int *piVar1;
  FLumenSurfaceMipMap *pFVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FLumenPageTableEntry *pFVar11;
  FLumenPageTableEntry *pFVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  int iVar18;
  uint local_res18;
  int local_58;
  int local_54;
  int iStack_50;
  
  bVar3 = param_1->MinAllocatedResLevel;
  uVar17 = (uint)bVar3;
  if (bVar3 <= param_1->MaxAllocatedResLevel) {
    iVar18 = bVar3 - 3;
    do {
      uVar15 = (ulonglong)iVar18;
      if (((iVar18 < 0) || (8 < uVar15)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                             ,0x158,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = param_1->SurfaceMipMaps + uVar15;
      if (param_1->SurfaceMipMaps[uVar15].PageTableSpanSize != 0) {
        iVar14 = 0;
        if ((uint)pFVar2->SizeInPagesY * (uint)pFVar2->SizeInPagesX != 0) {
          do {
            pFVar11 = TSparseSpanArray<FLumenPageTableEntry>::operator[]
                                (&this->PageTable,pFVar2->PageTableSpanOffset + iVar14);
            if ((-1 < (pFVar11->PhysicalPageCoord).field0_0x0._s_0.X) &&
               (-1 < (pFVar11->PhysicalPageCoord).field0_0x0._s_0.Y)) goto LAB_144da488f;
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)((uint)pFVar2->SizeInPagesX * (uint)pFVar2->SizeInPagesY));
        }
        FreeVirtualSurface(this,param_1,(uchar)uVar17,(uchar)uVar17);
      }
LAB_144da488f:
      uVar17 = uVar17 + 1;
      iVar18 = iVar18 + 1;
    } while ((int)uVar17 <= (int)(uint)param_1->MaxAllocatedResLevel);
  }
  FLumenCard::UpdateMinMaxAllocatedLevel(param_1);
  bVar3 = param_1->MinAllocatedResLevel;
  uVar17 = (uint)bVar3;
  local_res18 = (uint)bVar3;
  uVar13 = bVar3 + 1;
  if (uVar13 <= param_1->MaxAllocatedResLevel) {
    iVar18 = bVar3 - 2;
    do {
      uVar15 = (ulonglong)iVar18;
      if (((iVar18 < 0) || (8 < uVar15)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                             ,0x158,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = param_1->SurfaceMipMaps + uVar15;
      uVar6 = uVar17;
      uVar7 = local_res18;
      if ((param_1->SurfaceMipMaps[uVar15].PageTableSpanSize != 0) &&
         (iVar14 = 0, uVar6 = uVar13, uVar7 = uVar13,
         (uint)pFVar2->SizeInPagesY * (uint)pFVar2->SizeInPagesX != 0)) {
        do {
          local_58 = pFVar2->PageTableSpanOffset + iVar14;
          pFVar11 = TSparseSpanArray<FLumenPageTableEntry>::operator[](&this->PageTable,local_58);
          if (((pFVar11->PhysicalPageCoord).field0_0x0._s_0.X < 0) ||
             ((pFVar11->PhysicalPageCoord).field0_0x0._s_0.Y < 0)) {
            bVar3 = pFVar2->SizeInPagesX;
            uVar15 = (ulonglong)(int)(uVar17 - 3);
            if ((((int)(uVar17 - 3) < 0) || (8 < uVar15)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                                   ,0x158,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar17 = (uint)param_1->SurfaceMipMaps[uVar15].SizeInPagesX;
            iVar9 = (int)((iVar14 % (int)(uint)bVar3) * uVar17) / (int)(uint)pFVar2->SizeInPagesX;
            iVar10 = (int)((uint)param_1->SurfaceMipMaps[uVar15].SizeInPagesY *
                          (iVar14 / (int)(uint)bVar3)) / (int)(uint)pFVar2->SizeInPagesY;
            _local_54 = CONCAT44(iVar10,iVar9);
            pFVar12 = TSparseSpanArray<FLumenPageTableEntry>::operator[]
                                (&this->PageTable,
                                 iVar10 * uVar17 +
                                 param_1->SurfaceMipMaps[uVar15].PageTableSpanOffset + iVar9);
            pFVar11->SamplePageIndex = pFVar12->SamplePageIndex;
            pFVar11->SampleAtlasBiasX = pFVar12->SampleAtlasBiasX;
            pFVar11->SampleAtlasBiasY = pFVar12->SampleAtlasBiasY;
            pFVar11->SampleCardResLevelX = pFVar12->SampleCardResLevelX;
            pFVar11->SampleCardResLevelY = pFVar12->SampleCardResLevelY;
            pTVar16 = &this->PageTableIndicesToUpdateInBuffer;
            pFVar4 = (pTVar16->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                ((FScriptContainerElement *)&local_58 <
                 pFVar4 + (longlong)(this->PageTableIndicesToUpdateInBuffer).ArrayMax * 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = (this->PageTableIndicesToUpdateInBuffer).ArrayNum;
            piVar1 = &(this->PageTableIndicesToUpdateInBuffer).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&pTVar16->AllocatorInstance,piVar1);
            }
            (this->PageTableIndicesToUpdateInBuffer).ArrayNum = iVar9 + 1;
            *(int *)((pTVar16->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_58;
            uVar17 = local_res18;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)((uint)pFVar2->SizeInPagesX * (uint)pFVar2->SizeInPagesY));
      }
      local_res18 = uVar7;
      uVar17 = uVar6;
      uVar13 = uVar13 + 1;
      iVar18 = iVar18 + 1;
    } while ((int)uVar13 <= (int)(uint)param_1->MaxAllocatedResLevel);
  }
  return;
}

// UpdateGPUMask @ 144da4b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144da4c72) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLumenSceneData::UpdateGPUMask
          (FLumenSceneData *this,FRDGBuilder *param_1,FLumenSceneFrameTemporaries *param_2,
          FLumenViewState *param_3,FRHIGPUMask param_4)

{
  FRDGTexture **ppFVar1;
  int *piVar2;
  FBinaryHeap<unsigned_int,unsigned_int> *this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FRDGEventName *pFVar11;
  void *this_01;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FLumenSceneData::UpdateGPUMask(FRDGBuilder_&,FLumenSceneFrameTemporaries_const_&,FLumenViewState_&,FRHIGPUMask)_::_17_::<lambda_1>_>
  *pTVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStackY_1a8 [32];
  FRDGEventName local_118;
  ForElementType<FRDGTexture_*> local_100;
  int local_b8;
  int local_b4;
  <lambda_1> local_b0;
  ulonglong local_48;
  ulonglong uVar17;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((this->bViewSpecific != true) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bViewSpecific == true",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                         ,0x721,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this->bViewSpecificMaskInitialized == false) {
    (this->ViewSpecificMask).GPUMask = param_4.GPUMask;
    this->bViewSpecificMaskInitialized = true;
  }
  else {
    uVar3 = (this->ViewSpecificMask).GPUMask;
    if (uVar3 != param_4.GPUMask) {
      (this->ViewSpecificMask).GPUMask = param_4.GPUMask;
      uVar15 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      uVar16 = 0;
      bVar8 = uVar15 != 0;
      if (bVar8) {
        for (; (uVar15 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
        }
      }
      while (bVar8) {
        uVar14 = 1 << ((byte)uVar16 & 0x1f);
        if ((uVar3 & uVar14) == 0) {
          uVar6 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          uVar10 = 0x20;
          if (uVar3 != 0) {
            uVar10 = (ulonglong)uVar6;
          }
          uVar6 = this->LastCapturedPageHeap[uVar10].IndexSize;
          this_00 = this->LastCapturedPageHeap + uVar16;
          uVar17 = 0;
          uVar18 = 0;
          if (uVar6 != 0) {
            do {
              uVar16 = (uint)uVar17;
              if (uVar16 < this->LastCapturedPageHeap[uVar10].IndexSize) {
                bVar8 = *(int *)(uVar18 + (longlong)this->LastCapturedPageHeap[uVar10].HeapIndexes)
                        != -1;
              }
              else {
                bVar8 = false;
              }
              if (uVar16 < this_00->IndexSize) {
                bVar19 = *(int *)(uVar18 + (longlong)this_00->HeapIndexes) != -1;
              }
              else {
                bVar19 = false;
              }
              if ((bVar8 != bVar19) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("SourceHeap.IsPresent(Index) == DestHeap.IsPresent(Index)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                                     ,0x73f,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((uVar16 < this->LastCapturedPageHeap[uVar10].IndexSize) &&
                 (*(int *)(uVar18 + (longlong)this->LastCapturedPageHeap[uVar10].HeapIndexes) != -1)
                 ) {
                uVar4 = *(uint *)(uVar18 + (longlong)this->LastCapturedPageHeap[uVar10].Keys);
                *(uint *)(uVar18 + (longlong)this_00->Keys) = uVar4;
                uVar5 = *(uint *)(uVar18 + (longlong)this_00->HeapIndexes);
                if ((uVar5 == 0) || (this_00->Keys[this_00->Heap[uVar5 - 1 >> 1]] <= uVar4)) {
                  FBinaryHeap<unsigned_int,unsigned_int>::DownHeap(this_00,uVar5);
                }
                else {
                  FBinaryHeap<unsigned_int,unsigned_int>::UpHeap(this_00,uVar5);
                }
              }
              uVar17 = (ulonglong)(uVar16 + 1);
              uVar18 = uVar18 + 4;
            } while (uVar16 + 1 < uVar6);
          }
        }
        uVar15 = uVar15 & ~uVar14;
        uVar16 = 0;
        bVar8 = uVar15 != 0;
        if (bVar8) {
          for (; (uVar15 >> uVar16 & 1) == 0; uVar16 = uVar16 + 1) {
          }
        }
      }
      ppFVar1 = &param_2->AlbedoAtlas;
      local_b8 = 0;
      local_b4 = 9;
      if (*ppFVar1 != (FRDGTexture *)0x0) {
        iVar9 = 0;
        if ((&local_100 <= ppFVar1) && (ppFVar1 < &local_b8)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar9 = local_b8;
          if (local_b8 == local_b4) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                              (0x808,&local_100,&local_b4);
          }
        }
        local_b8 = iVar9 + 1;
        *(FRDGTexture **)local_100.InlineData[iVar9].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->OpacityAtlas;
      if (param_2->OpacityAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->NormalAtlas;
      if (param_2->NormalAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->EmissiveAtlas;
      if (param_2->EmissiveAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->DepthAtlas;
      if (param_2->DepthAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->DirectLightingAtlas;
      if (param_2->DirectLightingAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->IndirectLightingAtlas;
      if (param_2->IndirectLightingAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->RadiosityNumFramesAccumulatedAtlas;
      if (param_2->RadiosityNumFramesAccumulatedAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->FinalLightingAtlas;
      if (param_2->FinalLightingAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->DiffuseLightingAndSecondMomentHistoryAtlas;
      if (param_2->DiffuseLightingAndSecondMomentHistoryAtlas != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      ppFVar1 = &param_2->NumFramesAccumulatedHistoryAtlas;
      if (*ppFVar1 != (FRDGTexture *)0x0) {
        if (((&local_100 <= ppFVar1) && (ppFVar1 < local_100.InlineData + local_b4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                               (0x808,&local_100,&local_b4);
        }
        lVar13 = (longlong)local_b8;
        local_b8 = local_b8 + 1;
        *(FRDGTexture **)local_100.InlineData[lVar13].Pad = *ppFVar1;
      }
      iVar9 = local_b8;
      local_b0.LumenSceneData = this;
      local_b0.LumenView = param_3;
      local_b0.FrameTemporaryTextures.ArrayNum = local_b8;
      if (local_b8 == 0) {
        local_b0.FrameTemporaryTextures.ArrayMax = 9;
      }
      else {
        UE::Core::Private::ReallocForCopy<0,TFixedAllocator<9>::ForElementType<FRDGTexture_*>_>
                  (8,8,local_b8,0,&local_b0.FrameTemporaryTextures.AllocatorInstance,local_b8,
                   &local_b0.FrameTemporaryTextures.ArrayMax);
        memcpy(&local_b0.FrameTemporaryTextures,&local_100,(longlong)iVar9 << 3);
      }
      local_b0.DestGPUMask.GPUMask = param_4.GPUMask;
      local_b0.SourceGPUMask.GPUMask = uVar3;
      pFVar11 = FRDGEventName::FRDGEventName(&local_118,1,L"LumenCrossGPUTransfer");
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar11,None);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1f0,8);
      pTVar12 = TRDGEmptyLambdaPass<`FLumenSceneData::UpdateGPUMask'::__l17::<lambda_1>_>::
                TRDGEmptyLambdaPass<_FLumenSceneData::UpdateGPUMask_::__l17::<lambda_1>_>
                          (this_01,pFVar11,NeverCull,&local_b0);
      piVar2 = &(param_1->Passes).Array.ArrayMax;
      iVar9 = (param_1->Passes).Array.ArrayNum;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                          (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar2);
      }
      (param_1->Passes).Array.ArrayNum = iVar9 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar9] = (FRDGPass *)pTVar12;
      *(int *)&pTVar12->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
      FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar12);
      if (local_118.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_118.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdatePrimitiveInstanceOffset @ 144daedc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FLumenSceneData::UpdatePrimitiveInstanceOffset(FLumenSceneData *this,int param_1)

{
  if (this->bTrackAllPrimitives != false) {
    FUniqueIndexList::Add(&this->PrimitivesToUpdateMeshCards,param_1);
    return;
  }
  return;
}

// UploadPageTable @ 144db1290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLumenSceneData::UploadPageTable
          (FLumenSceneData *this,FRDGBuilder *param_1,FRDGScatterUploadBuilder *param_2,
          FLumenSceneFrameTemporaries *param_3)

{
  longlong *plVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  ulonglong uVar3;
  char cVar4;
  FRHIGPUMask FVar5;
  FRDGPooledBuffer *pFVar6;
  FRDGPooledBuffer *pFVar7;
  FRDGPooledBuffer *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FRDGScope *this_00;
  int *piVar14;
  FRDGBufferSRV *pFVar15;
  FRDGBufferUAV *pFVar16;
  FRDGBuffer *pFVar17;
  TRefCountPtr<FRDGPooledBuffer> *pTVar18;
  byte bVar19;
  undefined ***pppuVar20;
  uint uVar21;
  FPass *pFVar22;
  char cVar23;
  longlong lVar24;
  undefined1 auStackY_208 [32];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_> local_1c0;
  FRDGBufferUAVDesc local_1b0;
  undefined8 local_1a0;
  FLumenSceneFrameTemporaries *local_198;
  FRDGBufferUAVDesc local_190;
  FRDGBufferUAVDesc local_180;
  FRHIComputeCommandList *local_170;
  TRDGEventScopeGuard<FRDGScope_RHI> local_168;
  char local_158;
  FRDGBufferSRVDesc local_150;
  FRDGBufferSRVDesc local_130;
  undefined1 local_110 [16];
  FShaderParametersMetadata *local_100;
  undefined1 local_f8 [16];
  FShaderParametersMetadata *local_e8;
  uint uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  code *local_b8;
  undefined **local_a8;
  FLumenSceneData *local_a0;
  undefined ***local_90;
  code *local_88;
  undefined **local_78;
  FLumenSceneData *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  cVar4 = *(char *)((longlong)&param_1->_padding_ + 6);
  cVar23 = '\0';
  local_158 = '\0';
  local_198 = param_3;
  if ((cVar4 != '\0') && ((cVar4 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_d0 = 0;
      uStack_cc = 0;
      ::Desc._12_8_ = ZEXT48(uStack_d4);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_LumenUploadPage;
      ::Desc._padding_ = (longlong)u_LumenUploadPage;
      ::Desc._padding_._0_4_ = 0x209;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FLumenSceneData::UploadPageTable'::__l7::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_1c0._Myfirst._Val = &::Desc;
    local_168.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_168.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_1c0);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    cVar23 = '\x01';
    local_158 = '\x01';
  }
  local_170 = (FRHIComputeCommandList *)param_1->_padding_;
  FVar5.GPUMask = *(uint *)&local_170->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (local_170,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  if (this->bReuploadSceneRequest != false) {
    pTVar2 = &this->PageTableIndicesToUpdateInBuffer;
    piVar14 = &(this->PageTable).SpanAllocator.PeakMaxSize;
    if ((this->PageTable).SpanAllocator.bGrowOnly == false) {
      piVar14 = &(this->PageTable).SpanAllocator.CurrentMaxSize;
    }
    iVar13 = (this->PageTableIndicesToUpdateInBuffer).ArrayNum;
    uVar21 = *piVar14;
    if (iVar13 < (int)uVar21) {
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar21 - iVar13,&pTVar2->AllocatorInstance,
                          &(this->PageTableIndicesToUpdateInBuffer).ArrayNum,
                          &(this->PageTableIndicesToUpdateInBuffer).ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 4,0,
             (longlong)(int)(uVar21 - iVar13) << 2);
    }
    else {
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
      }
      if ((int)uVar21 < iVar13) {
        uVar12 = iVar13 - uVar21;
        if (((int)(uVar21 | uVar12) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar12 != 0) {
          _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar21 * 4;
          iVar13 = ((this->PageTableIndicesToUpdateInBuffer).ArrayNum - uVar21) - uVar12;
          if (iVar13 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar12 * 4,(longlong)iVar13 << 2);
          }
          piVar14 = &(this->PageTableIndicesToUpdateInBuffer).ArrayNum;
          *piVar14 = *piVar14 - uVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar2->AllocatorInstance,*piVar14,
                     &(this->PageTableIndicesToUpdateInBuffer).ArrayMax);
        }
      }
    }
    uVar21 = 0;
    lVar24 = 0;
    while( true ) {
      piVar14 = &(this->PageTable).SpanAllocator.PeakMaxSize;
      if ((this->PageTable).SpanAllocator.bGrowOnly == false) {
        piVar14 = &(this->PageTable).SpanAllocator.CurrentMaxSize;
      }
      param_3 = local_198;
      cVar23 = local_158;
      if (*piVar14 <= (int)uVar21) break;
      uVar12 = 0;
      if ((int)uVar21 < (this->PageTableIndicesToUpdateInBuffer).ArrayNum) {
        uVar12 = ~uVar21 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(uint *)((pTVar2->AllocatorInstance).Data + lVar24) = uVar21;
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + 4;
    }
  }
  piVar14 = &(this->PageTable).SpanAllocator.PeakMaxSize;
  if ((this->PageTable).SpanAllocator.bGrowOnly == false) {
    piVar14 = &(this->PageTable).SpanAllocator.CurrentMaxSize;
  }
  uVar21 = (this->PageTableIndicesToUpdateInBuffer).ArrayNum;
  iVar13 = 1;
  if (*piVar14 != 0) {
    iVar13 = *piVar14;
  }
  uVar3 = (ulonglong)(iVar13 - 1) * 2 + 1;
  lVar24 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
    }
  }
  uVar12 = 1 << ((byte)lVar24 & 0x1f);
  if (uVar12 < 0x400) {
    uVar12 = 0x400;
  }
  local_1c0._padding_ =
       (longlong)
       ResizeByteAddressBufferIfNeeded(param_1,&this->PageTableBuffer,uVar12 * 8,L"Lumen.PageTable")
  ;
  local_150._padding_._4_4_ = 0;
  local_150._padding_ = 0;
  local_150._padding_._0_4_ = 0xffffffff;
  local_150._padding_._0_1_ = 0;
  if (((((FRDGBuffer *)local_1c0._padding_)->Desc).Usage & DrawIndirect) != None) {
    local_150._padding_._0_1_ = 0x1c;
  }
  local_150.Buffer = (FRDGBuffer *)local_1c0._padding_;
  pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_150);
  param_3->PageTableBufferSRV = pFVar15;
  if (0 < (int)uVar21) {
    local_a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::`16'::<lambda_2>,0,0>::
                _vftable_;
    local_90 = (undefined ***)0x0;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLumenSceneData::UploadPageTable'::__l16::<lambda_2>,void,FRDGScatterUploader_&>
               ::Call;
    local_a0 = this;
    local_1c0._padding_ =
         (longlong)
         FRDGAsyncScatterUploadBuffer::Begin
                   (&this->PageTableUploadBuffer,param_1,(FRDGViewableResource *)local_1c0._padding_
                    ,uVar21,8,L"Lumen.PageTableUpload");
    piVar14 = &(param_2->Passes).ArrayMax;
    iVar13 = (param_2->Passes).ArrayNum;
    if (iVar13 == *piVar14) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGScatterUploadBuilder::FPass>_>
                         (0x1040,(ForElementType<FRDGScatterUploadBuilder::FPass> *)param_2,piVar14)
      ;
    }
    (param_2->Passes).ArrayNum = iVar13 + 1;
    pFVar22 = (param_2->Passes).AllocatorInstance.Data + iVar13;
    pFVar22->UploadBuffer = &this->PageTableUploadBuffer;
    pFVar22->Uploader = (FRDGScatterUploader *)local_1c0._padding_;
    *(code **)&pFVar22->Function = local_b8;
    *(undefined8 *)&(pFVar22->Function).field_0x28 = 0;
    if (*(longlong *)&pFVar22->Function != 0) {
      pppuVar20 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar20 = local_90;
      }
      (*(code *)**pppuVar20)();
    }
    param_2->MaxBytes = param_2->MaxBytes + uVar21 * 8;
    if (local_b8 != (code *)0x0) {
      pppuVar20 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar20 = local_90;
      }
      (*(code *)(*pppuVar20)[2])();
    }
  }
  pFVar6 = (this->CardPageBuffer).Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
    UNLOCK();
  }
  local_1c0._padding_ =
       (longlong)
       ResizeStructuredBufferIfNeeded
                 (param_1,&this->CardPageBuffer,uVar12 * 0x50,L"Lumen.PageBuffer");
  local_130._padding_._4_4_ = 0;
  local_130._padding_ = 0;
  local_130._padding_._0_4_ = 0xffffffff;
  local_130._padding_._0_1_ = 0;
  if (((((FRDGBuffer *)local_1c0._padding_)->Desc).Usage & DrawIndirect) != None) {
    local_130._padding_._0_1_ = 0x1c;
  }
  local_130.Buffer = (FRDGBuffer *)local_1c0._padding_;
  pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_130);
  local_1b0._padding_._1_1_ = 0;
  local_198->CardPageBufferSRV = pFVar15;
  local_1b0._padding_._2_1_ = 0;
  local_1b0.Buffer = (FRDGBuffer *)local_1c0._padding_;
  local_1b0._padding_._0_1_ = 0;
  if ((((FRDGBufferDesc *)(local_1c0._padding_ + 0x80))->Usage & DrawIndirect) != None) {
    local_1b0._padding_._0_1_ = 0x1c;
  }
  pFVar16 = FRDGBuilder::CreateUAV(param_1,&local_1b0,None);
  local_198->CardPageBufferUAV = pFVar16;
  if (0 < (int)uVar21) {
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FLumenSceneData::UploadPageTable'::`20'::<lambda_3>,0,0>::
                _vftable_;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLumenSceneData::UploadPageTable'::__l20::<lambda_3>,void,FRDGScatterUploader_&>
               ::Call;
    local_60 = (undefined ***)0x0;
    local_70 = this;
    local_1c0._padding_ =
         (longlong)
         FRDGAsyncScatterUploadBuffer::Begin
                   (&this->CardPageUploadBuffer,param_1,(FRDGViewableResource *)local_1c0._padding_,
                    uVar21,0x50,L"Lumen.CardPageUploadBuffer");
    piVar14 = &(param_2->Passes).ArrayMax;
    iVar13 = (param_2->Passes).ArrayNum;
    if (iVar13 == *piVar14) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRDGScatterUploadBuilder::FPass>_>
                         (0x1040,(ForElementType<FRDGScatterUploadBuilder::FPass> *)param_2,piVar14)
      ;
    }
    (param_2->Passes).ArrayNum = iVar13 + 1;
    pFVar22 = (param_2->Passes).AllocatorInstance.Data + iVar13;
    pFVar22->UploadBuffer = &this->CardPageUploadBuffer;
    pFVar22->Uploader = (FRDGScatterUploader *)local_1c0._padding_;
    *(code **)&pFVar22->Function = local_88;
    *(undefined8 *)&(pFVar22->Function).field_0x28 = 0;
    if (*(longlong *)&pFVar22->Function != 0) {
      pppuVar20 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar20 = local_60;
      }
      (*(code *)**pppuVar20)();
    }
    param_2->MaxBytes = param_2->MaxBytes + uVar21 * 0x50;
    if (local_88 != (code *)0x0) {
      pppuVar20 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar20 = local_60;
      }
      (*(code *)(*pppuVar20)[2])();
    }
  }
  if (pFVar6 != (this->CardPageBuffer).Reference) {
    local_1b0.Buffer = (FRDGBuffer *)CONCAT44(local_1b0.Buffer._4_4_,0x10109);
    local_1b0._padding_._0_1_ = 4;
    local_1b0._padding_._1_1_ = 0;
    local_1b0._padding_._2_1_ = 0;
    local_1b0._padding_._3_1_ = 0;
    local_110._4_4_ = uVar12;
    local_110._0_4_ = 4;
    local_1a0 = 0;
    local_110._8_8_ = local_1b0.Buffer;
    local_100 = (FShaderParametersMetadata *)0x0;
    local_1b0._padding_._4_4_ = uVar12;
    pFVar17 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)local_110,L"Lumen.CardPageLastUsedBuffer",None);
    local_1b0.Buffer = (FRDGBuffer *)CONCAT44(local_1b0.Buffer._4_4_,0x10109);
    local_1b0._padding_._0_1_ = 4;
    local_1b0._padding_._1_1_ = 0;
    local_1b0._padding_._2_1_ = 0;
    local_1b0._padding_._3_1_ = 0;
    local_f8._4_4_ = uVar12;
    local_f8._0_4_ = 4;
    local_1a0 = 0;
    local_f8._8_8_ = local_1b0.Buffer;
    local_e8 = (FShaderParametersMetadata *)0x0;
    local_1b0._padding_._4_4_ = uVar12;
    local_1c0._padding_ =
         (longlong)
         FRDGBuilder::CreateBuffer
                   (param_1,(FRDGBufferDesc *)local_f8,L"Lumen.CardPageHighResLastUsedBuffer",None);
    local_190._padding_._2_1_ = 0;
    bVar19 = 0;
    if (((pFVar17->Desc).Usage & DrawIndirect) != None) {
      bVar19 = 0x1c;
    }
    local_190._padding_._0_2_ = (ushort)bVar19;
    local_190.Buffer = pFVar17;
    pFVar16 = FRDGBuilder::CreateUAV(param_1,&local_190,None);
    AddClearUAVPass(param_1,pFVar16,0,Compute);
    local_180.Buffer = (FRDGBuffer *)local_1c0._padding_;
    local_180._padding_._2_1_ = 0;
    bVar19 = 0;
    if ((((FRDGBufferDesc *)(local_1c0._padding_ + 0x80))->Usage & DrawIndirect) != None) {
      bVar19 = 0x1c;
    }
    local_180._padding_._0_2_ = (ushort)bVar19;
    pFVar16 = FRDGBuilder::CreateUAV(param_1,&local_180,None);
    AddClearUAVPass(param_1,pFVar16,0,Compute);
    pTVar18 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar17);
    pFVar7 = pTVar18->Reference;
    pFVar8 = (this->CardPageLastUsedBuffer).Reference;
    if (pFVar8 != pFVar7) {
      (this->CardPageLastUsedBuffer).Reference = pFVar7;
      if (pFVar7 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar8 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar8->_padding_;
        LOCK();
        lVar24 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((((int)lVar24 == 1) && (plVar1 != (longlong *)0x0)) &&
           (pFVar8 != (FRDGPooledBuffer *)0x0)) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
    }
    pTVar18 = FRDGBuilder::ConvertToExternalBuffer(param_1,(FRDGBuffer *)local_1c0._padding_);
    pFVar7 = pTVar18->Reference;
    pFVar8 = (this->CardPageHighResLastUsedBuffer).Reference;
    if (pFVar8 != pFVar7) {
      (this->CardPageHighResLastUsedBuffer).Reference = pFVar7;
      if (pFVar7 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar8 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar8->_padding_;
        LOCK();
        lVar24 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((((int)lVar24 == 1) && (plVar1 != (longlong *)0x0)) &&
           (pFVar8 != (FRDGPooledBuffer *)0x0)) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
    }
  }
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar24 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar24 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  FRHIComputeCommandList::SetGPUMask(local_170,FVar5);
  if (cVar23 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_168);
  }
  return;
}

// AllocateCardAtlases @ 144e000b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLumenSceneData::AllocateCardAtlases
          (FLumenSceneData *this,FRDGBuilder *param_1,FLumenSceneFrameTemporaries *param_2,
          FSceneViewFamily *param_3)

{
  TIntPoint<int>_u_0 TVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  EPixelFormat EVar5;
  bool bVar6;
  FRDGTexture *pFVar7;
  TIntPoint<int> TVar8;
  FRDGBuffer *pFVar9;
  undefined1 auStackY_118 [32];
  FRDGBufferDesc local_e0;
  FRDGBufferDesc local_c8;
  FSceneViewFamily *local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [20];
  int local_8c;
  undefined4 local_88;
  TIntPoint<int>_u_0 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  TVar1 = (TIntPoint<int>_u_0)*(TIntPoint<int>_u_0 *)&(this->PhysicalAtlasSize).field0_0x0._s_0;
  local_b0 = param_3;
  pFVar7 = CreateCardAtlas(param_1,(TIntPoint<int>)TVar1,this->PhysicalAtlasCompression,Albedo,
                           L"Lumen.SceneAlbedo");
  param_2->AlbedoAtlas = pFVar7;
  pFVar7 = CreateCardAtlas(param_1,(TIntPoint<int>)TVar1,this->PhysicalAtlasCompression,Opacity,
                           L"Lumen.SceneOpacity");
  param_2->OpacityAtlas = pFVar7;
  pFVar7 = CreateCardAtlas(param_1,(TIntPoint<int>)TVar1,this->PhysicalAtlasCompression,Depth,
                           L"Lumen.SceneDepth");
  param_2->DepthAtlas = pFVar7;
  pFVar7 = CreateCardAtlas(param_1,(TIntPoint<int>)TVar1,this->PhysicalAtlasCompression,Normal,
                           L"Lumen.SceneNormal");
  param_2->NormalAtlas = pFVar7;
  pFVar7 = CreateCardAtlas(param_1,(TIntPoint<int>)TVar1,this->PhysicalAtlasCompression,Emissive,
                           L"Lumen.SceneEmissive");
  param_2->EmissiveAtlas = pFVar7;
  uVar4 = FClearValueBinding::Black.Value.Color[3];
  local_c8._0_8_ = FClearValueBinding::Black._0_8_;
  local_c8._8_8_ = FClearValueBinding::Black.Value._4_8_;
  EVar5 = Lumen::GetDirectLightingAtlasFormat();
  local_5c = 1;
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_88 = 0;
  local_78 = (uint)EVar5 << 0x18;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_a8 = (undefined1  [8])0x20009;
  local_a0._0_4_ = local_c8.BytesPerElement;
  local_a0._4_4_ = local_c8.NumElements;
  local_a0._8_8_ = local_c8._8_8_;
  local_a0._16_4_ = uVar4;
  local_7c = 0x10001;
  local_78._0_2_ = 0x101;
  local_74 = 0xff00;
  local_84 = TVar1;
  pFVar7 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_a8,L"Lumen.SceneDirectLighting",None);
  param_2->DirectLightingAtlas = pFVar7;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  uVar4 = FClearValueBinding::Black.Value.Color[3];
  uVar3 = FClearValueBinding::Black.Value._4_8_;
  uVar2 = FClearValueBinding::Black._0_8_;
  EVar5 = Lumen::GetIndirectLightingAtlasFormat();
  TVar8 = GetRadiosityAtlasSize(this);
  local_5c = 1;
                    /* WARNING: Load size is inaccurate */
  local_84._s_0 = *TVar8.field0_0x0;
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_88 = 0;
  local_78 = (uint)EVar5 << 0x18;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_a8 = (undefined1  [8])0x20009;
  local_a0._0_8_ = uVar2;
  local_a0._8_8_ = uVar3;
  local_a0._16_4_ = uVar4;
  local_7c = 0x10001;
  local_78._0_2_ = 0x101;
  local_74 = 0xff00;
  pFVar7 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_a8,L"Lumen.SceneIndirectLighting",None);
  param_2->IndirectLightingAtlas = pFVar7;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  uVar4 = FClearValueBinding::Black.Value.Color[3];
  uVar3 = FClearValueBinding::Black.Value._4_8_;
  uVar2 = FClearValueBinding::Black._0_8_;
  TVar8 = GetRadiosityAtlasSize(this);
  local_a8 = (undefined1  [8])0x20009;
                    /* WARNING: Load size is inaccurate */
  local_84._s_0 = *TVar8.field0_0x0;
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a0._16_4_ = uVar4;
  local_a0._0_8_ = uVar2;
  local_a0._8_8_ = uVar3;
  local_88 = 0;
  local_7c = 0x10001;
  local_78 = 0x47000101;
  local_74 = 0xff00;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 1;
  pFVar7 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_a8,L"Lumen.SceneNumFramesAccumulatedAtlas",
                      None);
  param_2->RadiosityNumFramesAccumulatedAtlas = pFVar7;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  uVar4 = FClearValueBinding::Black.Value.Color[3];
  uVar3 = FClearValueBinding::Black.Value._4_8_;
  uVar2 = FClearValueBinding::Black._0_8_;
  local_78._3_1_ = Lumen::GetLightingDataFormat();
  local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a8 = (undefined1  [8])0x20009;
  local_a0._0_8_ = uVar2;
  local_a0._8_8_ = uVar3;
  local_a0._16_4_ = uVar4;
  local_88 = 0;
  local_7c = 0x10001;
  local_78._0_3_ = 0x101;
  local_74 = 0xff00;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 1;
  local_84 = TVar1;
  pFVar7 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_a8,L"Lumen.SceneFinalLighting",None);
  param_2->FinalLightingAtlas = pFVar7;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  local_e0._12_4_ = SUB84((ulonglong)uVar3 >> 0x20,0);
  local_c8.Metadata = (FShaderParametersMetadata *)0x0;
  local_c8.BytesPerElement = 4;
  local_c8.NumElements =
       ((int)(TVar1._4_4_ + (TVar1._4_4_ >> 0x1f & 7U)) >> 3) *
       ((int)((TVar1._0_4_ >> 0x1f & 7U) + TVar1._0_4_) >> 3) * 8;
  local_c8.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_c8._12_4_ = local_e0._12_4_;
  pFVar9 = FRDGBuilder::CreateBuffer
                     (param_1,&local_c8,L"Lumen.TileShadowDownsampleFactorAtlas",None);
  param_2->TileShadowDownsampleFactorAtlas = pFVar9;
  bVar6 = LumenSceneDirectLighting::UseStochasticLighting(local_b0);
  if (bVar6) {
    local_a0._16_4_ = FClearValueBinding::Black.Value.Color[3];
    local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_a8 = (undefined1  [8])0x20009;
    local_a0._0_8_ = FClearValueBinding::Black._0_8_;
    local_a0._8_8_ = FClearValueBinding::Black.Value._4_8_;
    local_88 = 0;
    local_7c = 0x10001;
    local_78 = 0xa000101;
    local_74 = 0xff00;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 1;
    local_84 = TVar1;
    pFVar7 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)local_a8,
                        L"Lumen.SceneDirectLighting.DiffuseLightingAndSecondMomentHistory",None);
    param_2->DiffuseLightingAndSecondMomentHistoryAtlas = pFVar7;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    local_a0._16_4_ = FClearValueBinding::Black.Value.Color[3];
    local_8c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_a8 = (undefined1  [8])0x20009;
    local_a0._0_8_ = FClearValueBinding::Black._0_8_;
    local_a0._8_8_ = FClearValueBinding::Black.Value._4_8_;
    local_88 = 0;
    local_7c = 0x10001;
    local_78 = 0x3000101;
    local_74 = 0xff00;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_5c = 1;
    local_84 = TVar1;
    pFVar7 = FRDGBuilder::CreateTexture
                       (param_1,(FRDGTextureDesc *)local_a8,
                        L"Lumen.SceneDirectLighting.NumFramesAccumulatedHistory",None);
    param_2->NumFramesAccumulatedHistoryAtlas = pFVar7;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return;
}

// UpdateSurfaceCacheFeedback @ 144e39d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FLumenSceneData::UpdateSurfaceCacheFeedback
          (FLumenSceneData *this,FFeedbackData *param_1,
          TArray<UE::Math::TVector<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2,TArray<FSurfaceCacheRequest,TSizedDefaultAllocator<32>_> *param_3,
          FViewFamilyInfo *param_4,int *param_5)

{
  ForElementType<UE::Math::TVector<double>_> FVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint *puVar5;
  ForElementType<unsigned_int> FVar6;
  FScriptContainerElement *pFVar7;
  TIntPoint<int>_u_0_s_0 TVar8;
  code *pcVar9;
  double dVar10;
  FLumenSurfaceMipMap *pFVar11;
  float fVar12;
  float fVar13;
  TArray<FSurfaceCacheRequest,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  short sVar16;
  longlong lVar17;
  int *piVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  FLumenCard *this_00;
  uint uVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  ForElementType<UE::Math::TVector<double>_> FVar25;
  ForElementType<UE::Math::TVector<double>_> FVar26;
  int iVar27;
  uint uVar28;
  ushort uVar29;
  uint uVar30;
  bool bVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  uint uVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auStackY_1d8 [32];
  undefined1 local_187 [3];
  uint local_184;
  uint local_180;
  undefined2 uStack_17c;
  ushort uStack_17a;
  float local_178;
  uint local_170;
  ForElementType<UE::Math::TVector<double>_> local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_150;
  TArray<FSurfaceCacheRequest,TSizedDefaultAllocator<32>_> *local_148;
  int *local_140;
  FFeedbackData *local_138;
  double local_118;
  FLumenMipMapDesc local_108;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_140 = param_5;
  bVar31 = -1 < CpuChannel->Enabled;
  local_168 = (ForElementType<UE::Math::TVector<double>_>)param_2;
  local_148 = param_3;
  local_138 = param_1;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId303,"UpdateSurfaceCacheFeedback",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSurfaceCacheFeedback.cpp"
               ,0x12f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId303);
  }
  puVar5 = param_1->Data;
  this->NumHiResPagesToAdd = 0;
  fVar13 = __real_451c4000;
  fVar12 = __real_7f7fffff;
  if (puVar5 != (uint *)0x0) {
    local_170 = param_1->NumElements - 1;
    if ((int)*puVar5 < (int)local_170) {
      local_170 = *puVar5;
    }
    if (0 < (int)local_170) {
      iVar21 = 0;
      uVar40 = (uint)__xmm_80000000000000008000000000000000;
      uVar41 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      do {
        uVar23 = 3;
        uVar22 = param_1->Data[iVar21 * 2 + 2];
        uVar4 = param_1->Data[iVar21 * 2 + 3];
        uVar28 = uVar22 & 0xffffff;
        uVar37 = 0xb;
        if (uVar22 >> 0x18 < 0xb) {
          uVar37 = uVar22 >> 0x18;
        }
        if (3 < uVar37) {
          uVar23 = (ulonglong)(ushort)uVar37;
        }
        uVar30 = uVar4 >> 8 & 0xff;
        local_184 = (uint)uVar23;
        if (GLumenSurfaceCacheFeedbackFeedbackMinPageHits < (float)(uVar4 >> 0x10)) {
          bVar15 = (this->Cards).SpanAllocator.bGrowOnly;
          lVar17 = 0x40;
          if (bVar15 == false) {
            lVar17 = 0x3c;
          }
          if ((int)uVar28 <
              *(int *)((longlong)(&(this->Cards).AllocatedElementsBitArray.AllocatorInstance + -1) +
                      lVar17)) {
            piVar18 = &(this->Cards).SpanAllocator.PeakMaxSize;
            if (bVar15 == false) {
              piVar18 = &(this->Cards).SpanAllocator.CurrentMaxSize;
            }
            if ((int)uVar28 < *piVar18) {
              if (((this->Cards).AllocatedElementsBitArray.NumBits <= (int)uVar28) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar6 = (this->Cards).AllocatedElementsBitArray.AllocatorInstance.SecondaryData;
              FVar24 = (ForElementType<unsigned_int>)&(this->Cards).AllocatedElementsBitArray;
              if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                FVar24 = FVar6;
              }
              bVar15 = (*(uint *)((longlong)FVar24 + (ulonglong)(uVar28 >> 5) * 4) >>
                        (uVar22 & 0x1f) & 1) != 0;
              uVar23 = (ulonglong)local_184;
            }
            else {
              bVar15 = false;
            }
            if (bVar15) {
              if (((this->Cards).Elements.ArrayNum <= (int)uVar28) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar23 = uVar23 & 0xffff;
              this_00 = (FLumenCard *)
                        ((this->Cards).Elements.AllocatorInstance.Data + (ulonglong)uVar28 * 400);
              FLumenCard::GetMipMapDesc(this_00,(uint)uVar23,&local_108);
              uVar22 = local_108.SizeInPages.field0_0x0._s_0.X - 1U;
              if ((int)(uVar4 & 0xff) < (int)(local_108.SizeInPages.field0_0x0._s_0.X - 1U)) {
                uVar22 = uVar4 & 0xff;
              }
              uVar38 = local_108.SizeInPages.field0_0x0._s_0.Y - 1U;
              if ((int)uVar30 < (int)(local_108.SizeInPages.field0_0x0._s_0.Y - 1U)) {
                uVar38 = uVar30;
              }
              sVar19 = 0;
              if (0 < (int)uVar38) {
                sVar19 = (short)uVar38;
              }
              sVar16 = 0;
              if (0 < (int)uVar22) {
                sVar16 = (short)uVar22;
              }
              uVar29 = sVar19 * (short)local_108.SizeInPages.field0_0x0._s_0.X + sVar16;
              if ((uint)uVar23 < 3) {
LAB_144e3a0bf:
                bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                                    ,0x158,L"");
                if (bVar15) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
              }
              else {
                uVar22 = 3;
                if (3 < uVar37) {
                  uVar22 = uVar37;
                }
                if (8 < (ulonglong)uVar22 - 3) goto LAB_144e3a0bf;
              }
              pFVar11 = this_00->SurfaceMipMaps + (uVar23 - 3);
              local_158._0_2_ = pFVar11->PageTableSpanSize;
              local_158._2_1_ = pFVar11->bLocked;
              local_158._3_1_ = pFVar11->field_0xb;
              pFVar11 = this_00->SurfaceMipMaps + (uVar23 - 3);
              local_160._0_1_ = pFVar11->SizeInPagesX;
              local_160._1_1_ = pFVar11->SizeInPagesY;
              local_160._2_1_ = pFVar11->ResLevelX;
              local_160._3_1_ = pFVar11->ResLevelY;
              local_160._4_4_ = pFVar11->PageTableSpanOffset;
              if (((undefined2)local_158 != 0) &&
                 (uVar22 = local_160._4_4_ + (uint)uVar29, -1 < (int)uVar22)) {
                uVar37 = 0;
                if ((int)uVar22 < (this->PageTable).Elements.ArrayNum) {
                  uVar37 = ~uVar22 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar7 = (this->PageTable).Elements.AllocatorInstance.Data;
                if ((-1 < *(int *)(pFVar7 + (longlong)(int)uVar22 * 0x50)) &&
                   (-1 < *(int *)(pFVar7 + (longlong)(int)uVar22 * 0x50 + 4))) {
                  if (local_158._2_1_ == '\0') {
                    FBinaryHeap<unsigned_int,unsigned_int>::Update
                              (&this->UnlockedAllocationHeap,(this->SurfaceCacheFeedback).FrameIndex
                               ,uVar22);
                  }
                  goto LAB_144e3a4ff;
                }
              }
              iVar27 = *(int *)((longlong)local_168 + 0x38);
              FVar25 = local_168;
              if (*(ForElementType<UE::Math::TVector<double>_> *)((longlong)local_168 + 0x30) !=
                  (ForElementType<UE::Math::TVector<double>_>)0x0) {
                FVar25 = *(ForElementType<UE::Math::TVector<double>_> *)((longlong)local_168 + 0x30)
                ;
              }
              FVar1 = (ForElementType<UE::Math::TVector<double>_>)
                      ((longlong)FVar25 + (longlong)iVar27 * 0x18);
              FVar26 = local_168;
              fVar39 = fVar12;
              while( true ) {
                if (*(int *)((longlong)FVar26 + 0x38) != iVar27) {
                  local_187[0] = 0;
                  `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(local_187);
                  FVar26 = local_168;
                }
                pTVar14 = local_148;
                if (FVar25 == FVar1) break;
                local_118 = *(double *)((longlong)FVar25 + 0x10);
                dVar32 = (this_00->WorldOBB).Extent.field0_0x0._s_0.Z;
                dVar33 = *(double *)FVar25 - (this_00->WorldOBB).Origin.field0_0x0._s_0.X;
                dVar34 = local_118 - (this_00->WorldOBB).Origin.field0_0x0._s_0.Z;
                dVar35 = *(double *)((longlong)FVar25 + 8) -
                         (this_00->WorldOBB).Origin.field0_0x0._s_0.Y;
                uVar30 = SUB84(dVar32,0) ^ uVar40;
                uVar38 = (uint)((ulonglong)dVar32 >> 0x20) ^ uVar41;
                dVar10 = dVar35 * (this_00->WorldOBB).AxisX.field0_0x0._s_0.Y +
                         dVar33 * (this_00->WorldOBB).AxisX.field0_0x0._s_0.X +
                         dVar34 * (this_00->WorldOBB).AxisX.field0_0x0._s_0.Z;
                dVar2 = (this_00->WorldOBB).Extent.field0_0x0._s_0.X;
                dVar36 = dVar35 * (this_00->WorldOBB).AxisZ.field0_0x0._s_0.Y +
                         dVar33 * (this_00->WorldOBB).AxisZ.field0_0x0._s_0.X +
                         dVar34 * (this_00->WorldOBB).AxisZ.field0_0x0._s_0.Z;
                dVar3 = (this_00->WorldOBB).Extent.field0_0x0._s_0.Y;
                uVar22 = SUB84(dVar2,0) ^ uVar40;
                uVar37 = (uint)((ulonglong)dVar2 >> 0x20) ^ uVar41;
                dVar35 = dVar35 * (this_00->WorldOBB).AxisY.field0_0x0._s_0.Y +
                         dVar33 * (this_00->WorldOBB).AxisY.field0_0x0._s_0.X +
                         dVar34 * (this_00->WorldOBB).AxisY.field0_0x0._s_0.Z;
                dVar33 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar41,
                                          SUB84(dVar3,0) ^ uVar40);
                dVar34 = 0.0;
                if ((double)CONCAT44(uVar37,uVar22) <= dVar10) {
                  if (dVar2 < dVar10) goto LAB_144e3a2dd;
                }
                else {
                  dVar2 = (double)CONCAT44(uVar37,uVar22);
LAB_144e3a2dd:
                  dVar34 = (dVar10 - dVar2) * (dVar10 - dVar2);
                }
                if ((dVar35 < dVar33) || (dVar33 = dVar3, dVar3 < dVar35)) {
                  dVar34 = dVar34 + (dVar35 - dVar33) * (dVar35 - dVar33);
                }
                if ((double)CONCAT44(uVar38,uVar30) <= dVar36) {
                  if (dVar32 < dVar36) goto LAB_144e3a319;
                }
                else {
                  dVar32 = (double)CONCAT44(uVar38,uVar30);
LAB_144e3a319:
                  dVar34 = dVar34 + (dVar36 - dVar32) * (dVar36 - dVar32);
                }
                FVar25 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar25 + 0x18);
                dVar32 = (double)fVar39;
                if (dVar34 <= (double)fVar39) {
                  dVar32 = dVar34;
                }
                fVar39 = (float)dVar32;
              }
              iVar27 = 0x100;
              if (GLumenSurfaceCacheFeedbackTileSize < 0x100) {
                iVar27 = GLumenSurfaceCacheFeedbackTileSize;
              }
              iVar20 = 1;
              if (1 < iVar27) {
                iVar20 = iVar27;
              }
              iVar27 = 1;
              if (iVar20 != 0) {
                iVar27 = iVar20;
              }
              uVar23 = (ulonglong)(iVar27 - 1) * 2 + 1;
              lVar17 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar27 = 1 << ((byte)lVar17 & 0x1f);
              local_150 = (undefined4)lVar17;
              TVar8 = (param_4->SceneTexturesConfig).Extent.field0_0x0._s_0;
              pFVar7 = (local_148->AllocatorInstance).Data;
              uStack_17c = (undefined2)local_184;
              fVar39 = SQRT(fVar39) +
                       (__real_3f800000 -
                       (float)(uVar4 >> 0x10) /
                       (float)(uint)(((TVar8.X + -1 + iVar27) / iVar27) *
                                    ((TVar8.Y + -1 + iVar27) / iVar27))) * fVar13 + fVar13;
              local_180 = uVar28;
              uStack_17a = uVar29;
              local_178 = fVar39;
              if (((pFVar7 <= (FScriptContainerElement *)&local_180) &&
                  ((FScriptContainerElement *)&local_180 <
                   pFVar7 + (longlong)local_148->ArrayMax * 0xc)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar27 = pTVar14->ArrayNum;
              if (iVar27 == pTVar14->ArrayMax) {
                iVar27 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x40c,&pTVar14->AllocatorInstance,&pTVar14->ArrayMax);
              }
              pTVar14->ArrayNum = iVar27 + 1;
              pFVar7 = (pTVar14->AllocatorInstance).Data;
              *(ulonglong *)(pFVar7 + (longlong)iVar27 * 0xc) =
                   CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
              *(float *)(pFVar7 + (longlong)iVar27 * 0xc + 8) = local_178;
              uVar22 = Lumen::GetMeshCardDistanceBin(fVar39);
              local_140[uVar22] = local_140[uVar22] + 1;
              if ((uStack_17a == 0xffff) &&
                 (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<2598505636996055417>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSurfaceCacheFeedback.cpp"
                                      ,0x179,"!Request.IsLockedMip()"), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              this->NumHiResPagesToAdd = this->NumHiResPagesToAdd + 1;
            }
          }
        }
LAB_144e3a4ff:
        iVar21 = iVar21 + 1;
        param_1 = local_138;
      } while (iVar21 < (int)local_170);
    }
  }
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetGPUSizeBytes @ 1454f3f10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FLumenSceneData::GetGPUSizeBytes(FLumenSceneData *this,bool param_1)

{
  int iVar1;
  FRDGPooledBuffer *pFVar2;
  FRHIGPUBufferReadback *this_00;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong64 uVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  ulong64 uVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  ulong64 uVar18;
  ulong64 uVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  ulong64 uVar22;
  ulong64 uVar23;
  ulong64 uVar24;
  ulong64 uVar25;
  ulong64 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  ulong64 uVar32;
  FName local_res8;
  uint local_res10 [2];
  FScriptContainerElement *local_res18;
  uint local_res20;
  FString local_60 [2];
  
  pFVar2 = (this->PageTableBuffer).Reference;
  uVar12 = 0;
  uVar28 = 0;
  uVar27 = uVar28;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar27 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar27 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar30 = (this->SurfaceCacheFeedback).ReadbackBuffers.AllocatorInstance.Data;
  iVar1 = (this->SurfaceCacheFeedback).ReadbackBuffers.ArrayNum;
  local_res18 = pFVar30 + (longlong)iVar1 * 8;
  uVar32 = uVar12;
  while( true ) {
    pFVar3 = local_res18;
    if ((this->SurfaceCacheFeedback).ReadbackBuffers.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRHIGPUBufferReadback_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar30 == pFVar3) break;
    this_00 = *(FRHIGPUBufferReadback **)pFVar30;
    uVar10 = uVar12;
    if (this_00 != (FRHIGPUBufferReadback *)0x0) {
      uVar10 = FRHIGPUBufferReadback::GetGPUSizeBytes(this_00);
    }
    if (((param_1) && (uVar10 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      local_res8 = *(FName *)(this_00->_padding_ + 0x1c);
      ::FName::ToString(&local_res8,local_60);
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb87e0,
                 (FLogCategoryBase *)&LogRenderer);
      if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
      }
    }
    uVar32 = uVar32 + uVar10;
    pFVar30 = pFVar30 + 8;
  }
  pFVar2 = (this->CardPageHighResLastUsedBuffer).Reference;
  uVar11 = uVar12;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar11 = (ulonglong)((pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement);
  }
  local_res20 = (uint)uVar11;
  if (((param_1) && (local_res20 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->CardPageLastUsedBuffer).Reference;
  uVar11 = uVar12;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar11 = (ulonglong)((pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement);
  }
  local_res18 = (FScriptContainerElement *)CONCAT44(local_res18._4_4_,(int)uVar11);
  if (((param_1) && ((int)uVar11 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->CardPageBuffer).Reference;
  uVar11 = uVar12;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar11 = (ulonglong)((pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement);
  }
  local_res8.ComparisonIndex.Value = (uint)uVar11;
  if (((param_1) && ((uint)uVar11 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->SceneInstanceIndexToMeshCardsIndexBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar12 = (ulong64)((pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement);
  }
  local_res10[0] = (uint)uVar12;
  if (((param_1) && (local_res10[0] != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->HeightfieldBuffer).Reference;
  uVar29 = uVar28;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar29 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar29 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->MeshCardsBuffer).Reference;
  uVar31 = uVar28;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar31 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar31 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar2 = (this->CardBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    uVar28 = (pFVar2->Desc).NumElements * (pFVar2->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar28 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  uVar12 = GetRenderTargetGPUSizeBytes(&this->NumFramesAccumulatedHistoryAtlas,param_1);
  uVar10 = GetRenderTargetGPUSizeBytes(&this->DiffuseLightingAndSecondMomentHistoryAtlas,param_1);
  uVar13 = GetRenderTargetGPUSizeBytes(&this->RadiosityProbeSHBlueAtlas,param_1);
  uVar14 = GetRenderTargetGPUSizeBytes(&this->RadiosityProbeSHGreenAtlas,param_1);
  uVar15 = GetRenderTargetGPUSizeBytes(&this->RadiosityProbeSHRedAtlas,param_1);
  uVar16 = GetRenderTargetGPUSizeBytes(&this->RadiosityTraceHitDistanceAtlas,param_1);
  uVar17 = GetRenderTargetGPUSizeBytes(&this->RadiosityTraceRadianceAtlas,param_1);
  uVar18 = GetRenderTargetGPUSizeBytes(&this->FinalLightingAtlas,param_1);
  uVar19 = GetRenderTargetGPUSizeBytes(&this->RadiosityNumFramesAccumulatedAtlas,param_1);
  uVar20 = GetRenderTargetGPUSizeBytes(&this->IndirectLightingAtlas,param_1);
  uVar21 = GetRenderTargetGPUSizeBytes(&this->DirectLightingAtlas,param_1);
  uVar22 = GetRenderTargetGPUSizeBytes(&this->DepthAtlas,param_1);
  uVar23 = GetRenderTargetGPUSizeBytes(&this->EmissiveAtlas,param_1);
  uVar24 = GetRenderTargetGPUSizeBytes(&this->NormalAtlas,param_1);
  uVar25 = GetRenderTargetGPUSizeBytes(&this->OpacityAtlas,param_1);
  uVar26 = GetRenderTargetGPUSizeBytes(&this->AlbedoAtlas,param_1);
  uVar4 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->CardPageUploadBuffer);
  uVar5 = FRDGAsyncScatterUploadBuffer::GetNumBytes
                    (&this->SceneInstanceIndexToMeshCardsIndexUploadBuffer);
  uVar6 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->PageTableUploadBuffer);
  uVar7 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->HeightfieldUploadBuffer);
  uVar8 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->MeshCardsUploadBuffer);
  uVar9 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->CardUploadBuffer);
  return (ulonglong)local_res20 +
         ((ulonglong)local_res18 & 0xffffffff) + (ulonglong)uVar27 +
         (ulonglong)uVar9 + (ulonglong)uVar28 + (ulonglong)uVar31 + (ulonglong)uVar29 +
         (ulonglong)local_res10[0] + ((ulonglong)local_res8 & 0xffffffff) +
         uVar12 + uVar10 + uVar13 + uVar14 + uVar15 + uVar16 + uVar17 + uVar18 + uVar19 + uVar20 +
         uVar21 + uVar22 + uVar23 + uVar24 + uVar25 + uVar26 + (ulonglong)uVar4 + (ulonglong)uVar5 +
         (ulonglong)uVar6 + (ulonglong)uVar7 + (ulonglong)uVar8 + uVar32;
}

