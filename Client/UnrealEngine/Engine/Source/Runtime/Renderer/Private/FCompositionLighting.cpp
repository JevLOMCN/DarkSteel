// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FCompositionLighting @ 14472d9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FCompositionLighting * __thiscall
FCompositionLighting::FCompositionLighting
          (FCompositionLighting *this,FDecalVisibilityTaskData *param_1,
          TArrayView<FViewInfo,int> *param_2,FSceneTextures *param_3,
          TUniqueFunction<bool___cdecl(int)> *param_4)

{
  TArray<FCompositionLighting::FAOConfig,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  FSceneViewFamily *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  uchar uVar8;
  int iVar9;
  int iVar10;
  FCompositionLighting *pFVar11;
  undefined8 uVar12;
  uint uVar13;
  ForElementType<FCompositionLighting::FAOConfig> FVar14;
  void *_Dst;
  ForElementType<FCompositionLighting::FAOConfig> FVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint local_48 [4];
  
  iVar9 = param_2->ArrayNum;
  uVar6 = *(undefined4 *)&param_2->field_0xc;
  iVar10 = param_2->ArrayNum;
  uVar19 = 0;
  (this->Views).DataPtr = param_2->DataPtr;
  (this->Views).ArrayNum = iVar9;
  *(undefined4 *)&(this->Views).field_0xc = uVar6;
  if (iVar10 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FCompositionLighting *)(*pcVar5)();
      return pFVar11;
    }
  }
  pFVar4 = (FSceneViewFamily *)param_2->DataPtr->_padding_;
  this->DecalVisibility = param_1;
  pTVar1 = &this->ViewAOConfigs;
  (this->ViewAOConfigs).AllocatorInstance.SecondaryData =
       (ForElementType<FCompositionLighting::FAOConfig>)0x0;
  piVar2 = &(this->ViewAOConfigs).ArrayNum;
  this->ViewFamily = pFVar4;
  piVar3 = &(this->ViewAOConfigs).ArrayMax;
  this->SceneTextures = param_3;
  *piVar2 = 0;
  *piVar3 = 8;
  uVar13 = (this->Views).ArrayNum;
  this->HorizonsTexture = (FRDGTexture *)0x0;
  this->bInitialized = false;
  iVar10 = *piVar2;
  if (iVar10 < (int)uVar13) {
    iVar9 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompositionLighting::FAOConfig>_>
                      (0x10,4,uVar13 - iVar10,&pTVar1->AllocatorInstance,piVar2,piVar3);
    FVar14 = (this->ViewAOConfigs).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
      FVar14 = (ForElementType<FCompositionLighting::FAOConfig>)pTVar1;
    }
    DefaultConstructItems<FCompositionLighting::FAOConfig,int>
              ((void *)((longlong)FVar14 + (longlong)iVar9 * 0x10),uVar13 - iVar10);
  }
  else {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if ((int)uVar13 < iVar10) {
      uVar18 = iVar10 - uVar13;
      if ((int)(uVar18 | uVar13) < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FCompositionLighting *)(*pcVar5)();
          return pFVar11;
        }
      }
      if (uVar18 != 0) {
        FVar14 = (this->ViewAOConfigs).AllocatorInstance.SecondaryData;
        if (FVar14 == (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
          FVar14 = (ForElementType<FCompositionLighting::FAOConfig>)pTVar1;
        }
        _Dst = (void *)((longlong)FVar14 + (longlong)(int)uVar13 * 0x10);
        iVar10 = (*piVar2 - uVar13) - uVar18;
        if (iVar10 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar18 * 0x10 + (longlong)_Dst),(longlong)iVar10 << 4
                 );
        }
        *piVar2 = *piVar2 - uVar18;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompositionLighting::FAOConfig>_>
                  (0x10,4,&pTVar1->AllocatorInstance,*piVar2,piVar3);
      }
    }
  }
  if (0 < (this->Views).ArrayNum) {
    lVar17 = 0;
    do {
      local_48[0] = uVar19;
      UE::Core::Private::Function::CheckCallable(*(void **)param_4);
      pcVar5 = *(code **)param_4;
      plVar16 = *(longlong **)&param_4->field_0x28;
      if (*(longlong **)&param_4->field_0x28 == (longlong *)0x0) {
        plVar16 = (longlong *)&param_4->field_0x10;
      }
      uVar12 = (**(code **)(*plVar16 + 8))();
      uVar8 = (*pcVar5)(uVar12,local_48);
      uVar13 = 0;
      if ((int)uVar19 < *piVar2) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FCompositionLighting *)(*pcVar5)();
          return pFVar11;
        }
      }
      FVar14 = (this->ViewAOConfigs).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FCompositionLighting::FAOConfig>)pTVar1;
      if (FVar14 != (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
        FVar15 = FVar14;
      }
      uVar19 = uVar19 + 1;
      ((uchar *)((longlong)FVar15 + 0xd))[lVar17] = uVar8;
      lVar17 = lVar17 + 0x10;
    } while ((int)uVar19 < (this->Views).ArrayNum);
  }
  if (*(longlong *)param_4 != 0) {
    plVar16 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar16 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  return this;
}

// ~FCompositionLighting @ 14472ef10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FCompositionLighting::~FCompositionLighting(FCompositionLighting *this)

{
  atomic<bool> aVar1;
  int iVar2;
  FDecalVisibilityTaskData *pFVar3;
  FTaskEvent this_00;
  ForElementType<FCompositionLighting::FAOConfig> FVar4;
  FDecalVisibilityViewPacket *pFVar5;
  FDecalVisibilityViewPacket *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar3 = this->DecalVisibility;
  if (pFVar3 != (FDecalVisibilityTaskData *)0x0) {
    pFVar5 = (pFVar3->ViewPackets).AllocatorInstance.Data;
    iVar2 = (pFVar3->ViewPackets).ArrayNum;
    pFVar6 = pFVar5 + iVar2;
    while( true ) {
      if ((pFVar3->ViewPackets).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDecalVisibilityViewPacket,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      pFVar5->bFinishCalled = true;
      if ((pFVar5->AllTasksEvent != (FTaskEvent)0x0) &&
         (*(char *)((longlong)pFVar5->AllTasksEvent + 0xd0) == '\0')) {
        this_00 = pFVar5->AllTasksEvent;
        LOCK();
        aVar1 = *(atomic<bool> *)((longlong)this_00 + 0x45);
        *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
        UNLOCK();
        if (aVar1 == (atomic<bool>)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
               (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
        }
      }
      if (pFVar5->AllTasksEvent != (FTaskEvent)0x0) {
        UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)pFVar5->AllTasksEvent);
      }
      pFVar5 = pFVar5 + 1;
    }
  }
  FVar4 = (this->ViewAOConfigs).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
    return;
  }
  FMemory::Free((void *)FVar4);
  return;
}

// ProcessAfterBasePass @ 144781b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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

void __thiscall
FCompositionLighting::ProcessAfterBasePass
          (FCompositionLighting *this,FRDGBuilder *param_1,FInstanceCullingManager *param_2,
          EProcessAfterBasePassMode param_3,FSubstrateSceneData *param_4)

{
  char cVar1;
  FRHIGPUMask FVar2;
  ForElementType<FCompositionLighting::FAOConfig> FVar3;
  FDecalVisibilityTaskData *pFVar4;
  FDecalVisibilityViewPacket *pFVar5;
  undefined1 *puVar6;
  TIntPoint<int>_u_0 TVar7;
  FRDGTexture *pFVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  FStaticShaderPlatform FVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FRDGScope *pFVar16;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar17;
  FScreenPassTexture *pFVar18;
  FDeferredDecalPassTextures *pFVar19;
  ForElementType<FCompositionLighting::FAOConfig> FVar20;
  undefined1 *puVar21;
  int iVar22;
  longlong lVar23;
  FViewInfo *pFVar24;
  ERenderTargetLoadAction EVar25;
  ulonglong uVar26;
  FRDGTexture *pFVar27;
  uint local_548;
  undefined1 local_544 [4];
  FViewInfo *local_540;
  uint *local_538;
  TRDGEventScopeGuard<FRDGScope_RHI> local_530;
  char local_520;
  FRHIComputeCommandList *local_518;
  TRDGEventScopeGuard<FRDGScope_RHI> local_510;
  char local_500;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_4f8;
  FScreenPassTexture local_4e8;
  FScreenPassRenderTarget local_4d0;
  FScreenPassRenderTarget local_4b0;
  FScreenPassRenderTarget local_490;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_> local_470;
  TArrayView<FVisibleDecal_const_*_const,int> local_458;
  TArrayView<FVisibleDecal_const_*_const,int> local_448;
  TArrayView<FVisibleDecal_const_*_const,int> local_438;
  TArrayView<FVisibleDecal_const_*_const,int> local_428;
  TArrayView<FVisibleDecal_const_*_const,int> local_418;
  TArrayView<FVisibleDecal_const_*_const,int> local_408;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  uint uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  FDeferredDecalPassTextures local_3b8;
  FDeferredDecalPassTextures local_368;
  FDeferredDecalPassTextures local_318;
  FScreenPassTexture local_2c8;
  FScreenPassTexture local_2b0;
  FScreenPassTexture local_298;
  FGTAOCommonParameters local_278;
  FSSAOCommonParameters local_208;
  FGTAOCommonParameters local_198;
  FDeferredDecalPassTextures local_128;
  FDeferredDecalPassTextures local_d8;
  FDeferredDecalPassTextures local_88;
  
  bVar10 = HasRayTracedOverlay(this->ViewFamily);
  if (!bVar10) {
    if ((this->bInitialized == false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("bInitialized",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\CompositionLighting\\CompositionLighting.cpp"
                            ,0x259,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    cVar11 = '\0';
    local_500 = '\0';
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_3e8 = 0x54bc1de0;
        uStack_3e4 = 1;
        ::Desc._padding_._0_4_ = 0x54bc1de0;
        ::Desc._padding_._4_4_ = uStack_3ec;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_LightCompositio;
        ::Desc._padding_ = (longlong)u_LightCompositio;
        ::Desc._padding_._0_4_ = 0x25b;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FCompositionLighting::ProcessAfterBasePass'::__l17::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_470._Myfirst._Val = &::Desc;
      local_510.State = (FRDGScopeState *)param_1;
      pFVar16 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar16;
      local_510.Scope = pFVar16;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34>_const_*,std::tuple<>_>_>
                (&(pFVar16->Impl).Impl,(FRDGScopeState *)param_1,&local_470);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar16,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar16,(FRHIComputeCommandList *)param_1->_padding_);
      }
      cVar11 = '\x01';
      local_500 = '\x01';
    }
    iVar22 = (this->Views).ArrayNum;
    local_548 = 0;
    if (0 < iVar22) {
      do {
        uVar14 = local_548;
        uVar13 = 0;
        if ((int)local_548 < iVar22) {
          uVar13 = ~local_548 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar13 = local_548;
        pFVar24 = (this->Views).DataPtr + (int)uVar14;
        uVar14 = 0;
        if ((int)local_548 < (this->ViewAOConfigs).ArrayNum) {
          uVar14 = ~local_548 >> 0x1f;
        }
        local_540 = pFVar24;
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar3 = (this->ViewAOConfigs).AllocatorInstance.SecondaryData;
        FVar20 = (ForElementType<FCompositionLighting::FAOConfig>)&this->ViewAOConfigs;
        if (FVar3 != (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
          FVar20 = FVar3;
        }
        local_518 = (FRHIComputeCommandList *)param_1->_padding_;
        local_538 = (uint *)((longlong)(int)uVar13 * 0x10 + (longlong)FVar20);
        FVar2.GPUMask = *(uint *)&local_518->field_0x29c;
        FRHIComputeCommandList::SetGPUMask(local_518,(FRHIGPUMask)(uint)pFVar24->_padding_);
        local_520 = '\0';
        if (((1 < (this->Views).ArrayNum) &&
            (cVar1 = *(char *)((longlong)&param_1->_padding_ + 6), cVar1 != '\0')) &&
           ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_3c8 = 0;
            uStack_3c4 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_3cc);
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_View_d;
            ::Desc._padding_ = (longlong)u_View_d;
            ::Desc._padding_._0_4_ = 0x264;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FCompositionLighting::ProcessAfterBasePass'::__l24::<lambda_2>::
                   operator()<int_&>'::__l3::<lambda_1>::operator()<int_&>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_4f8._padding_ = (longlong)&local_548;
          local_4f8._Myfirst._Val = &::Desc;
          local_530.State = (FRDGScopeState *)param_1;
          pFVar16 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)pFVar16;
          uVar26 = (ulonglong)(pFVar16->Impl).Impl.TypeIndex;
          local_530.Scope = pFVar16;
          if ((3 < uVar26) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar26])(&pFVar16->Impl);
          this_00 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
          pFVar17 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                              (this_00,&local_4f8);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&pFVar16->Impl,(FRDGScopeState *)param_1,pFVar17);
          (pFVar16->Impl).Impl.TypeIndex = '\x02';
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(pFVar16,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(pFVar16,(FRHIComputeCommandList *)param_1->_padding_);
          }
          local_520 = '\x01';
        }
        FViewInfo::BeginRenderView(pFVar24);
        uVar14 = local_548;
        pFVar4 = this->DecalVisibility;
        if (pFVar4 != (FDecalVisibilityTaskData *)0x0) {
          uVar13 = 0;
          if ((int)local_548 < (pFVar4->ViewPackets).ArrayNum) {
            uVar13 = ~local_548 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar5 = (pFVar4->ViewPackets).AllocatorInstance.Data;
          if (*(int *)&pFVar5[(int)uVar14].RelevantDecalsMap.field_0x8 !=
              *(int *)&pFVar5[(int)uVar14].RelevantDecalsMap.field_0x34) {
            puVar6 = *(undefined1 **)&pFVar5[(int)uVar14].RelevantDecalsMap.field_0x40;
            puVar21 = &pFVar5[(int)uVar14].RelevantDecalsMap.field_0x38;
            if (puVar6 != (undefined1 *)0x0) {
              puVar21 = puVar6;
            }
            iVar22 = *(int *)(puVar21 +
                             (ulonglong)
                             (*(int *)&pFVar5[(int)uVar14].RelevantDecalsMap.field_0x48 - 1U & 2) *
                             4);
            if (iVar22 != -1) {
              do {
                if (*(char *)(*(longlong *)&pFVar5[(int)uVar14].RelevantDecalsMap +
                             (longlong)iVar22 * 0x28) == '\x02') {
                  if (param_3 != SkipBeforeLightingDecals) {
                    pFVar19 = GetDeferredDecalPassTextures
                                        (&local_128,param_1,pFVar24,param_4,this->SceneTextures,
                                         (FDBufferTextures *)0x0,BeforeLighting);
                    lVar23 = (longlong)(int)local_548;
                    pFVar4 = this->DecalVisibility;
                    local_368.DecalPassUniformBuffer = pFVar19->DecalPassUniformBuffer;
                    local_368.Depth.Target = (pFVar19->Depth).Target;
                    local_368.Depth.Resolve = (pFVar19->Depth).Resolve;
                    local_368.Color = pFVar19->Color;
                    local_368.ScreenSpaceAO = pFVar19->ScreenSpaceAO;
                    local_368.GBufferA = pFVar19->GBufferA;
                    local_368.GBufferB = pFVar19->GBufferB;
                    local_368.GBufferC = pFVar19->GBufferC;
                    local_368.GBufferE = pFVar19->GBufferE;
                    local_368.DBufferTextures = pFVar19->DBufferTextures;
                    uVar14 = 0;
                    if ((int)local_548 < (pFVar4->ViewPackets).ArrayNum) {
                      uVar14 = ~local_548 >> 0x1f;
                    }
                    if ((uVar14 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    FDecalVisibilityViewPacket::FinishRelevantDecals
                              ((pFVar4->ViewPackets).AllocatorInstance.Data + lVar23,&local_458,
                               BeforeLighting);
                    local_448.DataPtr = local_458.DataPtr;
                    local_448.ArrayNum = local_458.ArrayNum;
                    local_448._12_4_ = local_458._12_4_;
                    AddDeferredDecalPass
                              (param_1,pFVar24,&local_448,&local_368,param_2,BeforeLighting);
                  }
                  break;
                }
                iVar22 = *(int *)(*(longlong *)&pFVar5[(int)uVar14].RelevantDecalsMap + 0x20 +
                                 (longlong)iVar22 * 0x28);
              } while (iVar22 != -1);
            }
          }
          uVar14 = local_548;
          pFVar4 = this->DecalVisibility;
          uVar13 = 0;
          if ((int)local_548 < (pFVar4->ViewPackets).ArrayNum) {
            uVar13 = ~local_548 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar5 = (pFVar4->ViewPackets).AllocatorInstance.Data;
          if (*(int *)&pFVar5[(int)uVar14].RelevantDecalsMap.field_0x8 !=
              *(int *)&pFVar5[(int)uVar14].RelevantDecalsMap.field_0x34) {
            puVar6 = *(undefined1 **)&pFVar5[(int)uVar14].RelevantDecalsMap.field_0x40;
            puVar21 = &pFVar5[(int)uVar14].RelevantDecalsMap.field_0x38;
            if (puVar6 != (undefined1 *)0x0) {
              puVar21 = puVar6;
            }
            iVar22 = *(int *)(puVar21 +
                             (ulonglong)
                             (*(int *)&pFVar5[(int)uVar14].RelevantDecalsMap.field_0x48 - 1U & 5) *
                             4);
            if (iVar22 != -1) {
              do {
                if (*(char *)(*(longlong *)&pFVar5[(int)uVar14].RelevantDecalsMap +
                             (longlong)iVar22 * 0x28) == '\x05') {
                  if (param_3 != OnlyBeforeLightingDecals) {
                    pFVar19 = GetDeferredDecalPassTextures
                                        (&local_d8,param_1,pFVar24,param_4,this->SceneTextures,
                                         (FDBufferTextures *)0x0,Emissive);
                    lVar23 = (longlong)(int)local_548;
                    pFVar4 = this->DecalVisibility;
                    local_318.DecalPassUniformBuffer = pFVar19->DecalPassUniformBuffer;
                    local_318.Depth.Target = (pFVar19->Depth).Target;
                    local_318.Depth.Resolve = (pFVar19->Depth).Resolve;
                    local_318.Color = pFVar19->Color;
                    local_318.ScreenSpaceAO = pFVar19->ScreenSpaceAO;
                    local_318.GBufferA = pFVar19->GBufferA;
                    local_318.GBufferB = pFVar19->GBufferB;
                    local_318.GBufferC = pFVar19->GBufferC;
                    local_318.GBufferE = pFVar19->GBufferE;
                    local_318.DBufferTextures = pFVar19->DBufferTextures;
                    uVar14 = 0;
                    if ((int)local_548 < (pFVar4->ViewPackets).ArrayNum) {
                      uVar14 = ~local_548 >> 0x1f;
                    }
                    if ((uVar14 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    FDecalVisibilityViewPacket::FinishRelevantDecals
                              ((pFVar4->ViewPackets).AllocatorInstance.Data + lVar23,&local_438,
                               Emissive);
                    local_428.DataPtr = local_438.DataPtr;
                    local_428.ArrayNum = local_438.ArrayNum;
                    local_428._12_4_ = local_438._12_4_;
                    AddDeferredDecalPass(param_1,pFVar24,&local_428,&local_318,param_2,Emissive);
                  }
                  break;
                }
                iVar22 = *(int *)(*(longlong *)&pFVar5[(int)uVar14].RelevantDecalsMap + 0x20 +
                                 (longlong)iVar22 * 0x28);
              } while (iVar22 != -1);
            }
          }
        }
        FVar12.Platform = FSceneView::GetShaderPlatform((FSceneView *)pFVar24);
        bVar10 = IsForwardShadingEnabled(FVar12);
        if (((!bVar10) && (param_3 != OnlyBeforeLightingDecals)) && (*local_538 != 0)) {
          TVar7 = (pFVar24->ViewRect).field0_0x0._s_0.Min.field0_0x0;
          lVar23 = *(longlong *)((longlong)&(pFVar24->ViewRect).field0_0x0 + 8);
          pFVar8 = this->SceneTextures->ScreenSpaceAO;
          EVar25 = *(byte *)((longlong)&pFVar8->_padding_ + 1) >> 2 & ELoad;
          if (pFVar8 != (FRDGTexture *)0x0) {
            iVar22 = (pFVar8->VisualizeTextureExtent).field0_0x0._s_0.X;
            iVar15 = (int)lVar23;
            if ((int)lVar23 < iVar22) {
              iVar15 = iVar22;
            }
            iVar22 = (pFVar8->VisualizeTextureExtent).field0_0x0._s_0.Y;
            (pFVar8->VisualizeTextureExtent).field0_0x0._s_0.X = iVar15;
            iVar15 = (int)((ulonglong)lVar23 >> 0x20);
            if (iVar15 < iVar22) {
              iVar15 = iVar22;
            }
            (pFVar8->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar15;
          }
          uVar14 = local_538[1];
          pFVar27 = (FRDGTexture *)0x0;
          if (EVar25 != ENoAction) {
            pFVar27 = pFVar8;
          }
          if ((uVar14 == 2) || (uVar14 == 1)) {
            if ((this->HorizonsTexture == (FRDGTexture *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("HorizonsTexture",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\CompositionLighting\\CompositionLighting.cpp"
                                    ,0x28c,L""), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar24 = local_540;
            GetGTAOCommonParameters
                      (&local_278,param_1,local_540,
                       (TRDGUniformBuffer<FSceneTextureUniformParameters> *)
                       this->SceneTextures->_padding_,local_538[1]);
            local_4e8.Texture = this->HorizonsTexture;
            if (local_4e8.Texture != (FRDGTexture *)0x0) {
              iVar22 = ((local_4e8.Texture)->VisualizeTextureExtent).field0_0x0._s_0.X;
              iVar15 = local_278.DownsampledViewRect.field0_0x0._8_4_;
              if (local_278.DownsampledViewRect.field0_0x0._8_4_ < iVar22) {
                iVar15 = iVar22;
              }
              iVar22 = ((local_4e8.Texture)->VisualizeTextureExtent).field0_0x0._s_0.Y;
              ((local_4e8.Texture)->VisualizeTextureExtent).field0_0x0._s_0.X = iVar15;
              iVar15 = local_278.DownsampledViewRect.field0_0x0._12_4_;
              if (local_278.DownsampledViewRect.field0_0x0._12_4_ < iVar22) {
                iVar15 = iVar22;
              }
              ((local_4e8.Texture)->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar15;
            }
            local_4e8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
                 local_278.DownsampledViewRect.field0_0x0._s_0.Min.field0_0x0;
            local_4e8.ViewRect.field0_0x0._8_8_ =
                 local_278.DownsampledViewRect.field0_0x0._s_0.Max.field0_0x0;
            local_490._padding_ = (longlong)pFVar8;
            local_490._padding_ = (longlong)TVar7;
            local_490._padding_ = lVar23;
            local_490.LoadAction = EVar25;
            AddPostProcessingGTAOPostAsync
                      (&local_2c8,param_1,pFVar24,&local_278,&local_4e8,&local_490);
            if ((this->DecalVisibility != (FDecalVisibilityTaskData *)0x0) &&
               (bVar10 = FDecalVisibilityTaskData::HasStage
                                   (this->DecalVisibility,local_548,AmbientOcclusion), bVar10)) {
              local_544[0] = 0;
              `FCompositionLighting::ProcessAfterBasePass'::__l42::<lambda_4>::operator()(local_544)
              ;
            }
          }
          else {
            if (uVar14 == 3) {
              GetGTAOCommonParameters
                        (&local_198,param_1,local_540,
                         (TRDGUniformBuffer<FSceneTextureUniformParameters> *)
                         this->SceneTextures->_padding_,ENonAsync);
              pFVar24 = local_540;
              local_4d0._padding_ = (longlong)pFVar8;
              local_4d0._padding_ = (longlong)TVar7;
              local_4d0._padding_ = lVar23;
              local_4d0.LoadAction = EVar25;
              pFVar18 = AddPostProcessingGTAOAllPasses
                                  (&local_2b0,param_1,local_540,&local_198,&local_4d0);
              pFVar27 = pFVar18->Texture;
            }
            else {
              pFVar24 = local_540;
              if (local_538[2] == 2) {
                GetSSAOCommonParameters
                          (&local_208,param_1,local_540,
                           (TRDGUniformBuffer<FSceneTextureUniformParameters> *)
                           this->SceneTextures->_padding_,*local_538,true);
                pFVar24 = local_540;
                local_4b0._padding_ = (longlong)pFVar8;
                local_4b0._padding_ = (longlong)TVar7;
                local_4b0._padding_ = lVar23;
                local_4b0.LoadAction = EVar25;
                pFVar18 = AddPostProcessingAmbientOcclusion
                                    (&local_298,param_1,local_540,&local_208,&local_4b0);
                pFVar27 = pFVar18->Texture;
              }
            }
            if (this->DecalVisibility != (FDecalVisibilityTaskData *)0x0) {
              pFVar19 = GetDeferredDecalPassTextures
                                  (&local_88,param_1,pFVar24,param_4,this->SceneTextures,
                                   (FDBufferTextures *)0x0,AmbientOcclusion);
              lVar23 = (longlong)(int)local_548;
              pFVar4 = this->DecalVisibility;
              local_3b8.DecalPassUniformBuffer = pFVar19->DecalPassUniformBuffer;
              local_3b8.Depth.Target = (pFVar19->Depth).Target;
              local_3b8.Depth.Resolve = (pFVar19->Depth).Resolve;
              local_3b8.Color = pFVar19->Color;
              local_3b8.GBufferA = pFVar19->GBufferA;
              local_3b8.GBufferB = pFVar19->GBufferB;
              local_3b8.GBufferC = pFVar19->GBufferC;
              local_3b8.GBufferE = pFVar19->GBufferE;
              local_3b8.DBufferTextures = pFVar19->DBufferTextures;
              uVar14 = 0;
              if ((int)local_548 < (pFVar4->ViewPackets).ArrayNum) {
                uVar14 = ~local_548 >> 0x1f;
              }
              local_3b8.ScreenSpaceAO = pFVar27;
              if ((uVar14 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FDecalVisibilityViewPacket::FinishRelevantDecals
                        ((pFVar4->ViewPackets).AllocatorInstance.Data + lVar23,&local_418,
                         AmbientOcclusion);
              local_408.DataPtr = local_418.DataPtr;
              local_408.ArrayNum = local_418.ArrayNum;
              local_408._12_4_ = local_418._12_4_;
              AddDeferredDecalPass(param_1,pFVar24,&local_408,&local_3b8,param_2,AmbientOcclusion);
            }
          }
        }
        if (local_520 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_530);
        }
        FRHIComputeCommandList::SetGPUMask(local_518,FVar2);
        iVar22 = (this->Views).ArrayNum;
        local_548 = local_548 + 1;
        cVar11 = local_500;
      } while ((int)local_548 < iVar22);
    }
    if (cVar11 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_510);
    }
  }
  return;
}

// ProcessAfterOcclusion @ 1447827c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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

void __thiscall
FCompositionLighting::ProcessAfterOcclusion(FCompositionLighting *this,FRDGBuilder *param_1)

{
  FRHIGPUMask FVar1;
  ForElementType<FCompositionLighting::FAOConfig> FVar2;
  FRHIComputeCommandList *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FRDGTexture *pFVar8;
  int iVar9;
  ForElementType<FCompositionLighting::FAOConfig> FVar10;
  uint uVar11;
  longlong lVar12;
  FViewInfo *pFVar13;
  ERenderTargetLoadAction EVar14;
  undefined1 auStackY_198 [32];
  longlong local_158;
  FScreenPassRenderTarget local_148;
  FGTAOCommonParameters local_128;
  FGTAOHorizonSearchOutputs local_b8;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar5 = HasRayTracedOverlay(this->ViewFamily);
  if (!bVar5) {
    TryInit(this);
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->Views).ArrayNum;
    uVar11 = 0;
    if (0 < iVar9) {
      local_158 = 0;
      lVar12 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar11 < iVar9) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (FViewInfo *)((longlong)&((this->Views).DataPtr)->_padding_ + lVar12);
        uVar6 = 0;
        if ((int)uVar11 < (this->ViewAOConfigs).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2 = (this->ViewAOConfigs).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FCompositionLighting::FAOConfig>)&this->ViewAOConfigs;
        if (FVar2 != (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
          FVar10 = FVar2;
        }
        iVar9 = *(int *)(local_158 + (longlong)FVar10 + 4);
        if ((iVar9 == 1) || (iVar9 == 2)) {
          this_00 = (FRHIComputeCommandList *)param_1->_padding_;
          FVar1.GPUMask = *(uint *)&this_00->field_0x29c;
          FRHIComputeCommandList::SetGPUMask(this_00,(FRHIGPUMask)(uint)pFVar13->_padding_);
          GetGTAOCommonParameters
                    (&local_128,param_1,pFVar13,
                     (TRDGUniformBuffer<FSceneTextureUniformParameters> *)
                     this->SceneTextures->_padding_,*(EGTAOType *)(local_158 + (longlong)FVar10 + 4)
                    );
          lVar3 = pFVar13->_padding_;
          if ((*(int *)(lVar3 + 0x10) < 1) &&
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
          if (((FViewInfo *)**(longlong **)(lVar3 + 8) == pFVar13) ||
             (*(char *)(pFVar13->_padding_ + 0xc4) != '\0')) {
            EVar14 = ENoAction;
          }
          else {
            EVar14 = ELoad;
          }
          if (this->HorizonsTexture == (FRDGTexture *)0x0) {
            local_98._0_8_ = 0x20001;
            local_6c = 0x10001;
            lVar3 = this->SceneTextures->_padding_;
            local_68 = 0x28000101;
            local_98._8_8_ = FClearValueBinding::White._0_8_;
            local_98._16_8_ = FClearValueBinding::White.Value._4_8_;
            local_64 = 0xff00;
            local_80 = FClearValueBinding::White.Value.Color[3];
            local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
            local_78 = 0;
            local_74._4_4_ =
                 (int)((local_128.DownscaleFactor - 1) + (int)((ulonglong)lVar3 >> 0x20)) /
                 (int)local_128.DownscaleFactor;
            local_74._0_4_ =
                 (int)((local_128.DownscaleFactor - 1) + (int)lVar3) /
                 (int)local_128.DownscaleFactor;
            local_58 = (void *)0x0;
            local_50 = 0;
            local_4c = 1;
            pFVar8 = FRDGBuilder::CreateTexture
                               (param_1,(FRDGTextureDesc *)local_98,L"ScreenSpaceGTAOHorizons",None)
            ;
            this->HorizonsTexture = pFVar8;
            if (local_58 != (void *)0x0) {
              FMemory::Free(local_58);
            }
          }
          local_148._padding_ = (longlong)this->HorizonsTexture;
          if ((FRDGTexture *)local_148._padding_ != (FRDGTexture *)0x0) {
            iVar9 = (((FRDGTexture *)local_148._padding_)->VisualizeTextureExtent).field0_0x0._s_0.X
            ;
            iVar7 = local_128.DownsampledViewRect.field0_0x0._8_4_;
            if (local_128.DownsampledViewRect.field0_0x0._8_4_ < iVar9) {
              iVar7 = iVar9;
            }
            iVar9 = (((FRDGTexture *)local_148._padding_)->VisualizeTextureExtent).field0_0x0._s_0.Y
            ;
            (((FRDGTexture *)local_148._padding_)->VisualizeTextureExtent).field0_0x0._s_0.X = iVar7
            ;
            iVar7 = local_128.DownsampledViewRect.field0_0x0._12_4_;
            if (local_128.DownsampledViewRect.field0_0x0._12_4_ < iVar9) {
              iVar7 = iVar9;
            }
            (((FRDGTexture *)local_148._padding_)->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar7
            ;
          }
          local_148._padding_ =
               (longlong)local_128.DownsampledViewRect.field0_0x0._s_0.Min.field0_0x0;
          local_148._padding_ =
               (longlong)local_128.DownsampledViewRect.field0_0x0._s_0.Max.field0_0x0;
          local_148.LoadAction = EVar14;
          AddPostProcessingGTAOAsyncPasses(&local_b8,param_1,pFVar13,&local_128,&local_148);
          FRHIComputeCommandList::SetGPUMask(this_00,FVar1);
        }
        uVar11 = uVar11 + 1;
        iVar9 = (this->Views).ArrayNum;
        local_158 = local_158 + 0x10;
        lVar12 = lVar12 + 0x2970;
      } while ((int)uVar11 < iVar9);
    }
  }
  return;
}

// ProcessBeforeBasePass @ 144782ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
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

void __thiscall
FCompositionLighting::ProcessBeforeBasePass
          (FCompositionLighting *this,FRDGBuilder *param_1,FDBufferTextures *param_2,
          FInstanceCullingManager *param_3,FSubstrateSceneData *param_4)

{
  char cVar1;
  FRHIGPUMask FVar2;
  ForElementType<FCompositionLighting::FAOConfig> FVar3;
  FDecalVisibilityTaskData *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  EShaderPlatform EVar9;
  uint uVar10;
  uint uVar11;
  FRDGScope *pFVar12;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar13;
  FDeferredDecalPassTextures *pFVar14;
  int iVar15;
  ForElementType<FCompositionLighting::FAOConfig> FVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  FViewInfo *this_01;
  uint local_258;
  uint local_254;
  TRDGEventScopeGuard<FRDGScope_RHI> local_250;
  undefined1 local_240;
  uint *local_238;
  FRHIComputeCommandList *local_230;
  TRDGEventScopeGuard<FRDGScope_RHI> local_228;
  char local_218;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_210;
  FScreenPassRenderTarget local_200;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_> local_1e0;
  TArrayView<FVisibleDecal_const_*_const,int> local_1c8;
  TArrayView<FVisibleDecal_const_*_const,int> local_1b8;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  uint uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  FDeferredDecalPassTextures local_168;
  FScreenPassTexture local_118;
  FSSAOCommonParameters local_f8;
  FDeferredDecalPassTextures local_88;
  
  bVar6 = HasRayTracedOverlay(this->ViewFamily);
  if (!bVar6) {
    TryInit(this);
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    cVar8 = '\0';
    local_218 = '\0';
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_198 = 0x54bc1d70;
        uStack_194 = 1;
        ::Desc._padding_._0_4_ = 0x54bc1d70;
        ::Desc._padding_._4_4_ = uStack_19c;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_CompositionBefo;
        ::Desc._padding_ = (longlong)u_CompositionBefo;
        ::Desc._padding_._0_4_ = 0x226;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FCompositionLighting::ProcessBeforeBasePass'::__l10::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_1e0._Myfirst._Val = &::Desc;
      local_228.State = (FRDGScopeState *)param_1;
      pFVar12 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar12;
      local_228.Scope = pFVar12;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_>_>
                (&(pFVar12->Impl).Impl,(FRDGScopeState *)param_1,&local_1e0);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar12,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar12,(FRHIComputeCommandList *)param_1->_padding_);
      }
      cVar8 = '\x01';
      local_218 = '\x01';
    }
    iVar17 = (this->Views).ArrayNum;
    local_258 = 0;
    if (0 < iVar17) {
      do {
        uVar11 = local_258;
        uVar10 = 0;
        if ((int)local_258 < iVar17) {
          uVar10 = ~local_258 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar10 = local_258;
        this_01 = (this->Views).DataPtr + (int)uVar11;
        uVar11 = 0;
        if ((int)local_258 < (this->ViewAOConfigs).ArrayNum) {
          uVar11 = ~local_258 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (this->ViewAOConfigs).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<FCompositionLighting::FAOConfig>)&this->ViewAOConfigs;
        if (FVar3 != (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
          FVar16 = FVar3;
        }
        puVar18 = (uint *)((longlong)(int)uVar10 * 0x10 + (longlong)FVar16);
        local_238 = puVar18;
        EVar9 = FSceneView::GetShaderPlatform((FSceneView *)this_01);
        bVar6 = Substrate::IsDBufferPassEnabled(EVar9);
        uVar11 = puVar18[2];
        local_254 = uVar11;
        if (((bVar6) || (this->DecalVisibility == (FDecalVisibilityTaskData *)0x0)) ||
           (bVar6 = FDecalVisibilityTaskData::HasStage
                              (this->DecalVisibility,local_258,BeforeBasePass), !bVar6)) {
          bVar6 = false;
          if (uVar11 == 1) goto LAB_144782dea;
        }
        else {
          bVar6 = true;
LAB_144782dea:
          local_230 = (FRHIComputeCommandList *)param_1->_padding_;
          FVar2.GPUMask = *(uint *)&local_230->field_0x29c;
          FRHIComputeCommandList::SetGPUMask(local_230,(FRHIGPUMask)(uint)this_01->_padding_);
          bVar7 = false;
          local_240 = 0;
          if (((1 < (this->Views).ArrayNum) &&
              (cVar1 = *(char *)((longlong)&param_1->_padding_ + 6), cVar1 != '\0')) &&
             ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::Desc._padding_._0_4_ = 0x238;
              ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
              local_178 = 0;
              uStack_174 = 0;
              ::Desc._12_8_ = ZEXT48(uStack_17c);
              ::Desc._padding_._4_4_ = 0;
              ::Desc._padding_ = (longlong)u_View_d;
              ::Desc._padding_ = (longlong)u_View_d;
              InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
              ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
              ::Desc.TraceGpuSpecId = 0;
              ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
              atexit(```FCompositionLighting::ProcessBeforeBasePass'::__l20::<lambda_2>::
                     operator()<int_&>'::__l3::<lambda_1>::operator()<int_&>'::__l2::
                     _dynamic_atexit_destructor_for__Desc__);
              _Init_thread_footer(&::_TSS0);
            }
            local_210._padding_ = (longlong)&local_258;
            local_210._Myfirst._Val = &::Desc;
            local_250.State = (FRDGScopeState *)param_1;
            pFVar12 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                                ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
            param_1->_padding_ = (longlong)pFVar12;
            uVar19 = (ulonglong)(pFVar12->Impl).Impl.TypeIndex;
            local_250.Scope = pFVar12;
            if ((3 < uVar19) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors[uVar19])(&pFVar12->Impl);
            this_00 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
            pFVar13 = FRHIBreadcrumbAllocator::
                      AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                                (this_00,&local_210);
            FRDGScope_RHI::FRDGScope_RHI
                      ((FRDGScope_RHI *)&pFVar12->Impl,(FRDGScopeState *)param_1,pFVar13);
            (pFVar12->Impl).Impl.TypeIndex = '\x02';
            if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
              FRDGScope::BeginCPU(pFVar12,(FRHIComputeCommandList *)param_1->_padding_,false);
              FRDGScope::BeginGPU(pFVar12,(FRHIComputeCommandList *)param_1->_padding_);
            }
            bVar7 = true;
            local_240 = 1;
          }
          FViewInfo::BeginRenderView(this_01);
          if (bVar6) {
            pFVar14 = GetDeferredDecalPassTextures
                                (&local_88,param_1,this_01,param_4,this->SceneTextures,param_2,
                                 BeforeBasePass);
            lVar20 = (longlong)(int)local_258;
            pFVar4 = this->DecalVisibility;
            local_168.DecalPassUniformBuffer = pFVar14->DecalPassUniformBuffer;
            local_168.Depth.Target = (pFVar14->Depth).Target;
            local_168.Depth.Resolve = (pFVar14->Depth).Resolve;
            local_168.Color = pFVar14->Color;
            local_168.ScreenSpaceAO = pFVar14->ScreenSpaceAO;
            local_168.GBufferA = pFVar14->GBufferA;
            local_168.GBufferB = pFVar14->GBufferB;
            local_168.GBufferC = pFVar14->GBufferC;
            local_168.GBufferE = pFVar14->GBufferE;
            local_168.DBufferTextures = pFVar14->DBufferTextures;
            uVar11 = 0;
            if ((int)local_258 < (pFVar4->ViewPackets).ArrayNum) {
              uVar11 = ~local_258 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FDecalVisibilityViewPacket::FinishRelevantDecals
                      ((pFVar4->ViewPackets).AllocatorInstance.Data + lVar20,&local_1c8,
                       BeforeBasePass);
            local_1b8.DataPtr = local_1c8.DataPtr;
            local_1b8.ArrayNum = local_1c8.ArrayNum;
            local_1b8._12_4_ = local_1c8._12_4_;
            AddDeferredDecalPass(param_1,this_01,&local_1b8,&local_168,param_3,BeforeBasePass);
          }
          if (local_254 == 1) {
            GetSSAOCommonParameters
                      (&local_f8,param_1,this_01,
                       (TRDGUniformBuffer<FSceneTextureUniformParameters> *)
                       this->SceneTextures->_padding_,*local_238,false);
            local_200._padding_ = *(longlong *)&(this_01->ViewRect).field0_0x0._s_0.Min.field0_0x0;
            local_200._padding_ = *(longlong *)((longlong)&(this_01->ViewRect).field0_0x0 + 8);
            local_200._padding_ = (longlong)this->SceneTextures->ScreenSpaceAO;
            if ((FRDGTexture *)local_200._padding_ != (FRDGTexture *)0x0) {
              iVar17 = (((FRDGTexture *)local_200._padding_)->VisualizeTextureExtent).field0_0x0.
                       _s_0.X;
              iVar15 = (int)local_200._padding_;
              if ((int)local_200._padding_ < iVar17) {
                iVar15 = iVar17;
              }
              iVar17 = (((FRDGTexture *)local_200._padding_)->VisualizeTextureExtent).field0_0x0.
                       _s_0.Y;
              (((FRDGTexture *)local_200._padding_)->VisualizeTextureExtent).field0_0x0._s_0.X =
                   iVar15;
              iVar15 = (int)((ulonglong)local_200._padding_ >> 0x20);
              if (iVar15 < iVar17) {
                iVar15 = iVar17;
              }
              (((FRDGTexture *)local_200._padding_)->VisualizeTextureExtent).field0_0x0._s_0.Y =
                   iVar15;
            }
            local_200.LoadAction = ENoAction;
            AddPostProcessingAmbientOcclusion(&local_118,param_1,this_01,&local_f8,&local_200);
          }
          if (bVar7) {
            TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_250);
          }
          FRHIComputeCommandList::SetGPUMask(local_230,FVar2);
        }
        iVar17 = (this->Views).ArrayNum;
        local_258 = local_258 + 1;
        cVar8 = local_218;
      } while ((int)local_258 < iVar17);
    }
    if (cVar8 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_228);
    }
  }
  return;
}

// TryInit @ 1447b9d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FCompositionLighting::TryInit(FCompositionLighting *this)

{
  int iVar1;
  ForElementType<FCompositionLighting::FAOConfig> FVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  bool bVar9;
  FStaticShaderPlatform FVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  uint uVar15;
  ForElementType<FCompositionLighting::FAOConfig> FVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  FViewInfo *this_00;
  float fVar20;
  longlong local_res18;
  
  if (this->bInitialized == false) {
    bVar8 = IsForwardShadingEnabled
                      ((FStaticShaderPlatform)
                       *(EShaderPlatform *)((longlong)&this->SceneTextures->_padding_ + 4));
    fVar5 = __real_420c0000;
    fVar4 = __real_428c0000;
    iVar12 = (this->Views).ArrayNum;
    uVar18 = 0;
    if (0 < iVar12) {
      lVar19 = 0;
      local_res18 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar18 < iVar12) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (FViewInfo *)((longlong)&((this->Views).DataPtr)->_padding_ + local_res18);
        uVar11 = 0;
        if ((int)uVar18 < (this->ViewAOConfigs).ArrayNum) {
          uVar11 = ~uVar18 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar7 = CVarAmbientOcclusionLevels.Ref;
        FVar2 = (this->ViewAOConfigs).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<FCompositionLighting::FAOConfig>)&this->ViewAOConfigs;
        if (FVar2 != (ForElementType<FCompositionLighting::FAOConfig>)0x0) {
          FVar16 = FVar2;
        }
        if (*(char *)(lVar19 + 0xd + (longlong)FVar16) != '\0') {
          bVar9 = IsInParallelRenderingThread();
          if ((!bVar9) &&
             (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<6409875433831007955>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                 ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar6 = CVarAmbientOcclusionCompute.Ref;
          uVar11 = pTVar7->ShadowedValue[1];
          if ((int)this_00->_padding_ < 3) {
LAB_1447b9f3b:
            FVar10.Platform = FSceneView::GetShaderPlatform((FSceneView *)this_00);
            bVar9 = IsForwardShadingEnabled(FVar10);
            if (bVar9) goto LAB_1447b9f7c;
            fVar20 = FSSAOHelper::GetAmbientOcclusionQualityRT((FSceneView *)this_00);
            uVar15 = (fVar5 < fVar20) + 1 + (uint)(fVar4 < fVar20);
            if (-1 < (int)uVar11) {
              uVar15 = uVar11;
            }
            uVar17 = 3;
            if (uVar15 < 3) {
              uVar17 = uVar15;
            }
          }
          else {
            bVar9 = IsInParallelGameThread();
            if ((bVar9) || (bVar9 = IsInGameThread(), bVar9)) {
              lVar14 = 0;
            }
            else {
              lVar14 = 4;
            }
            if (*(int *)((longlong)pTVar6->ShadowedValue + lVar14) < 1) goto LAB_1447b9f3b;
LAB_1447b9f7c:
            if ((int)uVar11 < 0) {
              uVar11 = 1;
            }
            uVar17 = 1;
            if (uVar11 == 0) {
              uVar17 = 0;
            }
          }
          *(uint *)(lVar19 + (longlong)FVar16) = uVar17;
          pTVar7 = CVarAmbientOcclusionMethod.Ref;
          if (!bVar8) {
            bVar9 = IsInParallelRenderingThread();
            if ((!bVar9) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007955>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar6 = CVarGTAOUseNormals.Ref;
            iVar12 = pTVar7->ShadowedValue[1];
            bVar9 = IsInParallelRenderingThread();
            if ((!bVar9) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007955>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar1 = pTVar6->ShadowedValue[1];
            if (iVar12 == 1) {
              bVar9 = FSSAOHelper::IsAmbientOcclusionAsyncCompute(this_00,uVar17);
              if (bVar9) {
                iVar12 = (iVar1 != 0) + 1;
              }
              else {
                iVar12 = 3;
              }
            }
            else {
              iVar12 = 0;
            }
            *(int *)(lVar19 + 4 + (longlong)FVar16) = iVar12;
          }
          if ((*(int *)(lVar19 + 4 + (longlong)FVar16) == 0) &&
             (*(uint *)(lVar19 + (longlong)FVar16) != 0)) {
            bVar9 = FSSAOHelper::IsAmbientOcclusionAsyncCompute
                              (this_00,*(uint *)(lVar19 + (longlong)FVar16));
            *(bool *)(lVar19 + 0xc + (longlong)FVar16) = bVar9;
            bVar9 = IsHZBValid(this_00,FurthestHZB,false);
            if ((bVar9) && ((*(char *)(lVar19 + 0xc + (longlong)FVar16) != '\0' || (bVar8)))) {
              uVar13 = 1;
            }
            else {
              uVar13 = 2;
            }
            *(undefined4 *)(lVar19 + 8 + (longlong)FVar16) = uVar13;
          }
        }
        local_res18 = local_res18 + 0x2970;
        iVar12 = (this->Views).ArrayNum;
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 0x10;
      } while ((int)uVar18 < iVar12);
    }
    this->bInitialized = true;
  }
  return;
}

// operator() @ 1504c3030

bool __thiscall
`FCompositionLighting::ProcessAfterBasePass'::__l42::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<92385141673951893>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<92385141673951893>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

