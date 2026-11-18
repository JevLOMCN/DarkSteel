// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 12

// FLandscapeSceneViewExtension @ 145f7aca0

FLandscapeSceneViewExtension * __thiscall
FLandscapeSceneViewExtension::FLandscapeSceneViewExtension
          (FLandscapeSceneViewExtension *this,FAutoRegister *param_1)

{
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->_padding_ = (longlong)&___7FLandscapeSceneViewExtension__6B_;
  (this->LandscapeViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LandscapeViews).ArrayNum = 0;
  (this->LandscapeViews).ArrayMax = 0;
  (this->LandscapeSetupTask).Pimpl.Reference = (FTaskBase *)0x0;
  this->NumViewsWithShowCollision = 0;
  this->NumViewsWithShowCollisionAcc = 0;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FLandscapeSceneViewExtension>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrame,(FLandscapeSceneViewExtension *)&stack0x00000008,
             (pmf_fa70d939 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FLandscapeSceneViewExtension>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEndFrameRT,(FLandscapeSceneViewExtension *)&stack0x00000008,
             (pmf_fa70d939 *)this);
  return this;
}

// ~FLandscapeSceneViewExtension @ 145f7ddc0

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
FLandscapeSceneViewExtension::~FLandscapeSceneViewExtension(FLandscapeSceneViewExtension *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7FLandscapeSceneViewExtension__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrameRT,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,this)
  ;
  pFVar3 = (this->LandscapeSetupTask).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  DestructItems<FLandscapeSceneViewExtension::FLandscapeViewData,int>
            ((FLandscapeViewData *)(this->LandscapeViews).AllocatorInstance.Data,
             (this->LandscapeViews).ArrayNum);
  pFVar4 = (this->LandscapeViews).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  return;
}

// operator() @ 145f7f060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`FLandscapeSceneViewExtension::PreRenderView_RenderThread'::__l11::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  ForAnyElementType *pFVar1;
  ERHIPipeline EVar2;
  FLandscapeRenderSystem *this_00;
  longlong *plVar3;
  FRHIResource *pFVar4;
  code *pcVar5;
  longlong lVar6;
  FRHICommandListBase *pFVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TResourceArray<float,0> *pTVar11;
  ForAnyElementType FVar12;
  longlong *plVar13;
  ulonglong uVar14;
  void *pvVar15;
  FRHIResource **ppFVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  ForAnyElementType *pFVar23;
  FResourceArrayUploadInterface *pFVar24;
  bool bVar25;
  undefined1 auStackY_2a8 [32];
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265;
  undefined1 local_264;
  undefined1 local_263 [3];
  FRHICommandListBase *local_260;
  FLLMScope local_258;
  FLLMScope local_254;
  FRHIResource *local_250;
  FRHIResource *local_248;
  uint local_240;
  uint local_23c;
  undefined8 *local_238;
  longlong *local_230;
  FRHIResource *local_228;
  FRHIResource *local_220;
  int local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  int iStack_20c;
  wchar_t *local_208;
  FResourceArrayUploadInterface *pFStack_200;
  ERHIAccess local_1f8;
  ERHIBufferInitAction EStack_1f4;
  FName FStack_1f0;
  FName local_1e8;
  int local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  wchar_t *local_1d0;
  FResourceArrayUploadInterface *pFStack_1c8;
  ERHIAccess local_1c0;
  ERHIBufferInitAction EStack_1bc;
  FName FStack_1b8;
  FName local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  longlong *local_198;
  FMemScope local_190;
  FMemScope local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  FTaskTagScope local_160;
  FRHIBufferCreateDesc local_150;
  FRHIBufferCreateDesc local_118;
  undefined1 local_d8 [48];
  FRHICommandListBase *local_a8;
  FRHIBuffer *local_a0;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  bVar25 = -1 < CpuChannel->Enabled;
  local_260 = param_1;
  local_230 = this;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1215,"FLandscapeRenderSystem::ComputeLODs",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
               ,0x4bf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1215);
  }
  FTaskTagScope::FTaskTagScope(&local_160,EParallelRenderingThread);
  if ((*(int *)((longlong)this + 8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SceneRenderSystems.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x4c1,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar20 = *(undefined8 **)this;
  iVar19 = *(int *)((longlong)this + 8);
  puVar18 = puVar20 + iVar19;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar19) {
      local_267 = 0;
      `TCheckedPointerIterator<FLandscapeRenderSystem_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_267);
    }
    if (puVar20 == puVar18) break;
    FLandscapeRenderSystem::FetchHeightmapLODBiases((FLandscapeRenderSystem *)*puVar20);
    puVar20 = puVar20 + 1;
  }
  local_198 = *(longlong **)((longlong)this + 0x10);
  local_23c = *(uint *)(local_198 + 1);
  uVar14 = (ulonglong)(int)local_23c;
  puVar18 = (undefined8 *)*local_198;
  pFVar23 = (ForAnyElementType *)(puVar18 + 3);
  local_1a0 = puVar18 + uVar14 * 10;
  while( true ) {
    puVar20 = local_1a0;
    local_238 = puVar18;
    if ((int)local_198[1] != (int)uVar14) {
      local_266 = 0;
      `TCheckedPointerIterator<FLandscapeSceneViewExtension::FLandscapeViewData,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_266);
    }
    plVar3 = local_230;
    pFVar7 = local_260;
    if (puVar18 == puVar20) break;
    FSceneView::GetViewKey((FSceneView *)*puVar18);
    iVar9 = FLandscapeRenderSystem::LandscapeIndexAllocator.NumBits;
    iVar19 = *(int *)(pFVar23 + 1);
    pFVar1 = pFVar23 + 1;
    if (iVar19 < FLandscapeRenderSystem::LandscapeIndexAllocator.NumBits) {
      iVar19 = FLandscapeRenderSystem::LandscapeIndexAllocator.NumBits - iVar19;
      iVar9 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (4,4,iVar19,pFVar23,(int *)pFVar1,(int *)&pFVar23[1].field_0x4);
      FVar12 = *pFVar23;
      if (((ulonglong)FVar12 & 1) != 0) {
        FVar12 = (ForAnyElementType)((longlong)&pFVar23->field_0x0 + ((longlong)FVar12 >> 0x18));
      }
      memset((void *)((longlong)FVar12 + (longlong)iVar9 * 4),0,(longlong)iVar19 << 2);
    }
    else {
      if (FLandscapeRenderSystem::LandscapeIndexAllocator.NumBits < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum
                  ((ulonglong)(uint)FLandscapeRenderSystem::LandscapeIndexAllocator.NumBits);
      }
      if (FLandscapeRenderSystem::LandscapeIndexAllocator.NumBits < iVar19) {
        uVar17 = iVar19 - FLandscapeRenderSystem::LandscapeIndexAllocator.NumBits;
        if (((int)(uVar17 | FLandscapeRenderSystem::LandscapeIndexAllocator.NumBits) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar17 != 0) {
          FVar12 = *pFVar23;
          if (((ulonglong)FVar12 & 1) != 0) {
            FVar12 = (ForAnyElementType)((longlong)&pFVar23->field_0x0 + ((longlong)FVar12 >> 0x18))
            ;
          }
          pvVar15 = (void *)((longlong)FVar12 + (longlong)iVar9 * 4);
          iVar9 = (*(int *)pFVar1 - uVar17) - iVar9;
          if (iVar9 != 0) {
            memmove(pvVar15,(void *)((longlong)pvVar15 + (longlong)(int)uVar17 * 4),
                    (longlong)iVar9 << 2);
          }
          *(uint *)pFVar1 = *(int *)pFVar1 - uVar17;
          UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,pFVar23,*(int *)pFVar1,(int *)&pFVar23[1].field_0x4);
        }
      }
    }
    plVar3 = local_230;
    local_240 = *(uint *)(local_230 + 1);
    uVar14 = (ulonglong)(int)local_240;
    puVar18 = (undefined8 *)*local_230;
    local_1a8 = puVar18 + uVar14;
    while( true ) {
      puVar20 = local_1a8;
      if ((int)plVar3[1] != (int)uVar14) {
        local_265 = 0;
        `TCheckedPointerIterator<FLandscapeRenderSystem_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_265);
      }
      if (puVar18 == puVar20) break;
      this_00 = (FLandscapeRenderSystem *)*puVar18;
      iVar19 = *(int *)(pFVar23 + 5);
      uVar17 = this_00->LandscapeIndex;
      uVar10 = 0;
      if ((int)uVar17 < *(int *)(pFVar23 + 1)) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar12 = *pFVar23;
      if (((ulonglong)FVar12 & 1) != 0) {
        FVar12 = (ForAnyElementType)((longlong)&pFVar23->field_0x0 + ((longlong)FVar12 >> 0x18));
      }
      *(int *)((longlong)FVar12 + (longlong)(int)uVar17 * 4) = iVar19;
      pTVar11 = FLandscapeRenderSystem::ComputeSectionsLODForView
                          (this_00,(FSceneView *)*local_238,
                           (IShadowInvalidatingInstances *)pFVar23[-2]);
      pFVar1 = pFVar23 + 4;
      plVar22 = &pTVar11->_padding_;
      if ((pFVar1 == (ForAnyElementType *)plVar22) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar19 = (int)pTVar11->_padding_;
      if (iVar19 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                          (4,4,iVar19,pFVar1,(int *)(pFVar23 + 5),(int *)&pFVar23[5].field_0x4);
        pvVar15 = (void *)*plVar22;
        if (((ulonglong)pvVar15 & 1) != 0) {
          pvVar15 = (void *)((longlong)plVar22 + ((longlong)pvVar15 >> 0x18));
        }
        FVar12 = *pFVar1;
        if (((ulonglong)FVar12 & 1) != 0) {
          FVar12 = (ForAnyElementType)((longlong)&pFVar1->field_0x0 + ((longlong)FVar12 >> 0x18));
        }
        memcpy((void *)((longlong)FVar12 + (longlong)iVar9 * 4),pvVar15,(longlong)iVar19 << 2);
      }
      uVar14 = (ulonglong)local_240;
      puVar18 = puVar18 + 1;
    }
    puVar18 = local_238 + 10;
    pFVar23 = pFVar23 + 10;
    uVar14 = (ulonglong)local_23c;
  }
  puVar20 = (undefined8 *)*local_230;
  lVar6 = local_230[1];
  puVar18 = puVar20 + (int)lVar6;
  while( true ) {
    if ((int)plVar3[1] != (int)lVar6) {
      local_264 = 0;
      `TCheckedPointerIterator<FLandscapeRenderSystem_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_264);
    }
    if (puVar20 == puVar18) break;
    FLandscapeRenderSystem::UpdateBuffers((FLandscapeRenderSystem *)*puVar20,pFVar7);
    puVar20 = puVar20 + 1;
  }
  plVar3 = (longlong *)plVar3[2];
  plVar22 = (longlong *)*plVar3;
  lVar6 = plVar3[1];
  pFVar24 = (FResourceArrayUploadInterface *)(plVar22 + 2);
  plVar21 = plVar22 + (longlong)(int)lVar6 * 10;
  do {
    if ((int)plVar3[1] != (int)lVar6) {
      local_263[0] = 0;
      `TCheckedPointerIterator<FLandscapeSceneViewExtension::FLandscapeViewData,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_263);
    }
    if (plVar22 == plVar21) {
      FTaskTagScope::~FTaskTagScope(&local_160);
      if (bVar25) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    iVar19 = (**(code **)((longlong)pFVar24[4] + 0x10))(pFVar24 + 4);
    iStack_20c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_214 = 0;
    local_208 = L"LandscapeLODDataBuffer";
    FStack_1f0.ComparisonIndex.Value = 0;
    FStack_1f0.Number = 0;
    local_1e8.ComparisonIndex.Value = 0;
    local_1e8.Number = 0;
    uStack_210 = 0x4104;
    EStack_1f4 = ResourceArray;
    local_218 = iVar19;
    pFStack_200 = pFVar24 + 4;
    local_1f8 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Volatile,false);
    pFVar7 = local_260;
    local_150._padding_ = CONCAT44(uStack_214,local_218);
    local_150._padding_ = CONCAT44(iStack_20c,uStack_210);
    local_150.InitAction = EStack_1f4;
    local_150.InitialState = local_1f8;
    local_150.DebugName = local_208;
    local_150.InitialData = pFStack_200;
    local_150.ClassName = FStack_1f0;
    local_150.OwnerName = local_1e8;
    if (iVar19 == 0) {
      FRHICommandListBase::InvalidBufferFatalError(local_260,&local_150);
    }
    if ((local_150.InitAction == Initializer) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x327,
                           L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar2 = pFVar7->ActivePipelines;
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar8 = pFVar7->ActivePipelines == None;
    if (bVar8) {
      FRHICommandListBase::SwitchPipeline(pFVar7,Graphics);
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_d8);
    FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_d8);
    if ((local_a8 != (FRHICommandListBase *)0x0) && (local_a0 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_d8);
    }
    if (local_d8._0_8_ != 0) {
      plVar13 = (longlong *)(local_d8 + 0x10);
      if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_d8._40_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (bVar8) {
      FRHICommandListBase::SwitchPipeline(pFVar7,None);
    }
    pFVar4 = local_228;
    uStack_178 = 0;
    local_180 = 0x10d00;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&local_258,
               `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name977,false,None,Default,true);
    FMemScope::FMemScope
              (&local_190,
               &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name977,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_250,local_260,pFVar4);
    FMemScope::~FMemScope(&local_190);
    FLLMScope::~FLLMScope(&local_258);
    ppFVar16 = (FRHIResource **)(*plVar22 + 0x1be0);
    if (ppFVar16 == &local_250) {
LAB_145f7f73f:
      if (local_250 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_250);
      }
    }
    else {
      pFVar4 = *ppFVar16;
      *ppFVar16 = local_250;
      local_250 = (FRHIResource *)0x0;
      if (pFVar4 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar4);
        goto LAB_145f7f73f;
      }
    }
    if (local_228 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_228);
    }
    iVar19 = (**(code **)((longlong)*pFVar24 + 0x10))(pFVar24);
    iStack_1d4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_1dc = 0;
    local_1d0 = L"LandscapeIndirectionBuffer";
    FStack_1b8.ComparisonIndex.Value = 0;
    FStack_1b8.Number = 0;
    local_1b0.ComparisonIndex.Value = 0;
    local_1b0.Number = 0;
    uStack_1d8 = 0x4104;
    EStack_1bc = ResourceArray;
    local_1e0 = iVar19;
    pFStack_1c8 = pFVar24;
    local_1c0 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Volatile,false);
    local_118._padding_ = CONCAT44(uStack_1dc,local_1e0);
    local_118._padding_ = CONCAT44(iStack_1d4,uStack_1d8);
    local_118.InitAction = EStack_1bc;
    local_118.InitialState = local_1c0;
    local_118.DebugName = local_1d0;
    local_118.InitialData = pFStack_1c8;
    local_118.OwnerName = local_1b0;
    local_118.ClassName = FStack_1b8;
    if (iVar19 == 0) {
      FRHICommandListBase::InvalidBufferFatalError(local_260,&local_118);
    }
    if ((local_118.InitAction == Initializer) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CreateDesc.InitAction != ERHIBufferInitAction::Initializer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x327,
                           L"Buffer InitAction set to Initializer when calling CreateBuffer which doesn\'t write to its initializer"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar2 = local_260->ActivePipelines;
    if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar8 = local_260->ActivePipelines == None;
    if (bVar8) {
      FRHICommandListBase::SwitchPipeline(local_260,Graphics);
    }
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88);
    FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_88);
    if ((local_58 != (FRHICommandListBase *)0x0) && (local_50 != (FRHIBuffer *)0x0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_88);
    }
    if (local_88._0_8_ != 0) {
      plVar13 = (longlong *)(local_88 + 0x10);
      if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_88._40_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (bVar8) {
      FRHICommandListBase::SwitchPipeline(local_260,None);
    }
    pFVar4 = local_220;
    uStack_168 = 0;
    local_170 = 0x11c00;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&local_254,
               `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
               ::__l2::LLMScope_Name977,false,None,Default,true);
    FMemScope::FMemScope
              (&local_188,
               &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                ::__l2::LLMScope_Name977,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1b0))(GDynamicRHI,&local_248,local_260,pFVar4);
    FMemScope::~FMemScope(&local_188);
    FLLMScope::~FLLMScope(&local_254);
    ppFVar16 = (FRHIResource **)(*plVar22 + 0x1bd8);
    if (ppFVar16 == &local_248) {
LAB_145f7fa0a:
      if (local_248 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_248);
      }
    }
    else {
      pFVar4 = *ppFVar16;
      *ppFVar16 = local_248;
      local_248 = (FRHIResource *)0x0;
      if (pFVar4 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar4);
        goto LAB_145f7fa0a;
      }
    }
    if (local_220 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_220);
    }
    plVar22 = plVar22 + 10;
    pFVar24 = pFVar24 + 10;
  } while( true );
}

// BeginRenderViewFamily @ 145f82970

void __thiscall
FLandscapeSceneViewExtension::BeginRenderViewFamily
          (FLandscapeSceneViewExtension *this,FSceneViewFamily *param_1)

{
  if ((param_1->EngineShowFlags).Collision != 0) {
    this->NumViewsWithShowCollisionAcc = this->NumViewsWithShowCollisionAcc + 1;
  }
  return;
}

// EndFrame_GameThread @ 145f8b7a0

void __thiscall
FLandscapeSceneViewExtension::EndFrame_GameThread(FLandscapeSceneViewExtension *this)

{
  this->NumViewsWithShowCollision = this->NumViewsWithShowCollisionAcc;
  this->NumViewsWithShowCollisionAcc = 0;
  return;
}

// EndFrame_RenderThread @ 145f8b7c0

void __thiscall
FLandscapeSceneViewExtension::EndFrame_RenderThread(FLandscapeSceneViewExtension *this)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = 0;
  uVar4 = 1;
  iVar10 = 0;
  uVar11 = LandscapeRenderSystems._40_4_;
  uVar5 = 0;
  if (uVar11 != 0) {
    puVar12 = (uint *)&LandscapeRenderSystems.field_0x10;
    if (LandscapeRenderSystems._32_8_ != 0) {
      puVar12 = (uint *)LandscapeRenderSystems._32_8_;
    }
    uVar5 = *puVar12;
    while (uVar5 == 0) {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar5 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_145f8b85d;
      uVar5 = puVar12[lVar6 + 1];
    }
    uVar4 = -uVar5 & uVar5;
    uVar13 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uVar5 = iVar10 + -1 + local_res18;
    if ((int)uVar11 < (int)uVar5) {
      uVar5 = uVar11;
    }
  }
LAB_145f8b85d:
  bVar2 = LandscapeRenderSystems._40_1_;
  uVar8 = uVar11 & 0xffffffe0;
  uVar13 = LandscapeRenderSystems._40_8_ & 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar4,iVar9);
  TStack_60.CurrentBitIndex = uVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = uVar5;
  TStack_60.BaseBitIndex = iVar10;
  uStack_40 = CONCAT44(uStack_6c,LandscapeRenderSystems._8_4_ - LandscapeRenderSystems._52_4_);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&LandscapeRenderSystems.field_0x10;
  if (((int)uVar11 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = LandscapeRenderSystems._40_4_;
  if (uVar11 != uVar5) {
    uVar13 = LandscapeRenderSystems._40_8_ & 0xffffffff;
    lVar6 = 0x154beda00;
    if (LandscapeRenderSystems._32_8_ != 0) {
      lVar6 = LandscapeRenderSystems._32_8_;
    }
    uVar4 = -1 << (bVar2 & 0x1f) & *(uint *)(lVar6 + (longlong)iVar9 * 4);
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar9;
      uVar8 = uVar8 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145f8b970;
      uVar4 = *(uint *)(lVar6 + 4 + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res20 = (int)lVar6;
    uVar8 = local_res20 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar8) {
      uVar8 = uVar5;
    }
    uVar13 = (ulonglong)uVar8;
  }
LAB_145f8b970:
  while( true ) {
    if (LandscapeRenderSystems._8_4_ - LandscapeRenderSystems._52_4_ != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeRenderSystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == (int)uVar13) &&
       (TStack_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&LandscapeRenderSystems.field_0x10)) break;
    lVar6 = *(longlong *)
             (LandscapeRenderSystems._0_8_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    TSet<TTuple<FSceneView_const_*,TResourceArray<float,0>_>,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FSceneView_const_*,TResourceArray<float,0>_>,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>,FDefaultSetAllocator>
             *)(lVar6 + 0x68));
    if ((*(int *)(lVar6 + 0x160) != *(int *)(lVar6 + 0x18c)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("RenderSystem->ShadowInvalidationRequests.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                           ,0x531,
                           L"All shadow invalidation requests should have been processed by now"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetLandscapeRenderSystem @ 145f927f0

FLandscapeRenderSystem * __cdecl
FLandscapeSceneViewExtension::GetLandscapeRenderSystem(FSceneInterface *param_1,uint param_2)

{
  ForAnyElementType FVar1;
  FLandscapeRenderSystem *pFVar2;
  TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> local_18;
  
  GetLandscapeRenderSystems(&local_18,param_1);
  for (FVar1.Data = local_18.AllocatorInstance.Data;
      FVar1.Data != local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8;
      FVar1.Data = FVar1.Data + 8) {
    pFVar2 = *(FLandscapeRenderSystem **)FVar1.Data;
    if (pFVar2->LandscapeKey == param_2) goto LAB_145f92836;
  }
  pFVar2 = (FLandscapeRenderSystem *)0x0;
LAB_145f92836:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pFVar2;
}

// GetLandscapeRenderSystems @ 145f92860

TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> * __cdecl
FLandscapeSceneViewExtension::GetLandscapeRenderSystems
          (TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSceneInterface *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  byte bVar5;
  TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
  *pTVar6;
  bool bVar7;
  TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  longlong local_c8;
  TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
  *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x53d,
                         L"Accessing the Landscape render systems is only valid from the rendering thread!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  if ((param_1 == (FSceneInterface *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InScene != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0x53e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar11 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iStack_98 = LandscapeRenderSystems._8_4_;
  iVar12 = LandscapeRenderSystems._52_4_;
  uVar13 = iStack_98 - iVar12;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    iStack_98 = LandscapeRenderSystems._8_4_;
    iVar12 = LandscapeRenderSystems._52_4_;
  }
  uStack_b4 = 1;
  local_a0 = 0;
  uVar13 = LandscapeRenderSystems._40_4_;
  uStack_a4 = uVar11;
  if (uVar13 != 0) {
    puVar15 = (uint *)&LandscapeRenderSystems.field_0x10;
    if (LandscapeRenderSystems._32_8_ != 0) {
      puVar15 = (uint *)LandscapeRenderSystems._32_8_;
    }
    uVar16 = *puVar15;
    local_a0 = 0;
    uVar11 = 0;
    while (uVar16 == 0) {
      lVar9 = (longlong)(int)uVar11;
      local_a0 = local_a0 + 0x20;
      uVar11 = uVar11 + 1;
      uStack_a4 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
      goto LAB_145f929c4;
      uVar16 = puVar15[lVar9 + 1];
    }
    uStack_b4 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    uStack_a4 = (local_a0 - 1) + local_res10;
    if ((int)uVar13 < (int)uStack_a4) {
      uStack_a4 = uVar13;
    }
  }
LAB_145f929c4:
  iStack_98 = iStack_98 - iVar12;
  local_c0 = &LandscapeRenderSystems;
  TStack_88._padding_ = CONCAT44(uStack_b4,uVar11);
  uStack_a8 = 0xffffffff;
  bVar5 = LandscapeRenderSystems._40_1_;
  local_90 = &LandscapeRenderSystems;
  local_b0 = 0x154beda00;
  uVar16 = uVar13 & 0xffffffe0;
  TStack_88.CurrentBitIndex = uStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  uStack_9c = local_44;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  iVar12 = (int)uVar13 >> 5;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)&LandscapeRenderSystems.field_0x10;
  uVar14 = uVar13;
  uStack_b8 = uVar11;
  if ((int)uVar13 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
    uVar14 = LandscapeRenderSystems._40_4_;
  }
  if (uVar13 != uVar14) {
    lVar9 = 0x154beda00;
    if (LandscapeRenderSystems._32_8_ != 0) {
      lVar9 = LandscapeRenderSystems._32_8_;
    }
    uVar11 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_145f92ae0;
      uVar11 = *(uint *)(lVar9 + 4 + lVar10 * 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar13 = local_res18 + -1 + uVar16;
    if ((int)uVar14 < (int)uVar13) {
      uVar13 = uVar14;
    }
  }
LAB_145f92ae0:
  while( true ) {
    pTVar6 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeRenderSystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar13) &&
        (TStack_88.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&LandscapeRenderSystems.field_0x10)) &&
       (pTVar6 == &LandscapeRenderSystems)) break;
    local_c8 = *(longlong *)(*(longlong *)pTVar6 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    if (*(FSceneInterface **)(local_c8 + 0x200) == param_1) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar12 = __return_storage_ptr__->ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar12 + 1;
      *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar12 * 8) =
           local_c8;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return __return_storage_ptr__;
}

// GetLandscapeRenderSystems @ 145f92c10

TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
* __cdecl FLandscapeSceneViewExtension::GetLandscapeRenderSystems(void)

{
  code *pcVar1;
  bool bVar2;
  TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
  *pTVar3;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                       ,0x537,
                       L"Accessing the Landscape render systems is only valid from the rendering thread!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &LandscapeRenderSystems;
}

// PreInitViews_RenderThread @ 145f9c0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FLandscapeSceneViewExtension::PreInitViews_RenderThread
          (FLandscapeSceneViewExtension *this,FRDGBuilder *param_1)

{
  undefined8 *puVar1;
  FTaskBase *this_00;
  IShadowInvalidatingInstances *pIVar2;
  FLandscapeViewData *pFVar3;
  code *pcVar4;
  byte bVar5;
  TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
  *pTVar6;
  bool bVar7;
  EShaderPlatform EVar8;
  int iVar9;
  ForElementType<FSceneView_const_*> FVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong *puVar16;
  TArray<FLandscapeSceneViewExtension::FLandscapeViewData,TSizedDefaultAllocator<32>_> *pTVar17;
  ForElementType<FSceneView_const_*> FVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint *puVar21;
  ForElementType<FSceneView_const_*> FVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStackY_1a8 [32];
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  uint local_154;
  uint local_150;
  uint local_14c;
  ForElementType<FSceneView_const_*> local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  IShadowInvalidatingInstances *local_130;
  TArray<FLandscapeSceneViewExtension::FLandscapeViewData,TSizedDefaultAllocator<32>_> *local_128;
  ForElementType<FSceneView_const_*> local_120;
  FRDGBuilder *local_118;
  TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
  *local_110;
  uint uStack_108;
  uint uStack_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  TMap<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  ForElementType<FSceneView_const_*> local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<FSceneView_const_*,int> local_98 [2];
  undefined4 local_6c;
  ForElementType<FSceneView_const_*> local_68;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar24 = -1 < CpuChannel->Enabled;
  local_118 = param_1;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1285,
               "FLandscapeSceneViewExtension::PreInitViews_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
               ,0x505);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1285);
  }
  this_00 = (this->LandscapeSetupTask).Pimpl.Reference;
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(this_00);
  }
  local_14c = (this->LandscapeViews).ArrayNum;
  uVar14 = (ulonglong)(int)local_14c;
  pTVar17 = &this->LandscapeViews;
  FVar22 = (ForElementType<FSceneView_const_*>)(pTVar17->AllocatorInstance).Data;
  local_4c = 2;
  local_68.SecondaryData = (ForElementType<FSceneView_const_*>)0x0;
  local_50 = 0;
  FVar18 = (ForElementType<FSceneView_const_*>)(uVar14 * 0x50 + (longlong)FVar22);
  local_128 = pTVar17;
  local_120 = FVar18;
  do {
    local_148 = FVar22;
    if (pTVar17->ArrayNum != (int)uVar14) {
      local_157 = 0;
      `TCheckedPointerIterator<FLandscapeSceneViewExtension::FLandscapeViewData,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(&local_157);
    }
    uVar20 = 0;
    if (FVar22 == FVar18) {
      if ((local_50 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar22 = (ForElementType<FSceneView_const_*>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
        FVar22 = local_68.SecondaryData;
      }
      EVar8 = FSceneView::GetShaderPlatform(*(FSceneView **)FVar22);
      bVar7 = UE::Landscape::Culling::UseCulling(EVar8);
      iVar9 = local_50;
      if (bVar7) {
        local_a8 = (ForElementType<FSceneView_const_*>)&local_68;
        if (local_68.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
          local_a8 = local_68.SecondaryData;
        }
        if ((local_50 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iStack_a0 = iVar9;
        local_98[0]._12_4_ = uStack_9c;
        local_98[0].ArrayNum = iVar9;
        local_98[0].DataPtr = (FSceneView **)local_a8;
        UE::Landscape::Culling::InitMainViews(local_118,local_98);
      }
      pFVar3 = (FLandscapeViewData *)(pTVar17->AllocatorInstance).Data;
      if (pTVar17->ArrayMax < 0) {
        DestructItems<FLandscapeSceneViewExtension::FLandscapeViewData,int>
                  (pFVar3,pTVar17->ArrayNum);
        pTVar17->ArrayNum = 0;
        if (pTVar17->ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,0,&pTVar17->AllocatorInstance,0,&pTVar17->ArrayMax);
        }
      }
      else {
        DestructItems<FLandscapeSceneViewExtension::FLandscapeViewData,int>
                  (pFVar3,pTVar17->ArrayNum);
        pTVar17->ArrayNum = 0;
      }
      if (local_68.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    FVar10 = (ForElementType<FSceneView_const_*>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
      FVar10 = local_68.SecondaryData;
    }
    if ((ulonglong)FVar10 <= (ulonglong)FVar22) {
      FVar10 = (ForElementType<FSceneView_const_*>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
        FVar10 = local_68.SecondaryData;
      }
      if (((ulonglong)FVar22 < (ulonglong)((longlong)FVar10 + (longlong)local_4c * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar9 = local_50;
    if (local_50 == local_4c) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FSceneView_const_*>_>
                        (0x808,&local_68,&local_4c);
    }
    local_50 = iVar9 + 1;
    FVar10 = (ForElementType<FSceneView_const_*>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FSceneView_const_*>)0x0) {
      FVar10 = local_68.SecondaryData;
    }
    *(undefined8 *)((longlong)FVar10 + (longlong)iVar9 * 8) = *(undefined8 *)FVar22;
    if (*(longlong *)((longlong)FVar22 + 8) != 0) {
      uStack_104 = 1;
      local_f0 = 0;
      uVar15 = LandscapeRenderSystems._40_4_;
      uStack_f4 = local_f0;
      if (uVar15 != 0) {
        puVar21 = (uint *)&LandscapeRenderSystems.field_0x10;
        if (LandscapeRenderSystems._32_8_ != 0) {
          puVar21 = (uint *)LandscapeRenderSystems._32_8_;
        }
        uVar23 = *puVar21;
        local_f0 = 0;
        uVar20 = 0;
        while (uVar23 == 0) {
          lVar12 = (longlong)(int)uVar20;
          local_f0 = local_f0 + 0x20;
          uVar20 = uVar20 + 1;
          uStack_f4 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
          goto LAB_145f9c2ff;
          uVar23 = puVar21[lVar12 + 1];
        }
        uStack_104 = -uVar23 & uVar23;
        uVar14 = (ulonglong)uStack_104 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_140 = (int)lVar12;
        uStack_f4 = (local_f0 - 1) + local_140;
        if ((int)uVar15 < (int)uStack_f4) {
          uStack_f4 = uVar15;
        }
      }
LAB_145f9c2ff:
      bVar5 = LandscapeRenderSystems._40_1_;
      uStack_ec = local_6c;
      uVar23 = uVar15 & 0xffffffe0;
      iStack_e8 = LandscapeRenderSystems._8_4_ - LandscapeRenderSystems._52_4_;
      local_110 = &LandscapeRenderSystems;
      uVar14 = LandscapeRenderSystems._40_8_ & 0xffffffff;
      TStack_d8._padding_ = CONCAT44(uStack_104,uVar20);
      local_100 = 0x154beda00;
      uStack_f8 = 0xffffffff;
      TStack_d8.CurrentBitIndex = uStack_f4;
      TStack_d8.UnvisitedBitMask = 0xffffffff;
      local_e0 = &LandscapeRenderSystems;
      iVar9 = (int)uVar15 >> 5;
      TStack_d8._28_4_ = local_6c;
      TStack_d8.BaseBitIndex = local_f0;
      uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
      TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&LandscapeRenderSystems.field_0x10;
      local_154 = uVar15;
      uStack_108 = uVar20;
      if (((int)uVar15 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar20 = LandscapeRenderSystems._40_4_;
      if (uVar15 != uVar20) {
        uVar14 = LandscapeRenderSystems._40_8_ & 0xffffffff;
        lVar12 = 0x154beda00;
        if (LandscapeRenderSystems._32_8_ != 0) {
          lVar12 = LandscapeRenderSystems._32_8_;
        }
        uVar15 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar12 + (longlong)iVar9 * 4);
        while (uVar15 == 0) {
          lVar13 = (longlong)iVar9;
          uVar23 = uVar23 + 0x20;
          iVar9 = iVar9 + 1;
          local_154 = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_145f9c414;
          uVar15 = *(uint *)(lVar12 + 4 + lVar13 * 4);
        }
        uVar14 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_13c = (int)lVar12;
        local_154 = local_13c + -1 + uVar23;
        if ((int)uVar20 < (int)local_154) {
          local_154 = uVar20;
        }
        uVar14 = (ulonglong)local_154;
      }
LAB_145f9c414:
      while( true ) {
        pTVar6 = local_e0;
        if (*(int *)&local_e0->field_0x8 - *(int *)&local_e0->field_0x34 != (int)uStack_b8) {
          local_156 = 0;
          `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FLandscapeRenderSystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_156);
        }
        if (((TStack_d8.CurrentBitIndex == (int)uVar14) &&
            (TStack_d8.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&LandscapeRenderSystems.field_0x10)) &&
           (pTVar6 == &LandscapeRenderSystems)) break;
        pIVar2 = *(IShadowInvalidatingInstances **)((longlong)FVar22 + 8);
        lVar12 = *(longlong *)(*(longlong *)pTVar6 + 8 + (longlong)TStack_d8.CurrentBitIndex * 0x18)
        ;
        local_138 = lVar12;
        bVar7 = IsInRenderingThread();
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                               ,0x437,
                               L"Using IShadowInvalidatingInstances is only allowed from the rendering thread!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar20 = ((uint)((ulonglong)pIVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar2 >> 4)) *
                 -0x7a143595;
        local_150 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
        local_150 = local_150 >> 0x10 ^ local_150;
        if (*(int *)(lVar12 + 0x160) != *(int *)(lVar12 + 0x18c)) {
          lVar13 = lVar12 + 400;
          if (*(longlong *)(lVar12 + 0x198) != 0) {
            lVar13 = *(longlong *)(lVar12 + 0x198);
          }
          iVar9 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar12 + 0x1a0) - 1U & local_150) * 4);
          if (iVar9 != -1) {
            do {
              puVar11 = (ulonglong *)
                        ((longlong)iVar9 * 0x20 +
                        *(longlong *)
                         &((TSet<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                            *)(lVar12 + 0x158))->Elements);
              if ((IShadowInvalidatingInstances *)*puVar11 == pIVar2) {
                puVar16 = puVar11 + 1;
                if (puVar11 == (ulonglong *)0x0) {
                  puVar16 = (ulonglong *)0x0;
                }
                if (puVar16 != (ulonglong *)0x0) {
                  puVar19 = (undefined8 *)*puVar16;
                  uVar14 = puVar16[1];
                  puVar1 = puVar19 + (int)uVar14;
                  while( true ) {
                    if ((int)puVar16[1] != (int)uVar14) {
                      local_155 = 0;
                      `TCheckedPointerIterator<FPrimitiveSceneInfo_const_*,int,0>::operator!='::__l2
                      ::<lambda_1>::operator()(&local_155);
                    }
                    if (puVar19 == puVar1) break;
                    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,*puVar19);
                    puVar19 = puVar19 + 1;
                  }
                  local_130 = pIVar2;
                  if (*(int *)(local_138 + 0x160) != *(int *)(local_138 + 0x18c)) {
                    TSet<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::RemoveImpl<UE::Renderer::Private::IShadowInvalidatingInstances_const_*>
                              ((TSet<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                *)(lVar12 + 0x158),local_150,&local_130);
                  }
                  uVar14 = (ulonglong)local_154;
                  FVar22 = local_148;
                }
                break;
              }
              iVar9 = (int)puVar11[3];
            } while (iVar9 != -1);
          }
        }
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
      }
      uVar14 = (ulonglong)local_14c;
      pTVar17 = local_128;
      FVar18 = local_120;
    }
    FVar22 = (ForElementType<FSceneView_const_*>)((longlong)FVar22 + 0x50);
  } while( true );
}

// PreRenderViewFamily_RenderThread @ 145f9c740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeSceneViewExtension::PreRenderViewFamily_RenderThread
          (FLandscapeSceneViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  UE::Landscape::Culling::PreRenderViewFamily(param_2);
  return;
}

// PreRenderView_RenderThread @ 145f9c750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FLandscapeSceneViewExtension::PreRenderView_RenderThread
          (FLandscapeSceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  TArray<FLandscapeSceneViewExtension::FLandscapeViewData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FTaskHandle *pFVar3;
  atomic<unsigned_int> *paVar4;
  atomic<unsigned_int> aVar5;
  FSceneViewStateInterface *pFVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  FTaskBase *pFVar11;
  FTaskBase *pFVar12;
  ERDGSetupTaskWaitPoint EVar13;
  FTaskBase *pFVar14;
  longlong *local_res8;
  FRDGBuilder *local_res10;
  undefined1 local_78 [8];
  undefined1 local_70 [12];
  int iStack_64;
  FTaskHandle *local_60;
  undefined8 local_58;
  atomic<UE::Tasks::Private::FTaskBase_*> local_50;
  int local_48;
  int local_44;
  TArray<FLandscapeSceneViewExtension::FLandscapeViewData,TSizedDefaultAllocator<32>_> *local_40;
  
  pTVar1 = &this->LandscapeViews;
  piVar2 = &(this->LandscapeViews).ArrayMax;
  iVar8 = (this->LandscapeViews).ArrayNum;
  local_res10 = param_1;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->LandscapeViews).ArrayNum = iVar8 + 1;
  FLandscapeViewData::FLandscapeViewData
            ((FLandscapeViewData *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x50),
             param_2);
  pFVar6 = param_2->State;
  pFVar14 = (FTaskBase *)0x0;
  if ((pFVar6 != (FSceneViewStateInterface *)0x0) &&
     (lVar10 = (**(code **)(pFVar6->_padding_ + 0xf8))(pFVar6), lVar10 == 0)) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0xf0);
    uVar9 = (**(code **)(pFVar6->_padding_ + 0x70))(pFVar6);
    pFVar11 = ::operator_new(0x20);
    pFVar12 = pFVar14;
    if (pFVar11 != (FTaskBase *)0x0) {
      pFVar11->_padding_ = 0;
      pFVar11->_padding_ =
           (longlong)UE::Core::Private::PimplPtr::DeleterFunc<FLandscapeRayTracingStateList>;
      *(undefined4 *)&pFVar11->_padding_ = uVar9;
      pFVar12 = pFVar11;
    }
    local_res8 = &pFVar12->_padding_;
    (*pcVar7)(pFVar6,&local_res8);
    param_1 = local_res10;
    if (local_res8 != (longlong *)0x0) {
      (*(code *)((FTaskBase *)(local_res8 + -2))->_padding_)((FTaskBase *)(local_res8 + -2));
      param_1 = local_res10;
    }
  }
  GetLandscapeRenderSystems
            ((TArray<FLandscapeRenderSystem_*,TSizedDefaultAllocator<32>_> *)local_70,
             param_2->Family->Scene);
  if ((local_70._8_4_ != 0) &&
     ((this->LandscapeViews).ArrayNum == (param_2->Family->AllViews).ArrayNum)) {
    if ((GIsThreadedRendering == false) || (GLandscapeUseAsyncTasksForLODComputation == 0)) {
      EVar13 = Compile;
    }
    else {
      EVar13 = Execute;
    }
    local_50 = (atomic<UE::Tasks::Private::FTaskBase_*>)local_70._0_8_;
    local_44 = iStack_64;
    local_48 = local_70._8_4_;
    local_70._0_8_ = (FScriptContainerElement *)0x0;
    stack0xffffffffffffff98 =
         (TArray<FLandscapeSceneViewExtension::FLandscapeViewData,TSizedDefaultAllocator<32>_> *)0x0
    ;
    local_60 = (FTaskHandle *)0x0;
    local_58 = 0;
    local_40 = pTVar1;
    FRDGBuilder::
    AddCommandListSetupTask<_FLandscapeSceneViewExtension::PreRenderView_RenderThread_::__l11::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
              (param_1,(<lambda_1> *)local_78,(FPipe *)&local_50,
               (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
               (ETaskPriority)&local_60,true,EVar13);
    pFVar3 = local_60;
    DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_60,(int)local_58);
    if (pFVar3 != (FTaskHandle *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = &this->LandscapeSetupTask;
    if (pFVar3 != (FTaskHandle *)local_78) {
      pFVar12 = (pFVar3->Pimpl).Reference;
      (pFVar3->Pimpl).Reference = (FTaskBase *)local_78;
      local_78 = (undefined1  [8])pFVar14;
      if (pFVar12 != (FTaskBase *)0x0) {
        LOCK();
        paVar4 = &pFVar12->RefCount;
        aVar5 = *paVar4;
        *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar12->_padding_)(pFVar12,1);
        }
      }
    }
    if (local_78 != (undefined1  [8])0x0) {
      LOCK();
      paVar4 = &((FTaskBase *)local_78)->RefCount;
      aVar5 = *paVar4;
      *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)local_78)->_padding_)(local_78,1);
      }
    }
    if (local_50 != (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
      FMemory::Free((void *)local_50);
    }
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  return;
}

