// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FLumenSceneFrameTemporaries @ 144d40b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FLumenSceneFrameTemporaries * __thiscall
FLumenSceneFrameTemporaries::FLumenSceneFrameTemporaries
          (FLumenSceneFrameTemporaries *this,TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<FLumenViewOrigin,TFixedAllocator<2>_> *this_00;
  TTypeCompatibleBytes<FLumenViewOrigin> *pTVar3;
  code *pcVar4;
  int iVar5;
  ForElementType<FLumenViewOrigin> *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  FLumenSceneFrameTemporaries *pFVar11;
  FViewInfo *pFVar12;
  FLumenViewOrigin *this_01;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  uVar15 = 0;
  (this->SurfaceCacheFeedbackResources).BufferAllocatorUAV = (FRDGBufferUAV *)0x0;
  piVar1 = &(this->ViewOrigins).ArrayNum;
  (this->SurfaceCacheFeedbackResources).BufferAllocatorSRV = (FRDGBufferSRV *)0x0;
  piVar2 = &(this->ViewOrigins).ArrayMax;
  (this->SurfaceCacheFeedbackResources).BufferUAV = (FRDGBufferUAV *)0x0;
  (this->SurfaceCacheFeedbackResources).BufferSRV = (FRDGBufferSRV *)0x0;
  (this->SurfaceCacheFeedbackResources).BufferSize = 0;
  (this->UpdateSceneTask).Pimpl.Reference = (FTaskBase *)0x0;
  *piVar1 = 0;
  this->AlbedoAtlas = (FRDGTexture *)0x0;
  this->OpacityAtlas = (FRDGTexture *)0x0;
  this->NormalAtlas = (FRDGTexture *)0x0;
  this->EmissiveAtlas = (FRDGTexture *)0x0;
  this->DepthAtlas = (FRDGTexture *)0x0;
  this->DirectLightingAtlas = (FRDGTexture *)0x0;
  this->IndirectLightingAtlas = (FRDGTexture *)0x0;
  this->RadiosityNumFramesAccumulatedAtlas = (FRDGTexture *)0x0;
  this->FinalLightingAtlas = (FRDGTexture *)0x0;
  this->TileShadowDownsampleFactorAtlas = (FRDGBuffer *)0x0;
  this->DiffuseLightingAndSecondMomentHistoryAtlas = (FRDGTexture *)0x0;
  this->NumFramesAccumulatedHistoryAtlas = (FRDGTexture *)0x0;
  this->CardBufferSRV = (FRDGBufferSRV *)0x0;
  this->MeshCardsBufferSRV = (FRDGBufferSRV *)0x0;
  this->HeightfieldBufferSRV = (FRDGBufferSRV *)0x0;
  this->PrimitiveGroupBufferSRV = (FRDGBufferSRV *)0x0;
  this->SceneInstanceIndexToMeshCardsIndexBufferSRV = (FRDGBufferSRV *)0x0;
  this->PageTableBufferSRV = (FRDGBufferSRV *)0x0;
  this->CardPageBufferSRV = (FRDGBufferSRV *)0x0;
  this->CardPageBufferUAV = (FRDGBufferUAV *)0x0;
  this->CardPageLastUsedBufferUAV = (FRDGBufferUAV *)0x0;
  this->CardPageLastUsedBufferSRV = (FRDGBufferSRV *)0x0;
  this->CardPageHighResLastUsedBufferUAV = (FRDGBufferUAV *)0x0;
  this->CardPageHighResLastUsedBufferSRV = (FRDGBufferSRV *)0x0;
  this->LumenCardSceneUniformBuffer = (TRDGUniformBuffer<FLumenCardScene> *)0x0;
  this->SceneAddOpsReadbackBuffer = (FRHIGPUBufferReadback *)0x0;
  this->SceneRemoveOpsReadbackBuffer = (FRHIGPUBufferReadback *)0x0;
  this->SurfaceCacheFeedbackBuffer = (FRHIGPUBufferReadback *)0x0;
  this->bReallocateAtlas = false;
  *piVar2 = 2;
  this->ReflectSpecularIndirect[0].RenderTarget = (FRDGTexture *)0x0;
  this->ReflectSpecularIndirect[1].RenderTarget = (FRDGTexture *)0x0;
  this->ReflectSpecularIndirect[2].RenderTarget = (FRDGTexture *)0x0;
  this->ReflectNumHistoryFrames[0].RenderTarget = (FRDGTexture *)0x0;
  this->ReflectNumHistoryFrames[1].RenderTarget = (FRDGTexture *)0x0;
  this->ReflectNumHistoryFrames[2].RenderTarget = (FRDGTexture *)0x0;
  this->ReflectResolveVariance[0].RenderTarget = (FRDGTexture *)0x0;
  this->ReflectResolveVariance[1].RenderTarget = (FRDGTexture *)0x0;
  this->ReflectResolveVariance[2].RenderTarget = (FRDGTexture *)0x0;
  (this->DiffuseIndirect).RenderTarget = (FRDGTexture *)0x0;
  (this->LightIsMoving).RenderTarget = (FRDGTexture *)0x0;
  (this->BackfaceDiffuseIndirect).RenderTarget = (FRDGTexture *)0x0;
  (this->RoughSpecularIndirect).RenderTarget = (FRDGTexture *)0x0;
  (this->ResolveVariance).RenderTarget = (FRDGTexture *)0x0;
  (this->NewDiffuseIndirect).RenderTarget = (FRDGTexture *)0x0;
  (this->NewBackfaceDiffuseIndirect).RenderTarget = (FRDGTexture *)0x0;
  (this->NewRoughSpecularIndirect).RenderTarget = (FRDGTexture *)0x0;
  (this->NewHistoryFastUpdateMode_NumFramesAccumulated).RenderTarget = (FRDGTexture *)0x0;
  (this->NewResolveVariance).RenderTarget = (FRDGTexture *)0x0;
  (this->DepthHistory).RenderTarget = (FRDGTexture *)0x0;
  (this->NormalHistory).RenderTarget = (FRDGTexture *)0x0;
  (this->ReservoirRayDirection).RenderTarget = (FRDGTexture *)0x0;
  (this->ReservoirTraceRadiance).RenderTarget = (FRDGTexture *)0x0;
  (this->ReservoirTraceHitDistance).RenderTarget = (FRDGTexture *)0x0;
  (this->ReservoirTraceHitNormal).RenderTarget = (FRDGTexture *)0x0;
  (this->ReservoirWeights).RenderTarget = (FRDGTexture *)0x0;
  (this->DownsampledSceneDepth2x1).RenderTarget = (FRDGTexture *)0x0;
  (this->DownsampledWorldNormal2x1).RenderTarget = (FRDGTexture *)0x0;
  (this->DownsampledSceneDepth2x2).RenderTarget = (FRDGTexture *)0x0;
  (this->DownsampledWorldNormal2x2).RenderTarget = (FRDGTexture *)0x0;
  (this->LumenTileBitmask).RenderTarget = (FRDGTexture *)0x0;
  (this->MegaLightsTileBitmask).RenderTarget = (FRDGTexture *)0x0;
  (this->EncodedReprojectionVector).RenderTarget = (FRDGTexture *)0x0;
  (this->LumenPackedPixelData).RenderTarget = (FRDGTexture *)0x0;
  (this->MegaLightsPackedPixelData).RenderTarget = (FRDGTexture *)0x0;
  this->DebugData = (FRDGBufferSRV *)0x0;
  if ((param_1->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
    return pFVar11;
  }
  if ((param_1->AllocatorInstance).Data[0x11e9] == (FScriptContainerElement)0x0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
      return pFVar11;
    }
    this_01 = (FLumenViewOrigin *)&this->ViewOrigins;
    bVar9 = IStereoRendering::IsStereoEyeView((FSceneView *)(param_1->AllocatorInstance).Data);
    if (!bVar9) {
      iVar18 = param_1->ArrayNum;
      if (2 < iVar18) {
        iVar18 = 2;
      }
      TArray<FLumenViewOrigin,TFixedAllocator<2>_>::SetNum
                ((TArray<FLumenViewOrigin,TFixedAllocator<2>_> *)this_01,iVar18,No);
      if (0 < iVar18) {
        uVar19 = uVar15;
        do {
          uVar14 = (uint)uVar15;
          uVar13 = 0;
          if ((int)uVar14 < (this->ViewOrigins).ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
            return pFVar11;
          }
          uVar13 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
            return pFVar11;
          }
          FLumenViewOrigin::Init(this_01,(FViewInfo *)((param_1->AllocatorInstance).Data + uVar19));
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar19 = uVar19 + 0x2970;
          this_01 = this_01 + 1;
        } while ((int)(uVar14 + 1) < iVar18);
      }
      goto LAB_144d412be;
    }
    iVar18 = (this->ViewOrigins).ArrayNum;
    if (iVar18 < 1) {
      iVar10 = UE::Core::Private::
               ReallocGrow<0,TFixedAllocator<2>::ForElementType<FLumenViewOrigin>_>
                         (0xf0,0x10,1 - iVar18,(ForElementType<FLumenViewOrigin> *)this_01,piVar1,
                          piVar2);
      DefaultConstructItems<FLumenViewOrigin,int>
                ((((TArray<FLumenViewOrigin,TFixedAllocator<2>_> *)this_01)->AllocatorInstance).
                 InlineData + iVar10,1 - iVar18);
    }
    else if (1 < iVar18) {
      uVar13 = iVar18 - 1;
      if ((int)uVar13 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
          return pFVar11;
        }
      }
      else if (uVar13 == 0) goto LAB_144d41136;
      pTVar3 = (this->ViewOrigins).AllocatorInstance.InlineData + 1;
      iVar18 = ~uVar13 + (this->ViewOrigins).ArrayNum;
      if (iVar18 != 0) {
        memmove(pTVar3,pTVar3 + (int)uVar13,(longlong)iVar18 * 0xf0);
      }
      piVar1 = &(this->ViewOrigins).ArrayNum;
      *piVar1 = *piVar1 - uVar13;
    }
LAB_144d41136:
    if (((this->ViewOrigins).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
      return pFVar11;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
      return pFVar11;
    }
    pFVar12 = FViewInfo::GetPrimaryView((FViewInfo *)(param_1->AllocatorInstance).Data);
    FLumenViewOrigin::Init(this_01,pFVar12);
    goto LAB_144d412be;
  }
  iVar18 = (this->ViewOrigins).ArrayNum;
  this_00 = &this->ViewOrigins;
  if (iVar18 < 1) {
    iVar10 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<2>::ForElementType<FLumenViewOrigin>_>
                       (0xf0,0x10,1 - iVar18,&this_00->AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<FLumenViewOrigin,int>
              ((this_00->AllocatorInstance).InlineData + iVar10,1 - iVar18);
  }
  else if (1 < iVar18) {
    uVar13 = iVar18 - 1;
    if ((int)uVar13 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
        return pFVar11;
      }
    }
    else if (uVar13 == 0) goto LAB_144d40ed4;
    pTVar3 = (this->ViewOrigins).AllocatorInstance.InlineData + 1;
    iVar18 = ~uVar13 + (this->ViewOrigins).ArrayNum;
    if (iVar18 != 0) {
      memmove(pTVar3,pTVar3 + (int)uVar13,(longlong)iVar18 * 0xf0);
    }
    piVar2 = &(this->ViewOrigins).ArrayNum;
    *piVar2 = *piVar2 - uVar13;
  }
LAB_144d40ed4:
  if (((this->ViewOrigins).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
    return pFVar11;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
    return pFVar11;
  }
  FLumenViewOrigin::Init((FLumenViewOrigin *)this_00,(FViewInfo *)(param_1->AllocatorInstance).Data)
  ;
  uVar8 = _UNK_150689648;
  uVar7 = ___xmm_3f800000000000000000000000000000;
  if ((*piVar1 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    pFVar11 = (FLumenSceneFrameTemporaries *)(*pcVar4)();
    return pFVar11;
  }
  pFVar6 = &(this->ViewOrigins).AllocatorInstance;
  pFVar6->InlineData[0].Pad[0x50] = '\0';
  pFVar6->InlineData[0].Pad[0x51] = '\0';
  pFVar6->InlineData[0].Pad[0x52] = '\0';
  pFVar6->InlineData[0].Pad[0x53] = '\0';
  pFVar6->InlineData[0].Pad[0x54] = '\0';
  pFVar6->InlineData[0].Pad[0x55] = '\0';
  pFVar6->InlineData[0].Pad[0x56] = '\0';
  pFVar6->InlineData[0].Pad[0x57] = '\0';
  pFVar6 = &(this->ViewOrigins).AllocatorInstance;
  pFVar6->InlineData[0].Pad[0x58] = '\0';
  pFVar6->InlineData[0].Pad[0x59] = '\0';
  pFVar6->InlineData[0].Pad[0x5a] = '\0';
  pFVar6->InlineData[0].Pad[0x5b] = '\0';
  pFVar6->InlineData[0].Pad[0x5c] = '\0';
  pFVar6->InlineData[0].Pad[0x5d] = '\0';
  pFVar6->InlineData[0].Pad[0x5e] = '\0';
  pFVar6->InlineData[0].Pad[0x5f] = '\0';
  pFVar6 = &(this->ViewOrigins).AllocatorInstance;
  pFVar6->InlineData[0].Pad[0x60] = '\0';
  pFVar6->InlineData[0].Pad[0x61] = '\0';
  pFVar6->InlineData[0].Pad[0x62] = '\0';
  pFVar6->InlineData[0].Pad[99] = '\0';
  pFVar6->InlineData[0].Pad[100] = '\0';
  pFVar6->InlineData[0].Pad[0x65] = '\0';
  pFVar6->InlineData[0].Pad[0x66] = '\0';
  pFVar6->InlineData[0].Pad[0x67] = '\0';
  pFVar6 = &(this->ViewOrigins).AllocatorInstance;
  pFVar6->InlineData[0].Pad[0x68] = '\0';
  pFVar6->InlineData[0].Pad[0x69] = '\0';
  pFVar6->InlineData[0].Pad[0x6a] = '\0';
  pFVar6->InlineData[0].Pad[0x6b] = '\0';
  pFVar6->InlineData[0].Pad[0x6c] = '\0';
  pFVar6->InlineData[0].Pad[0x6d] = '\0';
  pFVar6->InlineData[0].Pad[0x6e] = '\0';
  pFVar6->InlineData[0].Pad[0x6f] = '\0';
  pFVar6 = &(this->ViewOrigins).AllocatorInstance;
  pFVar6->InlineData[0].Pad[0x70] = '\0';
  pFVar6->InlineData[0].Pad[0x71] = '\0';
  pFVar6->InlineData[0].Pad[0x72] = '\0';
  pFVar6->InlineData[0].Pad[0x73] = '\0';
  pFVar6->InlineData[0].Pad[0x74] = '\0';
  pFVar6->InlineData[0].Pad[0x75] = '\0';
  pFVar6->InlineData[0].Pad[0x76] = '\0';
  pFVar6->InlineData[0].Pad[0x77] = '\0';
  pFVar6 = &(this->ViewOrigins).AllocatorInstance;
  pFVar6->InlineData[0].Pad[0x78] = '\0';
  pFVar6->InlineData[0].Pad[0x79] = '\0';
  pFVar6->InlineData[0].Pad[0x7a] = '\0';
  pFVar6->InlineData[0].Pad[0x7b] = '\0';
  pFVar6->InlineData[0].Pad[0x7c] = '\0';
  pFVar6->InlineData[0].Pad[0x7d] = '\0';
  pFVar6->InlineData[0].Pad[0x7e] = '\0';
  pFVar6->InlineData[0].Pad[0x7f] = '\0';
  *(undefined8 *)((this->ViewOrigins).AllocatorInstance.InlineData[0].Pad + 0x80) = uVar7;
  *(undefined8 *)((this->ViewOrigins).AllocatorInstance.InlineData[0].Pad + 0x88) = uVar8;
LAB_144d412be:
  (this->ViewExtent).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  iVar18 = param_1->ArrayNum;
  pFVar17 = (param_1->AllocatorInstance).Data;
  local_res18 = 0;
  pFVar16 = pFVar17 + (longlong)iVar18 * 0x2970;
  while( true ) {
    if (param_1->ArrayNum != iVar18) {
      `TCheckedPointerIterator<FViewInfo_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar17 == pFVar16) break;
    iVar10 = (this->ViewExtent).field0_0x0._s_0.X;
    iVar5 = *(int *)(pFVar17 + 0x1c38);
    if (*(int *)(pFVar17 + 0x1c38) < iVar10) {
      iVar5 = iVar10;
    }
    iVar10 = (this->ViewExtent).field0_0x0._s_0.Y;
    (this->ViewExtent).field0_0x0._s_0.X = iVar5;
    iVar5 = *(int *)(pFVar17 + 0x1c3c);
    if (*(int *)(pFVar17 + 0x1c3c) < iVar10) {
      iVar5 = iVar10;
    }
    pFVar17 = pFVar17 + 0x2970;
    (this->ViewExtent).field0_0x0._s_0.Y = iVar5;
  }
  return this;
}

