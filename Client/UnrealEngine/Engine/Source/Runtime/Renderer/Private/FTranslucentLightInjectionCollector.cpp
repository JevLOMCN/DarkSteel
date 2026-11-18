// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FTranslucentLightInjectionCollector @ 14574f940

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FTranslucentLightInjectionCollector * __thiscall
FTranslucentLightInjectionCollector::FTranslucentLightInjectionCollector
          (FTranslucentLightInjectionCollector *this,FRDGBuilder *param_1,
          TArrayView<FViewInfo_const_,int> *param_2,bool param_3)

{
  int *piVar1;
  TArray<FTranslucentLightInjectionCollector::FPerViewData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *this_00;
  uint uVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  FTranslucentLightInjectionCollector *pFVar9;
  uint uVar10;
  undefined8 *local_28 [2];
  
  puVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x18,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FTranslucentLightInjectionCollector *)(*pcVar3)();
      return pFVar9;
    }
  }
  else {
    *puVar8 = &
              ___7__TObject_V__TArray_UFPerViewData_FTranslucentLightInjectionCollector__V__TLinearArrayAllocatorBase_UFSceneRenderingBlockAllocationTag___0A______FRDGAllocator__6B_
    ;
    puVar8[1] = 0;
    puVar8[2] = 0;
  }
  local_28[0] = puVar8;
  if (((undefined8 **)param_1->_padding_ <= local_28) &&
     (local_28 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FTranslucentLightInjectionCollector *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar6 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  this_00 = (TArray<FTranslucentLightInjectionCollector::FPerViewData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
             *)(puVar8 + 1);
  uVar2 = param_2->ArrayNum;
  piVar1 = (int *)(puVar8 + 2);
  *(int *)&param_1->_padding_ = iVar6 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar6 * 8) = local_28[0];
  this->InjectionDataPerView = this_00;
  this->bCollectorSupportsBatching = false;
  iVar6 = *piVar1;
  if (iVar6 < (int)uVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FPerViewData>_>
                      (0x38,8,uVar2 - iVar6,
                       (ForElementType<FTranslucentLightInjectionCollector::FPerViewData> *)this_00,
                       piVar1,(int *)((longlong)puVar8 + 0x14));
    DefaultConstructItems<FTranslucentLightInjectionCollector::FPerViewData,int>
              ((this_00->AllocatorInstance).Data + iVar7,uVar2 - iVar6);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar6) {
      uVar10 = iVar6 - uVar2;
      if ((int)(uVar10 | uVar2) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FTranslucentLightInjectionCollector *)(*pcVar3)();
          return pFVar9;
        }
      }
      if (uVar10 != 0) {
        TArray<FTranslucentLightInjectionCollector::FPerViewData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::RemoveAtImpl(this_00,uVar2,uVar10);
        UE::Core::Private::
        ReallocShrink<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FPerViewData>_>
                  (0x38,8,(ForElementType<FTranslucentLightInjectionCollector::FPerViewData> *)
                          this_00,*piVar1,(int *)((longlong)puVar8 + 0x14));
      }
    }
  }
  pTVar4 = CVarTranslucencyLightingVolumeBatch.Ref;
  bVar5 = IsInParallelRenderingThread();
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FTranslucentLightInjectionCollector *)(*pcVar3)();
      return pFVar9;
    }
  }
  if ((pTVar4->ShadowedValue[1] == 0) || (!param_3)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  this->bCollectorSupportsBatching = bVar5;
  return this;
}

// AddLightForInjection @ 145756a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FTranslucentLightInjectionCollector::AddLightForInjection
          (FTranslucentLightInjectionCollector *this,FViewInfo *param_1,uint param_2,
          TArrayView<FVisibleLightInfo_const_,int> *param_3,FLightSceneInfo *param_4,
          FProjectedShadowInfo *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uchar uVar3;
  Type TVar4;
  undefined4 uVar5;
  FLightSceneProxy *pFVar6;
  undefined4 uVar12;
  FVisibleLightInfo *pFVar7;
  FMaterialRenderProxy *this_00;
  FStaticShadowDepthMap *pFVar8;
  FSceneViewState *pFVar9;
  TArray<FTranslucentLightInjectionCollector::FPerViewData,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar10;
  FInjectionData *pFVar11;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int *piVar24;
  FInjectionData *pFVar25;
  TConsoleVariableData<int> *pTVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  char cVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  TSphere<double> *pTVar35;
  FVolumeBounds *pFVar36;
  FMaterial *pFVar37;
  UMaterial *pUVar38;
  byte bVar39;
  uint *puVar40;
  undefined1 *puVar41;
  uint *puVar42;
  FPerViewData *pFVar43;
  undefined1 auStackY_198 [32];
  bool local_148;
  char local_147;
  int local_130;
  int iStack_128;
  int iStack_118;
  FVolumeBounds local_f8;
  undefined1 local_e0 [40];
  FInjectionData local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar6 = param_4->Proxy;
  if (pFVar6->bAffectTranslucentLighting == '\0') {
    return;
  }
  uVar3 = pFVar6->LightType;
  pTVar35 = (TSphere<double> *)(**(code **)(pFVar6->_padding_ + 0x10))(pFVar6,local_e0);
  pFVar36 = CalculateLightVolumeBounds(&local_f8,pTVar35,param_1,0,uVar3 == '\0');
  iVar34 = pFVar36->MinX;
  iVar14 = pFVar36->MinY;
  uVar22._0_4_ = pFVar36->MinX;
  uVar22._4_4_ = pFVar36->MinY;
  iVar15 = pFVar36->MinZ;
  iVar16 = pFVar36->MaxX;
  uVar23._0_4_ = pFVar36->MinZ;
  uVar23._4_4_ = pFVar36->MaxX;
  uVar5 = pFVar36->MinZ;
  uVar12 = pFVar36->MaxX;
  uVar1._0_4_ = pFVar36->MaxY;
  uVar1._4_4_ = pFVar36->MaxZ;
  if (((iVar34 < (int)uVar12) && (iVar14 < (int)uVar1)) && ((int)uVar5 < uVar1._4_4_)) {
    bVar27 = true;
  }
  else {
    bVar27 = false;
  }
  pTVar35 = (TSphere<double> *)
            (**(code **)(param_4->Proxy->_padding_ + 0x10))(param_4->Proxy,local_e0);
  pFVar36 = CalculateLightVolumeBounds(&local_f8,pTVar35,param_1,1,uVar3 == '\0');
  uVar2._0_4_ = pFVar36->MaxY;
  uVar2._4_4_ = pFVar36->MaxZ;
  iVar17 = pFVar36->MinY;
  uVar20._0_4_ = pFVar36->MinX;
  uVar20._4_4_ = pFVar36->MinY;
  iVar18 = pFVar36->MinZ;
  iVar19 = pFVar36->MaxX;
  uVar21._0_4_ = pFVar36->MinZ;
  uVar21._4_4_ = pFVar36->MaxX;
  if (!bVar27) {
    if (iVar19 <= pFVar36->MinX) {
      return;
    }
    if ((int)uVar2 <= iVar17) {
      return;
    }
    if (uVar2._4_4_ <= iVar18) {
      return;
    }
  }
  uVar33 = param_4->Id;
  uVar31 = 0;
  if ((int)uVar33 < param_3->ArrayNum) {
    uVar31 = ~uVar33 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar27)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  TVar4 = (Type)param_1->_padding_;
  pFVar7 = param_3->DataPtr;
  bVar27 = false;
  this_00 = param_4->Proxy->LightFunctionMaterial;
  local_147 = '\0';
  if ((this_00 != (FMaterialRenderProxy *)0x0) &&
     ((*(uint *)(param_1->_padding_ + 0x50) & 0x10000) != 0)) {
    pFVar37 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,TVar4);
    local_147 = (**(code **)(pFVar37->_padding_ + 0xd0))(pFVar37);
    if ((local_147 == '\0') ||
       (bVar27 = FMaterial::MaterialIsLightFunctionAtlasCompatible_RenderThread(pFVar37), !bVar27))
    {
      bVar27 = false;
    }
    else {
      bVar27 = true;
    }
  }
  iVar32 = FVisibleLightInfo::GetVirtualShadowMapId(pFVar7 + (int)uVar33,param_1);
  if ((param_4->Proxy->bCastVolumetricShadow == 0) ||
     (bVar28 = ShouldRenderHeterogeneousVolumesForView(param_1), !bVar28)) {
LAB_145756cf2:
    local_148 = false;
  }
  else {
    bVar28 = ShouldHeterogeneousVolumesCastShadows();
    local_148 = true;
    if (!bVar28) goto LAB_145756cf2;
  }
  pTVar26 = CVarTranslucencyLightingVolumeAccurateRectLights.Ref;
  pFVar8 = param_4->Proxy->StaticShadowDepthMap;
  if ((pFVar8 == (FStaticShadowDepthMap *)0x0) || (pFVar8->Data == (FStaticShadowDepthMapData *)0x0)
     ) {
    bVar28 = false;
  }
  else {
    bVar28 = true;
  }
  bVar29 = IsInParallelRenderingThread();
  if ((!bVar29) &&
     (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar29)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((((this->bCollectorSupportsBatching == false) || (uVar3 == '\0')) ||
      ((pTVar26->ShadowedValue[1] == 0 && (uVar3 == '\x03')))) ||
     ((bVar28 || (param_5 != (FProjectedShadowInfo *)0x0)))) {
LAB_145756fd9:
    if (local_147 == '\0') {
      pUVar38 = UMaterial::GetDefaultMaterial(MD_LightFunction);
      local_b8.LightFunctionMaterialProxy =
           (FMaterialRenderProxy *)(**(code **)(pUVar38->_padding_ + 0x310))(pUVar38);
      goto LAB_145756fff;
    }
  }
  else if ((local_147 == '\0') || (bVar27)) {
    if (local_148 == false) {
      if ((param_1->ForwardLightingResources).ForwardLightUniformBuffer ==
          (TRDGUniformBuffer<FForwardLightUniformParameters> *)0x0) {
        return;
      }
      pFVar9 = param_1->ViewState;
      if (pFVar9 == (FSceneViewState *)0x0) {
        return;
      }
      if (*(int *)&(pFVar9->LightSceneIdToForwardLightIndex).field_0x8 !=
          *(int *)&(pFVar9->LightSceneIdToForwardLightIndex).field_0x34) {
        puVar41 = *(undefined1 **)&(pFVar9->LightSceneIdToForwardLightIndex).field_0x40;
        if (puVar41 == (undefined1 *)0x0) {
          puVar41 = &(pFVar9->LightSceneIdToForwardLightIndex).field_0x38;
        }
        uVar33 = *(uint *)(puVar41 +
                          (ulonglong)
                          (*(int *)&(pFVar9->LightSceneIdToForwardLightIndex).field_0x48 - 1U &
                          param_4->Id) * 4);
        if (uVar33 != 0xffffffff) {
          do {
            puVar40 = (uint *)((longlong)(int)uVar33 * 0x10 +
                              *(longlong *)&pFVar9->LightSceneIdToForwardLightIndex);
            if (*puVar40 == param_4->Id) {
              puVar42 = puVar40 + 1;
              if (puVar40 == (uint *)0x0) {
                puVar42 = (uint *)0x0;
              }
              if (puVar42 != (uint *)0x0) {
                pTVar10 = this->InjectionDataPerView;
                uVar33 = *puVar42;
                uVar31 = 0;
                if ((int)param_2 < pTVar10->ArrayNum) {
                  uVar31 = ~param_2 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar27)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pFVar43 = (pTVar10->AllocatorInstance).Data;
                bVar39 = (byte)uVar33 & 0x1f;
                pFVar43[(int)param_2].BatchedLocalLightCount =
                     pFVar43[(int)param_2].BatchedLocalLightCount + 1;
                if (((iVar34 < iVar16) && (iVar14 < (int)uVar1)) && (iVar15 < uVar1._4_4_)) {
                  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
                  PadToNum(pFVar43[(int)param_2].BatchedLocalLights,uVar33 + 1,false);
                  if ((((int)uVar33 < 0) ||
                      (pFVar43[(int)param_2].BatchedLocalLights[0].NumBits <= (int)uVar33)) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar27)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  puVar40 = pFVar43[(int)param_2].BatchedLocalLights[0].AllocatorInstance.Data +
                            ((int)(uVar33 + ((int)uVar33 >> 0x1f & 0x1fU)) >> 5);
                  *puVar40 = *puVar40 | 1 << bVar39;
                }
                if ((((int)uVar20 < iVar19) && (iVar17 < (int)uVar2)) && (iVar18 < uVar2._4_4_)) {
                  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::
                  PadToNum(pFVar43[(int)param_2].BatchedLocalLights + 1,uVar33 + 1,false);
                  if ((((int)uVar33 < 0) ||
                      (pFVar43[(int)param_2].BatchedLocalLights[1].NumBits <= (int)uVar33)) &&
                     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar27)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  puVar40 = pFVar43[(int)param_2].BatchedLocalLights[1].AllocatorInstance.Data +
                            ((int)(uVar33 + ((int)uVar33 >> 0x1f & 0x1fU)) >> 5);
                  *puVar40 = *puVar40 | 1 << bVar39;
                }
                if (iVar32 == -1) {
                  return;
                }
                pFVar43[(int)param_2].bAnyBatchedLightsWithVirtualShadowMaps = true;
                return;
              }
              break;
            }
            uVar33 = puVar40[2];
          } while (uVar33 != 0xffffffff);
        }
      }
    }
    goto LAB_145756fd9;
  }
  local_b8.LightFunctionMaterialProxy = param_4->Proxy->LightFunctionMaterial;
LAB_145756fff:
  pFVar37 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                      (local_b8.LightFunctionMaterialProxy,TVar4);
  cVar30 = (**(code **)(pFVar37->_padding_ + 0xd0))(pFVar37);
  if (cVar30 != '\0') {
    local_b8.ProjectedShadowInfo = param_5;
    local_b8.LightSceneInfo = param_4;
    pTVar10 = this->InjectionDataPerView;
    local_b8.bApplyLightFunction = (bool)local_147;
    local_b8.bUseAdaptiveVolumetricShadowMap = local_148;
    uVar33 = 0;
    if ((int)param_2 < pTVar10->ArrayNum) {
      uVar33 = ~param_2 >> 0x1f;
    }
    local_b8.VirtualShadowMapId = iVar32;
    local_b8.VolumeBounds[0]._0_8_ = uVar22;
    local_b8.VolumeBounds[0]._8_8_ = uVar23;
    local_b8.VolumeBounds[0]._16_8_ = uVar1;
    local_b8.VolumeBounds[1]._0_8_ = uVar20;
    local_b8.VolumeBounds[1]._8_8_ = uVar21;
    local_b8.VolumeBounds[1]._16_8_ = uVar2;
    if ((uVar33 == 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar43 = (pTVar10->AllocatorInstance).Data + (int)param_2;
    pFVar11 = (pFVar43->Unbatched).AllocatorInstance.Data;
    if (((pFVar11 <= &local_b8) && (&local_b8 < pFVar11 + (pFVar43->Unbatched).ArrayMax)) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar27)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar34 = (pFVar43->Unbatched).ArrayNum;
    piVar24 = &(pFVar43->Unbatched).ArrayMax;
    if (iVar34 == *piVar24) {
      iVar34 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FTranslucentLightInjectionCollector::FInjectionData>_>
                         (0x858,(ForElementType<FTranslucentLightInjectionCollector::FInjectionData>
                                 *)pFVar43,piVar24);
    }
    (pFVar43->Unbatched).ArrayNum = iVar34 + 1;
    pFVar11 = (pFVar43->Unbatched).AllocatorInstance.Data;
    pFVar11[iVar34].LightSceneInfo = local_b8.LightSceneInfo;
    pFVar11[iVar34].ProjectedShadowInfo = local_b8.ProjectedShadowInfo;
    *(ulonglong *)&pFVar11[iVar34].bApplyLightFunction =
         CONCAT71(local_b8._17_7_,local_b8.bApplyLightFunction);
    pFVar11[iVar34].LightFunctionMaterialProxy = local_b8.LightFunctionMaterialProxy;
    pFVar25 = pFVar11 + iVar34;
    pFVar25->VirtualShadowMapId = local_b8.VirtualShadowMapId;
    pFVar25->bUseAdaptiveVolumetricShadowMap = (bool)local_b8.bUseAdaptiveVolumetricShadowMap;
    *(int3 *)&pFVar25->field_0x25 = local_b8._37_3_;
    pFVar11[iVar34].VolumeBounds[0].MinX = local_b8.VolumeBounds[0].MinX;
    pFVar11[iVar34].VolumeBounds[0].MinY = local_b8.VolumeBounds[0].MinY;
    pFVar11[iVar34].VolumeBounds[0].MinZ = local_b8.VolumeBounds[0].MinZ;
    pFVar11[iVar34].VolumeBounds[0].MaxX = local_b8.VolumeBounds[0].MaxX;
    pFVar11[iVar34].VolumeBounds[0].MaxY = local_b8.VolumeBounds[0].MaxY;
    pFVar11[iVar34].VolumeBounds[0].MaxZ = local_b8.VolumeBounds[0].MaxZ;
    pFVar11[iVar34].VolumeBounds[1].MinX = local_b8.VolumeBounds[1].MinX;
    pFVar11[iVar34].VolumeBounds[1].MinY = local_b8.VolumeBounds[1].MinY;
    pFVar11[iVar34].VolumeBounds[1].MinZ = local_b8.VolumeBounds[1].MinZ;
    pFVar11[iVar34].VolumeBounds[1].MaxX = local_b8.VolumeBounds[1].MaxX;
    pFVar11[iVar34].VolumeBounds[1].MaxY = local_b8.VolumeBounds[1].MaxY;
    pFVar11[iVar34].VolumeBounds[1].MaxZ = local_b8.VolumeBounds[1].MaxZ;
  }
  return;
}

