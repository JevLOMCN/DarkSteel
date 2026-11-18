// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FSkyAtmospherePendingRDGResources @ 1447f53c0

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

FSkyAtmospherePendingRDGResources * __thiscall
FSkyAtmospherePendingRDGResources::FSkyAtmospherePendingRDGResources
          (FSkyAtmospherePendingRDGResources *this)

{
  (this->ViewResources).AllocatorInstance.SecondaryData =
       (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)0x0;
  this->SceneRenderer = (FSceneRenderer *)0x0;
  (this->ViewResources).ArrayNum = 0;
  (this->ViewResources).ArrayMax = 4;
  this->DistantSkyLightLutBuffer = (FRDGBuffer *)0x0;
  this->MobileDistantSkyLightLutBuffer = (FRDGBuffer *)0x0;
  this->RealTimeReflectionCaptureSkyAtmosphereViewLutTexture = (FRDGTexture *)0x0;
  this->RealTimeReflectionCaptureCamera360APLutTexture = (FRDGTexture *)0x0;
  this->TransmittanceLut = (FRDGTexture *)0x0;
  return this;
}

// CommitToSceneAndViewUniformBuffers @ 145677470

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
FSkyAtmospherePendingRDGResources::CommitToSceneAndViewUniformBuffers
          (FSkyAtmospherePendingRDGResources *this,FRDGBuilder *param_1,
          FRDGExternalAccessQueue *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  FRDGBuffer *pFVar4;
  FResource *pFVar5;
  FRDGPooledBuffer *pFVar6;
  FRDGPooledBuffer *pFVar7;
  FRDGTexture *pFVar8;
  IPooledRenderTarget *pIVar9;
  ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources> FVar10;
  code *pcVar11;
  TConsoleVariableData<int> *pTVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FSkyAtmosphereRenderSceneInfo *this_00;
  TRefCountPtr<FRDGPooledBuffer> *pTVar16;
  TRefCountPtr<FRDGPooledBuffer> *pTVar17;
  TRefCountPtr<IPooledRenderTarget> *pTVar18;
  IPooledRenderTarget *pIVar19;
  ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources> FVar20;
  FSceneRenderer *pFVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong local_res20;
  
  if ((this->SceneRenderer == (FSceneRenderer *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneRenderer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SkyAtmosphereRendering.cpp"
                          ,0x710,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  plVar3 = *(longlong **)&this->SceneRenderer->field_0x8;
  this_00 = (FSkyAtmosphereRenderSceneInfo *)(**(code **)(*plVar3 + 0x2e8))(plVar3);
  pTVar12 = CVarSkyAtmosphereDistantSkyLightLUT.Ref;
  if (this->DistantSkyLightLutBuffer != (FRDGBuffer *)0x0) {
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (0 < pTVar12->ShadowedValue[1]) {
      pFVar4 = this->DistantSkyLightLutBuffer;
      if (pFVar4 != (FRDGBuffer *)0x0) {
        iVar14 = (param_2->Resources).ArrayNum;
        piVar1 = &(param_2->Resources).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                             (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                              piVar1);
        }
        (param_2->Resources).ArrayNum = iVar14 + 1;
        pFVar5 = (param_2->Resources).AllocatorInstance.Data;
        pFVar5[iVar14].Resource = (FRDGViewableResource *)pFVar4;
        pFVar5[iVar14].Access = SRVMask;
        pFVar5[iVar14].Pipelines = All;
      }
      pTVar16 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar4);
      pTVar17 = FSkyAtmosphereRenderSceneInfo::GetDistantSkyLightLutBuffer(this_00);
      pFVar6 = pTVar16->Reference;
      pFVar7 = pTVar17->Reference;
      if (pFVar7 != pFVar6) {
        pTVar17->Reference = pFVar6;
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          plVar2 = &pFVar7->_padding_;
          LOCK();
          lVar24 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar24 == 1) && (plVar2 != (longlong *)0x0)) {
            (**(code **)pFVar7->_padding_)(pFVar7);
          }
        }
      }
    }
  }
  pTVar12 = CVarSkyAtmosphereDistantSkyLightLUT.Ref;
  if (this->MobileDistantSkyLightLutBuffer != (FRDGBuffer *)0x0) {
    bVar13 = IsInParallelRenderingThread();
    if ((!bVar13) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (0 < pTVar12->ShadowedValue[1]) {
      pFVar4 = this->MobileDistantSkyLightLutBuffer;
      if (pFVar4 != (FRDGBuffer *)0x0) {
        iVar14 = (param_2->Resources).ArrayNum;
        piVar1 = &(param_2->Resources).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                             (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                              piVar1);
        }
        (param_2->Resources).ArrayNum = iVar14 + 1;
        pFVar5 = (param_2->Resources).AllocatorInstance.Data;
        pFVar5[iVar14].Resource = (FRDGViewableResource *)pFVar4;
        pFVar5[iVar14].Access = SRVMask;
        pFVar5[iVar14].Pipelines = All;
      }
      pTVar16 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar4);
      pTVar17 = FSkyAtmosphereRenderSceneInfo::GetMobileDistantSkyLightLutBuffer(this_00);
      pFVar6 = pTVar16->Reference;
      pFVar7 = pTVar17->Reference;
      if (pFVar7 != pFVar6) {
        pTVar17->Reference = pFVar6;
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          plVar2 = &pFVar7->_padding_;
          LOCK();
          lVar24 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar24 == 1) && (plVar2 != (longlong *)0x0)) {
            (**(code **)pFVar7->_padding_)(pFVar7);
          }
        }
      }
    }
  }
  pFVar8 = this->RealTimeReflectionCaptureSkyAtmosphereViewLutTexture;
  if (pFVar8 == (FRDGTexture *)0x0) {
    pIVar19 = (IPooledRenderTarget *)plVar3[0x569];
    if (pIVar19 != (IPooledRenderTarget *)0x0) {
      plVar3[0x569] = 0;
      lVar24 = pIVar19->_padding_;
LAB_145677736:
      (**(code **)(lVar24 + 0x38))(pIVar19);
    }
  }
  else {
    iVar14 = (param_2->Resources).ArrayNum;
    piVar1 = &(param_2->Resources).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                         (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,piVar1
                         );
    }
    (param_2->Resources).ArrayNum = iVar14 + 1;
    pFVar5 = (param_2->Resources).AllocatorInstance.Data;
    pFVar5[iVar14].Resource = (FRDGViewableResource *)pFVar8;
    pFVar5[iVar14].Access = SRVMask;
    pFVar5[iVar14].Pipelines = All;
    pTVar18 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar8);
    pIVar19 = (IPooledRenderTarget *)plVar3[0x569];
    pIVar9 = pTVar18->Reference;
    if (pIVar19 != pIVar9) {
      plVar3[0x569] = (longlong)pIVar9;
      if (pIVar9 != (IPooledRenderTarget *)0x0) {
        (**(code **)(pIVar9->_padding_ + 0x30))();
      }
      if (pIVar19 != (IPooledRenderTarget *)0x0) {
        lVar24 = pIVar19->_padding_;
        goto LAB_145677736;
      }
    }
  }
  pFVar8 = this->RealTimeReflectionCaptureCamera360APLutTexture;
  if (pFVar8 == (FRDGTexture *)0x0) {
    pIVar19 = (IPooledRenderTarget *)plVar3[0x56a];
    if (pIVar19 == (IPooledRenderTarget *)0x0) goto LAB_1456777d2;
    plVar3[0x56a] = 0;
    lVar24 = pIVar19->_padding_;
  }
  else {
    iVar14 = (param_2->Resources).ArrayNum;
    piVar1 = &(param_2->Resources).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                         (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,piVar1
                         );
    }
    (param_2->Resources).ArrayNum = iVar14 + 1;
    pFVar5 = (param_2->Resources).AllocatorInstance.Data;
    pFVar5[iVar14].Resource = (FRDGViewableResource *)pFVar8;
    pFVar5[iVar14].Access = SRVMask;
    pFVar5[iVar14].Pipelines = All;
    pTVar18 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar8);
    pIVar19 = (IPooledRenderTarget *)plVar3[0x56a];
    pIVar9 = pTVar18->Reference;
    if (pIVar19 == pIVar9) goto LAB_1456777d2;
    plVar3[0x56a] = (longlong)pIVar9;
    if (pIVar9 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar9->_padding_ + 0x30))();
    }
    if (pIVar19 == (IPooledRenderTarget *)0x0) goto LAB_1456777d2;
    lVar24 = pIVar19->_padding_;
  }
  (**(code **)(lVar24 + 0x38))(pIVar19);
LAB_1456777d2:
  pFVar21 = this->SceneRenderer;
  uVar23 = 0;
  if (0 < *(int *)&pFVar21->field_0x18) {
    lVar24 = 0;
    local_res20 = 0;
    do {
      uVar22 = ~uVar23 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar23 < *(int *)&pFVar21->field_0x18) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar25 = local_res20 + *(longlong *)&pFVar21->field_0x10;
      uVar15 = 0;
      if ((int)uVar23 < (this->ViewResources).ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar10 = (this->ViewResources).AllocatorInstance.SecondaryData;
      FVar20 = (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)
               &this->ViewResources;
      if (FVar10 != (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)0x0) {
        FVar20 = FVar10;
      }
      pFVar8 = *(FRDGTexture **)((longlong)FVar20 + lVar24);
      if (pFVar8 != (FRDGTexture *)0x0) {
        iVar14 = (param_2->Resources).ArrayNum;
        piVar1 = &(param_2->Resources).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                             (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                              piVar1);
        }
        (param_2->Resources).ArrayNum = iVar14 + 1;
        pFVar5 = (param_2->Resources).AllocatorInstance.Data;
        pFVar5[iVar14].Resource = (FRDGViewableResource *)pFVar8;
        pFVar5[iVar14].Access = SRVMask;
        pFVar5[iVar14].Pipelines = All;
      }
      pTVar18 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar8);
      pIVar19 = *(IPooledRenderTarget **)(lVar25 + 0x25c8);
      pIVar9 = pTVar18->Reference;
      if (pIVar19 != pIVar9) {
        *(IPooledRenderTarget **)(lVar25 + 0x25c8) = pIVar9;
        if (pIVar9 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar9->_padding_ + 0x30))();
        }
        if (pIVar19 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar19->_padding_ + 0x38))(pIVar19);
        }
      }
      uVar15 = 0;
      if ((int)uVar23 < (this->ViewResources).ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar10 = (this->ViewResources).AllocatorInstance.SecondaryData;
      FVar20 = (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)
               &this->ViewResources;
      if (FVar10 != (ForElementType<FSkyAtmospherePendingRDGResources::FViewRDGResources>)0x0) {
        FVar20 = FVar10;
      }
      pFVar8 = *(FRDGTexture **)((longlong)FVar20 + 8 + lVar24);
      if (pFVar8 != (FRDGTexture *)0x0) {
        iVar14 = (param_2->Resources).ArrayNum;
        piVar1 = &(param_2->Resources).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                             (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                              piVar1);
        }
        (param_2->Resources).ArrayNum = iVar14 + 1;
        pFVar5 = (param_2->Resources).AllocatorInstance.Data;
        pFVar5[iVar14].Resource = (FRDGViewableResource *)pFVar8;
        pFVar5[iVar14].Access = SRVMask;
        pFVar5[iVar14].Pipelines = All;
      }
      pTVar18 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar8);
      pIVar19 = *(IPooledRenderTarget **)(lVar25 + 0x25b0);
      pIVar9 = pTVar18->Reference;
      if (pIVar19 != pIVar9) {
        *(IPooledRenderTarget **)(lVar25 + 0x25b0) = pIVar9;
        if (pIVar9 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar9->_padding_ + 0x30))();
        }
        if (pIVar19 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar19->_padding_ + 0x38))(pIVar19);
        }
      }
      uVar23 = uVar23 + 1;
      pFVar21 = this->SceneRenderer;
      local_res20 = local_res20 + 0x2970;
      lVar24 = lVar24 + 0x10;
    } while ((int)uVar23 < *(int *)&pFVar21->field_0x18);
  }
  if ((this->TransmittanceLut == (FRDGTexture *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("TransmittanceLut",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SkyAtmosphereRendering.cpp"
                          ,0x737,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar8 = this->TransmittanceLut;
  if (pFVar8 != (FRDGTexture *)0x0) {
    iVar14 = (param_2->Resources).ArrayNum;
    piVar1 = &(param_2->Resources).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                         (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,piVar1
                         );
    }
    (param_2->Resources).ArrayNum = iVar14 + 1;
    pFVar5 = (param_2->Resources).AllocatorInstance.Data;
    pFVar5[iVar14].Resource = (FRDGViewableResource *)pFVar8;
    pFVar5[iVar14].Access = SRVMask;
    pFVar5[iVar14].Pipelines = All;
  }
  pTVar18 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar8);
  pIVar19 = (this_00->TransmittanceLutTexture).Reference;
  pIVar9 = pTVar18->Reference;
  if (pIVar19 != pIVar9) {
    (this_00->TransmittanceLutTexture).Reference = pIVar9;
    if (pIVar9 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar9->_padding_ + 0x30))();
    }
    if (pIVar19 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar19->_padding_ + 0x38))(pIVar19);
    }
  }
  return;
}

