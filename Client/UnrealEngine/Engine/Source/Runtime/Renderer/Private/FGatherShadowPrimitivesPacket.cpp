// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// AnyThreadFinalize @ 14561c400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGatherShadowPrimitivesPacket::AnyThreadFinalize
          (FGatherShadowPrimitivesPacket *this,FDynamicShadowsTaskData *param_1)

{
  int iVar1;
  FProjectedShadowInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement FVar5;
  uint uVar6;
  TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  FAddSubjectPrimitiveOp *pFVar9;
  FAddSubjectPrimitiveOp *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_98;
  longlong local_90;
  FFinalizeAddSubjectPrimitiveContext local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  FFinalizeAddSubjectPrimitiveContext local_68;
  TArrayView<FViewInfo,int> local_58;
  TArrayView<FViewInfo,int> local_48;
  
  uVar11 = 0;
  if (0 < (this->PreShadowSubjectPrimitives).ArrayNum) {
    lVar13 = 0;
    local_90 = 0;
    local_98 = 0;
    do {
      uVar8 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < (param_1->PreShadows).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->PreShadows).AllocatorInstance.Data[lVar13];
      uVar6 = 0;
      if ((int)uVar11 < (this->PreShadowOverflowedIndices).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar12 = (this->PreShadowOverflowedIndices).AllocatorInstance.Data;
      local_88.OverflowedMDCIndices = *(ushort **)(pFVar12 + local_98);
      local_88.OverflowedMeshIndices = *(ushort **)(pFVar12 + local_98 + 0x10);
      uVar6 = 0;
      if ((int)uVar11 < (this->PreShadowSubjectPrimitives).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar12 = (this->PreShadowSubjectPrimitives).AllocatorInstance.Data + local_90;
      iVar1 = *(int *)(pFVar12 + 8);
      pFVar9 = *(FAddSubjectPrimitiveOp **)pFVar12;
      pFVar10 = pFVar9 + iVar1;
      while( true ) {
        if (*(int *)(pFVar12 + 8) != iVar1) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FAddSubjectPrimitiveOp,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar9 == pFVar10) break;
        local_58.DataPtr = (param_1->Views).DataPtr;
        local_58.ArrayNum = (param_1->Views).ArrayNum;
        local_58._12_4_ = *(undefined4 *)&(param_1->Views).field_0xc;
        FProjectedShadowInfo::FinalizeAddSubjectPrimitive(pFVar2,param_1,pFVar9,&local_58,&local_88)
        ;
        pFVar9 = pFVar9 + 1;
      }
      uVar11 = uVar11 + 1;
      local_98 = local_98 + 0x20;
      local_90 = local_90 + 0x10;
      lVar13 = lVar13 + 1;
    } while ((int)uVar11 < (this->PreShadowSubjectPrimitives).ArrayNum);
  }
  uVar11 = 0;
  if (0 < (this->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum) {
    lVar13 = 0;
    local_98 = 0;
    local_90 = 0;
    do {
      uVar8 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < (param_1->ViewDependentWholeSceneShadows).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (param_1->ViewDependentWholeSceneShadows).AllocatorInstance.Data[lVar13];
      uVar6 = 0;
      if ((int)uVar11 < (this->ViewDependentWholeSceneShadowOverflowedIndices).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar12 = (this->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data;
      local_68.OverflowedMDCIndices = *(ushort **)(pFVar12 + local_90);
      local_68.OverflowedMeshIndices = *(ushort **)(pFVar12 + local_90 + 0x10);
      uVar6 = 0;
      if ((int)uVar11 < (this->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar12 = (this->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data +
                local_98;
      iVar1 = *(int *)(pFVar12 + 8);
      pFVar9 = *(FAddSubjectPrimitiveOp **)pFVar12;
      pFVar10 = pFVar9 + iVar1;
      while( true ) {
        if (*(int *)(pFVar12 + 8) != iVar1) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FAddSubjectPrimitiveOp,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar9 == pFVar10) break;
        local_78 = 0;
        uStack_70 = 0;
        local_48._8_8_ = (ulonglong)uStack_6c << 0x20;
        local_48.DataPtr = (FViewInfo *)0x0;
        FProjectedShadowInfo::FinalizeAddSubjectPrimitive(pFVar2,param_1,pFVar9,&local_48,&local_68)
        ;
        pFVar9 = pFVar9 + 1;
      }
      if (pFVar2->CacheMode == SDCM_StaticPrimitivesOnly) {
        bVar4 = FProjectedShadowInfo::IsWholeSceneDirectionalShadow(pFVar2);
        if (bVar4) {
          uVar6 = (pFVar2->CascadeSettings).ShadowSplitIndex;
          pTVar7 = TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked((TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
                                  *)&param_1->Scene->CachedShadowMaps,pFVar2->LightSceneInfo->Id);
          uVar8 = 0;
          if ((int)uVar6 < pTVar7->ArrayNum) {
            uVar8 = ~uVar6 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (((((pFVar2->DynamicSubjectPrimitives).ArrayNum < 1) &&
               ((pFVar2->SubjectTranslucentPrimitives).ArrayNum < 1)) &&
              ((pFVar2->SubjectHeterogeneousVolumePrimitives).ArrayNum < 1)) &&
             ((((pFVar2->ShadowDepthPass).MaxNumDraws < 1 &&
               ((pFVar2->SubjectMeshCommandBuildRequests).ArrayNum < 1)) &&
              ((pFVar2->ShadowDepthPassVisibleCommands).ArrayNum < 1)))) {
            if (pFVar2->bNaniteGeometry == 1 && pFVar2->bContainsNaniteSubjects == 1)
            goto LAB_14561c83a;
            FVar5 = (FScriptContainerElement)0x0;
          }
          else {
LAB_14561c83a:
            FVar5 = (FScriptContainerElement)0x1;
          }
          (pTVar7->AllocatorInstance).Data[(longlong)(int)uVar6 * 0x430 + 0x3dc] = FVar5;
        }
      }
      uVar11 = uVar11 + 1;
      local_90 = local_90 + 0x20;
      local_98 = local_98 + 0x10;
      lVar13 = lVar13 + 1;
    } while ((int)uVar11 < (this->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum);
  }
  return;
}

// AnyThreadTask @ 14561c8a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGatherShadowPrimitivesPacket::AnyThreadTask
          (FGatherShadowPrimitivesPacket *this,FDynamicShadowsTaskData *param_1)

{
  TArray<FAddSubjectPrimitiveStats,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement FVar4;
  FScene *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FPrimitiveSceneInfoCompact *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  FTaskTagScope local_98;
  TArrayView<FPrimitiveSceneInfoCompact_const_,int> local_88;
  FPrimitiveSceneInfoCompact local_78;
  
  FTaskTagScope::FTaskTagScope(&local_98,EParallelRenderingThread);
  uVar15 = (param_1->ViewDependentWholeSceneShadows).ArrayNum;
  uVar11 = (param_1->PreShadows).ArrayNum;
  if (((param_1->GatherStats).ArrayNum != uVar15) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskData.GatherStats.Num() == NumVDWSShadows",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                         ,0x12f6,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar1 = &this->ViewDependentWholeSceneShadowStats;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar2 = &(this->ViewDependentWholeSceneShadowStats).ArrayNum;
  piVar3 = &(this->ViewDependentWholeSceneShadowStats).ArrayMax;
  *piVar2 = 0;
  if (*piVar3 != uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar15,&pTVar1->AllocatorInstance,0,piVar3);
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,4,uVar15,&pTVar1->AllocatorInstance,piVar2,piVar3);
  DefaultConstructItems<FAddSubjectPrimitiveStats,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x18,uVar15);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar2 = &(this->PreShadowOverflowedIndices).ArrayNum;
  DestructItems<FAddSubjectPrimitiveOverflowedIndices,int>
            ((FAddSubjectPrimitiveOverflowedIndices *)
             (this->PreShadowOverflowedIndices).AllocatorInstance.Data,
             (this->PreShadowOverflowedIndices).ArrayNum);
  piVar3 = &(this->PreShadowOverflowedIndices).ArrayMax;
  *piVar2 = 0;
  if (*piVar3 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar11,&(this->PreShadowOverflowedIndices).AllocatorInstance,0,piVar3);
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x20,8,uVar11,&(this->PreShadowOverflowedIndices).AllocatorInstance,piVar2,
                      piVar3);
  DefaultConstructItems<FAddSubjectPrimitiveOverflowedIndices,int>
            ((this->PreShadowOverflowedIndices).AllocatorInstance.Data + (longlong)iVar10 * 0x20,
             uVar11);
  piVar2 = &(this->ViewDependentWholeSceneShadowOverflowedIndices).ArrayNum;
  DestructItems<FAddSubjectPrimitiveOverflowedIndices,int>
            ((FAddSubjectPrimitiveOverflowedIndices *)
             (this->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data,
             (this->ViewDependentWholeSceneShadowOverflowedIndices).ArrayNum);
  piVar3 = &(this->ViewDependentWholeSceneShadowOverflowedIndices).ArrayMax;
  *piVar2 = 0;
  if (*piVar3 != uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar15,
               &(this->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance,0,piVar3);
  }
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x20,8,uVar15,
                      &(this->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance,
                      piVar2,piVar3);
  DefaultConstructItems<FAddSubjectPrimitiveOverflowedIndices,int>
            ((this->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data +
             (longlong)iVar10 * 0x20,uVar15);
  DestructItems<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_> *)
             (this->PreShadowSubjectPrimitives).AllocatorInstance.Data,
             (this->PreShadowSubjectPrimitives).ArrayNum);
  piVar2 = &(this->PreShadowSubjectPrimitives).ArrayMax;
  (this->PreShadowSubjectPrimitives).ArrayNum = 0;
  if (*piVar2 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&(this->PreShadowSubjectPrimitives).AllocatorInstance,0,piVar2);
  }
  TArray<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  AddDefaulted(&this->PreShadowSubjectPrimitives,uVar11);
  DestructItems<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_> *)
             (this->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data,
             (this->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum);
  piVar2 = &(this->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayMax;
  (this->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum = 0;
  if (*piVar2 != uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar15,
               &(this->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance,0,piVar2);
  }
  TArray<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  AddDefaulted(&this->ViewDependentWholeSceneShadowSubjectPrimitives,uVar15);
  pTVar8 = CVarMobileInsetShadows.Ref;
  if ((int)param_1->FeatureLevel < 3) {
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
    if ((pTVar8->ShadowedValue[1] == false) ||
       ((bVar9 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)param_1->ShaderPlatform), !bVar9
        && (((FReadOnlyCVARCache::bMobileDeferredShadingValue == false ||
             (FReadOnlyCVARCache::bMobileHDR == false)) ||
            (bVar9 = MobileAllowFramebufferFetch((FStaticShaderPlatform)param_1->ShaderPlatform),
            bVar9)))))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    this->bSupportMobileInsetShadows = bVar9;
  }
  if (this->NodeIndex == 0xffffffff) {
    if ((this->NumPrimitives < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumPrimitives > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                           ,0x131b,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = this->StartPrimitiveIndex;
    uVar13 = (ulonglong)iVar10;
    uVar17 = uVar13;
    if (iVar10 < this->NumPrimitives + iVar10) {
      do {
        pFVar5 = param_1->Scene;
        uVar11 = (uint)uVar13;
        uVar15 = 0;
        if ((int)uVar11 < (pFVar5->PrimitiveFlagsCompact).ArrayNum) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar4 = (pFVar5->PrimitiveFlagsCompact).AllocatorInstance.Data[uVar17];
        if ((((byte)FVar4 & 1) != 0) &&
           ((((byte)FVar4 & 8) == 0 || (GSkipCullingNaniteMeshes == 0)))) {
          pFVar5 = param_1->Scene;
          uVar15 = 0;
          if ((int)uVar11 < (pFVar5->Primitives).ArrayNum) {
            uVar15 = ~uVar11 >> 0x1f;
          }
          if ((uVar15 == 0) &&
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
          FPrimitiveSceneInfoCompact::FPrimitiveSceneInfoCompact
                    (&local_78,
                     *(FPrimitiveSceneInfo **)
                      ((pFVar5->Primitives).AllocatorInstance.Data + uVar17 * 8));
          FilterPrimitiveForShadows(this,param_1,&local_78);
        }
        uVar13 = (ulonglong)(uVar11 + 1);
        uVar17 = uVar17 + 1;
      } while ((int)(uVar11 + 1) < this->StartPrimitiveIndex + this->NumPrimitives);
    }
  }
  else {
    TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::GetElementsForNode
              (&param_1->Scene->PrimitiveOctree,&local_88,this->NodeIndex);
    for (pFVar12 = local_88.DataPtr; pFVar12 != local_88.DataPtr + local_88.ArrayNum;
        pFVar12 = pFVar12 + 1) {
      if (((pFVar12->PrimitiveFlagsCompact).bCastDynamicShadow != 0) &&
         (((pFVar12->PrimitiveFlagsCompact).bIsNaniteMesh == '\0' || (GSkipCullingNaniteMeshes == 0)
          ))) {
        FilterPrimitiveForShadows(this,param_1,pFVar12);
      }
    }
  }
  uVar15 = 0;
  lVar16 = (longlong)(this->ViewDependentWholeSceneShadowStats).ArrayNum;
  if (0 < lVar16) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar15 < (param_1->GatherStats).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar14 = (param_1->GatherStats).AllocatorInstance.Data + lVar19;
      uVar11 = 0;
      if ((int)uVar15 < (this->ViewDependentWholeSceneShadowStats).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (pTVar1->AllocatorInstance).Data;
      if (0 < *(int *)(pFVar6 + lVar19)) {
        LOCK();
        *(int *)pFVar14 = *(int *)pFVar14 + *(int *)(pFVar6 + lVar19);
        UNLOCK();
      }
      if (0 < *(int *)(pFVar6 + lVar19 + 4)) {
        LOCK();
        *(int *)(pFVar14 + 4) = *(int *)(pFVar14 + 4) + *(int *)(pFVar6 + lVar19 + 4);
        UNLOCK();
      }
      if (0 < *(int *)(pFVar6 + lVar19 + 8)) {
        LOCK();
        *(int *)(pFVar14 + 8) = *(int *)(pFVar14 + 8) + *(int *)(pFVar6 + lVar19 + 8);
        UNLOCK();
      }
      if (0 < *(int *)(pFVar6 + lVar19 + 0xc)) {
        LOCK();
        *(int *)(pFVar14 + 0xc) = *(int *)(pFVar14 + 0xc) + *(int *)(pFVar6 + lVar19 + 0xc);
        UNLOCK();
      }
      if (0 < *(int *)(pFVar6 + lVar19 + 0x10)) {
        LOCK();
        *(int *)(pFVar14 + 0x10) = *(int *)(pFVar14 + 0x10) + *(int *)(pFVar6 + lVar19 + 0x10);
        UNLOCK();
      }
      if (0 < *(int *)(pFVar6 + lVar19 + 0x14)) {
        LOCK();
        *(int *)(pFVar14 + 0x14) = *(int *)(pFVar14 + 0x14) + *(int *)(pFVar6 + lVar19 + 0x14);
        UNLOCK();
      }
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 0x18;
    } while (lVar18 < lVar16);
  }
  piVar2 = &(this->ViewDependentWholeSceneShadowStats).ArrayMax;
  (this->ViewDependentWholeSceneShadowStats).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  FTaskTagScope::~FTaskTagScope(&local_98);
  return;
}

// FilterPrimitiveForShadows @ 145630910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGatherShadowPrimitivesPacket::FilterPrimitiveForShadows
          (FGatherShadowPrimitivesPacket *this,FDynamicShadowsTaskData *param_1,
          FPrimitiveSceneInfoCompact *param_2)

{
  double dVar1;
  EShadowDepthCacheMode EVar2;
  FPrimitiveSceneInfo *pFVar3;
  FPrimitiveSceneProxy *pFVar4;
  FProjectedShadowInfo *pFVar5;
  longlong lVar6;
  FLightSceneInfo *this_00;
  FLightSceneProxy *pFVar7;
  FViewInfo *this_01;
  ForElementType<UE::Math::TPlane<double>_> FVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  ulong64 uVar16;
  FViewMatrices *pFVar17;
  TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_> *pTVar18;
  FAttachmentGroupSceneInfo *pFVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  ForElementType<UE::Math::TPlane<double>_> FVar23;
  longlong lVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_1e8 [32];
  longlong local_1b8;
  longlong local_188;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  double local_150;
  FPrimitiveSceneInfoCompact *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  FAddSubjectPrimitiveStats local_128;
  TArrayView<FViewInfo,int> local_108;
  TArrayView<FViewInfo,int> local_f8;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_180._s_0.X = (param_2->Bounds).Origin.field0_0x0._s_0.X;
  local_180._s_0.Y = (param_2->Bounds).Origin.field0_0x0._s_0.Y;
  pFVar3 = param_2->PrimitiveSceneInfo;
  local_180._s_0.Z = (param_2->Bounds).Origin.field0_0x0._s_0.Z;
  pFVar4 = param_2->Proxy;
  iVar15 = (param_1->PreShadows).ArrayNum;
  local_168._s_0.X = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.X;
  local_168._s_0.Y = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.Y;
  local_168._s_0.Z = (double)(param_2->Bounds).BoxExtent.field0_0x0._s_0.Z;
  local_150 = (double)(param_2->Bounds).SphereRadius;
  local_148 = param_2;
  if (((iVar15 != 0) &&
      ((param_2->PrimitiveFlagsCompact).bStaticLighting == '\x01' &&
       (param_2->PrimitiveFlagsCompact).bCastStaticShadow == '\x01')) && (uVar22 = 0, 0 < iVar15)) {
    lVar27 = 0;
    lVar24 = 0;
    lVar25 = 0;
    do {
      uVar21 = ~uVar22 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar22 < (param_1->PreShadows).ArrayNum) {
        uVar14 = uVar21;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = (param_1->PreShadows).AllocatorInstance.Data[lVar27];
      bVar11 = FConvexVolume::IntersectBox
                         (&pFVar5->CasterOuterFrustum,(TVector<double> *)&local_180._s_0,
                          &pFVar5->PreShadowTranslation,(TVector<double> *)&local_168._s_0);
      if ((bVar11) &&
         (bVar11 = FLightSceneInfoCompact::AffectsPrimitive
                             (&pFVar5->LightSceneInfoCompact,
                              (TBoxSphereBounds<double,double> *)&local_180._s_0,pFVar4), bVar11)) {
        local_128.NumHeterogeneousVolumeSubs = 0;
        local_128.NumDeferredPrimitives = 0;
        local_128.NumCachedMDCCopies = 0;
        local_128.NumMDCBuildRequests = 0;
        local_128.NumDynamicSubs = 0;
        local_128.NumTranslucentSubs = 0;
        uVar14 = 0;
        if ((int)uVar22 < (this->PreShadowOverflowedIndices).ArrayNum) {
          uVar14 = uVar21;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_108.DataPtr = (param_1->Views).DataPtr;
        local_108.ArrayNum = (param_1->Views).ArrayNum;
        local_108._12_4_ = *(undefined4 *)&(param_1->Views).field_0xc;
        uVar16 = FProjectedShadowInfo::AddSubjectPrimitive_AnyThread
                           (pFVar5,local_148,&local_108,param_1->FeatureLevel,&local_128,
                            (FAddSubjectPrimitiveOverflowedIndices *)
                            ((this->PreShadowOverflowedIndices).AllocatorInstance.Data + lVar25));
        if (uVar16 != 0) {
          uVar14 = 0;
          if ((int)uVar22 < (this->PreShadowSubjectPrimitives).ArrayNum) {
            uVar14 = uVar21;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar26 = (this->PreShadowSubjectPrimitives).AllocatorInstance.Data + lVar24;
          uVar14 = *(uint *)&pFVar26[8].field_0x0;
          if (uVar14 == *(uint *)(pFVar26 + 0xc)) {
            uVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)pFVar26,(int *)(pFVar26 + 0xc));
          }
          *(uint *)&pFVar26[8].field_0x0 = uVar14 + 1;
          uVar21 = 0;
          if ((int)uVar14 < (int)(uVar14 + 1)) {
            uVar21 = ~uVar14 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar6 = *(longlong *)&pFVar26->field_0x0;
          *(FPrimitiveSceneInfo **)(lVar6 + (longlong)(int)uVar14 * 0x10) = pFVar3;
          *(ulong64 *)(lVar6 + (longlong)(int)uVar14 * 0x10 + 8) = uVar16;
        }
      }
      uVar22 = uVar22 + 1;
      lVar27 = lVar27 + 1;
      lVar25 = lVar25 + 0x20;
      lVar24 = lVar24 + 0x10;
    } while (lVar27 < iVar15);
  }
  local_140 = (longlong)(param_1->ViewDependentWholeSceneShadows).ArrayNum;
  uVar22 = 0;
  if (0 < local_140) {
    local_188 = 0;
    local_1b8 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar22 < (param_1->ViewDependentWholeSceneShadows).ArrayNum) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar5 = (param_1->ViewDependentWholeSceneShadows).AllocatorInstance.Data[local_188];
      this_00 = pFVar5->LightSceneInfo;
      dVar29 = (pFVar5->ShadowBounds).Center.field0_0x0._s_0.X - local_180._s_0.X;
      dVar32 = (pFVar5->ShadowBounds).Center.field0_0x0._s_0.Y - local_180._s_0.Y;
      dVar10 = (pFVar5->ShadowBounds).Center.field0_0x0._s_0.Z - local_180._s_0.Z;
      pFVar7 = this_00->Proxy;
      dVar1 = (pFVar7->WorldToLight).M[2][0];
      dVar28 = local_150 + (pFVar5->ShadowBounds).W;
      fVar33 = (float)(dVar32 * (pFVar7->WorldToLight).M[1][0] +
                       dVar29 * (pFVar7->WorldToLight).M[0][0] + dVar10 * dVar1);
      fVar34 = (float)(dVar28 * dVar28);
      dVar30 = (double)fVar33;
      dVar31 = dVar29 - dVar30 * (pFVar7->WorldToLight).M[0][0];
      dVar28 = dVar32 - dVar30 * (pFVar7->WorldToLight).M[1][0];
      dVar1 = dVar10 - dVar30 * dVar1;
      if (((float)(dVar31 * dVar31 + dVar28 * dVar28 + dVar1 * dVar1) < fVar34) &&
         (((0.0 <= fVar33 || (dVar29 * dVar29 + dVar32 * dVar32 + dVar10 * dVar10 <= (double)fVar34)
           ) && (bVar11 = FConvexVolume::IntersectBox
                                    (&(pFVar5->CascadeSettings).ShadowBoundsAccurate,
                                     (TVector<double> *)&local_180._s_0,
                                     (TVector<double> *)&local_168._s_0),
                fVar33 = GMinScreenRadiusForShadowCaster, bVar11)))) {
        if ((pFVar5->DependentView == (FViewInfo *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ProjectedShadowInfo->DependentView",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                                ,4999,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_01 = pFVar5->DependentView;
        pFVar17 = FSceneView::GetShadowViewMatrices((FSceneView *)this_01);
        bVar11 = true;
        dVar1 = local_180._s_0.Z - (pFVar17->ViewOrigin).field0_0x0._s_0.Z;
        dVar29 = local_180._s_0.Y - (pFVar17->ViewOrigin).field0_0x0._s_0.Y;
        dVar28 = local_180._s_0.X - (pFVar17->ViewOrigin).field0_0x0._s_0.X;
        fVar34 = *(float *)&this_01->_padding_;
        EVar2 = pFVar5->CacheMode;
        dVar32 = local_150 * local_150;
        if (EVar2 == SDCM_MovablePrimitivesOnly) {
          uVar14 = (pFVar5->CascadeSettings).ShadowSplitIndex;
          pTVar18 = TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&param_1->Scene->CachedShadowMaps,this_00->Id);
          uVar21 = 0;
          if ((int)uVar14 < pTVar18->ArrayNum) {
            uVar21 = ~uVar14 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (((pFVar4->Mobility).Value != '\x02') &&
             (pFVar4->bGoodCandidateForCachedShadowmap != '\0')) {
            bVar11 = false;
          }
        }
        else if (EVar2 == SDCM_StaticPrimitivesOnly) {
          if (((pFVar4->Mobility).Value == '\x02') ||
             (pFVar4->bGoodCandidateForCachedShadowmap == '\0')) {
            bVar11 = false;
          }
        }
        else if (EVar2 == SDCM_CSMScrolling) {
          uVar14 = (pFVar5->CascadeSettings).ShadowSplitIndex;
          pTVar18 = TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
                    ::FindChecked((TMapBase<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FCachedShadowMapData,TSizedDefaultAllocator<32>_>,0>_>
                                   *)&param_1->Scene->CachedShadowMaps,this_00->Id);
          uVar21 = 0;
          if ((int)uVar14 < pTVar18->ArrayNum) {
            uVar21 = ~uVar14 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (((pFVar4->Mobility).Value != '\x02') &&
             (pFVar4->bGoodCandidateForCachedShadowmap != '\0')) {
            pFVar26 = (pTVar18->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x430 + 0x3e0;
            uVar14 = (pFVar3->PersistentIndex).Index;
            if ((((int)uVar14 < 0) || (*(int *)(pFVar26 + 0x18) <= (int)uVar14)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (*(FScriptContainerElement **)(pFVar26 + 0x10) != (FScriptContainerElement *)0x0) {
              pFVar26 = *(FScriptContainerElement **)(pFVar26 + 0x10);
            }
            uVar21 = uVar14 & 0x1f;
            if ((int)uVar14 < 0) {
              uVar14 = uVar14 + 0x1f;
            }
            if ((*(uint *)(pFVar26 + (longlong)((int)uVar14 >> 5) * 4) >> uVar21 & 1) != 0) {
              bVar12 = false;
              uVar14 = 0;
              bVar11 = bVar12;
              if (0 < (pFVar5->CSMScrollingExtraCullingPlanes).ArrayNum) {
                do {
                  bVar11 = true;
                  if (bVar12) break;
                  uVar21 = 0;
                  if ((int)uVar14 < (pFVar5->CSMScrollingExtraCullingPlanes).ArrayNum) {
                    uVar21 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  local_e8._s_0.X = local_180._s_0.X - local_168._s_0.X;
                  FVar8 = (pFVar5->CSMScrollingExtraCullingPlanes).AllocatorInstance.SecondaryData;
                  local_e8._s_0.Y = local_180._s_0.Y - local_168._s_0.Y;
                  local_d0 = local_168._s_0.X + local_180._s_0.X;
                  local_c8 = local_168._s_0.Y + local_180._s_0.Y;
                  FVar23 = (ForElementType<UE::Math::TPlane<double>_>)
                           &pFVar5->CSMScrollingExtraCullingPlanes;
                  if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
                    FVar23 = FVar8;
                  }
                  local_e8._s_0.Z = local_180._s_0.Z - local_168._s_0.Z;
                  local_c0 = local_168._s_0.Z + local_180._s_0.Z;
                  local_b8 = 1;
                  iVar15 = FMath::PlaneAABBRelativePosition
                                     ((TPlane<double> *)
                                      ((longlong)(int)uVar14 * 0x20 + (longlong)FVar23),
                                      (TBox<double> *)&local_e8._s_0);
                  bVar12 = iVar15 < 1;
                  uVar14 = uVar14 + 1;
                  bVar11 = bVar12;
                } while ((int)uVar14 < (pFVar5->CSMScrollingExtraCullingPlanes).ArrayNum);
              }
              goto LAB_145631152;
            }
          }
          bVar11 = true;
        }
LAB_145631152:
        bVar12 = UseNonNaniteVirtualShadowMaps
                           (param_1->ShaderPlatform,
                            (FGenericStaticFeatureLevel)param_1->FeatureLevel);
        if (bVar12) {
LAB_145631164:
          bVar20 = 0;
        }
        else if ((pFVar3->LightingAttachmentRoot).PrimIDValue == 0) {
          bVar20 = pFVar4->bCastInsetShadow;
          if (bVar20 != 0) goto LAB_1456311b0;
        }
        else {
          pFVar19 = TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                    ::FindChecked((TMapBase<FPrimitiveComponentId,FAttachmentGroupSceneInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FAttachmentGroupSceneInfo,0>_>
                                   *)&pFVar3->Scene->AttachmentGroups,
                                  &pFVar3->LightingAttachmentRoot);
          if ((pFVar19->ParentSceneInfo == (FPrimitiveSceneInfo *)0x0) ||
             (pFVar19->ParentSceneInfo->Proxy->bCastInsetShadow == 0)) goto LAB_145631164;
          bVar20 = 1;
LAB_1456311b0:
          if ((int)param_1->FeatureLevel < 3) {
            bVar20 = this->bSupportMobileInsetShadows & bVar20;
          }
        }
        if ((((((((double)((float)(dVar29 * dVar29 + dVar28 * dVar28 + dVar1 * dVar1) * fVar33 *
                          fVar34 * fVar34 * fVar33) <= dVar32) && (bVar11)) &&
               (bVar11 = FLightSceneInfoCompact::AffectsPrimitive
                                   (&pFVar5->LightSceneInfoCompact,
                                    (TBoxSphereBounds<double,double> *)&local_180._s_0,pFVar4),
               bVar11)) &&
              (((pFVar7->bStaticLighting == '\0' ||
                (bVar11 = FLightSceneInfo::IsPrecomputedLightingValid(this_00), !bVar11)) ||
               (cVar13 = (**(code **)(pFVar7->_padding_ + 0xb0))(), cVar13 != '\0')))) &&
             (bVar20 == 0)) &&
            ((((this_00->bCreatePerObjectShadowsForDynamicObjects == false ||
               (bVar11 = FLightSceneInfo::IsPrecomputedLightingValid(this_00), !bVar11)) ||
              ((this_00->Proxy->ShadowMapChannel == -1 || (pFVar4->bStaticLighting != '\0')))) &&
             ((param_1->bStaticSceneOnly == false || (pFVar4->bStaticLighting != '\0')))))) &&
           ((cVar13 = (**(code **)(pFVar7->_padding_ + 0xb0))(), cVar13 == '\0' ||
            ((pFVar4->bStaticLighting == '\0' || (param_1->bMobileAllowStaticCSM != false)))))) {
          uVar14 = 0;
          if ((int)uVar22 < (this->ViewDependentWholeSceneShadowOverflowedIndices).ArrayNum) {
            uVar14 = ~uVar22 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar26 = (this->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data;
          uVar14 = 0;
          if ((int)uVar22 < (this->ViewDependentWholeSceneShadowStats).ArrayNum) {
            uVar14 = ~uVar22 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_138 = 0;
          uStack_130 = 0;
          local_f8._8_8_ = (ulonglong)uStack_12c << 0x20;
          local_f8.DataPtr = (FViewInfo *)0x0;
          uVar16 = FProjectedShadowInfo::AddSubjectPrimitive_AnyThread
                             (pFVar5,local_148,&local_f8,param_1->FeatureLevel,
                              (FAddSubjectPrimitiveStats *)
                              ((this->ViewDependentWholeSceneShadowStats).AllocatorInstance.Data +
                              (longlong)(int)uVar22 * 0x18),
                              (FAddSubjectPrimitiveOverflowedIndices *)
                              (pFVar26 + (longlong)(int)uVar22 * 0x20));
          if (uVar16 != 0) {
            uVar14 = 0;
            if ((int)uVar22 < (this->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum) {
              uVar14 = ~uVar22 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar26 = (this->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data
                      + local_1b8;
            if ((*(int *)&pFVar26[8].field_0x0 == 0) && (*(int *)(pFVar26 + 0xc) < 0x10)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,0x10,(ForAnyElementType *)pFVar26,0,(int *)(pFVar26 + 0xc));
            }
            uVar14 = *(uint *)&pFVar26[8].field_0x0;
            if (uVar14 == *(uint *)(pFVar26 + 0xc)) {
              uVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,(ForAnyElementType *)pFVar26,(int *)(pFVar26 + 0xc));
            }
            *(uint *)&pFVar26[8].field_0x0 = uVar14 + 1;
            uVar21 = 0;
            if ((int)uVar14 < (int)(uVar14 + 1)) {
              uVar21 = ~uVar14 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar24 = *(longlong *)&pFVar26->field_0x0;
            *(FPrimitiveSceneInfo **)(lVar24 + (longlong)(int)uVar14 * 0x10) = pFVar3;
            *(ulong64 *)(lVar24 + (longlong)(int)uVar14 * 0x10 + 8) = uVar16;
          }
        }
      }
      local_1b8 = local_1b8 + 0x10;
      local_188 = local_188 + 1;
      uVar22 = uVar22 + 1;
    } while (local_188 < local_140);
  }
  return;
}

