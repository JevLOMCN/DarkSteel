// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FSceneInstanceCullingQuery @ 145478570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneInstanceCullingQuery * __thiscall
FSceneInstanceCullingQuery::FSceneInstanceCullingQuery
          (FSceneInstanceCullingQuery *this,FSceneCullingRenderer *param_1)

{
  this->SceneCullingRenderer = param_1;
  (this->ViewDrawGroups).AllocatorInstance.Data = (FViewDrawGroup *)0x0;
  (this->ViewDrawGroups).ArrayNum = 0;
  (this->ViewDrawGroups).ArrayMax = 0;
  (this->CullingJobs).AllocatorInstance.Data = (FCullingJob *)0x0;
  (this->CullingJobs).ArrayNum = 0;
  (this->CullingJobs).ArrayMax = 0;
  this->CullingResult = (FSceneInstanceCullResult *)0x0;
  (this->AsyncTaskHandle).Pimpl.Reference = (FTaskBase *)0x0;
  return this;
}

// Add @ 145491620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FSceneInstanceCullingQuery::Add
          (FSceneInstanceCullingQuery *this,uint param_1,uint param_2,FCullingVolume *param_3)

{
  double *pdVar1;
  FViewDrawGroup *pFVar2;
  TVector<double>_u_0 *pTVar3;
  FCullingJob *pFVar4;
  code *pcVar5;
  FViewDrawGroup FVar6;
  FCullingVolume *pFVar7;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  bool bVar9;
  int iVar10;
  int *piVar11;
  ForElementType<UE::Math::TPlane<double>_> FVar12;
  longlong lVar13;
  ForElementType<UE::Math::TPlane<double>_> FVar14;
  undefined1 auStackY_2f8 [32];
  FViewDrawGroup local_2a8 [2];
  TVector<double>_u_0 local_298;
  FConvexVolume local_278;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  if (this->CullingResult != (FSceneInstanceCullResult *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CullingResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
                       ,0xde,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->AsyncTaskHandle).Pimpl.Reference != (FTaskBase *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AsyncTaskHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
                       ,0xdf,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->SceneCullingRenderer->SceneCulling->bIsEnabled != false) {
    local_78 = 0.0;
    dStack_70 = 0.0;
    local_298._s_0.X = (param_3->WorldToVolumeTranslation).field0_0x0._s_0.X;
    local_298._s_0.Y = (param_3->WorldToVolumeTranslation).field0_0x0._s_0.Y;
    local_278.Planes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    local_68 = 0.0;
    dStack_60 = 0.0;
    local_298._s_0.Z = (param_3->WorldToVolumeTranslation).field0_0x0._s_0.Z;
    local_278.Planes.ArrayNum = 0;
    local_278.Planes.ArrayMax = 6;
    local_278.PermutedPlanes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    local_278.PermutedPlanes.ArrayNum = 0;
    local_278.PermutedPlanes.ArrayMax = 8;
    local_58 = 0;
    FConvexVolume::operator=(&local_278,&param_3->ConvexVolume);
    local_78 = (param_3->Sphere).Center.field0_0x0._s_0.X;
    dStack_70 = (param_3->Sphere).Center.field0_0x0._s_0.Y;
    local_68 = (param_3->Sphere).Center.field0_0x0._s_0.Z;
    dStack_60 = (param_3->Sphere).W;
    if (this->CullingResult != (FSceneInstanceCullResult *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CullingResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
                         ,0xce,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((this->AsyncTaskHandle).Pimpl.Reference != (FTaskBase *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AsyncTaskHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
                         ,0xcf,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (this->SceneCullingRenderer->SceneCulling->bIsEnabled == false) {
      iVar10 = -1;
    }
    else {
      pFVar2 = (this->ViewDrawGroups).AllocatorInstance.Data;
      local_2a8[0].FirstView = param_1;
      local_2a8[0].NumViews = param_2;
      if ((pFVar2 <= local_2a8) && (local_2a8 < pFVar2 + (this->ViewDrawGroups).ArrayMax)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar10 = (this->ViewDrawGroups).ArrayNum;
      piVar11 = &(this->ViewDrawGroups).ArrayMax;
      if (iVar10 == *piVar11) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FViewDrawGroup>_>
                           (0x408,&(this->ViewDrawGroups).AllocatorInstance,piVar11);
      }
      pFVar2 = (this->ViewDrawGroups).AllocatorInstance.Data;
      (this->ViewDrawGroups).ArrayNum = iVar10 + 1;
      FVar6.NumViews = local_2a8[0].NumViews;
      FVar6.FirstView = local_2a8[0].FirstView;
      pFVar2[iVar10] = FVar6;
    }
    pTVar3 = (TVector<double>_u_0 *)(this->CullingJobs).AllocatorInstance.Data;
    local_58 = iVar10;
    if ((pTVar3 <= &local_298) &&
       (&local_298 <
        (TVector<double>_u_0 *)((longlong)pTVar3 + (longlong)(this->CullingJobs).ArrayMax * 0x250)))
    {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar10 = (this->CullingJobs).ArrayNum;
    piVar11 = &(this->CullingJobs).ArrayMax;
    if (iVar10 == *piVar11) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSceneInstanceCullingQuery::FCullingJob>_>
                         (0x250,0x10,&(this->CullingJobs).AllocatorInstance,piVar11);
    }
    (this->CullingJobs).ArrayNum = iVar10 + 1;
    pFVar4 = (this->CullingJobs).AllocatorInstance.Data;
    pFVar7 = &pFVar4[iVar10].CullingVolume;
    pFVar4[iVar10].CullingVolume.WorldToVolumeTranslation.field0_0x0._s_0.X = local_298._s_0.X;
    pFVar4[iVar10].CullingVolume.WorldToVolumeTranslation.field0_0x0._s_0.Y = local_298._s_0.Y;
    pFVar4[iVar10].CullingVolume.WorldToVolumeTranslation.field0_0x0._s_0.Z = local_298._s_0.Z;
    pFVar4[iVar10].CullingVolume.ConvexVolume.Planes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    lVar13 = (longlong)local_278.Planes.ArrayNum;
    pFVar4[iVar10].CullingVolume.ConvexVolume.Planes.ArrayNum = local_278.Planes.ArrayNum;
    FVar14 = (ForElementType<UE::Math::TPlane<double>_>)&local_278;
    if (local_278.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar14 = local_278.Planes.AllocatorInstance.SecondaryData;
    }
    piVar11 = &pFVar4[iVar10].CullingVolume.ConvexVolume.Planes.ArrayMax;
    if (local_278.Planes.ArrayNum == 0) {
      *piVar11 = 6;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                (0x20,0x10,local_278.Planes.ArrayNum,0,
                 (ForElementType<UE::Math::TPlane<double>_> *)&pFVar7->ConvexVolume,
                 local_278.Planes.ArrayNum,piVar11);
      FVar12 = pFVar4[iVar10].CullingVolume.ConvexVolume.Planes.AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar12 = (ForElementType<UE::Math::TPlane<double>_>)&pFVar7->ConvexVolume;
      }
      memcpy((void *)FVar12,(void *)FVar14,lVar13 << 5);
    }
    pTVar8 = &(pFVar7->ConvexVolume).PermutedPlanes;
    (pFVar7->ConvexVolume).PermutedPlanes.AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    lVar13 = (longlong)local_278.PermutedPlanes.ArrayNum;
    FVar14 = (ForElementType<UE::Math::TPlane<double>_>)&local_278.PermutedPlanes;
    if (local_278.PermutedPlanes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar14 = local_278.PermutedPlanes.AllocatorInstance.SecondaryData;
    }
    (pFVar7->ConvexVolume).PermutedPlanes.ArrayNum = local_278.PermutedPlanes.ArrayNum;
    piVar11 = &(pFVar7->ConvexVolume).PermutedPlanes.ArrayMax;
    if (local_278.PermutedPlanes.ArrayNum == 0) {
      *piVar11 = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                (0x20,0x10,local_278.PermutedPlanes.ArrayNum,0,&pTVar8->AllocatorInstance,
                 local_278.PermutedPlanes.ArrayNum,piVar11);
      FVar12 = (pFVar7->ConvexVolume).PermutedPlanes.AllocatorInstance.SecondaryData;
      if (FVar12 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar12 = (ForElementType<UE::Math::TPlane<double>_>)pTVar8;
      }
      memcpy((void *)FVar12,(void *)FVar14,lVar13 << 5);
    }
    pFVar4[iVar10].CullingVolume.Sphere.Center.field0_0x0._s_0.X = local_78;
    pFVar4[iVar10].CullingVolume.Sphere.Center.field0_0x0._s_0.Y = dStack_70;
    pdVar1 = &pFVar4[iVar10].CullingVolume.Sphere.Center.field0_0x0._s_0.Z;
    *pdVar1 = local_68;
    pdVar1[1] = dStack_60;
    pFVar4[iVar10].ViewGroupId = local_58;
    if (local_278.PermutedPlanes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_278.PermutedPlanes.AllocatorInstance.SecondaryData);
    }
    if (local_278.Planes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)local_278.Planes.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// AddViewDrawGroup @ 145492910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

int __thiscall
FSceneInstanceCullingQuery::AddViewDrawGroup
          (FSceneInstanceCullingQuery *this,uint param_1,uint param_2)

{
  int *piVar1;
  FViewDrawGroup *pFVar2;
  code *pcVar3;
  FViewDrawGroup FVar4;
  bool bVar5;
  int iVar6;
  FViewDrawGroup local_18 [2];
  
  if (this->CullingResult != (FSceneInstanceCullResult *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CullingResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
                       ,0xce,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if ((this->AsyncTaskHandle).Pimpl.Reference != (FTaskBase *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AsyncTaskHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
                       ,0xcf,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  if (this->SceneCullingRenderer->SceneCulling->bIsEnabled != false) {
    pFVar2 = (this->ViewDrawGroups).AllocatorInstance.Data;
    local_18[0].FirstView = param_1;
    local_18[0].NumViews = param_2;
    if ((pFVar2 <= local_18) && (local_18 < pFVar2 + (this->ViewDrawGroups).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    iVar6 = (this->ViewDrawGroups).ArrayNum;
    piVar1 = &(this->ViewDrawGroups).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<UE::HLSL::FViewDrawGroup>_>
                        (0x408,&(this->ViewDrawGroups).AllocatorInstance,piVar1);
    }
    pFVar2 = (this->ViewDrawGroups).AllocatorInstance.Data;
    (this->ViewDrawGroups).ArrayNum = iVar6 + 1;
    FVar4.NumViews = local_18[0].NumViews;
    FVar4.FirstView = local_18[0].FirstView;
    pFVar2[iVar6] = FVar4;
    return iVar6;
  }
  return -1;
}

// ComputeResult @ 145499440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FSceneInstanceCullingQuery::ComputeResult(FSceneInstanceCullingQuery *this)

{
  FWorkGroupInfo *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  FSceneCulling *this_00;
  FSceneInstanceCullResult *pFVar7;
  TIntPoint<unsigned_int>_u_0 *pTVar8;
  FWorkGroupInfo *pFVar9;
  code *pcVar10;
  TIntPoint<unsigned_int>_u_0 TVar11;
  double dVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  longlong lVar18;
  longlong lVar19;
  FCullingJob *pFVar20;
  longlong lVar21;
  FCullingJob *pFVar22;
  bool bVar23;
  double dVar24;
  undefined1 auStack_f8 [32];
  TIntPoint<unsigned_int>_u_0 *local_d8;
  TIntPoint<unsigned_int>_u_0 *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  FResultConsumer local_a0;
  TIntPoint<unsigned_int>_u_0 local_88;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 local_78;
  uint uStack_74;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FSceneInstanceCullingQuery_ComputeResult")
  ;
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId274,"FSceneInstanceCullingQuery_ComputeResult",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
               ,0x112);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId274);
  }
  fVar13 = __real_3f000000;
  dVar12 = __real_3fe0000000000000;
  iVar16 = (this->CullingJobs).ArrayNum;
  pFVar20 = (this->CullingJobs).AllocatorInstance.Data;
  this_00 = this->SceneCullingRenderer->SceneCulling;
  pFVar22 = pFVar20 + iVar16;
  do {
    if ((this->CullingJobs).ArrayNum != iVar16) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FSceneInstanceCullingQuery::FCullingJob,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_a8);
    }
    if (pFVar20 == pFVar22) {
      pFVar7 = this->CullingResult;
      iVar16 = *(int *)((longlong)&(pFVar7->CellChunkDraws)._padding_ + 4);
      if (iVar16 != 0) {
        lVar18 = (pFVar7->CellChunkDraws)._padding_;
        local_78 = (undefined4)(pFVar7->CellChunkDraws)._padding_;
        uStack_74 = (pFVar7->CellChunkDraws).PayloadGenerator.CurrentWorkGroupFirstParentItem;
        (pFVar7->CellChunkDraws).PayloadGenerator.CurrentWorkGroupFirstParentItem =
             (pFVar7->CellChunkDraws).PayloadGenerator.ParentItemOffset;
        uStack_80 = (undefined4)(pFVar7->CellChunkDraws)._padding_;
        pTVar8 = (TIntPoint<unsigned_int>_u_0 *)(pFVar7->CellChunkDraws)._padding_;
        local_88._s_0.X = (uint)lVar18;
        local_88._s_0.Y = (uint)((ulonglong)lVar18 >> 0x20);
        iStack_7c = iVar16;
        if ((pTVar8 <= &local_88) &&
           (lVar18 = (longlong)*(int *)((longlong)&(pFVar7->CellChunkDraws)._padding_ + 4),
           &local_88 < pTVar8 + lVar18 * 3)) {
          local_c0 = (longlong)(int)(pFVar7->CellChunkDraws)._padding_;
          local_b8 = 0x18;
          local_d8 = &local_88;
          local_d0 = pTVar8;
          local_c8 = lVar18;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        iVar16 = (int)(pFVar7->CellChunkDraws)._padding_;
        piVar17 = (int *)((longlong)&(pFVar7->CellChunkDraws)._padding_ + 4);
        if (iVar16 == *piVar17) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo>_>
                             (0x418,(ForElementType<FGPUWorkGroupLoadBalancer::FWorkGroupInfo> *)
                                    pFVar7,piVar17);
        }
        TVar11._s_0.Y = local_88._s_0.Y;
        TVar11._s_0.X = local_88._s_0.X;
        *(int *)&(pFVar7->CellChunkDraws)._padding_ = iVar16 + 1;
        pFVar9 = (FWorkGroupInfo *)(pFVar7->CellChunkDraws)._padding_;
        pFVar1 = pFVar9 + iVar16;
        (pFVar1->WorkGroupWorkBoundary).field0_0x0 = TVar11;
        pFVar1->FirstItem = uStack_80;
        pFVar1->NumItems = iStack_7c;
        pFVar9 = pFVar9 + iVar16;
        pFVar9->CarryOverStartOffset = local_78;
        pFVar9->Payload = uStack_74;
        *(undefined4 *)((longlong)&(pFVar7->CellChunkDraws)._padding_ + 4) = 0;
      }
      piVar17 = &(this_00->CellChunkIdAllocator).PeakMaxSize;
      if ((this_00->CellChunkIdAllocator).bGrowOnly == false) {
        piVar17 = &(this_00->CellChunkIdAllocator).CurrentMaxSize;
      }
      this->CullingResult->NumAllocatedChunks = *piVar17;
      pFVar7 = this->CullingResult;
      pFVar7->MaxOccludedChunkDraws =
           (pFVar7->ChunkCullViewGroupIds).ArrayNum * (this_00->CellChunkIdAllocator).CurrentSize +
           *(int *)((longlong)&(pFVar7->CellChunkDraws)._padding_ + 4);
      this->CullingResult->UncullableNumItemChunks =
           this->SceneCullingRenderer->SceneCulling->UncullableNumItemChunks;
      pFVar7 = this->CullingResult;
      pFVar7->NumInstanceGroups =
           pFVar7->NumInstanceGroups +
           pFVar7->UncullableNumItemChunks * (this->CullingJobs).ArrayNum +
           pFVar7->MaxOccludedChunkDraws;
      this->CullingResult->UncullableItemChunksOffset =
           this->SceneCullingRenderer->SceneCulling->UncullableItemChunksOffset;
      this->CullingResult->SceneCullingRenderer = this->SceneCullingRenderer;
      if (bVar23) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      return;
    }
    dVar2 = (pFVar20->CullingVolume).Sphere.W;
    if (dVar2 <= 0.0) {
LAB_145499659:
      bVar14 = false;
    }
    else {
      iVar15 = (this_00->SpatialHash).FirstLevel;
      dVar24 = (this_00->SpatialHash).RecCellSizes[iVar15];
      dVar3 = (pFVar20->CullingVolume).Sphere.Center.field0_0x0._s_0.X;
      dVar24 = dVar24 + dVar24;
      dVar4 = (pFVar20->CullingVolume).Sphere.Center.field0_0x0._s_0.Y;
      dVar5 = (pFVar20->CullingVolume).Sphere.Center.field0_0x0._s_0.Z;
      dVar2 = (double)((float)(ulonglong)(1L << ((char)iVar15 + 1U & 0x3f)) * fVar13) + dVar2;
      lVar21 = ((longlong)ROUND((dVar3 + dVar2) * dVar24 - dVar12) >> 1) -
               ((longlong)ROUND((dVar3 - dVar2) * dVar24 - dVar12) >> 1);
      lVar19 = ((longlong)ROUND((dVar4 + dVar2) * dVar24 - dVar12) >> 1) -
               ((longlong)ROUND((dVar4 - dVar2) * dVar24 - dVar12) >> 1);
      lVar18 = ((longlong)ROUND((dVar5 + dVar2) * dVar24 - dVar12) >> 1) -
               ((longlong)ROUND((dVar5 - dVar2) * dVar24 - dVar12) >> 1);
      if (lVar19 < lVar21) {
        lVar19 = lVar21;
      }
      if (lVar18 < lVar19) {
        lVar18 = lVar19;
      }
      if (this_00->SmallFootprintCellSideThreshold < lVar18) goto LAB_145499659;
      bVar14 = true;
    }
    pFVar7 = this->CullingResult;
    uVar6 = pFVar20->ViewGroupId;
    if (bVar14) {
      local_a0.CellHeaders = &this_00->CellHeaders;
      local_a0.CullingResult = pFVar7;
      local_a0.ViewGroupId = uVar6;
      FSceneCulling::TestSphere<_FSceneInstanceCullingQuery::ComputeResult_::__l9::FResultConsumer>
                (this_00,&(pFVar20->CullingVolume).Sphere,&local_a0);
      pFVar20 = pFVar20 + 1;
    }
    else {
      pTVar8 = (TIntPoint<unsigned_int>_u_0 *)(pFVar7->ChunkCullViewGroupIds).AllocatorInstance.Data
      ;
      local_a4 = (undefined1  [4])uVar6;
      if ((pTVar8 <= (TIntPoint<unsigned_int>_u_0 *)local_a4) &&
         (lVar18 = (longlong)(pFVar7->ChunkCullViewGroupIds).ArrayMax,
         local_a4 < pTVar8->XY + lVar18)) {
        local_c0 = (longlong)(pFVar7->ChunkCullViewGroupIds).ArrayNum;
        local_b8 = 4;
        local_d8 = (TIntPoint<unsigned_int>_u_0 *)local_a4;
        local_d0 = pTVar8;
        local_c8 = lVar18;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar14) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar15 = (pFVar7->ChunkCullViewGroupIds).ArrayNum;
      piVar17 = &(pFVar7->ChunkCullViewGroupIds).ArrayMax;
      if (iVar15 == *piVar17) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                           (0x404,&(pFVar7->ChunkCullViewGroupIds).AllocatorInstance,piVar17);
      }
      (pFVar7->ChunkCullViewGroupIds).ArrayNum = iVar15 + 1;
      pFVar20 = pFVar20 + 1;
      (pFVar7->ChunkCullViewGroupIds).AllocatorInstance.Data[iVar15] = (uint)local_a4;
    }
  } while( true );
}

// Dispatch @ 1454a0a90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FSceneInstanceCullingQuery::Dispatch
          (FSceneInstanceCullingQuery *this,FRDGBuilder *param_1,bool param_2)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FSceneCulling *pFVar5;
  FTaskBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  FSceneInstanceCullResult *pFVar9;
  FTaskHandle FVar10;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> this_00;
  ERDGSetupTaskWaitPoint EVar11;
  FTaskHandle local_res8;
  FRDGBuilder *local_res10;
  atomic<UE::Tasks::Private::FTaskBase_*> local_res20;
  <lambda_1> local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  local_res10 = param_1;
  if ((this->CullingResult != (FSceneInstanceCullResult *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CullingResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
                         ,0xec,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar1 = &this->AsyncTaskHandle;
  if (((this->AsyncTaskHandle).Pimpl.Reference != (FTaskBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AsyncTaskHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
                         ,0xed,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = this->SceneCullingRenderer->SceneCulling;
  if ((pFVar5->bUseAsyncUpdate == false) || (!param_2)) {
    EVar11 = Compile;
  }
  else {
    EVar11 = Execute;
  }
  if ((this->CullingJobs).ArrayNum == 0) {
    return;
  }
  if ((pFVar5->ActiveUpdaterImplementation).Ptr == (FSceneCullingBuilder *)0x0) {
    this_00.Reference = (FTaskBase *)0x0;
  }
  else {
    this_00.Reference = (pFVar5->PostUpdateTaskHandle).Pimpl.Reference;
    param_1 = local_res10;
    if (this_00.Reference != (FTaskBase *)0x0) {
      LOCK();
      (this_00.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_00.Reference)->RefCount + 1)
      ;
      UNLOCK();
      LOCK();
      (this_00.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_00.Reference)->RefCount + 1)
      ;
      UNLOCK();
      LOCK();
      paVar2 = &(this_00.Reference)->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)(this_00.Reference)->_padding_)(this_00.Reference,1);
        param_1 = local_res10;
      }
    }
  }
  if ((EVar11 == Compile) && (this_00.Reference != (FTaskBase *)0x0)) {
    UE::Tasks::Private::FTaskBase::Wait(this_00.Reference);
    pFVar9 = FRDGAllocator::Alloc<FSceneInstanceCullResult>((FRDGAllocator *)&param_1->_padding_);
    this->CullingResult = pFVar9;
  }
  else {
    pFVar9 = FRDGAllocator::Alloc<FSceneInstanceCullResult>((FRDGAllocator *)&param_1->_padding_);
    this->CullingResult = pFVar9;
    if (this_00.Reference == (FTaskBase *)0x0) goto LAB_1454a0be9;
  }
  LOCK();
  (this_00.Reference)->RefCount = (atomic<unsigned_int>)((int)(this_00.Reference)->RefCount + 1);
  UNLOCK();
LAB_1454a0be9:
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 1;
  local_res8.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)this_00.Reference;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_50,1,local_44);
  ConstructItems<UE::Tasks::Private::FTaskHandle,UE::Tasks::Private::FTaskHandle,int>
            (local_50.Data,&local_res8,1);
  local_res20 = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
  FVar10 = FRDGBuilder::
           AddSetupTask<_FSceneInstanceCullingQuery::Dispatch_::__l19::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                     (param_1,&local_58,(FPipe *)&local_res20,
                      (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
                      (ETaskPriority)&local_50,false,EVar11);
  if ((TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar1 != FVar10.Pimpl.Reference) {
    pFVar6 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = *(FTaskBase **)FVar10.Pimpl.Reference;
    *(undefined8 *)FVar10.Pimpl.Reference = 0;
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar6->RefCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  if (local_58.__this != (FSceneInstanceCullingQuery *)0x0) {
    LOCK();
    pFVar1 = &(local_58.__this)->AsyncTaskHandle;
    iVar4 = *(int *)&(pFVar1->Pimpl).Reference;
    *(int *)&(pFVar1->Pimpl).Reference = *(int *)&(pFVar1->Pimpl).Reference + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(local_58.__this)->SceneCullingRenderer)(local_58.__this,1);
    }
  }
  DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_50.Data,local_48);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  if (local_res8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = (atomic<unsigned_int> *)((longlong)local_res8.Pimpl.Reference + 0x30);
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)local_res8.Pimpl.Reference)(local_res8.Pimpl.Reference,1);
    }
  }
  if (this_00.Reference != (FTaskBase *)0x0) {
    LOCK();
    paVar2 = &(this_00.Reference)->RefCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<unsigned_int>)0x1) {
      (**(code **)(this_00.Reference)->_padding_)(this_00.Reference,1);
    }
  }
  return;
}

// GetResult @ 1454a7d40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSceneInstanceCullResult * __thiscall
FSceneInstanceCullingQuery::GetResult(FSceneInstanceCullingQuery *this)

{
  FTaskBase *this_00;
  FSceneInstanceCullResult *pFVar1;
  bool bVar2;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"FSceneInstanceCullingQuery_GetResult");
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId262,"FSceneInstanceCullingQuery_GetResult",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCulling\\SceneCullingRenderer.cpp"
               ,0x106);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId262);
  }
  this_00 = (this->AsyncTaskHandle).Pimpl.Reference;
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(this_00);
  }
  pFVar1 = this->CullingResult;
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return pFVar1;
}

