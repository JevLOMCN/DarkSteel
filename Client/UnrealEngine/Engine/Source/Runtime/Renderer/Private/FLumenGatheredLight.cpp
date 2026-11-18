// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FLumenGatheredLight @ 144d3f280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLumenGatheredLight * __thiscall
FLumenGatheredLight::FLumenGatheredLight(FLumenGatheredLight *this,FLumenGatheredLight *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> FVar3;
  ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> FVar4;
  
  this->LightSceneInfo = param_1->LightSceneInfo;
  this->LightFunctionMaterialProxy = param_1->LightFunctionMaterialProxy;
  this->LightIndex = param_1->LightIndex;
  this->Type = param_1->Type;
  this->bHasShadows = param_1->bHasShadows;
  this->bMayCastCloudTransmittance = param_1->bMayCastCloudTransmittance;
  this->bNeedsShadowMask = param_1->bNeedsShadowMask;
  this->bBatchedShadowsEligible = param_1->bBatchedShadowsEligible;
  ::FString::FString(&this->Name,&param_1->Name);
  (this->DeferredLightUniformBuffers).AllocatorInstance.SecondaryData =
       (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0;
  FVar4 = (param_1->DeferredLightUniformBuffers).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->DeferredLightUniformBuffers).ArrayNum;
  (this->DeferredLightUniformBuffers).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0) {
    FVar4 = (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)
            &param_1->DeferredLightUniformBuffers;
  }
  piVar1 = &(this->DeferredLightUniformBuffers).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_>
              (8,8,iVar2,0,&(this->DeferredLightUniformBuffers).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->DeferredLightUniformBuffers).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0) {
      FVar3 = (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)
              &this->DeferredLightUniformBuffers;
    }
    ConstructItems<TUniformBufferRef<FDeferredLightUniformStruct>,TUniformBufferRef<FDeferredLightUniformStruct>,int>
              ((void *)FVar3,(TUniformBufferRef<FDeferredLightUniformStruct> *)FVar4,iVar2);
  }
  return this;
}

// FLumenGatheredLight @ 144d3f370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FLumenGatheredLight * __thiscall
FLumenGatheredLight::FLumenGatheredLight
          (FLumenGatheredLight *this,FScene *param_1,TArrayView<FViewInfo_const_,int> *param_2,
          FLumenSceneFrameTemporaries *param_3,FLightSceneInfo *param_4,uint param_5)

{
  TArray<TUniformBufferRef<FDeferredLightUniformStruct>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TUniformBufferRef<FDeferredLightUniformStruct> *_Dst;
  TUniformBufferRef<FDeferredLightUniformStruct> TVar2;
  float fVar3;
  uchar uVar4;
  uint uVar5;
  FViewInfo *pFVar6;
  FLightSceneProxy *pFVar7;
  FMaterialRenderProxy *this_00;
  FLightSceneInfo *pFVar8;
  FRHIResource *this_01;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FLumenGatheredLight *pFVar16;
  FMaterial *pFVar17;
  TUniformBufferRef<FDeferredLightUniformStruct> TVar18;
  ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> FVar19;
  ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_> FVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uchar *puVar25;
  FDeferredLightUniformStruct local_e8;
  
  uVar23 = 0;
  this->Type = MAX;
  this->bHasShadows = false;
  this->bMayCastCloudTransmittance = false;
  this->bNeedsShadowMask = false;
  this->bBatchedShadowsEligible = false;
  this->LightFunctionMaterialProxy = (FMaterialRenderProxy *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->DeferredLightUniformBuffers).AllocatorInstance.SecondaryData =
       (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0;
  (this->DeferredLightUniformBuffers).ArrayNum = 0;
  (this->DeferredLightUniformBuffers).ArrayMax = 4;
  this->LightIndex = param_5;
  this->LightSceneInfo = param_4;
  iVar15 = param_2->ArrayNum;
  this->bHasShadows = param_4->Proxy->bCastDynamicShadow;
  if ((iVar15 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar16 = (FLumenGatheredLight *)(*pcVar9)();
    return pFVar16;
  }
  pFVar6 = param_2->DataPtr;
  pFVar7 = this->LightSceneInfo->Proxy;
  this->Type = MAX;
  uVar4 = pFVar7->LightType;
  if (uVar4 == '\0') {
    this->Type = Directional;
    bVar11 = LightMayCastCloudShadow(param_1,pFVar6,this->LightSceneInfo);
    this->bMayCastCloudTransmittance = bVar11;
  }
  else if (uVar4 == '\x01') {
    this->Type = Point;
  }
  else if (uVar4 == '\x02') {
    this->Type = Spot;
  }
  else if (uVar4 == '\x03') {
    this->Type = Rect;
  }
  this_00 = pFVar7->LightFunctionMaterial;
  this->LightFunctionMaterialProxy = this_00;
  if (this_00 != (FMaterialRenderProxy *)0x0) {
    if ((*(uint *)(pFVar6->_padding_ + 0x50) & 0x10000) != 0) {
      pFVar17 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                          (this_00,*(Type *)&param_1->field_0x8);
      cVar12 = (**(code **)(pFVar17->_padding_ + 0xd0))(pFVar17);
      if (cVar12 != '\0') goto LAB_144d3f4ad;
    }
    this->LightFunctionMaterialProxy = (FMaterialRenderProxy *)0x0;
  }
LAB_144d3f4ad:
  if ((this->LightFunctionMaterialProxy == (FMaterialRenderProxy *)0x0) ||
     ((bVar11 = LightFunctionAtlas::IsEnabled(pFVar6,Lumen), bVar11 &&
      (this->LightSceneInfo->Proxy->LightFunctionAtlasLightIndex != '\0')))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  FSceneRenderer::GetLightNameForDrawEvent(pFVar7,&this->Name);
  if (((this->bHasShadows == false) && (this->bMayCastCloudTransmittance == false)) &&
     (this->LightFunctionMaterialProxy == (FMaterialRenderProxy *)0x0)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  this->bNeedsShadowMask = bVar13;
  if (((this->bMayCastCloudTransmittance == false) && (bVar11)) && (this->Type != Directional)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  this->bBatchedShadowsEligible = bVar11;
  pTVar10 = CVarLumenDirectLightingBatchShadows.Ref;
  if (bVar13 != false) {
    bVar11 = IsInParallelRenderingThread();
    if ((!bVar11) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FLumenGatheredLight *)(*pcVar9)();
      return pFVar16;
    }
    if ((pTVar10->ShadowedValue[1] != 2) || (this->bBatchedShadowsEligible == false)) {
      pTVar1 = &this->DeferredLightUniformBuffers;
      iVar15 = (this->DeferredLightUniformBuffers).ArrayNum;
      uVar5 = (param_3->ViewOrigins).ArrayNum;
      if (iVar15 < (int)uVar5) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_>
                           (8,8,uVar5 - iVar15,&pTVar1->AllocatorInstance,
                            &(this->DeferredLightUniformBuffers).ArrayNum,
                            &(this->DeferredLightUniformBuffers).ArrayMax);
        FVar19 = (this->DeferredLightUniformBuffers).AllocatorInstance.SecondaryData;
        if (FVar19 == (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0) {
          FVar19 = (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)pTVar1;
        }
        DefaultConstructItems<TUniformBufferRef<FDeferredLightUniformStruct>,int>
                  ((void *)((longlong)FVar19 + (longlong)iVar14 * 8),uVar5 - iVar15);
      }
      else {
        if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
        }
        if ((int)uVar5 < iVar15) {
          uVar21 = iVar15 - uVar5;
          if (((int)(uVar21 | uVar5) < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FLumenGatheredLight *)(*pcVar9)();
            return pFVar16;
          }
          if (uVar21 != 0) {
            FVar19 = (this->DeferredLightUniformBuffers).AllocatorInstance.SecondaryData;
            if (FVar19 == (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0) {
              FVar19 = (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)pTVar1;
            }
            _Dst = (TUniformBufferRef<FDeferredLightUniformStruct> *)
                   ((longlong)FVar19 + (longlong)(int)uVar5 * 8);
            DestructItems<TUniformBufferRef<FDeferredLightUniformStruct>,int>(_Dst,uVar21);
            iVar15 = ((this->DeferredLightUniformBuffers).ArrayNum - uVar21) - uVar5;
            if (iVar15 != 0) {
              memmove(_Dst,_Dst + (int)uVar21,(longlong)iVar15 << 3);
            }
            iVar15 = (this->DeferredLightUniformBuffers).ArrayNum - uVar21;
            (this->DeferredLightUniformBuffers).ArrayNum = iVar15;
            UE::Core::Private::
            ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>_>
                      (8,8,&pTVar1->AllocatorInstance,iVar15,
                       &(this->DeferredLightUniformBuffers).ArrayMax);
          }
        }
      }
      if (0 < (int)uVar5) {
        puVar25 = (param_3->ViewOrigins).AllocatorInstance.InlineData[0].Pad + 0xe8;
        uVar24 = uVar23;
        do {
          uVar22 = (uint)uVar23;
          pFVar8 = this->LightSceneInfo;
          uVar21 = 0;
          if ((int)uVar22 < (param_3->ViewOrigins).ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FLumenGatheredLight *)(*pcVar9)();
            return pFVar16;
          }
          GetDeferredLightParameters(&local_e8,*(FSceneView **)puVar25,pFVar8,false,0);
          cVar12 = (**(code **)(this->LightSceneInfo->Proxy->_padding_ + 0x30))();
          if (cVar12 != '\0') {
            local_e8.LightParameters.FalloffExponent = 0.0;
          }
          fVar3 = this->LightSceneInfo->Proxy->IndirectLightingScale;
          local_e8.LightParameters.Color.field0_0x0._s_0.X =
               local_e8.LightParameters.Color.field0_0x0._s_0.X * fVar3;
          local_e8.LightParameters.Color.field0_0x0._s_0.Y =
               local_e8.LightParameters.Color.field0_0x0._s_0.Y * fVar3;
          local_e8.LightParameters.Color.field0_0x0._s_0.Z =
               local_e8.LightParameters.Color.field0_0x0._s_0.Z * fVar3;
          TVar18 = CreateUniformBufferImmediate<FDeferredLightUniformStruct>
                             ((FDeferredLightUniformStruct *)&param_4,(EUniformBufferUsage)&local_e8
                              ,ValidateResources);
          uVar21 = 0;
          if ((int)uVar22 < (this->DeferredLightUniformBuffers).ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FLumenGatheredLight *)(*pcVar9)();
            return pFVar16;
          }
          FVar19 = (this->DeferredLightUniformBuffers).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)
                   &this->DeferredLightUniformBuffers;
          if (FVar19 != (ForElementType<TUniformBufferRef<FDeferredLightUniformStruct>_>)0x0) {
            FVar20 = FVar19;
          }
          TVar2 = (TUniformBufferRef<FDeferredLightUniformStruct>)((longlong)FVar20 + uVar24 * 8);
          if (TVar2 != TVar18) {
            this_01 = *(FRHIResource **)TVar2;
            *(undefined8 *)TVar2 = *(undefined8 *)TVar18;
            *(undefined8 *)TVar18 = 0;
            if (this_01 != (FRHIResource *)0x0) {
              FRHIResource::Release(this_01);
            }
          }
          if (param_4 != (FLightSceneInfo *)0x0) {
            FRHIResource::Release((FRHIResource *)param_4);
          }
          uVar23 = (ulonglong)(uVar22 + 1);
          uVar24 = uVar24 + 1;
          puVar25 = puVar25 + 0xf0;
        } while ((longlong)uVar24 < (longlong)(int)uVar5);
      }
    }
  }
  return this;
}

