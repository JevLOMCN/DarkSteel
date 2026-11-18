// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FVirtualShadowMapInvalidationSceneUpdater @ 1457c3780

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVirtualShadowMapInvalidationSceneUpdater * __thiscall
FVirtualShadowMapInvalidationSceneUpdater::FVirtualShadowMapInvalidationSceneUpdater
          (FVirtualShadowMapInvalidationSceneUpdater *this,
          FVirtualShadowMapArrayCacheManager *param_1)

{
  this->CacheManager = param_1;
  this->_padding_ = (longlong)&___7FVirtualShadowMapInvalidationSceneUpdater__6B_;
  this->PostUpdateChangeSet = (FScenePostUpdateChangeSet *)0x0;
  return this;
}

// PostGPUSceneUpdate @ 1458041c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapInvalidationSceneUpdater::PostGPUSceneUpdate
          (FVirtualShadowMapInvalidationSceneUpdater *this,FRDGBuilder *param_1,
          FSceneUniformBuffer *param_2)

{
  int *piVar1;
  FPrimitiveSceneInfo **ppFVar2;
  int iVar3;
  uint uVar4;
  FVirtualShadowMapArrayCacheManager *pFVar5;
  FPrimitiveSceneInfo *pFVar6;
  FPackedItem *pFVar7;
  FPackedBatch *pFVar8;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTVar9;
  code *pcVar10;
  uint uVar11;
  FRDGBuilder *pFVar12;
  FParameters *pFVar13;
  FVirtualShadowMapInvalidationSceneUpdater *pFVar14;
  TRefCountPtr<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FData>
  TVar15;
  bool bVar16;
  ushort uVar17;
  int iVar18;
  longlong lVar19;
  FRDGBuffer *pFVar20;
  FGlobalShaderMap *this_00;
  FGlobalShaderType *pFVar21;
  FShaderType *pFVar22;
  FName this_01;
  undefined8 *puVar23;
  FRDGBufferUAV *pFVar24;
  FRDGEventName *pFVar25;
  FShaderParametersMetadata *pFVar26;
  byte bVar27;
  longlong lVar28;
  ForElementType<FRDGBuffer_*> *pFVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  ForElementType<FRDGBuffer_*> FVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  FPersistentBuffer *this_02;
  uint uVar35;
  uint uVar36;
  FParameters *pFVar37;
  FPrimitiveSceneInfo **ppFVar38;
  ForElementType<FRDGBuffer_*> *pFVar39;
  bool bVar40;
  undefined1 auStackY_368 [32];
  undefined1 local_317;
  undefined1 local_316;
  undefined1 local_315;
  uint local_314;
  undefined1 local_310 [4];
  uint local_30c;
  FRDGBuilder *local_308;
  uint local_300;
  undefined8 *local_2f8;
  ForElementType<FRDGBuffer_*> *local_2f0;
  FParameters *local_2e8;
  FVirtualShadowMapInvalidationSceneUpdater *local_2e0;
  FRDGBufferUAVDesc local_2d8;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_2c8;
  FGPUData local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  FParameters *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  int local_240;
  int local_238;
  undefined4 local_234;
  FSceneUniformBuffer *local_230;
  void *local_228;
  TIntVector3<int>_u_0 local_220 [2];
  TIntVector3<int>_u_0 local_208;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1f8;
  FString local_1e8;
  TShaderRefBase<FVSMResetInstanceStateCS,FShaderMapPointerTable> local_1d8;
  FRDGBufferDesc local_1c8;
  FInvalidatingPrimitiveCollector local_1a8;
  FRDGEventName local_148;
  FGPUSceneResourceParameters local_128;
  ForElementType<FRDGBuffer_*> local_d8;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_300 = 0;
  local_308 = param_1;
  local_2e0 = this;
  local_230 = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"FScene_VirtualShadowCacheUpdate");
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2163,"FScene_VirtualShadowCacheUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
               ,0x873);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2163);
  }
  lVar28 = *(longlong *)&this->CacheManager->field_0x8;
  lVar19 = 0x3790;
  if (*(char *)(lVar28 + 0x3858) == '\0') {
    lVar19 = 0x378c;
  }
  iVar18 = *(int *)(lVar19 + lVar28) + 0x1f;
  this->CacheManager->InstanceStateMaskWordStride = (int)(iVar18 + (iVar18 >> 0x1f & 0x1fU)) >> 5;
  pFVar5 = this->CacheManager;
  local_30c = pFVar5->InstanceStateMaskWordStride * 2;
  if (0 < (int)local_30c) {
    iVar18 = *(int *)&(pFVar5->ViewData).field_0x8;
    iVar3 = *(int *)&(pFVar5->ViewData).field_0x34;
    if (iVar18 != iVar3) {
      uVar34 = iVar18 - iVar3;
      local_d8.SecondaryData.Data = (FRDGBuffer **)0x0;
      local_50 = 0;
      local_4c = 0x10;
      if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
      }
      if (0x10 < (int)uVar34) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FRDGBuffer_*>_>
                  (8,8,uVar34,&local_d8,0,(int *)&local_4c);
      }
      uVar34 = local_50;
      FVar32.Data = local_d8.SecondaryData.Data;
      pFVar5 = this->CacheManager;
      pFVar37 = (FParameters *)&pFVar5->ViewData;
      local_288._padding_._0_4_ = 0;
      local_288._padding_._4_4_ = 1;
      local_288.UnvisitedBitMask = 0xffffffff;
      local_2f0 = (ForElementType<FRDGBuffer_*> *)&(pFVar5->ViewData).field_0x10;
      local_288.CurrentBitIndex = 0;
      local_288.BaseBitIndex = 0;
      local_2e8 = pFVar37;
      local_288.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2f0;
      if (*(int *)&(pFVar5->ViewData).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
      }
      local_314 = *(uint *)&(pFVar5->ViewData).field_0x28;
      local_240 = *(int *)&(pFVar5->ViewData).field_0x8 - *(int *)&(pFVar5->ViewData).field_0x34;
      local_260._padding_ = CONCAT44(local_288._padding_._4_4_,(undefined4)local_288._padding_);
      local_260.CurrentBitIndex = local_288.CurrentBitIndex;
      local_260.UnvisitedBitMask = local_288.UnvisitedBitMask;
      local_260._28_4_ = local_288._28_4_;
      local_260.BaseBitIndex = local_288.BaseBitIndex;
      iVar18 = (int)local_314 >> 5;
      bVar27 = (byte)local_314;
      uVar35 = local_314 & 0xffffffe0;
      local_260.Array = local_288.Array;
      local_268 = pFVar37;
      if (((int)local_314 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar13 = local_2e8;
      pFVar39 = local_2f0;
      uVar11 = local_30c;
      uVar4 = *(uint *)(local_2f0->InlineData + 0x18);
      uVar36 = local_314;
      if (local_314 != uVar4) {
        pFVar29 = local_2f0;
        if (*(ForElementType<FRDGBuffer_*> **)(local_2f0->InlineData + 0x10) !=
            (ForElementType<FRDGBuffer_*> *)0x0) {
          pFVar29 = *(ForElementType<FRDGBuffer_*> **)(local_2f0->InlineData + 0x10);
        }
        uVar36 = -1 << (bVar27 & 0x1f) & *(uint *)(pFVar29->InlineData + (longlong)iVar18 * 4);
        while (uVar36 == 0) {
          lVar28 = (longlong)iVar18;
          uVar35 = uVar35 + 0x20;
          iVar18 = iVar18 + 1;
          local_314 = uVar4;
          uVar36 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_1458044a0;
          uVar36 = *(uint *)(pFVar29->InlineData + lVar28 * 4 + 4);
        }
        uVar30 = (ulonglong)(~(uVar36 - 1) & uVar36) * 2 + 1;
        lVar28 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        local_238 = (int)lVar28;
        local_314 = local_238 + -1 + uVar35;
        uVar36 = local_314;
        if ((int)uVar4 < (int)local_314) {
          local_314 = uVar4;
          uVar36 = uVar4;
        }
      }
LAB_1458044a0:
      while( true ) {
        if (*(int *)&(pFVar37->LoadBalancerParameters).ItemBuffer -
            (pFVar37->GPUScene).CommonParameters.GPUSceneMaxPersistentPrimitiveIndex != local_240) {
          local_317 = 0;
          `TSparseArray<FVirtualShadowMapArrayCacheManager::FViewData,FDefaultSparseArrayAllocator>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_317);
        }
        if (((local_260.CurrentBitIndex == uVar36) &&
            ((ForElementType<FRDGBuffer_*> *)local_260.Array == pFVar39)) && (pFVar37 == pFVar13))
        break;
        this_02 = (FPersistentBuffer *)
                  (&((pFVar37->LoadBalancerParameters).BatchBuffer)->_padding_ +
                  (longlong)local_260.CurrentBitIndex * 4);
        local_2a8.NumItems = uVar11;
        if (this_02->bRoundUpToPOT != false) {
          uVar30 = (ulonglong)(uVar11 - 1) * 2 + 1;
          lVar28 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          local_234 = (undefined4)lVar28;
          local_2a8.NumItems = 1 << ((byte)lVar28 & 0x1f);
        }
        local_2a8.NumGroupsPerBatch = 0x10109;
        local_2a8.BatchBuffer = (FRDGBuffer *)0x0;
        if (local_2a8.NumItems < this_02->MinimumNumElementsReserved) {
          local_2a8.NumItems = this_02->MinimumNumElementsReserved;
        }
        local_2a8.NumBatches = 4;
        local_1c8.NumElements = local_2a8.NumItems;
        local_1c8.BytesPerElement = 4;
        local_1c8._12_4_ = local_2a8._12_4_;
        local_1c8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
        local_1c8.Metadata = (FShaderParametersMetadata *)0x0;
        pFVar20 = UE::RendererPrivateUtils::Implementation::FPersistentBuffer::
                  ResizeAndClearBufferIfNeeded(this_02,local_308,&local_1c8);
        if (uVar34 == local_4c) {
          uVar34 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FRDGBuffer_*>_>
                             (0x808,&local_d8,(int *)&local_4c);
          FVar32.Data = local_d8.SecondaryData.Data;
        }
        local_50 = uVar34 + 1;
        pFVar29 = &local_d8;
        if ((ForElementType<FRDGBuffer_*> *)FVar32.Data != (ForElementType<FRDGBuffer_*> *)0x0) {
          pFVar29 = (ForElementType<FRDGBuffer_*> *)FVar32.Data;
        }
        *(FRDGBuffer **)(pFVar29->InlineData + (longlong)(int)uVar34 * 8) = pFVar20;
        local_260.UnvisitedBitMask = local_260.UnvisitedBitMask & ~local_260._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
        FVar32.Data = local_d8.SecondaryData.Data;
        pFVar37 = local_268;
        uVar34 = local_50;
      }
      local_2c8.Data.Reference = ::operator_new(0x28);
      pFVar14 = local_2e0;
      if (local_2c8.Data.Reference == (FData *)0x0) {
        local_2c8.Data.Reference = (FData *)0x0;
      }
      else {
        *(undefined4 *)&(local_2c8.Data.Reference)->_padding_ = 0;
        ((local_2c8.Data.Reference)->Batches).AllocatorInstance.Data = (FPackedBatch *)0x0;
        ((local_2c8.Data.Reference)->Batches).ArrayNum = 0;
        ((local_2c8.Data.Reference)->Batches).ArrayMax = 0;
        ((local_2c8.Data.Reference)->Items).AllocatorInstance.Data = (FPackedItem *)0x0;
        ((local_2c8.Data.Reference)->Items).ArrayNum = 0;
        ((local_2c8.Data.Reference)->Items).ArrayMax = 0;
        LOCK();
        *(int *)&(local_2c8.Data.Reference)->_padding_ =
             (int)(local_2c8.Data.Reference)->_padding_ + 1;
        UNLOCK();
      }
      local_2c8.CurrentBatchPrefixSum = 0;
      local_2c8.CurrentBatchNumItems = 0;
      local_2c8.CurrentBatchPackedPrefixSum = 0;
      local_2c8.CurrentBatchFirstItem = 0;
      local_2c8.TotalInstances = 0;
      ppFVar38 = (local_2e0->PostUpdateChangeSet->AddedPrimitiveSceneInfos).DataPtr;
      ppFVar2 = ppFVar38 + (local_2e0->PostUpdateChangeSet->AddedPrimitiveSceneInfos).ArrayNum;
      param_1 = local_308;
      for (; local_308 = param_1, ppFVar38 != ppFVar2; ppFVar38 = ppFVar38 + 1) {
        pFVar6 = *ppFVar38;
        iVar18 = pFVar6->NumInstanceSceneDataEntries + 0x1f;
        TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::Add(&local_2c8,
              (int)((pFVar6->InstanceSceneDataOffset >> 0x1f & 0x1fU) +
                   pFVar6->InstanceSceneDataOffset) >> 5,
              (int)((iVar18 >> 0x1f & 0x1fU) + iVar18) >> 5,(pFVar6->PersistentIndex).Index);
        param_1 = local_308;
      }
      this = pFVar14;
      if (((local_2c8.Data.Reference)->Items).ArrayNum != 0) {
        TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::Upload(&local_2c8,&local_2a8,param_1,1);
        this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                     [*(int *)(*(longlong *)&pFVar14->CacheManager->field_0x8 + 8)])
        ;
        pFVar21 = FVSMResetInstanceStateCS::GetStaticType();
        if (*(int *)&pFVar21->field_0x50 != 1) {
          local_316 = 0;
          `FGlobalShaderMap::GetShader<FVSMResetInstanceStateCS>'::__l2::<lambda_1>::operator()
                    (&local_316);
        }
        pFVar22 = (FShaderType *)FVSMResetInstanceStateCS::GetStaticType();
        FGlobalShaderMap::GetShader(this_00,&local_1f8,pFVar22,0);
        if (local_1f8.ShaderContent == (FShader *)0x0) {
          this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_228);
          ::FName::ToString((FName *)this_01,&local_1e8);
          FVSMResetInstanceStateCS::GetStaticType();
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Shader.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                              ,0xc0,L"Failed to find shader type %s in Platform %s");
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        FVSMResetInstanceStateCS::GetStaticType();
        local_1d8.ShaderContent = (FVSMResetInstanceStateCS *)local_1f8.ShaderContent;
        local_1d8.ShaderMap = local_1f8.ShaderMap;
        FGPUScene::GetShaderParameters
                  ((FGPUScene *)(*(longlong *)&pFVar14->CacheManager->field_0x8 + 0x3500),&local_128
                   ,param_1);
        uVar30 = (ulonglong)(int)uVar34;
        pFVar39 = &local_d8;
        if ((ForElementType<FRDGBuffer_*> *)FVar32.Data != (ForElementType<FRDGBuffer_*> *)0x0) {
          pFVar39 = (ForElementType<FRDGBuffer_*> *)FVar32.Data;
        }
        local_2f0 = (ForElementType<FRDGBuffer_*> *)(pFVar39->InlineData + uVar30 * 8);
        local_30c = uVar34;
        while( true ) {
          pFVar29 = local_2f0;
          if (uVar34 != (uint)uVar30) {
            local_315 = 0;
            `TCheckedPointerIterator<FRDGBuffer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_315);
          }
          pFVar12 = local_308;
          FVar32.Data = local_d8.SecondaryData.Data;
          this = local_2e0;
          if (pFVar39 == pFVar29) break;
          pFVar20 = *(FRDGBuffer **)pFVar39->InlineData;
          puVar23 = FMemStackBase::Alloc((FMemStackBase *)&local_308->_padding_,0x90,0x10);
          if (puVar23 == (undefined8 *)0x0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Object",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                                ,0x61,L"");
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          else {
            *puVar23 = &___7__TObject_VFParameters_FVSMResetInstanceStateCS___FRDGAllocator__6B_;
            puVar23[2] = 0;
            puVar23[3] = 0;
            puVar23[10] = 0;
            puVar23[0xb] = 0;
            puVar23[0xc] = 0;
            puVar23[0xd] = 0;
            puVar23[0xe] = 0;
            puVar23[0x10] = 0;
          }
          local_2f8 = puVar23;
          if ((((undefined8 **)pFVar12->_padding_ <= &local_2f8) &&
              (&local_2f8 <
               (undefined8 **)pFVar12->_padding_ + *(int *)((longlong)&pFVar12->_padding_ + 4))) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar18 = (int)pFVar12->_padding_;
          piVar1 = (int *)((longlong)&pFVar12->_padding_ + 4);
          if (iVar18 == *piVar1) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)&pFVar12->_padding_,piVar1);
          }
          local_2e8 = (FParameters *)(puVar23 + 2);
          *(int *)&pFVar12->_padding_ = iVar18 + 1;
          local_2d8._padding_._1_1_ = 0;
          *(undefined8 **)(pFVar12->_padding_ + (longlong)iVar18 * 8) = local_2f8;
          local_2d8._padding_._2_1_ = 0;
          local_2d8._padding_._0_1_ = 0;
          if (((pFVar20->Desc).Usage & DrawIndirect) != None) {
            local_2d8._padding_._0_1_ = 0x1c;
          }
          local_2d8.Buffer = pFVar20;
          FRDGUserValidation::ValidateCreateUAV(&pFVar12->UserValidation,&local_2d8);
          pFVar20 = local_2d8.Buffer;
          pFVar24 = FMemStackBase::Alloc((FMemStackBase *)&pFVar12->_padding_,0x48,8);
          piVar1 = &(pFVar12->Views).Array.ArrayMax;
          pFVar24->_padding_ = pFVar20->_padding_;
          *(byte *)&pFVar24->_padding_ = (byte)pFVar24->_padding_ & 0xfe;
          pFVar24->_padding_ = 0;
          *(undefined1 *)&pFVar24->_padding_ = 0;
          *(undefined8 *)((longlong)&pFVar24->_padding_ + 4) = 0xffffffffffffffff;
          pFVar24->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
          *(undefined1 *)&pFVar24->_padding_ = 2;
          (pFVar24->Desc)._padding_ =
               CONCAT53(local_2d8._padding_._3_5_,
                        CONCAT12(local_2d8._padding_._2_1_,
                                 CONCAT11(local_2d8._padding_._1_1_,(undefined1)local_2d8._padding_)
                                ));
          (pFVar24->Desc).Buffer = local_2d8.Buffer;
          iVar18 = (pFVar12->Views).Array.ArrayNum;
          if (iVar18 == *piVar1) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                               (0x808,(ForElementType<FRDGView_*> *)&pFVar12->Views,piVar1);
          }
          (pFVar12->Views).Array.ArrayNum = iVar18 + 1;
          (pFVar12->Views).Array.AllocatorInstance.Data[iVar18] = (FRDGView *)pFVar24;
          *(int *)((longlong)&pFVar24->_padding_ + 4) = (pFVar12->Views).Array.ArrayNum + -1;
          FRDGUserValidation::ValidateCreateUAV(&pFVar12->UserValidation,pFVar24);
          pFVar37 = local_2e8;
          uVar35 = local_300;
          local_2e8->InOutViewInstanceState = pFVar24;
          (local_2e8->GPUScene).CommonParameters.GPUSceneInstanceDataTileSizeLog2 =
               local_128.CommonParameters.GPUSceneInstanceDataTileSizeLog2;
          (local_2e8->GPUScene).CommonParameters.GPUSceneInstanceDataTileSizeMask =
               local_128.CommonParameters.GPUSceneInstanceDataTileSizeMask;
          (local_2e8->GPUScene).CommonParameters.GPUSceneInstanceDataTileStride =
               local_128.CommonParameters.GPUSceneInstanceDataTileStride;
          (local_2e8->GPUScene).CommonParameters.GPUSceneFrameNumber =
               local_128.CommonParameters.GPUSceneFrameNumber;
          (local_2e8->GPUScene).CommonParameters.GPUSceneMaxAllocatedInstanceId =
               local_128.CommonParameters.GPUSceneMaxAllocatedInstanceId;
          (local_2e8->GPUScene).CommonParameters.GPUSceneMaxPersistentPrimitiveIndex =
               local_128.CommonParameters.GPUSceneMaxPersistentPrimitiveIndex;
          (local_2e8->GPUScene).CommonParameters.GPUSceneNumLightmapDataItems =
               local_128.CommonParameters.GPUSceneNumLightmapDataItems;
          *(undefined4 *)&(local_2e8->GPUScene).CommonParameters.field_0x1c =
               local_128.CommonParameters._28_4_;
          (local_2e8->GPUScene).GPUSceneInstanceSceneData = local_128.GPUSceneInstanceSceneData;
          (local_2e8->GPUScene).GPUSceneInstancePayloadData = local_128.GPUSceneInstancePayloadData;
          (local_2e8->GPUScene).GPUScenePrimitiveSceneData = local_128.GPUScenePrimitiveSceneData;
          (local_2e8->GPUScene).GPUSceneLightmapData = local_128.GPUSceneLightmapData;
          (local_2e8->GPUScene).GPUSceneLightData = local_128.GPUSceneLightData;
          *(undefined8 *)&(local_2e8->GPUScene).field_0x48 = local_128._72_8_;
          local_2e8->StateWordStride = pFVar14->CacheManager->InstanceStateMaskWordStride;
          pFVar25 = FRDGEventName::FRDGEventName(&local_148,L"ResetInstanceState (%d batches)");
          FInstanceCullingLoadBalancerBase::FGPUData::GetShaderParameters
                    (&local_2a8,pFVar12,&pFVar37->LoadBalancerParameters);
          FComputeShaderUtils::GetGroupCountWrapped
                    ((TIntVector3<int> *)&local_220[0]._s_0,local_2a8.NumBatches);
          pFVar26 = FVSMResetInstanceStateCS::FParameters::FTypeInfo::GetStructMetadata();
          local_208._s_0.Z = local_220[0]._s_0.Z;
          local_208._0_8_ = local_220[0]._0_8_;
          FComputeShaderUtils::AddPass<FVSMResetInstanceStateCS>
                    (pFVar12,pFVar25,Compute,&local_1d8,pFVar26,pFVar37,
                     (TIntVector3<int> *)&local_208._s_0);
          if (((uVar35 & 2) != 0) && (uVar35 = uVar35 & 0xfffffffd, local_228 != (void *)0x0)) {
            FMemory::Free(local_228);
          }
          local_300 = uVar35 & 0xfffffffe;
          if (local_148.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.FormattedEventName.Data.AllocatorInstance.Data);
          }
          uVar30 = (ulonglong)local_30c;
          pFVar39 = (ForElementType<FRDGBuffer_*> *)(pFVar39->InlineData + 8);
          param_1 = pFVar12;
        }
      }
      TVar15.Reference = local_2c8.Data.Reference;
      if (local_2c8.Data.Reference != (FData *)0x0) {
        LOCK();
        lVar28 = (local_2c8.Data.Reference)->_padding_;
        *(int *)&(local_2c8.Data.Reference)->_padding_ =
             (int)(local_2c8.Data.Reference)->_padding_ + -1;
        UNLOCK();
        if ((int)lVar28 == 1) {
          pFVar7 = ((local_2c8.Data.Reference)->Items).AllocatorInstance.Data;
          if (pFVar7 != (FPackedItem *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar7);
          }
          pFVar8 = ((TVar15.Reference)->Batches).AllocatorInstance.Data;
          if (pFVar8 != (FPackedBatch *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar8);
          }
          ::operator_delete(TVar15.Reference,0x28);
        }
      }
      if ((ForElementType<FRDGBuffer_*> *)FVar32.Data != (ForElementType<FRDGBuffer_*> *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar32.Data);
      }
    }
  }
  bVar16 = FVirtualShadowMapArrayCacheManager::IsCacheDataAvailable(this->CacheManager);
  if (bVar16) {
    FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::
    FInvalidatingPrimitiveCollector(&local_1a8,this->CacheManager);
    pTVar9 = this->PostUpdateChangeSet->PrimitiveUpdates;
    iVar18 = (pTVar9->Commands).ArrayNum;
    pFVar33 = (pTVar9->Commands).AllocatorInstance.Data;
    pFVar31 = pFVar33 + (longlong)iVar18 * 0x50;
LAB_145804bb0:
    do {
      if ((pTVar9->Commands).ArrayNum != iVar18) {
        `TCheckedPointerIterator<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FUpdateCommand_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_310);
      }
      if (pFVar33 == pFVar31) goto LAB_145804c09;
      if ((pFVar33[0x18] == (FScriptContainerElement)0x0) &&
         ((pFVar33[0x19] != (FScriptContainerElement)0x0 || (((byte)pFVar33[0x14] & 0xc) != 0)))) {
        if (pFVar33[0x19] != (FScriptContainerElement)0x0) {
          FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::AddInvalidation
                    (&local_1a8,*(FPrimitiveSceneInfo **)pFVar33,Added);
          pFVar33 = pFVar33 + 0x50;
          goto LAB_145804bb0;
        }
        FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::AddInvalidation
                  (&local_1a8,*(FPrimitiveSceneInfo **)pFVar33,Updated);
      }
      pFVar33 = pFVar33 + 0x50;
    } while( true );
  }
LAB_145804d29:
  this->PostUpdateChangeSet = (FScenePostUpdateChangeSet *)0x0;
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
LAB_145804c09:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    __TraceCounter2223.CounterId._0_2_ =
         FCountersTrace::OutputInitCounter
                   (L"Shadow.Virtual.Cache.PostInvalidationInstances",TraceCounterType_Int,
                    TraceCounterDisplayHint_None);
    LOCK();
    __TraceCounter2223.CounterId._2_2_ = 0;
    UNLOCK();
    atexit(`FVirtualShadowMapInvalidationSceneUpdater::PostGPUSceneUpdate'::__l23::
           _dynamic_atexit_destructor_for____TraceCounter2223__);
    _Init_thread_footer(&::_TSS3);
  }
  uVar30 = (ulonglong)local_1a8.Instances.TotalInstances;
  if ((__TraceCounter2223.Value != uVar30) &&
     (__TraceCounter2223.Value = uVar30, -1 < CountersChannel->Enabled)) {
    if (__TraceCounter2223.CounterId == (atomic<unsigned_int>)0x0) {
      uVar17 = FCountersTrace::OutputInitCounter
                         (__TraceCounter2223.CounterName,TraceCounterType_Int,
                          __TraceCounter2223.CounterFlags & 0xf);
      LOCK();
      if (__TraceCounter2223.CounterId == (atomic<unsigned_int>)0x0) {
        __TraceCounter2223.CounterId._2_2_ = 0;
        __TraceCounter2223.CounterId._0_2_ = uVar17;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue(__TraceCounter2223.CounterId._0_2_,__TraceCounter2223.Value);
  }
  FVirtualShadowMapArrayCacheManager::ProcessInvalidations
            (this->CacheManager,param_1,local_230,&local_1a8);
  if (local_1a8.CacheEntriesForInvalidation.AllocatorInstance.Data !=
      (FVirtualShadowMapPerLightCacheEntry **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_1a8.CacheEntriesForInvalidation.AllocatorInstance.Data);
  }
  if (local_1a8.RemovedPrimitives.AllocatorInstance.Data != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_1a8.RemovedPrimitives.AllocatorInstance.Data);
  }
  if (local_1a8.InvalidatedPrimitives.AllocatorInstance.Data != (uint *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_1a8.InvalidatedPrimitives.AllocatorInstance.Data);
  }
  if (local_1a8.Instances.Data.Reference != (FData *)0x0) {
    LOCK();
    lVar28 = (local_1a8.Instances.Data.Reference)->_padding_;
    *(int *)&(local_1a8.Instances.Data.Reference)->_padding_ =
         (int)(local_1a8.Instances.Data.Reference)->_padding_ + -1;
    UNLOCK();
    if ((int)lVar28 == 1) {
      pFVar7 = ((local_1a8.Instances.Data.Reference)->Items).AllocatorInstance.Data;
      if (pFVar7 != (FPackedItem *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar7);
      }
      pFVar8 = ((local_1a8.Instances.Data.Reference)->Batches).AllocatorInstance.Data;
      if (pFVar8 != (FPackedBatch *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar8);
      }
      ::operator_delete(local_1a8.Instances.Data.Reference,0x28);
    }
  }
  goto LAB_145804d29;
}

// PostSceneUpdate @ 145805ae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapInvalidationSceneUpdater::PostSceneUpdate
          (FVirtualShadowMapInvalidationSceneUpdater *this,FRDGBuilder *param_1,
          FScenePostUpdateChangeSet *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  FVirtualShadowMapArrayCacheManager *pFVar4;
  FRDGPooledBuffer *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  FSparseArrayAllocationInfo *pFVar10;
  longlong lVar11;
  undefined1 *puVar12;
  FPersistentBuffer *this_00;
  undefined1 *puVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  FSparseArrayAllocationInfo local_78;
  int local_68;
  uint uStack_64;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_60;
  undefined4 local_58;
  uint uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  local_68 = 0;
  uStack_64 = 1;
  lVar11 = *(longlong *)&this->CacheManager->field_0x8;
  local_48 = lVar11 + 0x30;
  uStack_54 = 0;
  iStack_50 = 0;
  uVar9 = *(uint *)(lVar11 + 0x58);
  pTStack_60 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x40);
  if (uVar9 != 0) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x50);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x50) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTStack_60;
    }
    uVar3 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar3 == 0) {
      iStack_50 = iStack_50 + 0x20;
      lVar11 = (longlong)local_68;
      local_68 = local_68 + 1;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < local_68)
      goto LAB_145805bac;
      uVar3 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uStack_64 = ~(uVar3 - 1) & uVar3;
    uVar2 = (ulonglong)uStack_64 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uStack_54 = (int)lVar11 + -1 + iStack_50;
    if ((int)uVar9 < (int)uStack_54) {
LAB_145805bac:
      uStack_54 = uVar9;
    }
  }
  local_58 = 0xffffffff;
  local_40._padding_ = CONCAT44(uStack_64,local_68);
  local_40.UnvisitedBitMask = 0xffffffff;
  local_40.CurrentBitIndex = uStack_54;
  local_40._28_4_ = uStack_4c;
  local_40.BaseBitIndex = iStack_50;
  local_40.Array = pTStack_60;
  if ((int)uStack_54 < (int)uVar9) {
    do {
      iVar7 = local_40.CurrentBitIndex;
      pFVar4 = this->CacheManager;
      if ((local_40.CurrentBitIndex < 0) ||
         (*(int *)&(pFVar4->ViewData).field_0x28 <= local_40.CurrentBitIndex)) {
LAB_145805c1a:
        pFVar4 = this->CacheManager;
        if ((local_40.CurrentBitIndex < 0) ||
           (*(int *)&(pFVar4->ViewData).field_0x28 <= local_40.CurrentBitIndex)) {
LAB_145805cc8:
          pFVar10 = TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                              ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)
                               &pFVar4->ViewData,&local_78,iVar7);
          this_00 = pFVar10->Pointer;
        }
        else {
          if ((*(int *)&(pFVar4->ViewData).field_0x28 <= local_40.CurrentBitIndex) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          puVar12 = *(undefined1 **)&(pFVar4->ViewData).field_0x20;
          puVar13 = &(pFVar4->ViewData).field_0x10;
          if (puVar12 != (undefined1 *)0x0) {
            puVar13 = puVar12;
          }
          uVar9 = iVar7;
          if (iVar7 < 0) {
            uVar9 = iVar7 + 0x1f;
          }
          if ((*(uint *)(puVar13 + (longlong)((int)uVar9 >> 5) * 4) >> (iVar7 & 0x1fU) & 1) == 0)
          goto LAB_145805cc8;
          this_00 = (FPersistentBuffer *)((longlong)iVar7 * 0x20 + *(longlong *)&pFVar4->ViewData);
          pFVar5 = (this_00->PooledBuffer).Reference;
          if (pFVar5 != (FRDGPooledBuffer *)0x0) {
            plVar1 = &pFVar5->_padding_;
            LOCK();
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar11 == 1) && (plVar1 != (longlong *)0x0)) {
              (**(code **)pFVar5->_padding_)(pFVar5,1);
            }
          }
        }
        if (this_00 != (FPersistentBuffer *)0x0) {
          UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
                    (this_00,0x400,L"Shadow.Virtual.CacheManager.ViewState",true);
        }
      }
      else {
        puVar12 = *(undefined1 **)&(pFVar4->ViewData).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = &(pFVar4->ViewData).field_0x10;
        }
        uVar9 = local_40.CurrentBitIndex;
        if (local_40.CurrentBitIndex < 0) {
          uVar9 = local_40.CurrentBitIndex + 0x1f;
        }
        if ((*(uint *)(puVar12 + (longlong)((int)uVar9 >> 5) * 4) >>
             (local_40.CurrentBitIndex & 0x1fU) & 1) == 0) goto LAB_145805c1a;
      }
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
  }
  FVirtualShadowMapArrayCacheManager::ReallocatePersistentPrimitiveIndices(this->CacheManager);
  this->PostUpdateChangeSet = param_2;
  return;
}

// PreLightsUpdate @ 145805d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapInvalidationSceneUpdater::PreLightsUpdate
          (FVirtualShadowMapInvalidationSceneUpdater *this,FRDGBuilder *param_1,
          FLightSceneChangeSet *param_2)

{
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  TMap<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>_>
  *pTVar6;
  uint uVar7;
  uint uVar8;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  if (0 < (param_2->RemovedLightIds).ArrayNum) {
    pTVar6 = &this->CacheManager->CacheEntries;
    pTVar1 = param_2->RemovedLightsMask;
    TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
                *)pTVar6);
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_10 = '\0';
    cStack_f = '\0';
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar5 = local_78._24_8_ >> 0x20;
    uVar8 = local_78._28_4_;
    local_18 = (TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
                *)pTVar6;
    if ((int)uVar8 < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        uVar3 = *(uint *)(*local_48 + 4 + (longlong)(int)uVar5 * 0x28);
        if ((-1 < (int)uVar3) && ((int)uVar3 < pTVar1->NumBits)) {
          uVar7 = uVar3 & 0x1f;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0x1f;
          }
          if (((pTVar1->AllocatorInstance).Data[(int)uVar3 >> 5] >> uVar7 & 1) != 0) {
            TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_20,uVar8);
            local_10 = '\x01';
          }
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar5 = (ulonglong)uStack_2c;
        uVar8 = uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if ((local_10 != '\0') && (cStack_f != '\0')) {
        uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar8 < 4) {
          iVar4 = 1;
        }
        else {
          uVar5 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iVar4 = 1 << ((byte)lVar2 & 0x1f);
        }
        if (((0 < (int)uVar8) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
          local_18->HashSize = iVar4;
          TSet<TTuple<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>_>,TDefaultMapHashableKeyFuncs<FVirtualShadowMapCacheKey,TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

// PreSceneUpdate @ 145806b70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapInvalidationSceneUpdater::PreSceneUpdate
          (FVirtualShadowMapInvalidationSceneUpdater *this,FRDGBuilder *param_1,
          FScenePreUpdateChangeSet *param_2,FSceneUniformBuffer *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  FViewSceneChangeSet *pFVar3;
  FVirtualShadowMapArrayCacheManager *pFVar4;
  undefined1 *puVar5;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTVar6;
  FPackedItem *pFVar7;
  FPackedBatch *pFVar8;
  code *pcVar9;
  byte bVar10;
  undefined4 uVar11;
  bool bVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  FScriptContainerElement *pFVar21;
  EInvalidationCause EVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  bool bVar26;
  undefined1 local_d7;
  undefined1 local_d6 [6];
  longlong local_d0;
  uint local_c8;
  FScriptContainerElement *local_b8;
  FInvalidatingPrimitiveCollector local_a8;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"FScene_VirtualShadowCacheUpdate");
  bVar26 = -1 < CpuChannel->Enabled;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2057,"FScene_VirtualShadowCacheUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
               ,0x809);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2057);
  }
  pFVar3 = param_2->ViewUpdateChangeSet;
  if (pFVar3 != (FViewSceneChangeSet *)0x0) {
    local_c8 = (pFVar3->RemovedViewIds).ArrayNum;
    uVar14 = (ulonglong)(int)local_c8;
    pFVar19 = (pFVar3->RemovedViewIds).AllocatorInstance.Data;
    local_b8 = pFVar19 + uVar14 * 4;
LAB_145806c46:
    do {
      pFVar21 = local_b8;
      if ((pFVar3->RemovedViewIds).ArrayNum != (int)uVar14) {
        local_d7 = 0;
        `TCheckedPointerIterator<FPersistentViewId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d7);
      }
      if (pFVar19 == pFVar21) break;
      uVar16 = *(uint *)pFVar19;
      pFVar4 = this->CacheManager;
      if ((-1 < (int)uVar16) && ((int)uVar16 < *(int *)&(pFVar4->ViewData).field_0x28)) {
        puVar20 = *(undefined1 **)&(pFVar4->ViewData).field_0x20;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &(pFVar4->ViewData).field_0x10;
        }
        lVar23 = (longlong)((int)(uVar16 + ((int)uVar16 >> 0x1f & 0x1fU)) >> 5);
        if ((*(uint *)(puVar20 + lVar23 * 4) >> (uVar16 & 0x1f) & 1) != 0) {
          pFVar4 = this->CacheManager;
          TSparseArray<FVirtualShadowMapArrayCacheManager::FViewData,FDefaultSparseArrayAllocator>::
          DestroyElements(&pFVar4->ViewData,uVar16,1);
          local_d0 = *(longlong *)&pFVar4->ViewData;
          puVar20 = &(pFVar4->ViewData).field_0x10;
          bVar10 = (byte)uVar16 & 0x1f;
          uVar25 = 1 << bVar10 | 1U >> 0x20 - bVar10;
          if ((*(int *)&(pFVar4->ViewData).field_0x28 <= (int)uVar16) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar5 = *(undefined1 **)&(pFVar4->ViewData).field_0x20;
          puVar15 = puVar20;
          if (puVar5 != (undefined1 *)0x0) {
            puVar15 = puVar5;
          }
          if (((*(uint *)(puVar15 + lVar23 * 4) & uVar25) == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("AllocationFlags[Index]",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                  ,0xc5,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(int *)&(pFVar4->ViewData).field_0x34 != 0) {
            *(uint *)((longlong)*(int *)&(pFVar4->ViewData).field_0x30 * 0x20 + local_d0) = uVar16;
          }
          lVar23 = (longlong)(int)uVar16 * 0x20;
          *(undefined4 *)(lVar23 + local_d0) = 0xffffffff;
          if (*(int *)&(pFVar4->ViewData).field_0x34 < 1) {
            *(undefined4 *)(lVar23 + 4 + local_d0) = 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar23 + 4 + local_d0) = *(undefined4 *)&(pFVar4->ViewData).field_0x30;
          }
          puVar5 = &(pFVar4->ViewData).field_0x34;
          *(int *)puVar5 = *(int *)puVar5 + 1;
          *(uint *)&(pFVar4->ViewData).field_0x30 = uVar16;
          if ((*(int *)&(pFVar4->ViewData).field_0x28 <= (int)uVar16) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar5 = *(undefined1 **)&(pFVar4->ViewData).field_0x20;
          if (puVar5 != (undefined1 *)0x0) {
            puVar20 = puVar5;
          }
          if ((int)uVar16 < 0) {
            uVar16 = uVar16 + 0x1f;
          }
          uVar14 = (ulonglong)local_c8;
          *(uint *)(puVar20 + (longlong)((int)uVar16 >> 5) * 4) =
               *(uint *)(puVar20 + (longlong)((int)uVar16 >> 5) * 4) & ~uVar25;
          pFVar19 = pFVar19 + 4;
          goto LAB_145806c46;
        }
      }
      uVar14 = (ulonglong)local_c8;
      pFVar19 = pFVar19 + 4;
    } while( true );
  }
  uVar11 = FShadowScene::ExtensionRegistration._8_4_;
  lVar17 = (longlong)(int)FShadowScene::ExtensionRegistration._8_4_;
  lVar23 = *(longlong *)&this->CacheManager->field_0x8;
  if (((int)FShadowScene::ExtensionRegistration._8_4_ < 0) ||
     (*(int *)(lVar23 + 0x4d28) <= (int)FShadowScene::ExtensionRegistration._8_4_)) {
LAB_145806ea8:
    lVar23 = 0;
  }
  else {
    if ((*(int *)(lVar23 + 0x4d28) <= (int)FShadowScene::ExtensionRegistration._8_4_) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar24 = lVar23 + 0x4d10;
    if (*(longlong *)(lVar23 + 0x4d20) != 0) {
      lVar24 = *(longlong *)(lVar23 + 0x4d20);
    }
    if ((*(uint *)(lVar24 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar11 & 0x1f) & 1) == 0) goto LAB_145806ea8;
    lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0x4d00) + lVar17 * 8);
    if (lVar23 != 0) goto LAB_145806ed0;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("Extension != nullptr",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                      ,0xb4,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_145806ed0:
  FVirtualShadowMapArrayCacheManager::ReallocatePersistentPrimitiveIndices(this->CacheManager);
  bVar12 = FVirtualShadowMapArrayCacheManager::IsCacheDataAvailable(this->CacheManager);
  if (bVar12) {
    FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::
    FInvalidatingPrimitiveCollector(&local_a8,this->CacheManager);
    puVar18 = *(undefined8 **)(lVar23 + 0x80);
    iVar2 = *(int *)(lVar23 + 0x88);
    if ((iVar2 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    puVar1 = puVar18 + iVar2;
    for (; puVar18 != puVar1; puVar18 = puVar18 + 1) {
      FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::AddInvalidation
                (&local_a8,(FPrimitiveSceneInfo *)*puVar18,Updated);
    }
    pTVar6 = param_2->PrimitiveUpdates;
    iVar2 = (pTVar6->Commands).ArrayNum;
    pFVar19 = (pTVar6->Commands).AllocatorInstance.Data;
    pFVar21 = pFVar19 + (longlong)iVar2 * 0x50;
    while( true ) {
      if ((pTVar6->Commands).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FUpdateCommand_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_d6);
      }
      if (pFVar19 == pFVar21) break;
      if ((pFVar19[0x18] != (FScriptContainerElement)0x0) ||
         ((pFVar19[0x19] == (FScriptContainerElement)0x0 && (((byte)pFVar19[0x14] & 0xc) != 0)))) {
        EVar22 = Removed;
        if (pFVar19[0x18] == (FScriptContainerElement)0x0) {
          EVar22 = Updated;
        }
        FVirtualShadowMapArrayCacheManager::FInvalidatingPrimitiveCollector::AddInvalidation
                  (&local_a8,*(FPrimitiveSceneInfo **)pFVar19,EVar22);
      }
      pFVar19 = pFVar19 + 0x50;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      __TraceCounter2103.CounterId._0_2_ =
           FCountersTrace::OutputInitCounter
                     (L"Shadow.Virtual.Cache.PreInvalidationInstances",TraceCounterType_Int,
                      TraceCounterDisplayHint_None);
      LOCK();
      __TraceCounter2103.CounterId._2_2_ = 0;
      UNLOCK();
      atexit(`FVirtualShadowMapInvalidationSceneUpdater::PreSceneUpdate'::__l15::
             _dynamic_atexit_destructor_for____TraceCounter2103__);
      _Init_thread_footer(&::_TSS2);
    }
    uVar14 = (ulonglong)local_a8.Instances.TotalInstances;
    if ((__TraceCounter2103.Value != uVar14) &&
       (__TraceCounter2103.Value = uVar14, -1 < CountersChannel->Enabled)) {
      if (__TraceCounter2103.CounterId == (atomic<unsigned_int>)0x0) {
        uVar13 = FCountersTrace::OutputInitCounter
                           (__TraceCounter2103.CounterName,TraceCounterType_Int,
                            __TraceCounter2103.CounterFlags & 0xf);
        LOCK();
        if (__TraceCounter2103.CounterId == (atomic<unsigned_int>)0x0) {
          __TraceCounter2103.CounterId._2_2_ = 0;
          __TraceCounter2103.CounterId._0_2_ = uVar13;
        }
        UNLOCK();
      }
      FCountersTrace::OutputSetValue(__TraceCounter2103.CounterId._0_2_,__TraceCounter2103.Value);
    }
    FVirtualShadowMapArrayCacheManager::ProcessInvalidations
              (this->CacheManager,param_1,param_3,&local_a8);
    if (local_a8.CacheEntriesForInvalidation.AllocatorInstance.Data !=
        (FVirtualShadowMapPerLightCacheEntry **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_a8.CacheEntriesForInvalidation.AllocatorInstance.Data);
    }
    if (local_a8.RemovedPrimitives.AllocatorInstance.Data != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_a8.RemovedPrimitives.AllocatorInstance.Data);
    }
    if (local_a8.InvalidatedPrimitives.AllocatorInstance.Data != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_a8.InvalidatedPrimitives.AllocatorInstance.Data);
    }
    if (local_a8.Instances.Data.Reference != (FData *)0x0) {
      LOCK();
      lVar23 = (local_a8.Instances.Data.Reference)->_padding_;
      *(int *)&(local_a8.Instances.Data.Reference)->_padding_ =
           (int)(local_a8.Instances.Data.Reference)->_padding_ + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        pFVar7 = ((local_a8.Instances.Data.Reference)->Items).AllocatorInstance.Data;
        if (pFVar7 != (FPackedItem *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar7);
        }
        pFVar8 = ((local_a8.Instances.Data.Reference)->Batches).AllocatorInstance.Data;
        if (pFVar8 != (FPackedBatch *)0x0) {
          TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar8);
        }
        ::operator_delete(local_a8.Instances.Data.Reference,0x28);
      }
    }
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

