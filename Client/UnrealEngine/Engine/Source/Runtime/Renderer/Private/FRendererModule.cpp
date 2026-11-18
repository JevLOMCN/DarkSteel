// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 83

// operator() @ 14540ba30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FRendererModule::StartupModule'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  code *pcStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_70 = ``FRendererModule::StartupModule'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<__FRendererModule::StartupModule_::__l2::<lambda_1>::operator()_::__l2::TSTR_FSceneRendererCleanUp99>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pcStack_40 = pcStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<``FRendererModule::StartupModule'::__l2::<lambda_1>::operator()'::__l2::TSTR_FSceneRendererCleanUp99>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// operator() @ 145410970

void __thiscall `FRendererModule::StartupModule'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  FSkinnedMeshDebugViewExtension *this_00;
  FAutoRegister local_res10 [8];
  TRawPtrProxy<FSkinnedMeshDebugViewExtension> local_res18 [2];
  TSharedRef<FSkinnedMeshDebugViewExtension,1> local_38;
  undefined8 local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<ISceneViewExtension,1> local_18;
  
  InitMeshEdgesViewExtension();
  this_00 = ::operator_new(0x28);
  if (this_00 == (FSkinnedMeshDebugViewExtension *)0x0) {
    local_res18[0].Object = (FSkinnedMeshDebugViewExtension *)0x0;
  }
  else {
    local_res18[0].Object =
         FSkinnedMeshDebugViewExtension::FSkinnedMeshDebugViewExtension(this_00,local_res10);
    if ((((local_res18[0].Object != (FSkinnedMeshDebugViewExtension *)0x0) &&
         (*(longlong *)&(local_res18[0].Object)->field_0x8 != 0)) &&
        (*(longlong *)&(local_res18[0].Object)->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&(local_res18[0].Object)->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TSharedRef<FSkinnedMeshDebugViewExtension,1>::
  TSharedRef<FSkinnedMeshDebugViewExtension,1><FSkinnedMeshDebugViewExtension>
            (&local_38,local_res18);
  local_18.Object = (ISceneViewExtension *)local_38.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  local_20.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSkinnedMeshDebugViewExtension::Instance.Object = local_38.Object;
  local_28 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FSkinnedMeshDebugViewExtension::Instance.SharedReferenceCount,&local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// AllocateScene @ 14541f390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSceneInterface * __thiscall
FRendererModule::AllocateScene
          (FRendererModule *this,UWorld *param_1,bool param_2,bool param_3,Type param_4)

{
  code *pcVar1;
  bool bVar2;
  FSceneInterface *pFVar3;
  FScene *pFVar4;
  wchar_t *pwVar5;
  FLLMScope local_28;
  undefined1 local_24 [12];
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(&local_28,SceneRender,false,None,Default,true);
  FMemScope::FMemScope(local_18,SceneRender,true);
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                       ,0x1a8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSceneInterface *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (GIsClient != false) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar5 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar5,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
        && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            == false)) && (GRHIGlobals.UsingNullRHI == false)) {
      pFVar4 = ::operator_new(0x50a0);
      if (pFVar4 == (FScene *)0x0) {
        pFVar4 = (FScene *)0x0;
      }
      else {
        pFVar4 = FScene::FScene(pFVar4,param_1,param_2,false,param_3,param_4);
      }
      local_24._4_8_ = pFVar4;
      TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
      Emplace<FSceneInterface_*>
                (&this->AllocatedScenes,(FSceneInterface **)local_24,(bool *)(local_24 + 4));
      goto LAB_14541f51c;
    }
  }
  pFVar4 = ::operator_new(0x20);
  if (pFVar4 == (FScene *)0x0) {
    pFVar4 = (FScene *)0x0;
  }
  else {
    FSceneInterface::FSceneInterface((FSceneInterface *)pFVar4,GMaxRHIFeatureLevel);
    pFVar4->World = param_1;
    *(undefined ***)pFVar4 = &___7FNULLSceneInterface__6B_;
    pFVar4->FXSystem = (FFXSystemInterface *)0x0;
    param_1->Scene = (FSceneInterface *)pFVar4;
    if (param_3) {
      UWorld::CreateFXSystem(pFVar4->World);
    }
    else {
      pFVar4->World->FXSystem = (FFXSystemInterface *)0x0;
      pFVar4->FXSystem = (FFXSystemInterface *)0x0;
    }
  }
LAB_14541f51c:
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(&local_28);
  return (FSceneInterface *)pFVar4;
}

// AllocateViewState @ 14541f5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneViewStateInterface * __thiscall
FRendererModule::AllocateViewState(FRendererModule *this,Type param_1)

{
  FSceneViewState *pFVar1;
  
  pFVar1 = ::operator_new(0x2b70);
  if (pFVar1 != (FSceneViewState *)0x0) {
    pFVar1 = FSceneViewState::FSceneViewState(pFVar1,param_1,(FSceneViewState *)0x0);
    return (FSceneViewStateInterface *)pFVar1;
  }
  return (FSceneViewStateInterface *)0x0;
}

// AllocateViewState @ 14541f5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneViewStateInterface * __thiscall
FRendererModule::AllocateViewState
          (FRendererModule *this,Type param_1,FSceneViewStateInterface *param_2)

{
  FSceneViewState *pFVar1;
  
  pFVar1 = ::operator_new(0x2b70);
  if (pFVar1 != (FSceneViewState *)0x0) {
    pFVar1 = FSceneViewState::FSceneViewState(pFVar1,param_1,(FSceneViewState *)param_2);
    return (FSceneViewStateInterface *)pFVar1;
  }
  return (FSceneViewStateInterface *)0x0;
}

// CreateSceneRenderBuilder @ 145426c10

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

TUniquePtr<ISceneRenderBuilder,TDefaultDelete<ISceneRenderBuilder>_> __thiscall
FRendererModule::CreateSceneRenderBuilder(FRendererModule *this,FSceneInterface *param_1)

{
  FSceneRenderBuilder *pFVar1;
  FSceneInterface *in_R8;
  
  pFVar1 = ::operator_new(0x20);
  if (pFVar1 != (FSceneRenderBuilder *)0x0) {
    pFVar1 = FSceneRenderBuilder::FSceneRenderBuilder(pFVar1,in_R8);
    param_1->_padding_ = (longlong)pFVar1;
    return (TUniquePtr<ISceneRenderBuilder,TDefaultDelete<ISceneRenderBuilder>_>)
           (ISceneRenderBuilder *)param_1;
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<ISceneRenderBuilder,TDefaultDelete<ISceneRenderBuilder>_>)
         (ISceneRenderBuilder *)param_1;
}

// CreateSinglePrimitiveSceneUniformBuffer @ 145426c70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

FSceneUniformBuffer * __thiscall
FRendererModule::CreateSinglePrimitiveSceneUniformBuffer
          (FRendererModule *this,FRDGBuilder *param_1,FViewInfo *param_2,FMeshBatch *param_3)

{
  FSceneUniformBuffer *pFVar1;
  
  pFVar1 = CreateSinglePrimitiveSceneUniformBuffer(this,param_1,(Type)param_2->_padding_,param_3);
  return pFVar1;
}

// CreateSinglePrimitiveSceneUniformBuffer @ 145426c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FSceneUniformBuffer * __thiscall
FRendererModule::CreateSinglePrimitiveSceneUniformBuffer
          (FRendererModule *this,FRDGBuilder *param_1,Type param_2,FMeshBatch *param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  ForElementType<FMeshBatchElement> FVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FPrimitiveUniformShaderParameters *pFVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  FSceneUniformBuffer *pFVar11;
  FPrimitiveUniformShaderParameters *pFVar12;
  FRDGBuffer *pFVar13;
  FRDGBuffer *pFVar14;
  FRDGBuffer *pFVar15;
  FRDGBuffer *pFVar16;
  FRDGBuffer *pFVar17;
  FShaderParametersMetadata *pFVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ForElementType<FMeshBatchElement> FVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_ac8 [32];
  undefined8 **local_aa8;
  undefined8 **local_aa0;
  longlong local_a98;
  longlong local_a90;
  undefined8 local_a88;
  undefined8 *local_a78;
  FRDGBufferSRVDesc local_a70;
  FRDGBufferSRVDesc local_a50;
  FRDGBufferSRVDesc local_a30;
  FRDGBufferSRVDesc local_a10;
  FRDGBufferSRVDesc local_9f0;
  FPrimitiveSceneShaderData *local_9c8;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  FLightmapSceneShaderData *local_9b8;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  TVector4<float>_u_0 *local_9a8;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  TVector<float>_u_0 local_998;
  undefined8 local_98c;
  undefined8 uStack_984;
  undefined4 local_978;
  undefined8 local_974;
  undefined4 local_968;
  undefined4 local_964;
  FRDGBufferSRV *local_958;
  FRDGBufferSRV *local_950;
  FRDGBufferSRV *local_948;
  FRDGBufferSRV *local_940;
  FRDGBufferSRV *local_938;
  TArrayView<UE::Math::TVector4<float>_const_,int> local_928;
  TArrayView<UE::Math::TVector4<float>_const_,int> local_918;
  TArrayView<UE::Math::TVector4<float>_const_,int> local_908;
  TVector<float>_u_0 local_8f8;
  float fStack_8ec;
  float local_8e8;
  float local_8e4;
  float local_8e0;
  float fStack_8dc;
  float fStack_8d8;
  float fStack_8d4;
  float local_8d0;
  float local_8cc;
  TVector4<float>_u_0 local_8c8;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  float local_8a8;
  float fStack_8a4;
  float fStack_8a0;
  float fStack_89c;
  float local_898;
  float fStack_894;
  float fStack_890;
  float fStack_88c;
  TVector4<float>_u_0 local_888;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  FPrimitiveUniformShaderParameters local_798;
  FLightmapSceneShaderData local_478;
  FPrimitiveSceneShaderData local_388;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_ac8;
  puVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,0x10);
  puVar22 = (undefined8 *)0x0;
  if (puVar10 == (undefined8 *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FSceneUniformBuffer *)(*pcVar4)();
      return pFVar11;
    }
  }
  else {
    *puVar10 = &___7__TObject_VFSceneUniformBuffer___FRDGAllocator__6B_;
    FSceneUniformBuffer::FSceneUniformBuffer((FSceneUniformBuffer *)(puVar10 + 1));
    puVar22 = puVar10;
  }
  ppuVar2 = (undefined8 **)param_1->_padding_;
  local_a78 = puVar22;
  if ((ppuVar2 <= &local_a78) &&
     (lVar20 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4), &local_a78 < ppuVar2 + lVar20)
     ) {
    local_a90 = (longlong)(int)param_1->_padding_;
    local_a88 = 8;
    local_aa8 = &local_a78;
    local_aa0 = ppuVar2;
    local_a98 = lVar20;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FSceneUniformBuffer *)(*pcVar4)();
      return pFVar11;
    }
  }
  iVar9 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar9 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar9 * 8) = local_a78;
  if (-1 < param_3->VertexFactory->PrimitiveIdStreamIndex[1]) {
    iVar9 = (param_3->Elements).ArrayNum;
    if (iVar9 < 1) {
      local_aa8 = (undefined8 **)0x0;
      local_aa0 = (undefined8 **)(longlong)iVar9;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FSceneUniformBuffer *)(*pcVar4)();
        return pFVar11;
      }
    }
    FVar3 = (param_3->Elements).AllocatorInstance.SecondaryData;
    FVar21 = (ForElementType<FMeshBatchElement>)param_3;
    if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar21 = FVar3;
    }
    if ((param_3->Elements).ArrayNum != 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.Elements.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                         ,0xd0,
                         L"Only 1 batch element currently supported by CreateSinglePrimitiveSceneUniformBuffer"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FSceneUniformBuffer *)(*pcVar4)();
        return pFVar11;
      }
    }
    if (*(longlong *)FVar21 != 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshElement.PrimitiveUniformBuffer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                         ,0xd1,
                         L"CreateSinglePrimitiveSceneUniformBuffer does not currently support an explicit primitive uniform buffer on vertex factories which manually fetch primitive data.  Use PrimitiveUniformBufferResource instead."
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FSceneUniformBuffer *)(*pcVar4)();
        return pFVar11;
      }
    }
    if (*(longlong *)((longlong)FVar21 + 8) != 0) {
      if (*(int *)((longlong)FVar21 + 0x60) != 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshElement.NumInstances == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                           ,0xd5,
                           L"CreateSinglePrimitiveSceneUniformBuffer does not currently support instancing"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FSceneUniformBuffer *)(*pcVar4)();
          return pFVar11;
        }
      }
      lVar20 = 6;
      *(uint *)((longlong)FVar21 + 0x54) = *(uint *)((longlong)FVar21 + 0x54) & 0xfffffffa;
      *(uint *)((longlong)FVar21 + 0x54) = *(uint *)((longlong)FVar21 + 0x54) | 2;
      pFVar7 = &local_798;
      puVar10 = *(undefined8 **)(*(longlong *)((longlong)FVar21 + 8) + 0x30);
      do {
        puVar19 = puVar10;
        pFVar12 = pFVar7;
        pFVar7 = (FPrimitiveUniformShaderParameters *)((pFVar12->RelativeWorldToLocal).M + 2);
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        pFVar12->Flags = (int)uVar5;
        pFVar12->InstanceSceneDataOffset = (int)((ulonglong)uVar5 >> 0x20);
        pFVar12->NumInstanceSceneDataEntries = (int)uVar6;
        pFVar12->SingleCaptureIndex = (int)((ulonglong)uVar6 >> 0x20);
        uVar5 = puVar19[3];
        *(undefined8 *)&(pFVar12->PositionHigh).field0_0x0 = puVar19[2];
        *(undefined8 *)((longlong)&(pFVar12->PositionHigh).field0_0x0 + 8) = uVar5;
        uVar5 = puVar19[5];
        *(undefined8 *)(pFVar12->LocalToRelativeWorld).M[0] = puVar19[4];
        *(undefined8 *)((pFVar12->LocalToRelativeWorld).M[0] + 2) = uVar5;
        uVar5 = puVar19[7];
        *(undefined8 *)(pFVar12->LocalToRelativeWorld).M[1] = puVar19[6];
        *(undefined8 *)((pFVar12->LocalToRelativeWorld).M[1] + 2) = uVar5;
        uVar5 = puVar19[9];
        *(undefined8 *)(pFVar12->LocalToRelativeWorld).M[2] = puVar19[8];
        *(undefined8 *)((pFVar12->LocalToRelativeWorld).M[2] + 2) = uVar5;
        uVar5 = puVar19[0xb];
        *(undefined8 *)(pFVar12->LocalToRelativeWorld).M[3] = puVar19[10];
        *(undefined8 *)((pFVar12->LocalToRelativeWorld).M[3] + 2) = uVar5;
        uVar5 = puVar19[0xd];
        *(undefined8 *)(pFVar12->RelativeWorldToLocal).M[0] = puVar19[0xc];
        *(undefined8 *)((pFVar12->RelativeWorldToLocal).M[0] + 2) = uVar5;
        uVar5 = puVar19[0xf];
        *(undefined8 *)(pFVar12->RelativeWorldToLocal).M[1] = puVar19[0xe];
        *(undefined8 *)((pFVar12->RelativeWorldToLocal).M[1] + 2) = uVar5;
        lVar20 = lVar20 + -1;
        puVar10 = puVar19 + 0x10;
      } while (lVar20 != 0);
      uVar5 = puVar19[0x10];
      uVar6 = puVar19[0x11];
      pFVar7->Flags = (int)uVar5;
      pFVar7->InstanceSceneDataOffset = (int)((ulonglong)uVar5 >> 0x20);
      *(undefined8 *)((pFVar12->RelativeWorldToLocal).M[2] + 2) = uVar6;
      uVar5 = puVar19[0x13];
      *(undefined8 *)(pFVar12->RelativeWorldToLocal).M[3] = puVar19[0x12];
      *(undefined8 *)((pFVar12->RelativeWorldToLocal).M[3] + 2) = uVar5;
      iVar9 = 0;
      local_798.LightmapDataIndex = 0;
      local_798.LightmapUVIndex = 0;
      local_798.InstanceSceneDataOffset = 0;
      local_798.NumInstanceSceneDataEntries = 1;
      local_798.InstancePayloadDataOffset = 0xffffffff;
      local_798.InstancePayloadDataStride = 0;
      FPrimitiveSceneShaderData::Setup(&local_388,&local_798);
      bVar8 = FInstanceSceneShaderData::SupportsCompressedTransforms();
      fStack_8d8 = local_798.LocalToRelativeWorld.M[2][2];
      local_8e4 = local_798.LocalToRelativeWorld.M[1][2];
      fStack_8dc = local_798.LocalToRelativeWorld.M[2][1];
      local_8e8 = local_798.LocalToRelativeWorld.M[1][1];
      local_8f8._s_0.Y = local_798.LocalToRelativeWorld.M[0][1];
      local_8f8._s_0.Z = local_798.LocalToRelativeWorld.M[0][2];
      local_8f8._s_0.X = local_798.LocalToRelativeWorld.M[0][0];
      fStack_8ec = local_798.LocalToRelativeWorld.M[1][0];
      local_8e0 = local_798.LocalToRelativeWorld.M[2][0];
      fVar23 = ((local_798.LocalToRelativeWorld.M[2][2] * local_798.LocalToRelativeWorld.M[1][1] -
                local_798.LocalToRelativeWorld.M[2][1] * local_798.LocalToRelativeWorld.M[1][2]) *
                local_798.LocalToRelativeWorld.M[0][0] -
               (local_798.LocalToRelativeWorld.M[2][2] * local_798.LocalToRelativeWorld.M[0][1] -
               local_798.LocalToRelativeWorld.M[2][1] * local_798.LocalToRelativeWorld.M[0][2]) *
               local_798.LocalToRelativeWorld.M[1][0]) +
               (local_798.LocalToRelativeWorld.M[1][2] * local_798.LocalToRelativeWorld.M[0][1] -
               local_798.LocalToRelativeWorld.M[1][1] * local_798.LocalToRelativeWorld.M[0][2]) *
               local_798.LocalToRelativeWorld.M[2][0];
      fStack_8d4 = local_798.LocalToRelativeWorld.M[3][0];
      local_8d0 = local_798.LocalToRelativeWorld.M[3][1];
      local_8cc = local_798.LocalToRelativeWorld.M[3][2];
      if (0.0 <= fVar23) {
        if (fVar23 == 0.0) {
          iVar9 = 0x400;
        }
      }
      else {
        iVar9 = 1;
      }
      local_8c8._s_0.X = (float)(iVar9 << 0x14);
      local_8c8._s_0.Y = 0.0;
      local_8c8._s_0.Z = -NAN;
      local_8c8._s_0.W = 0.0;
      if (bVar8) {
        FCompressedTransform::FCompressedTransform
                  ((FCompressedTransform *)&local_998._s_0,(FRenderTransform *)&local_8f8._s_0);
        fStack_89c = 1.0;
        local_8b8 = local_98c;
        uStack_8b0 = uStack_984;
        local_8a8 = local_998._s_0.X;
        fStack_8a4 = local_998._s_0.Y;
        fStack_8a0 = local_998._s_0.Z;
      }
      else {
        local_8b8 = CONCAT44(local_798.LocalToRelativeWorld.M[1][0],
                             local_798.LocalToRelativeWorld.M[0][0]);
        uStack_8b0 = CONCAT44(local_798.LocalToRelativeWorld.M[3][0],
                              local_798.LocalToRelativeWorld.M[2][0]);
        local_8a8 = local_798.LocalToRelativeWorld.M[0][1];
        fStack_8a4 = local_798.LocalToRelativeWorld.M[1][1];
        fStack_8a0 = local_798.LocalToRelativeWorld.M[2][1];
        fStack_89c = local_798.LocalToRelativeWorld.M[3][1];
        local_898 = local_798.LocalToRelativeWorld.M[0][2];
        fStack_894 = local_798.LocalToRelativeWorld.M[1][2];
        fStack_890 = local_798.LocalToRelativeWorld.M[2][2];
        fStack_88c = local_798.LocalToRelativeWorld.M[3][2];
      }
      local_888._0_8_ = ___xmm_3f800000000000000000000000000000;
      local_888._8_8_ = _UNK_150689648;
      local_878 = ___xmm_3f800000000000000000000000000000;
      uStack_870 = _UNK_150689648;
      local_868 = ___xmm_3f800000000000000000000000000000;
      uStack_860 = _UNK_150689648;
      local_858 = ___xmm_3f800000000000000000000000000000;
      uStack_850 = _UNK_150689648;
      local_848 = ___xmm_3f800000000000000000000000000000;
      uStack_840 = _UNK_150689648;
      local_838 = ___xmm_3f800000000000000000000000000000;
      uStack_830 = _UNK_150689648;
      local_828 = ___xmm_3f800000000000000000000000000000;
      uStack_820 = _UNK_150689648;
      local_818 = ___xmm_3f800000000000000000000000000000;
      uStack_810 = _UNK_150689648;
      GetPrecomputedLightingParameters
                (param_2,(FPrecomputedLightingUniformParameters *)&local_888._s_0,param_3->LCI);
      FLightmapSceneShaderData::Setup
                (&local_478,(FPrecomputedLightingUniformParameters *)&local_888._s_0);
      local_9c8 = &local_388;
      uStack_9c0 = 0x2c;
      local_928._12_4_ = uStack_9bc;
      local_928.ArrayNum = 0x2c;
      local_928.DataPtr = (TVector4<float> *)local_9c8;
      pFVar13 = CreateStructuredBuffer<UE::Math::TVector4<float>_>
                          (param_1,L"PrimitiveSceneDataBuffer",&local_928,None);
      uStack_9b0 = 0xf;
      local_9b8 = &local_478;
      local_918._12_4_ = uStack_9ac;
      local_918.ArrayNum = 0xf;
      local_918.DataPtr = (TVector4<float> *)local_9b8;
      pFVar14 = CreateStructuredBuffer<UE::Math::TVector4<float>_>
                          (param_1,L"LightmapSceneDataBuffer",&local_918,None);
      uStack_9a0 = 4;
      local_9a8 = &local_8c8;
      local_908._12_4_ = uStack_99c;
      local_908.ArrayNum = 4;
      local_908.DataPtr = (TVector4<float> *)local_9a8;
      pFVar15 = CreateStructuredBuffer<UE::Math::TVector4<float>_>
                          (param_1,L"InstanceSceneDataBuffer",&local_908,None);
      pFVar16 = FSystemTextures::GetDefaultStructuredBuffer
                          ((FSystemTextures *)&GSystemTextures,param_1,0x10);
      pFVar17 = FSystemTextures::GetDefaultByteAddressBuffer
                          ((FSystemTextures *)&GSystemTextures,param_1,0x60);
      local_a70._padding_._4_4_ = 0;
      local_a70._padding_ = 0;
      local_a70._padding_._0_4_ = 0xffffffff;
      local_a70._padding_._0_1_ = 0;
      if (((pFVar13->Desc).Usage & DrawIndirect) != None) {
        local_a70._padding_._0_1_ = 0x1c;
      }
      local_a70.Buffer = pFVar13;
      local_948 = FRDGBuilder::CreateSRV(param_1,&local_a70);
      local_a50._padding_._0_1_ = 0;
      local_a50._padding_._4_4_ = 0;
      local_a50._padding_ = 0;
      local_a50._padding_._0_4_ = 0xffffffff;
      if (((pFVar15->Desc).Usage & DrawIndirect) != None) {
        local_a50._padding_._0_1_ = 0x1c;
      }
      local_a50.Buffer = pFVar15;
      local_958 = FRDGBuilder::CreateSRV(param_1,&local_a50);
      local_a30._padding_._0_4_ = 0xffffffff;
      local_a30._padding_._0_1_ = 0;
      local_a30._padding_._4_4_ = 0;
      local_a30._padding_ = 0;
      if (((pFVar16->Desc).Usage & DrawIndirect) != None) {
        local_a30._padding_._0_1_ = 0x1c;
      }
      local_a30.Buffer = pFVar16;
      local_950 = FRDGBuilder::CreateSRV(param_1,&local_a30);
      local_a10._padding_._4_4_ = 0;
      local_a10._padding_._0_1_ = 0;
      local_a10._padding_._0_4_ = 0xffffffff;
      local_a10._padding_ = 0;
      if (((pFVar14->Desc).Usage & DrawIndirect) != None) {
        local_a10._padding_._0_1_ = 0x1c;
      }
      local_a10.Buffer = pFVar14;
      local_940 = FRDGBuilder::CreateSRV(param_1,&local_a10);
      local_9f0._padding_._4_4_ = 0;
      local_9f0._padding_._0_1_ = 0;
      local_9f0._padding_._0_4_ = 0xffffffff;
      local_9f0._padding_ = 0;
      if (((pFVar17->Desc).Usage & DrawIndirect) != None) {
        local_9f0._padding_._0_1_ = 0x1c;
      }
      local_9f0.Buffer = pFVar17;
      local_938 = FRDGBuilder::CreateSRV(param_1,&local_9f0);
      local_968 = 1;
      local_964 = 1;
      local_978 = 0;
      local_974 = 1;
      pFVar18 = FGPUSceneResourceParameters::FTypeInfo::GetStructMetadata();
      FSceneUniformBuffer::Set
                ((FSceneUniformBuffer *)(puVar22 + 1),SceneUB::GPUScene._32_4_,&local_978,
                 pFVar18->Size);
    }
  }
  return (FSceneUniformBuffer *)(puVar22 + 1);
}

// CreateSinglePrimitiveUniformView @ 1454274f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

TRDGUniformBuffer<FBatchedPrimitiveParameters> * __thiscall
FRendererModule::CreateSinglePrimitiveUniformView
          (FRendererModule *this,FRDGBuilder *param_1,FViewInfo *param_2,FMeshBatch *param_3)

{
  EShaderPlatform EVar1;
  TRDGUniformBuffer<FBatchedPrimitiveParameters> *pTVar2;
  
  EVar1 = FSceneView::GetShaderPlatform((FSceneView *)param_2);
  pTVar2 = CreateSinglePrimitiveUniformView(this,param_1,(Type)param_2->_padding_,EVar1,param_3);
  return pTVar2;
}

// CreateSinglePrimitiveUniformView @ 145427550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<FBatchedPrimitiveParameters> * __thiscall
FRendererModule::CreateSinglePrimitiveUniformView
          (FRendererModule *this,FRDGBuilder *param_1,Type param_2,EShaderPlatform param_3,
          FMeshBatch *param_4)

{
  int *piVar1;
  ForElementType<FMeshBatchElement> FVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TRDGUniformBuffer<FBatchedPrimitiveParameters> *pTVar9;
  undefined8 *puVar10;
  FPrimitiveUniformShaderParameters *pFVar11;
  FRDGBuffer *pFVar12;
  FPrimitiveUniformShaderParameters *pFVar13;
  FRDGBufferSRV *pFVar14;
  FShaderParametersMetadata *pFVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 auStack_b28 [32];
  undefined8 *local_ad8;
  undefined4 local_ad0;
  undefined4 uStack_acc;
  undefined4 uStack_ac8;
  undefined4 uStack_ac4;
  undefined8 local_ac0;
  FRDGBufferSRVDesc local_ab8;
  FRDGBufferDesc local_a98;
  FBatchedPrimitiveShaderData local_a78;
  FBatchedPrimitiveShaderData local_878;
  FPrimitiveUniformShaderParameters local_678;
  FPrimitiveUniformShaderParameters local_358;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b28;
  bVar7 = PlatformGPUSceneUsesUniformBufferView((FStaticShaderPlatform)param_3);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PlatformGPUSceneUsesUniformBufferView(ShaderPlatform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                       ,0x11b,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRDGUniformBuffer<FBatchedPrimitiveParameters> *)(*pcVar4)();
      return pTVar9;
    }
  }
  puVar10 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  puVar18 = (undefined8 *)0x0;
  if (puVar10 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRDGUniformBuffer<FBatchedPrimitiveParameters> *)(*pcVar4)();
      return pTVar9;
    }
  }
  else {
    puVar10[2] = 0;
    *puVar10 = &___7__TObject_VFBatchedPrimitiveParameters___FRDGAllocator__6B_;
    puVar18 = puVar10;
  }
  local_ad8 = puVar18;
  if (((undefined8 **)param_1->_padding_ <= &local_ad8) &&
     (&local_ad8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRDGUniformBuffer<FBatchedPrimitiveParameters> *)(*pcVar4)();
      return pTVar9;
    }
  }
  iVar8 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar8 + 1;
  uStack_ac8 = 0x10100;
  local_ad0 = 0x10;
  uStack_acc = 0x400;
  local_a98.BytesPerElement = 0x10;
  local_a98.NumElements = 0x400;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_ad8;
  local_ac0 = 0;
  local_a98.Metadata = (FShaderParametersMetadata *)0x0;
  local_a98._12_4_ = uStack_ac4;
  local_a98.Usage = UniformBuffer|StructuredBuffer|ShaderResource;
  if (-1 < param_4->VertexFactory->PrimitiveIdStreamIndex[1]) {
    piVar1 = &(param_4->Elements).ArrayNum;
    if (*piVar1 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TRDGUniformBuffer<FBatchedPrimitiveParameters> *)(*pcVar4)();
        return pTVar9;
      }
    }
    FVar2 = (param_4->Elements).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
      param_4 = (FMeshBatch *)FVar2;
    }
    if (*piVar1 != 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.Elements.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                         ,0x126,
                         L"Only 1 batch element currently supported by CreateSinglePrimitiveUniformView"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TRDGUniformBuffer<FBatchedPrimitiveParameters> *)(*pcVar4)();
        return pTVar9;
      }
    }
    if (*(longlong *)param_4 != 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshElement.PrimitiveUniformBuffer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                         ,0x127,
                         L"CreateSinglePrimitiveUniformView does not currently support an explicit primitive uniform buffer on vertex factories which manually fetch primitive data.  Use PrimitiveUniformBufferResource instead."
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TRDGUniformBuffer<FBatchedPrimitiveParameters> *)(*pcVar4)();
        return pTVar9;
      }
    }
    if (*(longlong *)((longlong)param_4 + 8) != 0) {
      if (*(int *)((longlong)param_4 + 0x60) != 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshElement.NumInstances == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                           ,299,
                           L"CreateSinglePrimitiveUniformView does not currently support instancing"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pTVar9 = (TRDGUniformBuffer<FBatchedPrimitiveParameters> *)(*pcVar4)();
          return pTVar9;
        }
      }
      lVar17 = 6;
      *(uint *)((longlong)param_4 + 0x54) = *(uint *)((longlong)param_4 + 0x54) & 0xfffffffa;
      *(uint *)((longlong)param_4 + 0x54) = *(uint *)((longlong)param_4 + 0x54) | 2;
      pFVar13 = &local_678;
      puVar10 = *(undefined8 **)(*(longlong *)((longlong)param_4 + 8) + 0x30);
      do {
        puVar16 = puVar10;
        pFVar11 = pFVar13;
        pFVar13 = (FPrimitiveUniformShaderParameters *)((pFVar11->RelativeWorldToLocal).M + 2);
        uVar5 = *puVar16;
        uVar6 = puVar16[1];
        pFVar11->Flags = (int)uVar5;
        pFVar11->InstanceSceneDataOffset = (int)((ulonglong)uVar5 >> 0x20);
        pFVar11->NumInstanceSceneDataEntries = (int)uVar6;
        pFVar11->SingleCaptureIndex = (int)((ulonglong)uVar6 >> 0x20);
        uVar5 = puVar16[3];
        *(undefined8 *)&(pFVar11->PositionHigh).field0_0x0 = puVar16[2];
        *(undefined8 *)((longlong)&(pFVar11->PositionHigh).field0_0x0 + 8) = uVar5;
        uVar5 = puVar16[5];
        *(undefined8 *)(pFVar11->LocalToRelativeWorld).M[0] = puVar16[4];
        *(undefined8 *)((pFVar11->LocalToRelativeWorld).M[0] + 2) = uVar5;
        uVar5 = puVar16[7];
        *(undefined8 *)(pFVar11->LocalToRelativeWorld).M[1] = puVar16[6];
        *(undefined8 *)((pFVar11->LocalToRelativeWorld).M[1] + 2) = uVar5;
        uVar5 = puVar16[9];
        *(undefined8 *)(pFVar11->LocalToRelativeWorld).M[2] = puVar16[8];
        *(undefined8 *)((pFVar11->LocalToRelativeWorld).M[2] + 2) = uVar5;
        uVar5 = puVar16[0xb];
        *(undefined8 *)(pFVar11->LocalToRelativeWorld).M[3] = puVar16[10];
        *(undefined8 *)((pFVar11->LocalToRelativeWorld).M[3] + 2) = uVar5;
        uVar5 = puVar16[0xd];
        *(undefined8 *)(pFVar11->RelativeWorldToLocal).M[0] = puVar16[0xc];
        *(undefined8 *)((pFVar11->RelativeWorldToLocal).M[0] + 2) = uVar5;
        uVar5 = puVar16[0xf];
        *(undefined8 *)(pFVar11->RelativeWorldToLocal).M[1] = puVar16[0xe];
        *(undefined8 *)((pFVar11->RelativeWorldToLocal).M[1] + 2) = uVar5;
        lVar17 = lVar17 + -1;
        puVar10 = puVar16 + 0x10;
      } while (lVar17 != 0);
      uVar5 = puVar16[0x10];
      uVar6 = puVar16[0x11];
      pFVar13->Flags = (int)uVar5;
      pFVar13->InstanceSceneDataOffset = (int)((ulonglong)uVar5 >> 0x20);
      *(undefined8 *)((pFVar11->RelativeWorldToLocal).M[2] + 2) = uVar6;
      uVar5 = puVar16[0x13];
      *(undefined8 *)(pFVar11->RelativeWorldToLocal).M[3] = puVar16[0x12];
      *(undefined8 *)((pFVar11->RelativeWorldToLocal).M[3] + 2) = uVar5;
      FBatchedPrimitiveShaderData::Setup(&local_a78,&local_678);
      pFVar12 = FRDGBuilder::CreateBuffer(param_1,&local_a98,L"SinglePrimitiveUniformView",None);
      FRDGBuilder::QueueBufferUpload(param_1,pFVar12,&local_a78,0x200,None);
      if (pFVar12 != (FRDGBuffer *)0x0) goto LAB_1454278fc;
    }
  }
  pFVar13 = GetIdentityPrimitiveParameters(&local_358);
  FBatchedPrimitiveShaderData::Setup(&local_878,pFVar13);
  pFVar12 = FRDGBuilder::CreateBuffer(param_1,&local_a98,L"SinglePrimitiveUniformView",None);
  FRDGBuilder::QueueBufferUpload(param_1,pFVar12,&local_878,0x200,None);
LAB_1454278fc:
  local_ab8._padding_._4_4_ = 0;
  local_ab8._padding_._0_4_ = 0xffffffff;
  local_ab8._padding_ = 0;
  local_ab8._padding_._0_1_ = 0;
  if (((pFVar12->Desc).Usage & DrawIndirect) != None) {
    local_ab8._padding_._0_1_ = 0x1c;
  }
  local_ab8.Buffer = pFVar12;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_ab8);
  puVar18[2] = pFVar14;
  pFVar15 = FBatchedPrimitiveParameters::GetStructMetadata();
  FRDGUserValidation::ValidateCreateUniformBuffer(&param_1->UserValidation,puVar18 + 2,pFVar15);
  pFVar15 = FBatchedPrimitiveParameters::GetStructMetadata();
  pwVar3 = pFVar15->ShaderVariableName;
  pTVar9 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
  pTVar9 = TRDGUniformBuffer<FBatchedPrimitiveParameters>::
           TRDGUniformBuffer<FBatchedPrimitiveParameters>
                     (pTVar9,(FBatchedPrimitiveParameters *)(puVar18 + 2),pwVar3);
  piVar1 = &(param_1->UniformBuffers).Array.ArrayMax;
  iVar8 = (param_1->UniformBuffers).Array.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
                      (0x808,(ForElementType<FRDGUniformBuffer_*> *)&param_1->UniformBuffers,piVar1)
    ;
  }
  (param_1->UniformBuffers).Array.ArrayNum = iVar8 + 1;
  (param_1->UniformBuffers).Array.AllocatorInstance.Data[iVar8] = (FRDGUniformBuffer *)pTVar9;
  *(int *)&pTVar9->_padding_ = (param_1->UniformBuffers).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUniformBuffer
            (&param_1->UserValidation,(FRDGUniformBuffer *)pTVar9);
  return pTVar9;
}

// DebugLogOnCrash @ 145427b90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FRendererModule::DebugLogOnCrash(FRendererModule *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  UEngine *pUVar4;
  FOutputDeviceRedirector *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRendererModule::DebugLogOnCrash(void)_::_3_::FStat_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash>
  FVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FTaskBase *this_00;
  FTaskBase *this_01;
  FName local_res10;
  ETaskPriority local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  FVisualizeTexture::DebugLogOnCrash((FVisualizeTexture *)&GVisualizeTexture);
  pUVar4 = GEngine;
  pcVar3 = *(code **)(GEngine->_padding_ + 8);
  pFVar5 = GetGlobalLogSingleton();
  (*pcVar3)(&pUVar4->_padding_,0,L"rhi.DumpMemory",pFVar5);
  this_01 = (FTaskBase *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRendererModule::DebugLogOnCrash(void)_::_3_::FStat_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash>
         )0x0) {
      pFVar6 = ::FName::FName(&local_res10,"STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash,*pFVar6,
                 L"FSimpleDelegateGraphTask.DumpDataAfterCrash","STATGROUP_TaskGraphTasks",
                 "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash;
  if (StatPtr_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRendererModule::DebugLogOnCrash(void)_::_3_::FStat_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash");
    FVar7 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRendererModule::DebugLogOnCrash(void)_::_3_::FStat_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_FSimpleDelegateGraphTask_DumpDataAfterCrash,*pFVar6,
                         L"FSimpleDelegateGraphTask.DumpDataAfterCrash","STATGROUP_TaskGraphTasks",
                         "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseRawMethodDelegateInstance<0,`FRendererModule::DebugLogOnCrash'::`3'::FTest,void___cdecl(void),FDefaultDelegateUserPolicy>
               ::_vftable_;
    puVar8[3] = local_res20;
    puVar8[4] = `FRendererModule::DebugLogOnCrash'::__l3::FTest::Thread;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x100,8);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_VFSimpleDelegateGraphTask____6B_;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)FVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this_01[1]._padding_,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
  *(undefined4 *)&this_01[1]._padding_ = 1;
  UE::Tasks::Private::TranslatePriority
            (GameThread,local_res18,(EExtendedTaskPriority *)&local_res10);
  UE::Tasks::Private::FTaskBase::Init
            (this_01,L"GraphTask",local_res18[0],
             (EExtendedTaskPriority)local_res10.ComparisonIndex.Value,None);
  if (this_01 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// DrawTileMesh @ 14542a720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FRendererModule::DrawTileMesh
          (FRendererModule *this,FCanvasRenderContext *param_1,
          FMeshPassProcessorRenderState *param_2,FSceneView *param_3,FMeshBatch *param_4,
          bool param_5,FHitProxyId *param_6,bool param_7)

{
  int *piVar1;
  char cVar2;
  Type TVar3;
  FRDGBuilder *pFVar4;
  FSceneViewFamily *pFVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  FRenderTargetBindingSlots *pFVar9;
  bool bVar10;
  bool bVar11;
  FStaticShaderPlatform FVar12;
  EShaderPlatform EVar13;
  int iVar14;
  Type TVar15;
  EDebugViewShaderMode EVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  FSceneUniformBuffer *this_00;
  FMaterial *this_01;
  FVirtualTextureSystem *this_02;
  FMaterialCacheTagProvider *this_03;
  TRDGUniformBuffer<FForwardLightUniformParameters> *pTVar19;
  TUniformBufferRef<FReflectionCaptureShaderData> TVar20;
  FRDGScope *this_04;
  FDrawTileMeshPassParameters *pFVar21;
  FViewShaderParameters *pFVar22;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar23;
  FShaderParametersMetadata *pFVar24;
  TRDGUniformBuffer<FInstanceCullingGlobalUniforms> *pTVar25;
  FVirtualShadowMapSamplingParameters *pFVar26;
  TRDGUniformBuffer<FDebugViewModePassUniformParameters> *pTVar27;
  FRDGEventName *pFVar28;
  TIntPoint<int>_u_0 TVar29;
  TRDGUniformBuffer<FDebugViewModePassUniformParameters> *this_05;
  EUniformBufferBindingFlags EVar30;
  FViewInfo *this_06;
  undefined4 uVar31;
  undefined1 auStackY_c788 [32];
  TIntPoint<int> local_c730;
  undefined1 local_c724 [4];
  FMeshPassProcessorRenderState *local_c720;
  FMeshBatch *local_c718;
  undefined8 *local_c710;
  TRDGUniformBuffer<FDebugViewModePassUniformParameters> *local_c708;
  EUniformBufferBindingFlags EStack_c700;
  undefined7 uStack_c6ff;
  undefined8 *local_c6f8;
  undefined8 *local_c6f0;
  FViewInfo *local_c6e8;
  FViewInfo *local_c6e0;
  undefined4 local_c6d8;
  undefined4 uStack_c6d4;
  TIntRect<int>_u_0 local_c6c8;
  TIntRect<int>_u_0 local_c6b8;
  TIntRect<int>_u_0 local_c6a8;
  TIntRect<int>_u_0 local_c698;
  FRenderTargetBinding local_c688;
  FRenderTargetBinding local_c670;
  TVector4<float>_u_0 local_c658;
  TVector4<float>_u_0 local_c648;
  TVector4<float>_u_0 local_c638;
  char local_c628;
  FViewInfo *local_c618;
  undefined4 uStack_c610;
  undefined4 uStack_c60c;
  TIntRect<int>_u_0 local_c608;
  TIntRect<int>_u_0 local_c5f8;
  TIntRect<int>_u_0 local_c5e8;
  TIntRect<int>_u_0 local_c5d8;
  TIntRect<int>_u_0 local_c5c8;
  TIntRect<int>_u_0 local_c5b8;
  TVector4<float>_u_0 local_c5a8;
  FMeshBatch *local_c598;
  FVirtualTextureUpdateSettings local_c590;
  undefined1 local_c568 [16];
  TVector4<float>_u_0 local_c558;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_> local_c548;
  TArrayView<FMaterialTextureParameterInfo_const_,int> local_c538;
  TVector4<float>_u_0 local_c528;
  undefined8 local_c518;
  undefined1 local_c510;
  uint uStack_c4fc;
  undefined4 local_c4f8;
  undefined4 uStack_c4f4;
  TVector4<float>_u_0 local_c4e8;
  FMeshBatch *local_c4d8;
  FRHIBlendState *local_c4d0;
  FRHIDepthStencilState *pFStack_c4c8;
  undefined8 local_c4c0;
  FRHIUniformBuffer *pFStack_c4b8;
  FRHIUniformBuffer *local_c4b0;
  FRHIUniformBuffer *pFStack_c4a8;
  FRHIUniformBuffer *local_c4a0;
  undefined8 uStack_c498;
  bool local_c490;
  TVector4<float>_u_0 local_c488;
  FRHIBlendState *local_c478;
  FRHIDepthStencilState *pFStack_c470;
  undefined8 local_c468;
  FRHIUniformBuffer *pFStack_c460;
  FRHIUniformBuffer *local_c458;
  FRHIUniformBuffer *pFStack_c450;
  FRHIUniformBuffer *local_c448;
  undefined8 uStack_c440;
  FMeshBatch *local_c438;
  bool local_c430;
  TVector4<float>_u_0 local_c428;
  FRHIBlendState *local_c418;
  FRHIDepthStencilState *pFStack_c410;
  undefined8 local_c408;
  FRHIUniformBuffer *pFStack_c400;
  FRHIUniformBuffer *local_c3f8;
  FRHIUniformBuffer *pFStack_c3f0;
  FRHIUniformBuffer *local_c3e8;
  undefined8 uStack_c3e0;
  FMeshBatch *local_c3d8;
  <lambda_7> local_c3d0;
  TVector4<float>_u_0 local_c378;
  undefined8 local_c368;
  undefined8 uStack_c360;
  undefined8 local_c358;
  undefined8 uStack_c350;
  undefined8 local_c348;
  FRDGEventName local_c340;
  FRDGEventName local_c328;
  FRDGEventName local_c310;
  FRDGEventName local_c2f8;
  FRDGEventName local_c2e0;
  TVector4<float>_u_0 local_c2c8;
  undefined8 local_c2b8;
  undefined8 uStack_c2b0;
  undefined8 local_c2a8;
  undefined8 uStack_c2a0;
  undefined8 local_c298;
  undefined8 uStack_c290;
  undefined8 local_c288;
  FMobileBasePassTextures local_c280;
  FVirtualShadowMapSamplingParameters local_c238;
  FViewShaderParameters local_c228;
  undefined1 local_c208 [28];
  int local_c1ec;
  undefined4 local_c1e8;
  undefined8 local_c1e4;
  undefined4 local_c1dc;
  undefined4 local_c1d8;
  undefined2 local_c1d4;
  void *local_c1c8;
  undefined4 local_c1c0;
  undefined4 local_c1bc;
  FTranslucencyLightingVolumeTextures local_c1b8;
  FLightFunctionAtlas local_c158;
  FReflectionCaptureShaderData local_c028;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_c788;
  local_c718 = param_4;
  if (GRHIGlobals.UsingNullRHI) {
    return;
  }
  pFVar4 = param_1->GraphBuilder;
  local_c720 = param_2;
  puVar17 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x2980,0x10);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *puVar17 = &___7__TObject_VFViewInfo___FRDGAllocator__6B_;
    FViewInfo::FViewInfo((FViewInfo *)(puVar17 + 2),param_3);
  }
  local_c6f8 = puVar17;
  if ((((undefined8 **)pFVar4->_padding_ <= &local_c6f8) &&
      (&local_c6f8 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4)))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = (int)pFVar4->_padding_;
  piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
  }
  this_06 = (FViewInfo *)(puVar17 + 2);
  *(int *)&pFVar4->_padding_ = iVar14 + 1;
  *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar14 * 8) = local_c6f8;
  puVar17[0x388] = puVar17[0x72];
  puVar17[0x389] = puVar17[0x73];
  pFVar4 = param_1->GraphBuilder;
  pFVar5 = param_3->Family;
  puVar18 = FMemStackBase::Alloc((FMemStackBase *)&pFVar4->_padding_,0x330,0x10);
  if (puVar18 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
    local_c710 = (undefined8 *)0x0;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    *puVar18 = &___7__TObject_VFViewFamilyInfo___FRDGAllocator__6B_;
    local_c710 = puVar18;
    FViewFamilyInfo::FViewFamilyInfo((FViewFamilyInfo *)(puVar18 + 1),pFVar5);
  }
  local_c6f0 = puVar18;
  if ((((undefined8 **)pFVar4->_padding_ <= &local_c6f0) &&
      (&local_c6f0 < (undefined8 **)pFVar4->_padding_ + *(int *)((longlong)&pFVar4->_padding_ + 4)))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = (int)pFVar4->_padding_;
  piVar1 = (int *)((longlong)&pFVar4->_padding_ + 4);
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pFVar4->_padding_,piVar1);
  }
  *(int *)&pFVar4->_padding_ = iVar14 + 1;
  *(undefined8 **)(pFVar4->_padding_ + (longlong)iVar14 * 8) = local_c6f0;
  local_c6e8 = this_06;
  if ((((FViewInfo **)puVar18[2] <= &local_c6e8) &&
      (&local_c6e8 < (FViewInfo **)puVar18[2] + *(int *)((longlong)puVar18 + 0x1c))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = *(int *)(puVar18 + 3);
  if (iVar14 == *(int *)((longlong)puVar18 + 0x1c)) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(puVar18 + 2),(int *)((longlong)puVar18 + 0x1c));
  }
  *(int *)(puVar18 + 3) = iVar14 + 1;
  *(FViewInfo **)(puVar18[2] + (longlong)iVar14 * 8) = local_c6e8;
  local_c6e0 = this_06;
  if ((((FViewInfo **)puVar18[4] <= &local_c6e0) &&
      (&local_c6e0 < (FViewInfo **)puVar18[4] + *(int *)((longlong)puVar18 + 0x2c))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = *(int *)(puVar18 + 5);
  if (iVar14 == *(int *)((longlong)puVar18 + 0x2c)) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)(puVar18 + 4),(int *)((longlong)puVar18 + 0x2c));
  }
  *(int *)(puVar18 + 5) = iVar14 + 1;
  *(FViewInfo **)(puVar18[4] + (longlong)iVar14 * 8) = local_c6e0;
  puVar17[3] = (FSceneViewFamily *)(puVar18 + 1);
  if (param_1->RenderTarget != (FRDGTexture *)0x0) {
    switch((param_1->RenderTarget->Desc).field_0x33) {
    case 9:
    case 0x1a:
      uVar31 = __real_477c0000;
      break;
    case 10:
    case 0xf:
    case 0x10:
    case 0x15:
    case 0x16:
      uVar31 = __real_477fe000;
      break;
    default:
      uVar31 = __real_7f7fffff;
    }
    *(undefined4 *)((longlong)puVar17 + 0x26dc) = uVar31;
  }
  local_c730.field0_0x0._s_0.Y =
       *(int *)((longlong)puVar17 + 0x1c4c) - *(int *)((longlong)puVar17 + 0x1c44);
  local_c730.field0_0x0._s_0.X = *(int *)(puVar17 + 0x389) - *(int *)(puVar17 + 0x388);
  InitializeSceneTexturesConfig
            ((FSceneTexturesConfig *)(puVar18 + 0x38),(FSceneViewFamily *)(puVar18 + 1),local_c730);
  TVar3 = *(Type *)(puVar17 + 0x381);
  if ((longlong *)puVar18[9] == (longlong *)0x0) {
    local_c730.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  }
  else {
    local_c730.field0_0x0 = (TIntPoint<int>_u_0)(**(code **)(*(longlong *)puVar18[9] + 0x420))();
  }
  FMaterialRenderProxy::UpdateUniformExpressionCacheIfNeeded(param_4->MaterialRenderProxy,TVar3);
  FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions();
  pFVar4 = param_1->GraphBuilder;
  this_00 = CreateSinglePrimitiveSceneUniformBuffer(this,pFVar4,TVar3,param_4);
  bVar10 = FRDGSystemTextures::IsValid(pFVar4);
  if (!bVar10) {
    FRDGSystemTextures::Create(pFVar4);
  }
  this_01 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                      (param_4->MaterialRenderProxy,TVar3);
  local_c658._8_8_ = this_01;
  FVar12.Platform = FSceneView::GetShaderPlatform((FSceneView *)this_06);
  bVar10 = UseVirtualTexturing(FVar12);
  if ((bVar10) &&
     (FMaterial::GetUniformTextureExpressions(this_01,&local_c538,Virtual), local_c538.ArrayNum != 0
     )) {
    bVar10 = true;
    FVirtualTextureUpdateSettings::FVirtualTextureUpdateSettings(&local_c590);
    local_c590.MaxRVTPageUploads = 99999;
    local_c590.MaxSVTPageUploads = 99999;
    local_c590.MaxPagesProduced = 99999;
    local_c590.bForceSyncPageUpdate = true;
    this_02 = FVirtualTextureSystem::Get();
    FVirtualTextureSystem::Update(this_02,pFVar4,TVar3,(ISceneRenderer *)0x0,&local_c590);
    this_03 = FMaterialCacheTagProvider::Get();
    FMaterialCacheTagProvider::Update(this_03,pFVar4);
    uVar6 = *(ulonglong *)((longlong)&(param_1->ViewportRect).field0_0x0 + 8);
    uStack_c610 = 1;
    local_c558._8_8_ = CONCAT44(uStack_c60c,1);
    local_c618 = this_06;
    local_c558._0_8_ = this_06;
    VirtualTextureFeedbackBegin
              (pFVar4,(TArrayView<FViewInfo_const_,int> *)&local_c558._s_0,
               (TIntPoint<int>)
               ((uVar6 & 0xffffffff00000000) -
                ((ulonglong)(param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0 &
                0xffffffff00000000) |
               uVar6 - *(longlong *)&(param_1->ViewportRect).field0_0x0 & 0xffffffff));
  }
  else {
    bVar10 = false;
  }
  FViewInfo::InitRHIResources(this_06,0);
  EVar13 = FSceneView::GetShaderPlatform((FSceneView *)this_06);
  pTVar19 = CreateDummyForwardLightUniformBuffer(pFVar4,EVar13);
  if ((pTVar19 == (TRDGUniformBuffer<FForwardLightUniformParameters> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("UniformBuffer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.h"
                          ,0x2c3,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar17[0x4c4] = pTVar19;
  puVar17[0x4c3] = pTVar19->Parameters;
  SetDummyLocalFogVolumeForView(pFVar4,this_06);
  LightFunctionAtlas::FLightFunctionAtlas::FLightFunctionAtlas(&local_c158);
  this_05 = (TRDGUniformBuffer<FDebugViewModePassUniformParameters> *)0x0;
  local_c648._0_8_ = 0;
  local_c648._8_1_ = 0;
  local_c648._s_0.W = 0.0;
  LightFunctionAtlas::FLightFunctionAtlas::ClearEmptySceneFrame
            (&local_c158,this_06,0,(FLightFunctionAtlasSceneData *)&local_c648._s_0);
  FReflectionCaptureShaderData::FReflectionCaptureShaderData(&local_c028);
  TVar20 = TUniformBufferRef<FReflectionCaptureShaderData>::CreateUniformBufferImmediate
                     ((FReflectionCaptureShaderData *)&local_c658._s_0,
                      (EUniformBufferUsage)&local_c028,ValidateResources);
  if ((TUniformBufferRef<FReflectionCaptureShaderData>)local_c568 != TVar20) {
    this_05 = *(TRDGUniformBuffer<FDebugViewModePassUniformParameters> **)TVar20;
    *(undefined8 *)TVar20 = 0;
  }
  if ((FRHIResource *)local_c658._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_c658._0_8_);
  }
  cVar2 = *(char *)((longlong)&pFVar4->_padding_ + 6);
  local_c628 = '\0';
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((pFVar4->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_c4f8 = 0;
      uStack_c4f4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_c4fc);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_DrawTileMesh;
      ::Desc._padding_ = (longlong)u_DrawTileMesh;
      ::Desc._padding_._0_4_ = 0x1a5;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FRendererModule::DrawTileMesh'::__l20::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_c548._Myfirst._Val = &::Desc;
    local_c638._0_8_ = pFVar4;
    this_04 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar4->_padding_,(FRDGScope **)pFVar4);
    pFVar4->_padding_ = (longlong)this_04;
    local_c638._8_8_ = this_04;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13>_const_*,std::tuple<>_>_>
              (&(this_04->Impl).Impl,(FRDGScopeState *)pFVar4,&local_c548);
    if (*(char *)((longlong)&pFVar4->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_04,(FRHIComputeCommandList *)pFVar4->_padding_,false);
      FRDGScope::BeginGPU(this_04,(FRHIComputeCommandList *)pFVar4->_padding_);
    }
    local_c628 = '\x01';
  }
  pFVar21 = FRDGAllocator::Alloc<FDrawTileMeshPassParameters>((FRDGAllocator *)&pFVar4->_padding_);
  local_c688.Texture = param_1->RenderTarget;
  local_c688.ResolveTexture = (FRDGTexture *)0x0;
  local_c688.LoadAction = ELoad;
  local_c688.MipIndex = '\0';
  local_c688.ArraySlice = -1;
  bVar11 = FRenderTargetBinding::Validate(&local_c688);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (pFVar21->RenderTargets).Output.Elements[0].Texture = local_c688.Texture;
  (pFVar21->RenderTargets).Output.Elements[0].ResolveTexture = local_c688.ResolveTexture;
  (pFVar21->RenderTargets).Output.Elements[0].LoadAction = local_c688.LoadAction;
  (pFVar21->RenderTargets).Output.Elements[0].MipIndex = local_c688.MipIndex;
  (pFVar21->RenderTargets).Output.Elements[0].ArraySlice = local_c688.ArraySlice;
  *(undefined4 *)&(pFVar21->RenderTargets).Output.Elements[0].field_0x14 = local_c688._20_4_;
  pFVar22 = FViewInfo::GetShaderParameters(this_06,&local_c228);
  uVar8 = *(undefined8 *)&(pFVar22->View).field_0x8;
  *(undefined8 *)&(pFVar21->View).View = *(undefined8 *)&pFVar22->View;
  *(undefined8 *)&(pFVar21->View).View.field_0x8 = uVar8;
  uVar8 = *(undefined8 *)&(pFVar22->InstancedView).field_0x8;
  *(undefined8 *)&(pFVar21->View).InstancedView = *(undefined8 *)&pFVar22->InstancedView;
  *(undefined8 *)&(pFVar21->View).InstancedView.field_0x8 = uVar8;
  pTVar23 = FSceneUniformBuffer::GetBuffer(this_00,pFVar4);
  pFVar24 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
  EStack_c700 = Static;
  if (pFVar24->BindingFlags != StaticAndShader) {
    EStack_c700 = pFVar24->BindingFlags;
  }
  *(TRDGUniformBuffer<FSceneUniformParameters> **)&(pFVar21->InstanceCullingDrawParams).Scene =
       pTVar23;
  *(ulonglong *)&(pFVar21->InstanceCullingDrawParams).Scene.field_0x8 =
       CONCAT71(uStack_c6ff,EStack_c700);
  local_c708 = (TRDGUniformBuffer<FDebugViewModePassUniformParameters> *)pTVar23;
  pTVar25 = FInstanceCullingContext::CreateDummyInstanceCullingUniformBuffer(pFVar4);
  pFVar24 = FInstanceCullingGlobalUniforms::GetStructMetadata();
  EStack_c700 = Static;
  if (pFVar24->BindingFlags != StaticAndShader) {
    EStack_c700 = pFVar24->BindingFlags;
  }
  *(TRDGUniformBuffer<FInstanceCullingGlobalUniforms> **)
   &(pFVar21->InstanceCullingDrawParams).InstanceCulling = pTVar25;
  *(ulonglong *)&(pFVar21->InstanceCullingDrawParams).InstanceCulling.field_0x8 =
       CONCAT71(uStack_c6ff,EStack_c700);
  local_c708 = (TRDGUniformBuffer<FDebugViewModePassUniformParameters> *)pTVar25;
  pFVar24 = FReflectionCaptureShaderData::GetStructMetadata();
  EStack_c700 = Static;
  if (pFVar24->BindingFlags != StaticAndShader) {
    EStack_c700 = pFVar24->BindingFlags;
  }
  *(TRDGUniformBuffer<FDebugViewModePassUniformParameters> **)&pFVar21->ReflectionCapture = this_05;
  *(ulonglong *)&(pFVar21->ReflectionCapture).field_0x8 = CONCAT71(uStack_c6ff,EStack_c700);
  local_c708 = this_05;
  pFVar26 = FVirtualShadowMapArray::CreateDummySamplingParameters(&local_c238,pFVar4);
  puVar17 = local_c710;
  uVar8 = *(undefined8 *)&(pFVar26->VirtualShadowMap).field_0x8;
  *(undefined8 *)&(pFVar21->VirtualShadowMap).VirtualShadowMap =
       *(undefined8 *)&pFVar26->VirtualShadowMap;
  *(undefined8 *)&(pFVar21->VirtualShadowMap).VirtualShadowMap.field_0x8 = uVar8;
  TVar15 = FSceneViewFamily::GetFeatureLevel((FSceneViewFamily *)(local_c710 + 1));
  if (TVar15 == Num) {
    EVar13 = SP_NumPlatforms;
  }
  else {
    EVar13 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar15];
  }
  local_c710 = (undefined8 *)((ulonglong)EVar13 * 0x40);
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar13].bContainsValidPlatformInfo == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Platform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                          ,0x100,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((*(uint *)(&FGenericDataDrivenShaderPlatformInfo::Infos[0].field_0x28 + (longlong)local_c710)
        >> 4 & 1) != 0) && (bBindTileMeshDrawingDummyRenderTarget != 0)) {
    local_c1e4 = puVar17[0x3a];
    local_c6d8 = (undefined4)local_c1e4;
    uStack_c6d4 = SUB84(local_c1e4,4);
    local_c1ec = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_c208._8_4_ = 1;
    local_c1e8 = 0;
    local_c1c8 = (void *)0x0;
    local_c1c0 = 0;
    local_c1bc = 1;
    local_c208._0_8_ = 0x209;
    local_c208._12_16_ = (undefined1  [16])FLinearColor::Transparent.field0_0x0;
    local_c1dc = 0x10001;
    local_c1d8 = 0x15000101;
    local_c1d4 = 0xff00;
    local_c670.Texture =
         FRDGBuilder::CreateTexture(pFVar4,(FRDGTextureDesc *)local_c208,L"DummyTileMeshRT",None);
    local_c670.ResolveTexture = (FRDGTexture *)0x0;
    local_c670.LoadAction = ENoAction;
    local_c670.MipIndex = '\0';
    local_c670.ArraySlice = -1;
    bVar11 = FRenderTargetBinding::Validate(&local_c670);
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Validate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x216,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (pFVar21->RenderTargets).Output.Elements[1].Texture = local_c670.Texture;
    (pFVar21->RenderTargets).Output.Elements[1].ResolveTexture = local_c670.ResolveTexture;
    pFVar9 = &pFVar21->RenderTargets;
    (pFVar9->Output).Elements[1].LoadAction = local_c670.LoadAction;
    (pFVar9->Output).Elements[1].MipIndex = local_c670.MipIndex;
    (pFVar9->Output).Elements[1].ArraySlice = local_c670.ArraySlice;
    *(undefined4 *)&(pFVar9->Output).Elements[1].field_0x14 = local_c670._20_4_;
    if (local_c1c8 != (void *)0x0) {
      FMemory::Free(local_c1c8);
    }
  }
  EVar16 = FSceneViewFamily::GetDebugViewShaderMode((FSceneViewFamily *)(puVar17 + 1));
  if (EVar16 == DVSM_OutputMaterialTextureScales) {
    local_c720->BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
    if ((int)TVar3 < 3) goto LAB_14542b899;
    pTVar27 = CreateDebugViewModePassUniformBuffer(pFVar4,this_06,(FRDGTexture *)0x0);
    pFVar24 = FDebugViewModePassUniformParameters::GetStructMetadata();
    local_c5a8._0_8_ = local_c730.field0_0x0;
    local_c598 = local_c718;
    EStack_c700 = Static;
    if (pFVar24->BindingFlags != StaticAndShader) {
      EStack_c700 = pFVar24->BindingFlags;
    }
    *(TRDGUniformBuffer<FDebugViewModePassUniformParameters> **)&pFVar21->DebugViewMode = pTVar27;
    *(ulonglong *)&(pFVar21->DebugViewMode).field_0x8 = CONCAT71(uStack_c6ff,EStack_c700);
    local_c608._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Min.field0_0x0;
    local_c608._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Max.field0_0x0;
    local_c6c8._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
    local_c6c8._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
    local_c708 = pTVar27;
    local_c5a8._8_8_ = this_06;
    pFVar28 = FRDGEventName::FRDGEventName(&local_c340,1,L"OutputMaterialTextureScales");
    AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,_FRendererModule::DrawTileMesh_::__l29::<lambda_2>_>
              (pFVar4,pFVar28,pFVar21,(FSceneView *)this_06,(TIntRect<int> *)&local_c6c8._s_0,
               (TIntRect<int> *)&local_c608._s_0,(<lambda_2> *)&local_c5a8._s_0,false,true);
  }
  else {
    bVar11 = IsTranslucentBlendMode((FMaterial *)local_c658._8_8_);
    if (bVar11) {
      if ((int)TVar3 < 3) {
        local_c288 = 0;
        local_c2c8._0_8_ = 0;
        local_c2c8._8_8_ = 0;
        local_c2b8 = 0;
        uStack_c2b0 = 0;
        local_c2a8 = 0;
        uStack_c2a0 = 0;
        local_c298 = 0;
        uStack_c290 = 0;
        TVar29 = (TIntPoint<int>_u_0)
                 CreateMobileBasePassUniformBuffer
                           (pFVar4,this_06,Translucent,None,
                            (FMobileBasePassTextures *)&local_c2c8._s_0,false,false);
        pFVar24 = FMobileBasePassUniformParameters::GetStructMetadata();
        local_c428._0_8_ = local_c730.field0_0x0;
        EVar30 = Static;
        if (pFVar24->BindingFlags != StaticAndShader) {
          EVar30 = pFVar24->BindingFlags;
        }
        local_c6b8._8_1_ = EVar30;
        *(TIntPoint<int>_u_0 *)&pFVar21->MobileBasePass = TVar29;
        *(TIntPoint<int> *)&(pFVar21->MobileBasePass).field_0x8 = local_c6b8._s_0.Max.field0_0x0;
        local_c418 = local_c720->BlendState;
        pFStack_c410 = local_c720->DepthStencilState;
        local_c408 = *(undefined8 *)&local_c720->DepthStencilAccess;
        pFStack_c400 = local_c720->ViewUniformBuffer;
        local_c3f8 = local_c720->InstancedViewUniformBuffer;
        pFStack_c3f0 = local_c720->PassUniformBuffer;
        local_c3e8 = local_c720->NaniteUniformBuffer;
        uStack_c3e0 = *(undefined8 *)&local_c720->StencilRef;
        local_c3d8 = local_c718;
        local_c5e8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Min.field0_0x0;
        local_c5e8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Max.field0_0x0;
        local_c6a8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
        local_c6a8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
        local_c6b8._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar29;
        local_c428._8_8_ = this_06;
        pFVar28 = FRDGEventName::FRDGEventName(&local_c310,1,L"TranslucentMobile");
        AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,_FRendererModule::DrawTileMesh_::__l38::<lambda_4>_>
                  (pFVar4,pFVar28,pFVar21,(FSceneView *)this_06,(TIntRect<int> *)&local_c6a8._s_0,
                   (TIntRect<int> *)&local_c5e8._s_0,(<lambda_4> *)&local_c428._s_0,false,true);
        local_c340.FormattedEventName.Data.AllocatorInstance.Data =
             local_c310.FormattedEventName.Data.AllocatorInstance.Data;
      }
      else {
        local_c1b8.Ambient.AllocatorInstance.SecondaryData = (ForElementType<FRDGTexture_*>)0x0;
        local_c1b8.Ambient.ArrayNum = 0;
        local_c1b8.Directional.AllocatorInstance.SecondaryData = (ForElementType<FRDGTexture_*>)0x0;
        local_c1b8.Directional.ArrayNum = 0;
        local_c1b8.ViewsToTexturePairs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
        local_c1b8.ViewsToTexturePairs.ArrayNum = 0;
        local_c1b8.Ambient.ArrayMax = 2;
        local_c1b8.Directional.ArrayMax = 2;
        local_c1b8.VolumeDim = 0;
        local_c1b8.ViewsToTexturePairs.ArrayMax = 2;
        TVar29._s_0 = (TIntPoint<int>_u_0_s_0)
                      CreateTranslucentBasePassUniformBuffer
                                (pFVar4,local_c730.field0_0x0,this_06,0,&local_c1b8,
                                 (FRDGTexture *)0x0,None,false,TPT_MAX);
        pFVar24 = FTranslucentBasePassUniformParameters::GetStructMetadata();
        EVar30 = Static;
        if (pFVar24->BindingFlags != StaticAndShader) {
          EVar30 = pFVar24->BindingFlags;
        }
        local_c6c8._8_1_ = EVar30;
        *(TIntPoint<int>_u_0 *)&pFVar21->TranslucentBasePass = TVar29;
        *(TIntPoint<int> *)&(pFVar21->TranslucentBasePass).field_0x8 =
             local_c6c8._s_0.Max.field0_0x0;
        local_c6c8._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar29;
        if (local_c1b8.ViewsToTexturePairs.AllocatorInstance.SecondaryData !=
            (ForElementType<int>)0x0) {
          FMemory::Free((void *)local_c1b8.ViewsToTexturePairs.AllocatorInstance.SecondaryData);
        }
        if (local_c1b8.Directional.AllocatorInstance.SecondaryData !=
            (ForElementType<FRDGTexture_*>)0x0) {
          FMemory::Free((void *)local_c1b8.Directional.AllocatorInstance.SecondaryData);
        }
        if (local_c1b8.Ambient.AllocatorInstance.SecondaryData != (ForElementType<FRDGTexture_*>)0x0
           ) {
          FMemory::Free((void *)local_c1b8.Ambient.AllocatorInstance.SecondaryData);
        }
        local_c4e8._0_8_ = local_c730.field0_0x0;
        local_c4d8 = local_c718;
        local_c4d0 = local_c720->BlendState;
        pFStack_c4c8 = local_c720->DepthStencilState;
        local_c4c0 = *(undefined8 *)&local_c720->DepthStencilAccess;
        pFStack_c4b8 = local_c720->ViewUniformBuffer;
        local_c4b0 = local_c720->InstancedViewUniformBuffer;
        pFStack_c4a8 = local_c720->PassUniformBuffer;
        local_c4a0 = local_c720->NaniteUniformBuffer;
        uStack_c498 = *(undefined8 *)&local_c720->StencilRef;
        local_c490 = param_7;
        local_c5f8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Min.field0_0x0;
        local_c5f8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Max.field0_0x0;
        local_c6b8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
        local_c6b8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
        local_c4e8._8_8_ = this_06;
        pFVar28 = FRDGEventName::FRDGEventName(&local_c328,1,L"TranslucentDeferred");
        AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,_FRendererModule::DrawTileMesh_::__l36::<lambda_3>_>
                  (pFVar4,pFVar28,pFVar21,(FSceneView *)this_06,(TIntRect<int> *)&local_c6b8._s_0,
                   (TIntRect<int> *)&local_c5f8._s_0,(<lambda_3> *)&local_c4e8._s_0,false,true);
        local_c340.FormattedEventName.Data.AllocatorInstance.Data =
             local_c328.FormattedEventName.Data.AllocatorInstance.Data;
      }
    }
    else {
      local_c720->BlendState =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      if (param_5) {
        if (param_6->Index != (local_c718->BatchHitProxyId).Index) {
          `FRendererModule::DrawTileMesh'::__l43::<lambda_5>::operator()(local_c724);
        }
        goto LAB_14542b899;
      }
      if ((int)TVar3 < 3) {
        local_c280.DBufferTextures.DBufferA = (FRDGTexture *)0x0;
        local_c280.DBufferTextures.DBufferB = (FRDGTexture *)0x0;
        local_c280.AmbientOcclusionTexture = (FRDGTexture *)0x0;
        local_c280.DBufferTextures.DBufferC = (FRDGTexture *)0x0;
        local_c280.DBufferTextures.DBufferATexArray = (FRDGTexture *)0x0;
        local_c280.DBufferTextures.DBufferBTexArray = (FRDGTexture *)0x0;
        local_c280.DBufferTextures.DBufferCTexArray = (FRDGTexture *)0x0;
        local_c280.DBufferTextures.DBufferMask = (FRDGTexture *)0x0;
        local_c280.ScreenSpaceShadowMaskTexture = (FRDGTexture *)0x0;
        TVar29 = (TIntPoint<int>_u_0)
                 CreateMobileBasePassUniformBuffer
                           (pFVar4,this_06,Opaque,None,&local_c280,false,false);
        pFVar24 = FMobileBasePassUniformParameters::GetStructMetadata();
        local_c3d0.Scene = (FScene *)local_c730.field0_0x0;
        EVar30 = Static;
        if (pFVar24->BindingFlags != StaticAndShader) {
          EVar30 = pFVar24->BindingFlags;
        }
        local_c698._8_1_ = EVar30;
        *(TIntPoint<int>_u_0 *)&pFVar21->MobileBasePass = TVar29;
        *(TIntPoint<int> *)&(pFVar21->MobileBasePass).field_0x8 = local_c698._s_0.Max.field0_0x0;
        local_c3d0.DrawRenderState.BlendState = local_c720->BlendState;
        local_c3d0.DrawRenderState.DepthStencilState = local_c720->DepthStencilState;
        local_c3d0.DrawRenderState.DepthStencilAccess = local_c720->DepthStencilAccess;
        local_c3d0.DrawRenderState._20_4_ = *(undefined4 *)&local_c720->field_0x14;
        local_c3d0.DrawRenderState.ViewUniformBuffer = local_c720->ViewUniformBuffer;
        local_c3d0.DrawRenderState.InstancedViewUniformBuffer =
             local_c720->InstancedViewUniformBuffer;
        local_c3d0.DrawRenderState.PassUniformBuffer = local_c720->PassUniformBuffer;
        local_c3d0.DrawRenderState.NaniteUniformBuffer = local_c720->NaniteUniformBuffer;
        local_c3d0.DrawRenderState.StencilRef = local_c720->StencilRef;
        local_c3d0.DrawRenderState._60_4_ = *(undefined4 *)&local_c720->field_0x3c;
        local_c3d0.Mesh = local_c718;
        local_c5c8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Min.field0_0x0;
        local_c5c8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Max.field0_0x0;
        local_c5b8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
        local_c5b8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
        local_c698._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar29;
        local_c3d0.View = this_06;
        pFVar28 = FRDGEventName::FRDGEventName(&local_c2e0,1,L"OpaqueMobile");
        AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,_FRendererModule::DrawTileMesh_::__l50::<lambda_7>_>
                  (pFVar4,pFVar28,pFVar21,(FSceneView *)this_06,(TIntRect<int> *)&local_c5b8._s_0,
                   (TIntRect<int> *)&local_c5c8._s_0,&local_c3d0,false,true);
        local_c340.FormattedEventName.Data.AllocatorInstance.Data =
             local_c2e0.FormattedEventName.Data.AllocatorInstance.Data;
      }
      else {
        local_c348 = 0;
        local_c518 = 0;
        local_c510 = 0;
        local_c378._0_8_ = 0;
        local_c378._8_8_ = 0;
        local_c368 = 0;
        uStack_c360 = 0;
        local_c358 = 0;
        uStack_c350 = 0;
        local_c528._0_8_ = 0;
        local_c528._8_8_ = 0;
        TVar29 = (TIntPoint<int>_u_0)
                 CreateOpaqueBasePassUniformBuffer
                           (pFVar4,this_06,0,(FForwardBasePassTextures *)&local_c528._s_0,
                            (FDBufferTextures *)&local_c378._s_0,false,false);
        pFVar24 = FOpaqueBasePassUniformParameters::GetStructMetadata();
        local_c488._0_8_ = local_c730.field0_0x0;
        EVar30 = Static;
        if (pFVar24->BindingFlags != StaticAndShader) {
          EVar30 = pFVar24->BindingFlags;
        }
        local_c6a8._8_1_ = EVar30;
        *(TIntPoint<int>_u_0 *)&pFVar21->OpaqueBasePass = TVar29;
        *(TIntPoint<int> *)&(pFVar21->OpaqueBasePass).field_0x8 = local_c6a8._s_0.Max.field0_0x0;
        local_c478 = local_c720->BlendState;
        pFStack_c470 = local_c720->DepthStencilState;
        local_c468 = *(undefined8 *)&local_c720->DepthStencilAccess;
        pFStack_c460 = local_c720->ViewUniformBuffer;
        local_c458 = local_c720->InstancedViewUniformBuffer;
        pFStack_c450 = local_c720->PassUniformBuffer;
        local_c448 = local_c720->NaniteUniformBuffer;
        uStack_c440 = *(undefined8 *)&local_c720->StencilRef;
        local_c438 = local_c718;
        local_c430 = param_7;
        local_c5d8._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Min.field0_0x0;
        local_c5d8._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->ScissorRect).field0_0x0._s_0.Max.field0_0x0;
        local_c698._s_0.Min.field0_0x0 =
             (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Min.field0_0x0;
        local_c698._s_0.Max.field0_0x0 =
             (TIntPoint<int>)(param_1->ViewportRect).field0_0x0._s_0.Max.field0_0x0;
        local_c6a8._s_0.Min.field0_0x0 = (TIntPoint<int>)TVar29;
        local_c488._8_8_ = this_06;
        pFVar28 = FRDGEventName::FRDGEventName(&local_c2f8,1,L"OpaqueDeferred");
        AddDrawDynamicMeshPass<FDrawTileMeshPassParameters,_FRendererModule::DrawTileMesh_::__l48::<lambda_6>_>
                  (pFVar4,pFVar28,pFVar21,(FSceneView *)this_06,(TIntRect<int> *)&local_c698._s_0,
                   (TIntRect<int> *)&local_c5d8._s_0,(<lambda_6> *)&local_c488._s_0,false,false);
        local_c340.FormattedEventName.Data.AllocatorInstance.Data =
             local_c2f8.FormattedEventName.Data.AllocatorInstance.Data;
      }
    }
  }
  if (local_c340.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c340.FormattedEventName.Data.AllocatorInstance.Data);
  }
LAB_14542b899:
  if (bVar10) {
    VirtualTexture::EndFeedback(pFVar4);
  }
  if (local_c628 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>
              ((TRDGEventScopeGuard<FRDGScope_RHI> *)&local_c638._s_0);
  }
  if (this_05 != (TRDGUniformBuffer<FDebugViewModePassUniformParameters> *)0x0) {
    FRHIResource::Release((FRHIResource *)this_05);
  }
  LightFunctionAtlas::FLightFunctionAtlas::~FLightFunctionAtlas(&local_c158);
  return;
}

// ExecVisualizeTextureCmd @ 14542dec0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRendererModule::ExecVisualizeTextureCmd(FRendererModule *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FOutputDeviceRedirector *pFVar3;
  wchar_t *pwVar4;
  
  pFVar3 = GetGlobalLogSingleton();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                       ,0x2a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FlushRenderingCommands();
  FVisualizeTexture::ParseCommands
            ((FVisualizeTexture *)&GVisualizeTexture,pwVar4,(FOutputDevice *)pFVar3);
  return;
}

// GPUBenchmark @ 145434490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FRendererModule::GPUBenchmark(FRendererModule *this,FSynthBenchmarkResults *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  code **ppcVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  ulonglong uVar5;
  undefined1 auStackY_3cb8 [32];
  code *local_3c58 [2];
  code *local_3c48 [3];
  code **local_3c30;
  undefined1 local_3c28 [40];
  code **local_3c00;
  byte local_3bf8;
  undefined1 local_3be8 [512];
  ForAnyElementType local_39e8;
  undefined8 local_39e0;
  TBitArray<FDefaultBitArrayAllocator> local_39d8;
  undefined4 local_39b8;
  undefined4 local_39b4;
  ForElementType<FSetElementId> local_39a8;
  int local_39a0;
  undefined1 local_3998 [80];
  TIntPoint<int>_u_0 local_3948;
  float local_3940;
  float local_393c;
  TVector<double>_u_0 local_3938;
  undefined2 local_3920;
  float local_391c;
  float local_3918;
  float fStack_3914;
  undefined5 uStack_3910;
  undefined3 uStack_390b;
  undefined4 local_3908;
  undefined2 local_3904;
  float local_3900;
  float local_38fc;
  float local_38f8;
  TVector4<float>_u_0 local_38e8;
  FSceneView local_38d8;
  FSceneView local_1ca8;
  float local_78;
  FSynthBenchmarkResults *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_3cb8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                       ,0x274,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_3be8._144_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_3be8._152_8_ = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_3be8._272_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_3be8._280_8_ = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_3be8._288_8_ = 0;
  local_3be8._296_8_ = 0;
  local_3be8._352_8_ = (FSceneViewStateInterface *)0x0;
  local_3be8._360_8_ = (FSceneViewStateInterface *)0x0;
  local_3be8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_3be8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_3be8._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_3be8._32_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_3be8._40_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_3be8._48_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_3be8._56_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_3be8._64_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_3be8._72_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_3be8._80_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_3be8._88_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_3be8._96_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_3be8._104_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_3be8._112_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_3be8._120_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_3be8._128_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_3be8._136_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_3be8._160_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_3be8._168_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_3be8._176_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_3be8._184_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_3be8._192_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_3be8._200_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_3be8._208_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_3be8._216_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_3be8._224_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_3be8._232_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_3be8._240_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_3be8._248_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_3be8._256_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_3be8._264_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_3be8._304_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_3be8._312_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_3be8._320_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_3be8._328_8_ = 0;
  local_3be8._336_8_ = 0;
  local_3be8._344_8_ = (FSceneViewFamily *)0x0;
  FSceneViewOwner::FSceneViewOwner((FSceneViewOwner *)(local_3be8 + 0x170),(AActor *)0x0);
  local_3be8._384_4_ = -1;
  local_3be8._392_8_ = (FViewElementDrawer *)0x0;
  local_3be8._400_16_ = (undefined1  [16])FLinearColor::Transparent.field0_0x0;
  local_3be8._416_16_ = (undefined1  [16])FLinearColor::Transparent.field0_0x0;
  local_3be8._448_4_ = eSSP_FULL;
  local_3938._s_0.Z = 0.0;
  local_3be8._432_16_ = (undefined1  [16])FLinearColor::White.field0_0x0;
  local_3be8._480_8_ = 0.0;
  local_3be8._488_8_ = 0.0;
  local_3938._s_0.X = 0.0;
  local_3938._s_0.Y = 0.0;
  local_3be8._452_4_ = -1;
  local_3be8._456_4_ = 100.0;
  local_3be8._464_8_ = 0.0;
  local_3be8._472_8_ = 0.0;
  local_3be8._496_8_ = 0.0;
  local_3be8._504_8_ = 0.0;
  local_39e8.Data = (FScriptContainerElement *)0x0;
  local_39e0 = 0;
  local_39d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_39d8.NumBits = 0;
  local_39d8.MaxBits = 0x80;
  local_39b8 = 0xffffffff;
  local_39b4 = 0;
  local_39a8 = (ForElementType<FSetElementId>)0x0;
  local_39a0 = 0;
  local_3998._0_8_ = (void *)0x0;
  local_3998._8_4_ = 0;
  local_3998._12_4_ = -1;
  local_3998._32_8_ = (void *)0x0;
  local_3998._40_4_ = 0;
  local_3998._44_4_ = 0x80;
  local_3998._48_4_ = 0xffffffff;
  local_3998._52_4_ = 0;
  local_3998._64_8_ = (ForElementType<FSetElementId>)0x0;
  local_3998._72_4_ = 0;
  local_3948 = (TIntPoint<int>_u_0)0xffffffffffffffff;
  local_3940 = 1.0;
  local_393c = -1.0;
  local_3920._0_1_ = false;
  local_3920._1_1_ = true;
  local_38e8._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
  local_38e8._8_8_ = _UNK_15076b1f8;
  local_391c = 90.0;
  local_3be8._0_8_ = 0;
  local_3be8._8_8_ = 0;
  local_3be8._32_8_ = ___xmm_00000000000000003ff0000000000000;
  local_3be8._40_8_ = _UNK_150689518;
  local_3be8._48_8_ = 0;
  local_3be8._56_8_ = 0;
  local_3be8._80_8_ = 0;
  local_3be8._88_8_ = 0;
  local_3be8._112_8_ = ___xmm_0000000000000000bff0000000000000;
  local_3be8._120_8_ = _UNK_15076ad98;
  local_3be8._64_8_ = ___xmm_bff00000000000000000000000000000;
  local_3be8._72_8_ = _UNK_1508ffb28;
  local_3be8._128_8_ = 0;
  local_3be8._136_8_ = 0;
  local_3be8._96_8_ = 0;
  local_3be8._104_8_ = 0;
  local_3be8._160_8_ = ___xmm_00000000000000003ea0000000000000;
  local_3be8._168_8_ = _UNK_150fa1758;
  local_3be8._144_8_ = ___xmm_3ff00000000000000000000000000000;
  local_3be8._152_8_ = _UNK_15061cbc8;
  local_3be8._176_8_ = 0;
  local_3be8._184_8_ = 0;
  local_3be8._208_8_ = 0;
  local_3be8._216_8_ = 0;
  local_3be8._192_8_ = ___xmm_3ea00000000000000000000000000000;
  local_3be8._200_8_ = _UNK_150fa17a8;
  local_3be8._240_8_ = ___xmm_0000000000000000be90000000000000;
  local_3be8._248_8_ = _UNK_150fa1768;
  local_3be8._224_8_ = 0;
  local_3be8._232_8_ = 0;
  local_3be8._288_8_ = ___xmm_00000001000000010000000000000000;
  local_3be8._328_8_ = ___xmm_00000001000000010000000000000000;
  local_3be8._256_8_ = 0;
  local_3be8._264_8_ = 0;
  local_3918 = (float)___xmm_00000000000000000000000042b40000;
  fStack_3914 = 1.0;
  uStack_390b = (undefined3)((ulonglong)_UNK_150ee30d8 >> 0x28);
  uStack_3910._0_4_ = 1.0;
  uStack_3910._4_1_ = false;
  local_3908._0_1_ = false;
  local_3908._1_1_ = false;
  local_3908._2_1_ = false;
  local_3908._3_1_ = false;
  local_3904._0_1_ = false;
  local_3904._1_1_ = false;
  local_3900 = -1.0;
  local_38fc = 1.0;
  local_38f8 = 1.0;
  local_3be8._296_8_ = _UNK_150df0138;
  local_3be8._336_8_ = _UNK_150df0138;
  local_3be8._16_8_ = 0;
  local_3be8._272_8_ = ___xmm_3ff00000000000003fe0000000000000;
  local_3be8._280_8_ = _UNK_15076b7e8;
  FSceneView::FSceneView(&local_38d8,(FSceneViewInitOptions *)local_3be8);
  FlushRenderingCommands();
  FSceneView::FSceneView(&local_1ca8,&local_38d8);
  local_3c58[0] = (code *)0x0;
  local_78 = param_2;
  local_70 = param_1;
  ppcVar3 = FMemory::Malloc(0x1c50,0x10);
  *ppcVar3 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`FRendererModule::GPUBenchmark'::`2'::<lambda_1>,1,1>::
                      _vftable_;
  local_3c30 = ppcVar3;
  FSceneView::FSceneView((FSceneView *)(ppcVar3 + 2),&local_1ca8);
  *(float *)(ppcVar3 + 0x388) = local_78;
  ppcVar3[0x389] = (code *)local_70;
  if ((FSceneView *)(ppcVar3 + 2) != (FSceneView *)0x0) {
    local_3c58[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FRendererModule::GPUBenchmark'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
         ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRendererModule::GPUBenchmark_::__l2::TSTR_RendererGPUBenchmarkCommand657>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_3c58);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_3c28._0_8_ = local_3c58[0];
    local_3c00 = local_3c30;
    local_3c30 = (code **)0x0;
    local_3c28._16_8_ = local_3c48[0];
    local_3c28._24_8_ = local_3c48[1];
    local_3c28._32_8_ = local_3c48[2];
    local_3c58[0] = (code *)0x0;
    local_3bf8 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FRendererModule::GPUBenchmark'::__l2::TSTR_RendererGPUBenchmarkCommand657>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_3c28,pFVar4);
    uVar5 = (ulonglong)local_3bf8;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_3c28._0_8_ != (code *)0x0) {
        ppcVar3 = (code **)(local_3c28 + 0x10);
        if (local_3c00 != (code **)0x0) {
          ppcVar3 = local_3c00;
        }
        (**(code **)(*ppcVar3 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_3c28);
    }
  }
  if (local_3c58[0] != (code *)0x0) {
    ppcVar3 = local_3c58 + 2;
    if (local_3c30 != (code **)0x0) {
      ppcVar3 = local_3c30;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  FSceneView::~FSceneView(&local_1ca8);
  FlushRenderingCommands();
  FSceneView::~FSceneView(&local_38d8);
  if (local_3998._12_4_ != -1) {
    local_3998._72_4_ = 0;
    if ((ForElementType<FSetElementId>)local_3998._64_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3998._64_8_);
    }
    local_3998._8_4_ = 0;
    if (local_3998._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_3998,0,(int *)(local_3998 + 0xc));
    }
    local_3998._48_4_ = 0xffffffff;
    local_3998._52_4_ = 0;
    local_3998._40_4_ = 0;
    if (0x80 < (uint)local_3998._44_4_) {
      local_3998._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_3998 + 0x10),0);
    }
    if ((void *)local_3998._32_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3998._32_8_);
    }
    if ((void *)local_3998._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3998._0_8_);
    }
  }
  local_39a0 = 0;
  if (local_39a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_39a8);
  }
  uVar5 = local_39e0 >> 0x20;
  local_39e0 = local_39e0 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_39e8,0,(int *)((longlong)&local_39e0 + 4));
  }
  local_39b8 = 0xffffffff;
  local_39b4 = 0;
  local_39d8.NumBits = 0;
  if (0x80 < (uint)local_39d8.MaxBits) {
    local_39d8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_39d8,0);
  }
  if (local_39d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_39d8.AllocatorInstance.SecondaryData);
  }
  if (local_39e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_39e8.Data);
  }
  return;
}

// InitializeSystemTextures @ 145443650

void __thiscall
FRendererModule::InitializeSystemTextures(FRendererModule *this,FRHICommandListImmediate *param_1)

{
  FSystemTextures::InitializeTextures
            ((FSystemTextures *)&GSystemTextures,param_1,GMaxRHIFeatureLevel);
  return;
}

// InvalidatePathTracedOutput @ 145444980

void __thiscall
FRendererModule::InvalidatePathTracedOutput(FRendererModule *this,EInvalidateReason param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = IsInGameThread();
  if (((!bVar6) && (bVar6 = IsInParallelGameThread(), !bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                         ,0x1b24,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = *(int *)&(this->AllocatedScenes).Elements.field_0x28;
  puVar1 = &(this->AllocatedScenes).Elements.field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->AllocatedScenes).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145444a5d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145444a5d:
  uVar11 = *(uint *)&(this->AllocatedScenes).Elements.field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AllocatedScenes).Elements.field_0x8 -
                       *(int *)&(this->AllocatedScenes).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->AllocatedScenes).Elements.field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->AllocatedScenes).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145444b60;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_145444b60:
  while( true ) {
    if (*(int *)&(this->AllocatedScenes).Elements.field_0x8 -
        *(int *)&(this->AllocatedScenes).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    plVar4 = *(longlong **)
              (*(longlong *)&(this->AllocatedScenes).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    (**(code **)(*plVar4 + 0x240))(plVar4,param_1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnWorldCleanup @ 145445560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRendererModule::OnWorldCleanup
          (FRendererModule *this,UWorld *param_1,bool param_2,bool param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [48];
  code *local_88 [2];
  undefined **local_78;
  FSceneInterface *pFStack_70;
  bool local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSceneInterface *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRendererModule::OnWorldCleanup'::`2'::<lambda_1>,1,0>::
              _vftable_;
  pFStack_70 = param_1->Scene;
  local_68 = param_4;
  uStack_67 = auStack_b8._41_4_;
  uStack_63 = auStack_b8._45_2_;
  uStack_61 = auStack_b8[0x2f];
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRendererModule::OnWorldCleanup'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRendererModule::OnWorldCleanup_::__l2::TSTR_OnWorldCleanup163>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_38._1_4_ = uStack_67;
    local_38._0_1_ = local_68;
    local_38._5_2_ = uStack_63;
    local_38._7_1_ = uStack_61;
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FRendererModule::OnWorldCleanup'::__l2::TSTR_OnWorldCleanup163>::Get
                       ();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// RegisterCustomCullingImpl @ 145446f40

void __thiscall
FRendererModule::RegisterCustomCullingImpl(FRendererModule *this,ICustomCulling *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GCustomCullingImpl != (ICustomCulling *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GCustomCullingImpl == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                       ,0x2d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GCustomCullingImpl = param_1;
  return;
}

// RegisterPersistentViewUniformBufferExtension @ 145446f90

void __thiscall
FRendererModule::RegisterPersistentViewUniformBufferExtension
          (FRendererModule *this,IPersistentViewUniformBufferExtension *param_1)

{
  IPersistentViewUniformBufferExtension *local_res10;
  IPersistentViewUniformBufferExtension *local_res18 [2];
  
  local_res10 = param_1;
  TSet<IPersistentViewUniformBufferExtension_*,DefaultKeyFuncs<IPersistentViewUniformBufferExtension_*,0>,FDefaultSetAllocator>
  ::Emplace<IPersistentViewUniformBufferExtension_*_const_&>
            (&PersistentViewUniformBufferExtensions,local_res18,(bool *)&local_res10);
  return;
}

// RemoveScene @ 14544c8a0

void __thiscall FRendererModule::RemoveScene(FRendererModule *this,FSceneInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                       ,0x1a9f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::Remove
            (&this->AllocatedScenes,param_1);
  return;
}

// ResetSceneTextureExtentHistory @ 14544e070

void __thiscall FRendererModule::ResetSceneTextureExtentHistory(FRendererModule *this)

{
  FSceneTextureExtentState *pFVar1;
  
  pFVar1 = FSceneTextureExtentState::Get();
  (pFVar1->LastStereoExtent).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (pFVar1->LastExtent).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return;
}

// ShutdownModule @ 14544fac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRendererModule::ShutdownModule(FRendererModule *this)

{
  IScreenSpaceDenoiser *pIVar1;
  
  UnregisterStopRenderingThreadDelegate((FDelegateHandle)(this->StopRenderingThreadDelegate).ID);
  Nanite::FRayTracingManager::Shutdown((FRayTracingManager *)&Nanite::GRayTracingManager);
  if (GRayTracingGeometryManager != (IRayTracingGeometryManager *)0x0) {
    (**(code **)*GRayTracingGeometryManager)(GRayTracingGeometryManager,1);
  }
  GRayTracingGeometryManager = (IRayTracingGeometryManager *)0x0;
  FVirtualTextureSystem::Shutdown();
  FMaterialCacheTagProvider::Shutdown();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_1550a81e8 = (FRendererOnScreenNotification *)0x0;
      atexit(`TLazySingleton<FRendererOnScreenNotification>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_1550a81e8 != (FRendererOnScreenNotification *)0x0) {
    FRendererOnScreenNotification::~FRendererOnScreenNotification(DAT_1550a81e8);
    DAT_1550a81e8 = (FRendererOnScreenNotification *)0x0;
  }
  pIVar1 = IScreenSpaceDenoiser::GetDefaultDenoiser();
  if (pIVar1 != (IScreenSpaceDenoiser *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  Lumen::Shutdown();
  CleanupOcclusionSubmittedFence();
  return;
}

// StartupModule @ 145450a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRendererModule::StartupModule(FRendererModule *this)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FRayTracingGeometryManager *this_00;
  FRayTracingGeometryManager *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDelegateHandle FVar7;
  FPrimitiveUniformShaderParameters *pFVar8;
  FRHICommandListBase *pFVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  FPrimitiveUniformShaderParameters *pFVar13;
  ulonglong uVar14;
  undefined1 auStack_3f8 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3d0;
  FDelegateAllocation local_3c8;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined8 uStack_3b0;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDelegateAllocation *local_378;
  undefined1 local_370 [24];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  FPrimitiveUniformShaderParameters local_348;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  FMeshDrawCommandStatsManager::CreateInstance();
  GScreenSpaceDenoiser = IScreenSpaceDenoiser::GetDefaultDenoiser();
  uVar14 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) <
       `private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FLazySingleton::Construct<FRendererOnScreenNotification>
              (&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_1550a81e8 =
         &`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FRendererOnScreenNotification>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FRendererOnScreenNotification>&___ptr64___cdecl_TLazySingleton<FRendererOnScreenNotification>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_1550a81e8 == (TLazySingleton<class_FRendererOnScreenNotification> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FVirtualTextureSystem::Initialize();
  FMaterialCacheTagProvider::Initialize();
  this_00 = ::operator_new(0x3d8);
  pFVar4 = (FRayTracingGeometryManager *)0x0;
  if (this_00 != (FRayTracingGeometryManager *)0x0) {
    pFVar4 = FRayTracingGeometryManager::FRayTracingGeometryManager(this_00);
  }
  GRayTracingGeometryManager = (IRayTracingGeometryManager *)pFVar4;
  Nanite::FRayTracingManager::Initialize((FRayTracingManager *)&Nanite::GRayTracingManager);
  local_3d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_3c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3d0,(FWriteAccessScope *)&local_390);
  local_378 = &local_3c8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_3c8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FRendererModule::StartupModule'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = this;
  }
  if (local_390.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
  }
  FVar7 = RegisterStopRenderingThreadDelegate
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_370);
                    /* WARNING: Load size is inaccurate */
  (this->StopRenderingThreadDelegate).ID = *FVar7.ID;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3d0,(FWriteAccessScope *)&local_3a8);
  if ((local_3c8.DelegateSize != 0) &&
     (local_3c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3c8,0,0,0x10);
    local_3c8.DelegateSize = 0;
  }
  if (local_3a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
  }
  if (local_3c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3c8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3d0.AccessDetector);
  pFVar8 = GetIdentityPrimitiveParameters(&local_348);
  pFVar9 = FRenderResource::GetImmediateCommandList();
  if (GIdentityPrimitiveUniformBuffer._48_8_ == 0) {
    GIdentityPrimitiveUniformBuffer._48_8_ = FMemory::Malloc(800,0x10);
  }
  lVar12 = 6;
  puVar5 = (undefined8 *)GIdentityPrimitiveUniformBuffer._48_8_;
  do {
    pFVar13 = pFVar8;
    puVar10 = puVar5;
    uVar2 = *(undefined8 *)&pFVar13->NumInstanceSceneDataEntries;
    pFVar8 = (FPrimitiveUniformShaderParameters *)((pFVar13->RelativeWorldToLocal).M + 2);
    *puVar10 = *(undefined8 *)pFVar13;
    puVar10[1] = uVar2;
    uVar2 = *(undefined8 *)((longlong)&(pFVar13->PositionHigh).field0_0x0 + 8);
    puVar10[2] = *(undefined8 *)&(pFVar13->PositionHigh).field0_0x0;
    puVar10[3] = uVar2;
    uVar2 = *(undefined8 *)((pFVar13->LocalToRelativeWorld).M[0] + 2);
    puVar10[4] = *(undefined8 *)(pFVar13->LocalToRelativeWorld).M[0];
    puVar10[5] = uVar2;
    uVar2 = *(undefined8 *)((pFVar13->LocalToRelativeWorld).M[1] + 2);
    puVar10[6] = *(undefined8 *)(pFVar13->LocalToRelativeWorld).M[1];
    puVar10[7] = uVar2;
    uVar2 = *(undefined8 *)((pFVar13->LocalToRelativeWorld).M[2] + 2);
    puVar10[8] = *(undefined8 *)(pFVar13->LocalToRelativeWorld).M[2];
    puVar10[9] = uVar2;
    uVar2 = *(undefined8 *)((pFVar13->LocalToRelativeWorld).M[3] + 2);
    puVar10[10] = *(undefined8 *)(pFVar13->LocalToRelativeWorld).M[3];
    puVar10[0xb] = uVar2;
    uVar2 = *(undefined8 *)((pFVar13->RelativeWorldToLocal).M[0] + 2);
    puVar10[0xc] = *(undefined8 *)(pFVar13->RelativeWorldToLocal).M[0];
    puVar10[0xd] = uVar2;
    uVar2 = *(undefined8 *)((pFVar13->RelativeWorldToLocal).M[1] + 2);
    puVar10[0xe] = *(undefined8 *)(pFVar13->RelativeWorldToLocal).M[1];
    puVar10[0xf] = uVar2;
    lVar12 = lVar12 + -1;
    puVar5 = puVar10 + 0x10;
  } while (lVar12 != 0);
  uVar2 = *(undefined8 *)((pFVar13->RelativeWorldToLocal).M[2] + 2);
  puVar10[0x10] = *(undefined8 *)pFVar8;
  puVar10[0x11] = uVar2;
  uVar2 = *(undefined8 *)((pFVar13->RelativeWorldToLocal).M[3] + 2);
  puVar10[0x12] = *(undefined8 *)(pFVar13->RelativeWorldToLocal).M[3];
  puVar10[0x13] = uVar2;
  FRenderResource::UpdateRHI((FRenderResource *)&GIdentityPrimitiveUniformBuffer,pFVar9);
  local_3b8 = 0;
  uStack_3b4 = 0x3f800000;
  pFVar9 = FRenderResource::GetImmediateCommandList();
  if (GDistanceCullFadedInUniformBuffer._48_8_ == 0) {
    GDistanceCullFadedInUniformBuffer._48_8_ = FMemory::Malloc(0x10,0x10);
  }
  uVar2 = GDistanceCullFadedInUniformBuffer._48_8_;
  *(ulonglong *)GDistanceCullFadedInUniformBuffer._48_8_ = CONCAT44(uStack_3b4,local_3b8);
  *(undefined8 *)(uVar2 + 8) = uStack_3b0;
  FRenderResource::UpdateRHI((FRenderResource *)&GDistanceCullFadedInUniformBuffer,pFVar9);
  local_358 = 0;
  pFVar9 = FRenderResource::GetImmediateCommandList();
  if (GDitherFadedInUniformBuffer._48_8_ == 0) {
    GDitherFadedInUniformBuffer._48_8_ = FMemory::Malloc(0x10,0x10);
  }
  uVar2 = GDitherFadedInUniformBuffer._48_8_;
  *(ulonglong *)GDitherFadedInUniformBuffer._48_8_ = CONCAT44(uStack_354,local_358);
  *(undefined8 *)(uVar2 + 8) = uStack_350;
  FRenderResource::UpdateRHI((FRenderResource *)&GDitherFadedInUniformBuffer,pFVar9);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar11 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar11,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) && (bVar3 = FApp::IsUnattended(), !bVar3)) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FRendererModule::StartupModule_::__l5::<lambda_2>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,(<lambda_2> *)(local_370 + 8));
  }
  return;
}

// UnregisterCustomCullingImpl @ 145453440

void __thiscall
FRendererModule::UnregisterCustomCullingImpl(FRendererModule *this,ICustomCulling *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (GCustomCullingImpl != param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GCustomCullingImpl == impl",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Renderer.cpp"
                       ,0x2d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GCustomCullingImpl = (ICustomCulling *)0x0;
  return;
}

// UpdateStaticDrawLists @ 145462ad0

void __thiscall FRendererModule::UpdateStaticDrawLists(FRendererModule *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_8c;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                         ,0x1ab7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar3 = *(int *)&(this->AllocatedScenes).Elements.field_0x28;
  puVar1 = &(this->AllocatedScenes).Elements.field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->AllocatedScenes).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145462b9e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145462b9e:
  uVar10 = *(uint *)&(this->AllocatedScenes).Elements.field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = local_8c;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->AllocatedScenes).Elements.field_0x8 -
                       *(int *)&(this->AllocatedScenes).Elements.field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->AllocatedScenes).Elements.field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->AllocatedScenes).Elements.field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145462ca0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_145462ca0:
  while( true ) {
    if (*(int *)&(this->AllocatedScenes).Elements.field_0x8 -
        *(int *)&(this->AllocatedScenes).Elements.field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(**(longlong **)
                   (*(longlong *)&(this->AllocatedScenes).Elements +
                   (longlong)TStack_50.CurrentBitIndex * 0x10) + 0x280))();
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// UpdateStaticDrawListsForMaterials @ 145462ea0

void __thiscall
FRendererModule::UpdateStaticDrawListsForMaterials
          (FRendererModule *this,TArray<FMaterial_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UpdateStaticMeshesForMaterials(param_1);
  return;
}

// GetNumDynamicLightsAffectingPrimitive @ 1454a7b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
FRendererModule::GetNumDynamicLightsAffectingPrimitive
          (FRendererModule *this,FPrimitiveSceneInfo *param_1,FLightCacheInterface *param_2)

{
  FLightPrimitiveInteraction *pFVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_res10 [8];
  
  pFVar1 = param_1->LightList;
  uVar3 = 0;
  do {
    if (pFVar1 == (FLightPrimitiveInteraction *)0x0) {
      return uVar3;
    }
    if (param_2 == (FLightCacheInterface *)0x0) {
LAB_1454a7b95:
      uVar3 = uVar3 + 1;
    }
    else {
      piVar2 = (int *)(**(code **)(param_2->_padding_ + 8))
                                (param_2,local_res10,pFVar1->LightSceneInfo->Proxy);
      if ((*piVar2 != 0) && (*piVar2 != 1)) goto LAB_1454a7b95;
    }
    pFVar1 = pFVar1->NextLight;
  } while( true );
}

// <lambda_invoker_cdecl> @ 1454c6d50

void __cdecl
`FRendererModule::BeginRenderingViewFamilies'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandList *param_1)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  *(int *)(pFVar2 + 3) = *(int *)(pFVar2 + 3) + 1;
  return;
}

// <lambda_invoker_cdecl> @ 1454c6d90

void __cdecl
`FRendererModule::PerFrameCleanupIfSkipRenderer'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThreadFlushResources,None);
  PipelineStateCache::FlushResources();
  FSceneRenderBuilder::WaitForAsyncDeleteTask();
  FPrimitiveIdVertexBufferPool::DiscardAll
            ((FPrimitiveIdVertexBufferPool *)&GPrimitiveIdVertexBufferPool);
  return;
}

// <lambda_invoker_cdecl> @ 1454c6dd0

void __cdecl
`FRendererModule::BeginRenderingViewFamilies'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (FRHICommandList *param_1)

{
  FFastVramConfig::Update(&GFastVRamConfig);
  return;
}

// <lambda_invoker_cdecl> @ 1454c6df0

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

bool __cdecl
`FRendererModule::BeginRenderingViewFamilies'::__l116::<lambda_4>::<lambda_invoker_cdecl>
          (FRDGBuilder *param_1,FSceneRenderFunctionInputs *param_2)

{
  RenderViewFamily_RenderThread(param_1,param_2->Renderer,param_2->SceneUpdateInputs);
  return true;
}

// FRendererModule @ 1454d15a0

FRendererModule * __thiscall FRendererModule::FRendererModule(FRendererModule *this)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleManager *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  *(undefined8 *)&(this->AllocatedScenes).Elements = 0;
  this->_padding_ = (longlong)&___7FRendererModule__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined8 *)&(this->AllocatedScenes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllocatedScenes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllocatedScenes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllocatedScenes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllocatedScenes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllocatedScenes).Elements.field_0x34 = 0;
  (this->AllocatedScenes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllocatedScenes).HashSize = 0;
  *(undefined8 *)&this->PostOpaqueRenderDelegate = 0;
  *(undefined8 *)&(this->PostOpaqueRenderDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PostOpaqueRenderDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->PostOpaqueRenderDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OverlayRenderDelegate = 0;
  *(undefined8 *)&(this->OverlayRenderDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OverlayRenderDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OverlayRenderDelegate).field_0x18 = 2;
  *(undefined8 *)&this->PostResolvedSceneColorCallbacks = 0;
  *(undefined8 *)&(this->PostResolvedSceneColorCallbacks).field_0x8 = 0;
  *(undefined8 *)&(this->PostResolvedSceneColorCallbacks).field_0x10 = 0;
  *(undefined8 *)&(this->PostResolvedSceneColorCallbacks).field_0x18 = 2;
  (this->StopRenderingThreadDelegate).ID = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar5 = IConsoleManager::Get();
      EarlyZPassVar =
           (IConsoleVariable *)(**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.EarlyZPass");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  pcVar1 = *(code **)(*(longlong *)EarlyZPassVar + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = OnChangeCVarRequiringRecreateRenderState;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  (*pcVar1)(EarlyZPassVar,&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  InitDebugViewModeInterface();
  return this;
}

// operator() @ 1454de3f0

void __thiscall
`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  double dVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar1 = (double)(ulonglong)(local_res8[0].QuadPart - *(longlong *)this) *
          FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  if (__CsvProfilerStat5163 == false) {
    FCsvProfilerTrace::OutputInlineStat("DrawSceneCommand_StartDelay",0);
    __CsvProfilerStat5163 = true;
  }
  FCsvProfiler::RecordCustomStat("DrawSceneCommand_StartDelay",0,(float)dVar1,Set);
  return;
}

// AddMeshBatchToGPUScene @ 1454e0180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRendererModule::AddMeshBatchToGPUScene
          (FRendererModule *this,FGPUScenePrimitiveCollector *param_1,FMeshBatch *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FMeshBatchElement> FVar3;
  uchar *puVar4;
  undefined1 local_res18 [16];
  
  FVar3 = (param_2->Elements).AllocatorInstance.SecondaryData;
  piVar1 = &(param_2->Elements).ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FMeshBatchElement>)0x0) {
    param_2 = (FMeshBatch *)FVar3;
  }
  puVar4 = (uchar *)((longlong)param_2 + 0x54);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FMeshBatchElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((ForElementType<FMeshBatchElement> *)(puVar4 + -0x54) ==
        (ForElementType<FMeshBatchElement> *)((longlong)iVar2 * 0x98 + (longlong)param_2)) break;
    if (*(longlong *)(puVar4 + -0x4c) != 0) {
      *(uint *)puVar4 = *(uint *)puVar4 & 0xfffffff9;
      *(uint *)puVar4 = *(uint *)puVar4 | 1;
      (**(code **)param_1->_padding_)
                (param_1,*(undefined8 *)(puVar4 + 0x34),
                 *(undefined8 *)(*(longlong *)(puVar4 + -0x4c) + 0x30),*(uint *)(puVar4 + 0xc),
                 puVar4 + 0x3c,puVar4 + 0x40);
    }
    puVar4 = puVar4 + 0x98;
  }
  return;
}

// AddVirtualTextureProducerDestroyedCallback @ 1454e0c10

void __thiscall
FRendererModule::AddVirtualTextureProducerDestroyedCallback
          (FRendererModule *this,FVirtualTextureProducerHandle *param_1,
          _func___cdecl_void_FVirtualTextureProducerHandle_ptr_void_ptr *param_2,void *param_3)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::AddProducerDestroyedCallback(this_00,param_1,param_2,param_3);
  return;
}

// AllocateAdaptiveVirtualTexture @ 1454e0cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IAdaptiveVirtualTexture * __thiscall
FRendererModule::AllocateAdaptiveVirtualTexture
          (FRendererModule *this,FRHICommandListBase *param_1,FAdaptiveVTDescription *param_2,
          FAllocatedVTDescription *param_3)

{
  FVirtualTextureSystem *this_00;
  IAdaptiveVirtualTexture *pIVar1;
  
  this_00 = FVirtualTextureSystem::Get();
  pIVar1 = FVirtualTextureSystem::AllocateAdaptiveVirtualTexture(this_00,param_1,param_2,param_3);
  return pIVar1;
}

// AllocateVirtualTexture @ 1454e0d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IAllocatedVirtualTexture * __thiscall
FRendererModule::AllocateVirtualTexture
          (FRendererModule *this,FRHICommandListBase *param_1,FAllocatedVTDescription *param_2)

{
  FVirtualTextureSystem *this_00;
  IAllocatedVirtualTexture *pIVar1;
  
  this_00 = FVirtualTextureSystem::Get();
  pIVar1 = FVirtualTextureSystem::AllocateVirtualTexture(this_00,param_1,param_2);
  return pIVar1;
}

// BeginRenderingViewFamilies @ 1454e1020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRendererModule::BeginRenderingViewFamilies
          (FRendererModule *this,FCanvas *param_1,TArrayView<FSceneViewFamily_*_const,int> *param_2)

{
  TArray<TSharedRef<ISceneViewExtension,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  Type TVar3;
  FSceneViewFamily *pFVar4;
  ForElementType<UE::Math::TVector<double>_> FVar5;
  TSharedRef<ISceneViewExtension,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSceneRenderer *pFVar8;
  longlong lVar9;
  undefined8 uVar10;
  code *pcVar11;
  TArrayView<FSceneViewFamily_*_const,int> *pTVar12;
  TConsoleVariableData<int> *pTVar13;
  FCanvas *pFVar14;
  FSceneInterface *pFVar15;
  bool bVar16;
  bool bVar17;
  EShaderPlatform EVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  UWorld *pUVar23;
  uint *puVar24;
  FTlsAutoCleanup *pFVar25;
  FNaniteVisualizationData *this_00;
  FRenderCommandList *pFVar26;
  FCommandList *pFVar27;
  FRenderCommandTag *pFVar28;
  ForElementType<UE::Math::TVector<double>_> FVar29;
  FSceneViewFamily **ppFVar30;
  TSharedRef<ISceneViewExtension,1> *pTVar31;
  FGPUSkinCacheVisualizationData *this_01;
  FTaskGraphInterface *pFVar32;
  FLowLevelMemTracker *this_02;
  FPageAllocator *this_03;
  longlong *plVar33;
  undefined ***pppuVar34;
  FScriptContainerElement *pFVar35;
  wchar_t *pwVar36;
  FSceneViewFamily **ppFVar37;
  ForElementType<UE::Math::TVector<double>_> FVar38;
  ForElementType<FSceneRenderer_*> FVar39;
  FSceneRenderer **ppFVar40;
  int *piVar41;
  ulonglong uVar42;
  TArray<UE::Math::TVector<double>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar43;
  FSceneInterface *pFVar44;
  bool bVar45;
  undefined1 auStackY_3c8 [32];
  undefined1 local_377;
  undefined1 local_376;
  FUniformExpressionCacheAsyncUpdateScope local_375 [5];
  TArray<FSceneRenderer_*,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_> local_370;
  undefined1 local_360;
  undefined1 local_35f [7];
  UWorld *local_358;
  FCanvas *local_350;
  TArrayView<FSceneViewFamily_*_const,int> *local_348;
  FSceneViewFamily **local_340;
  FSceneInterface *local_338;
  FSceneViewFamily **local_330;
  FSceneRenderBuilder local_328;
  LARGE_INTEGER local_308;
  code *local_300;
  undefined1 *local_2f8;
  FSceneViewFamily **local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FSceneRenderer **local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  FString local_2c8;
  code *local_2b8;
  undefined1 *local_2b0;
  TArrayView<FSceneViewFamily_const_*_const,int> local_2a8;
  TArrayView<FSceneViewFamily_*_const,int> local_298;
  TArrayView<FSceneRenderer_*_const,int> local_288;
  TSharedRef<ISceneViewExtension,1> local_278;
  code *local_268 [2];
  undefined **local_258;
  code *pcStack_250;
  undefined8 local_248;
  undefined ***local_240;
  code *local_238 [2];
  undefined **local_228;
  code *pcStack_220;
  undefined8 local_218;
  undefined ***local_210;
  code *local_208 [2];
  undefined **local_1f8;
  LARGE_INTEGER LStack_1f0;
  undefined8 local_1e8;
  undefined ***local_1e0;
  code *local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  undefined **local_198;
  FSceneRenderer **ppFStack_190;
  int local_188;
  int iStack_184;
  undefined ***local_180;
  undefined1 local_178 [16];
  undefined **local_168;
  code *pcStack_160;
  undefined8 local_158;
  undefined ***local_150;
  byte local_148;
  undefined1 local_138 [16];
  undefined **local_128;
  code *pcStack_120;
  undefined8 local_118;
  undefined ***local_110;
  byte local_108;
  undefined1 local_f8 [16];
  undefined **local_e8;
  LARGE_INTEGER LStack_e0;
  undefined8 local_d8;
  undefined ***local_d0;
  byte local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  code *local_a0;
  undefined ***local_90;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  FSyncScope local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  bVar45 = -1 < CpuChannel->Enabled;
  local_350 = param_1;
  local_348 = param_2;
  if (bVar45) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5041,"BeginRenderingViewFamily",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
               ,0x13b1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5041);
  }
  if ((param_1 == (FCanvas *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Canvas",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                          ,0x13b2,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  ppFVar37 = param_2->DataPtr;
  pFVar44 = (FSceneInterface *)0x0;
  iVar22 = param_2->ArrayNum;
  ppFVar30 = ppFVar37 + iVar22;
  for (; ppFVar37 != ppFVar30; ppFVar37 = ppFVar37 + 1) {
    pFVar4 = *ppFVar37;
    if ((pFVar4 == (FSceneViewFamily *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewFamily",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                            ,0x13b5,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar22 = param_2->ArrayNum;
    if ((iVar22 < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((pFVar4->Scene != (*param_2->DataPtr)->Scene) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewFamily->Scene == ViewFamilies[0]->Scene",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                            ,0x13b6,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  local_358 = (UWorld *)0x0;
  if ((iVar22 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((*param_2->DataPtr)->Scene == (FSceneInterface *)0x0) {
    local_338 = (FSceneInterface *)0x0;
  }
  else {
    if ((iVar22 < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar44 = (FSceneInterface *)(**(code **)((*param_2->DataPtr)->Scene->_padding_ + 0x420))();
    local_338 = pFVar44;
    if ((pFVar44 != (FSceneInterface *)0x0) &&
       (pUVar23 = (UWorld *)(**(code **)(pFVar44->_padding_ + 0x410))(pFVar44), local_358 = pUVar23,
       pUVar23 != (UWorld *)0x0)) {
      puVar24 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
      local_2b0 = &local_360;
      local_2b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar25 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar24);
      *(int *)(pFVar25 + 3) = *(int *)(pFVar25 + 3) + 1;
      UWorld::SendAllEndOfFrameUpdates(pUVar23);
      puVar24 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
      local_2f8 = local_35f;
      local_300 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar25 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_300,puVar24);
      *(int *)(pFVar25 + 3) = *(int *)(pFVar25 + 3) + -1;
      this_00 = GetNaniteVisualizationData();
      FNaniteVisualizationData::Pick(this_00,pUVar23);
    }
  }
  local_240 = (undefined ***)0x0;
  local_258 = &
              ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandList___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_250 = `FRendererModule::BeginRenderingViewFamilies'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
  local_268[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<void_(__cdecl*)(FRHICommandList_&),void,FRHICommandListImmediate_&>
                 ::Call;
  pFVar26 = FRenderCommandList::GetInstanceTLS();
  if (pFVar26 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRendererModule::BeginRenderingViewFamilies_::__l2::TSTR_SetRtWaitCriticalPath5076>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_268);
  }
  else {
    pFVar27 = FRenderCommandList::GetRenderThread(pFVar26);
    local_178._0_8_ = local_268[0];
    local_150 = local_240;
    local_168 = local_258;
    pcStack_160 = pcStack_250;
    local_158 = local_248;
    local_268[0] = (code *)0x0;
    local_148 = 2;
    pFVar28 = (FRenderCommandTag *)
              TRenderCommandTag<`FRendererModule::BeginRenderingViewFamilies'::__l2::TSTR_SetRtWaitCriticalPath5076>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar27,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_178,pFVar28);
    uVar42 = (ulonglong)local_148;
    if ((2 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_178._0_8_ != (code *)0x0) {
        pppuVar34 = (undefined ***)(local_178 + 0x10);
        if (local_150 != (undefined ***)0x0) {
          pppuVar34 = local_150;
        }
        (*(code *)(*pppuVar34)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(local_178);
    }
  }
  if (local_268[0] != (code *)0x0) {
    pppuVar34 = &local_258;
    if (local_240 != (undefined ***)0x0) {
      pppuVar34 = local_240;
    }
    (*(code *)(*pppuVar34)[2])();
  }
  FUniformExpressionCacheAsyncUpdateScope::FUniformExpressionCacheAsyncUpdateScope(local_375);
  local_210 = (undefined ***)0x0;
  pcStack_220 = `FRendererModule::BeginRenderingViewFamilies'::__l2::<lambda_2>::
                <lambda_invoker_cdecl>;
  local_228 = &
              ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandList___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_238[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<void_(__cdecl*)(FRHICommandList_&),void,FRHICommandListImmediate_&>
                 ::Call;
  pFVar26 = FRenderCommandList::GetInstanceTLS();
  if (pFVar26 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRendererModule::BeginRenderingViewFamilies_::__l2::TSTR_UpdateFastVRamConfig5085>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_238);
  }
  else {
    pFVar27 = FRenderCommandList::GetRenderThread(pFVar26);
    local_138._0_8_ = local_238[0];
    local_110 = local_210;
    local_128 = local_228;
    pcStack_120 = pcStack_220;
    local_118 = local_218;
    local_238[0] = (code *)0x0;
    local_108 = 2;
    pFVar28 = (FRenderCommandTag *)
              TRenderCommandTag<`FRendererModule::BeginRenderingViewFamilies'::__l2::TSTR_UpdateFastVRamConfig5085>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar27,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_138,pFVar28);
    uVar42 = (ulonglong)local_108;
    if ((2 < uVar42) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_138._0_8_ != (code *)0x0) {
        pppuVar34 = (undefined ***)(local_138 + 0x10);
        if (local_110 != (undefined ***)0x0) {
          pppuVar34 = local_110;
        }
        (*(code *)(*pppuVar34)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(local_138);
    }
  }
  if (local_238[0] != (code *)0x0) {
    pppuVar34 = &local_228;
    if (local_210 != (undefined ***)0x0) {
      pppuVar34 = local_210;
    }
    (*(code *)(*pppuVar34)[2])();
  }
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_58);
  FCanvas::Flush_GameThread(local_350,false);
  iVar22 = param_2->ArrayNum;
  if (pFVar44 == (FSceneInterface *)0x0) {
    ppFVar37 = param_2->DataPtr;
    ppFVar30 = ppFVar37 + iVar22;
    for (; ppFVar37 != ppFVar30; ppFVar37 = ppFVar37 + 1) {
      (*ppFVar37)->FrameNumber = GFrameNumber;
    }
  }
  else {
    if ((iVar22 < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    ppFVar30 = param_2->DataPtr;
    if ((*ppFVar30)->bIsFirstViewInMultipleViewFamily != false) {
      (**(code **)(pFVar44->_padding_ + 0x4f0))(pFVar44);
    }
    ppFVar37 = ppFVar30 + iVar22;
    for (; ppFVar30 != ppFVar37; ppFVar30 = ppFVar30 + 1) {
      pFVar4 = *ppFVar30;
      uVar19 = (**(code **)(pFVar44->_padding_ + 0x4e8))(pFVar44);
      pFVar4->FrameNumber = uVar19;
    }
  }
  IStreamingManager::Get();
  iVar22 = IStreamingManager::CurrentViewInfos.ArrayNum;
  uVar42 = (ulonglong)(uint)IStreamingManager::CurrentViewInfos.ArrayNum;
  local_340 = local_348->DataPtr;
  ppFVar30 = local_340 + local_348->ArrayNum;
  local_330 = ppFVar30;
  if (local_340 != ppFVar30) {
    do {
      pFVar4 = *local_340;
      pTVar43 = &pFVar4->StreamingViewOrigins;
      if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar42);
      }
      piVar41 = &(pFVar4->StreamingViewOrigins).ArrayMax;
      (pFVar4->StreamingViewOrigins).ArrayNum = 0;
      if (*piVar41 != iVar22) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                  (0x18,8,iVar22,&pTVar43->AllocatorInstance,0,piVar41);
        ppFVar30 = local_330;
      }
      uVar19 = 0;
      if (iVar22 != 0) {
        do {
          IStreamingManager::Get();
          uVar20 = 0;
          if ((int)uVar19 < IStreamingManager::CurrentViewInfos.ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVar5 = (pFVar4->StreamingViewOrigins).AllocatorInstance.SecondaryData;
          FVar38 = (ForElementType<UE::Math::TVector<double>_>)
                   (IStreamingManager::CurrentViewInfos.AllocatorInstance.Data +
                   (longlong)(int)uVar19 * 0x40);
          FVar29 = (ForElementType<UE::Math::TVector<double>_>)pTVar43;
          if (FVar5 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
            FVar29 = FVar5;
          }
          if ((ulonglong)FVar29 <= (ulonglong)FVar38) {
            FVar29 = (ForElementType<UE::Math::TVector<double>_>)pTVar43;
            if (FVar5 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
              FVar29 = FVar5;
            }
            if (((ulonglong)FVar38 < (ulonglong)((longlong)FVar29 + (longlong)*piVar41 * 0x18)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          iVar21 = (pFVar4->StreamingViewOrigins).ArrayNum;
          if (iVar21 == *piVar41) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                               (0x818,&pTVar43->AllocatorInstance,piVar41);
          }
          (pFVar4->StreamingViewOrigins).ArrayNum = iVar21 + 1;
          FVar5 = (pFVar4->StreamingViewOrigins).AllocatorInstance.SecondaryData;
          uVar10 = *(undefined8 *)((longlong)FVar38 + 8);
          FVar29 = (ForElementType<UE::Math::TVector<double>_>)pTVar43;
          if (FVar5 != (ForElementType<UE::Math::TVector<double>_>)0x0) {
            FVar29 = FVar5;
          }
          uVar19 = uVar19 + 1;
          puVar2 = (undefined8 *)((longlong)FVar29 + (longlong)iVar21 * 0x18);
          *puVar2 = *(undefined8 *)FVar38;
          puVar2[1] = uVar10;
          *(undefined8 *)((uchar *)((longlong)FVar29 + 0x10) + (longlong)iVar21 * 0x18) =
               *(undefined8 *)((longlong)FVar38 + 0x10);
          ppFVar30 = local_330;
        } while (uVar19 < (uint)iVar22);
      }
      local_340 = local_340 + 1;
    } while (local_340 != ppFVar30);
  }
  ppFVar37 = local_348->DataPtr;
  ppFVar30 = ppFVar37 + local_348->ArrayNum;
  pTVar12 = local_348;
  for (; local_348 = pTVar12, ppFVar37 != ppFVar30; ppFVar37 = ppFVar37 + 1) {
    pFVar4 = *ppFVar37;
    pFVar4->FrameCounter = GFrameCounter;
    pTVar1 = &pFVar4->ViewExtensions;
    pTVar31 = GetRendererViewExtension(&local_278);
    pTVar6 = (TSharedRef<ISceneViewExtension,1> *)(pTVar1->AllocatorInstance).Data;
    if (((pTVar6 <= pTVar31) && (pTVar31 < pTVar6 + (pFVar4->ViewExtensions).ArrayMax)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar22 = (pFVar4->ViewExtensions).ArrayNum;
    piVar41 = &(pFVar4->ViewExtensions).ArrayMax;
    if (iVar22 == *piVar41) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar41);
    }
    (pFVar4->ViewExtensions).ArrayNum = iVar22 + 1;
    pFVar35 = (pTVar1->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
    *(ISceneViewExtension **)pFVar35 = pTVar31->Object;
    pTVar7 = (pTVar31->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar35 + 8) = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
    if ((pFVar4->TemporalUpscalerInterface != (ITemporalUpscaler *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewFamily->GetTemporalUpscalerInterface() == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                            ,0x1415,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((pFVar4->PrimarySpatialUpscalerInterface != (ISpatialUpscaler *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewFamily->GetPrimarySpatialUpscalerInterface() == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                            ,0x1416,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((pFVar4->SecondarySpatialUpscalerInterface != (ISpatialUpscaler *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewFamily->GetSecondarySpatialUpscalerInterface() == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                            ,0x1417,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (((pFVar4->TemporalUpscalerInterface != (ITemporalUpscaler *)0x0) &&
        (pFVar4->PrimarySpatialUpscalerInterface != (ISpatialUpscaler *)0x0)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!(ViewFamily->GetTemporalUpscalerInterface() != nullptr && ViewFamily->GetPrimarySpatialUpscalerInterface() != nullptr)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                            ,0x1419,
                            L"Conflict setting up a third party primary spatial upscaler or temporal upscaler."
                           ), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pTVar12 = local_348;
  }
  if (pFVar44 == (FSceneInterface *)0x0) goto LAB_1454e228a;
  if (local_358 != (UWorld *)0x0) {
    UWorld::SetMapNeedsLightingFullyRebuilt
              (local_358,*(int *)((longlong)&pFVar44[0x49f]._padding_ + 4),
               pFVar44[0x49f].FeatureLevel);
  }
  QueryPerformanceCounter(&local_308);
  bVar16 = false;
  local_1f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::`94'::<lambda_3>,1,0>
               ::_vftable_;
  LStack_1f0 = local_308;
  local_208[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_3>,void,FRHICommandListImmediate_&>
                 ::Call;
  local_1e0 = (undefined ***)0x0;
  pFVar26 = FRenderCommandList::GetInstanceTLS();
  if (pFVar26 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRendererModule::BeginRenderingViewFamilies_::__l94::TSTR_SetDrawSceneCommand_StartDelay5159>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_208);
  }
  else {
    pFVar27 = FRenderCommandList::GetRenderThread(pFVar26);
    local_f8._0_8_ = local_208[0];
    local_d0 = local_1e0;
    local_e8 = local_1f8;
    LStack_e0 = LStack_1f0;
    local_d8 = local_1e8;
    local_208[0] = (code *)0x0;
    local_c8 = 2;
    pFVar28 = (FRenderCommandTag *)
              TRenderCommandTag<`FRendererModule::BeginRenderingViewFamilies'::__l94::TSTR_SetDrawSceneCommand_StartDelay5159>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar27,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_f8,pFVar28);
    uVar42 = (ulonglong)local_c8;
    if ((2 < uVar42) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_f8._0_8_ != (code *)0x0) {
        pppuVar34 = (undefined ***)(local_f8 + 0x10);
        if (local_d0 != (undefined ***)0x0) {
          pppuVar34 = local_d0;
        }
        (*(code *)(*pppuVar34)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar42])(local_f8);
    }
  }
  if (local_208[0] != (code *)0x0) {
    pppuVar34 = &local_1f8;
    if (local_1e0 != (undefined ***)0x0) {
      pppuVar34 = local_1e0;
    }
    (*(code *)(*pppuVar34)[2])();
  }
  FSceneRenderBuilder::FSceneRenderBuilder(&local_328,pFVar44);
  pFVar14 = local_350;
  local_358 = (UWorld *)local_350->HitProxyConsumer;
  if (local_358 == (UWorld *)0x0) {
    local_2e8 = pTVar12->DataPtr;
    iStack_2e0 = pTVar12->ArrayNum;
    local_2a8._12_4_ = uStack_2dc;
    local_2a8.ArrayNum = iStack_2e0;
    local_2a8.DataPtr = local_2e8;
    SceneCaptureUpdateDeferredCapturesInternal(pFVar44,&local_2a8,(ISceneRenderBuilder *)&local_328)
    ;
  }
  local_298.DataPtr = pTVar12->DataPtr;
  local_298.ArrayNum = pTVar12->ArrayNum;
  local_298._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
  FSceneRenderBuilder::CreateLinkedSceneRenderers
            (&local_328,&local_370,&local_298,pFVar14->HitProxyConsumer);
  FVar39.Data = local_370.AllocatorInstance.Data;
  iVar22 = local_370.ArrayNum;
  if ((local_370.ArrayNum < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (iVar22 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("!Renderers.IsEmpty()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                        ,0x1008,L"");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
LAB_1454e1c3d:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar17) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  else if (iVar22 < 1) goto LAB_1454e1c3d;
  TVar3 = (*(FSceneInterface **)&(*FVar39.Data)->field_0x8)->FeatureLevel;
  EVar18 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&(*FVar39.Data)->field_0x8);
  bVar17 = AllowDebugViewShaderMode(DVSM_VisualizeGPUSkinCache,EVar18,TVar3);
  if (bVar17) {
    ppFVar40 = FVar39.Data + iVar22;
    for (; FVar39.Data != ppFVar40; FVar39.Data = FVar39.Data + 1) {
      pFVar8 = *FVar39.Data;
      if ((*(int *)&pFVar8->field_0x18 < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar9 = *(longlong *)&pFVar8->field_0x10;
      this_01 = GetGPUSkinCacheVisualizationData();
      if (((bVar16) ||
          (bVar16 = FGPUSkinCacheVisualizationData::Update(this_01,(FName *)(lVar9 + 0xe44)), bVar16
          )) || (bVar16 = false, ((pFVar8->ViewFamily)._padding_ & 0x800000) != 0)) {
        plVar33 = &(pFVar8->ViewFamily)._padding_;
        *(uint *)plVar33 = (uint)*plVar33 | 0x800000;
        bVar16 = true;
        *(undefined4 *)&(pFVar8->ViewFamily)._padding_ = 0xb;
      }
    }
  }
  uVar19 = 0;
  if ((local_358 == (UWorld *)0x0) && (0 < (int)pFVar44[0x2cf].FeatureLevel)) {
    local_350 = (FCanvas *)0x0;
    do {
      pFVar14 = local_350;
      uVar20 = 0;
      if ((int)uVar19 < (int)pFVar44[0x2cf].FeatureLevel) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar15 = local_338;
      iVar22 = local_370.ArrayNum;
      uVar10 = *(undefined8 *)((longlong)pFVar14 + pFVar44[0x2cf]._padding_);
      ppFVar40 = local_370.AllocatorInstance.Data + local_370.ArrayNum;
      FVar39.Data = local_370.AllocatorInstance.Data;
      while( true ) {
        if (local_370.ArrayNum != iVar22) {
          local_377 = 0;
          `TCheckedPointerIterator<FSceneRenderer_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_377);
        }
        if (FVar39.Data == ppFVar40) break;
        pFVar8 = *FVar39.Data;
        bVar16 = HasRayTracedOverlay((FSceneViewFamily *)&pFVar8->ViewFamily);
        if (!bVar16) {
          (**(code **)(pFVar15->_padding_ + 0x1e0))(pFVar15,uVar10,pFVar8,&local_328);
        }
        FVar39.Data = FVar39.Data + 1;
      }
      uVar19 = uVar19 + 1;
      local_350 = (FCanvas *)((longlong)local_350 + 8);
      pFVar44 = pFVar15;
    } while ((int)uVar19 < (int)pFVar15[0x2cf].FeatureLevel);
  }
  iVar22 = local_370.ArrayNum;
  local_2d8 = local_370.AllocatorInstance.Data;
  if ((local_370.ArrayNum < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iStack_2d0 = iVar22;
  local_288._12_4_ = uStack_2cc;
  local_288.ArrayNum = iVar22;
  local_288.DataPtr = local_2d8;
  FSceneRenderer::PreallocateCrossGPUFences(&local_288);
  pTVar12 = local_348;
  if ((local_348->ArrayNum < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  bVar16 = FSceneRenderBuilder::IsCompatible(&local_328,&(*pTVar12->DataPtr)->EngineShowFlags);
  if (!bVar16) {
    FSceneRenderBuilder::Execute(&local_328);
  }
  pUVar23 = local_358;
  iVar22 = local_370.ArrayNum;
  ppFVar40 = local_370.AllocatorInstance.Data + local_370.ArrayNum;
  FVar39.Data = local_370.AllocatorInstance.Data;
  while( true ) {
    if (local_370.ArrayNum != iVar22) {
      local_376 = 0;
      `TCheckedPointerIterator<FSceneRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_376);
    }
    uStack_1c0 = local_370.AllocatorInstance.Data;
    if (FVar39.Data == ppFVar40) break;
    pFVar8 = *FVar39.Data;
    *(undefined4 *)&(pFVar8->ViewFamily)._padding_ = 0;
    pTVar13 = CVarDisplayInternals.Ref;
    bVar16 = IsInParallelGameThread();
    if (((!bVar16) && (bVar16 = IsInGameThread(), !bVar16)) &&
       (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar21 = pTVar13->ShadowedValue[0];
    *(int *)&(pFVar8->ViewFamily)._padding_ = iVar21;
    if (iVar21 != 0) {
      *(uint *)((longlong)&(pFVar8->ViewFamily)._padding_ + 4) = GStreamAllResourcesStillInFlight;
    }
    local_a8 = &
               ___7__TFunction_OwnedObject_P6A_NAEAVFRDGBuilder__AEBUFSceneRenderFunctionInputs___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pwVar36 = L"ViewFamilies";
    local_90 = (undefined ***)0x0;
    local_a0 = `FRendererModule::BeginRenderingViewFamilies'::__l116::<lambda_4>::
               <lambda_invoker_cdecl>;
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),bool,FRDGBuilder_&,FSceneRenderFunctionInputs_const_&>
                  ::Call;
    if (pUVar23 != (UWorld *)0x0) {
      pwVar36 = L"HitProxies";
    }
    ::FString::FString(&local_2c8,pwVar36);
    FSceneRenderBuilder::AddRenderer
              (&local_328,pFVar8,&local_2c8,
               (TUniqueFunction<bool___cdecl(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&)> *)
               local_b8);
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
    if (local_b8[0] != (code *)0x0) {
      pppuVar34 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar34 = local_90;
      }
      (*(code *)(*pppuVar34)[2])();
    }
    FVar39.Data = FVar39.Data + 1;
  }
  iStack_184 = local_370.ArrayMax;
  local_188 = local_370.ArrayNum;
  local_1b8._0_4_ = local_370.ArrayNum;
  local_1b8._4_4_ = local_370.ArrayMax;
  ppFStack_190 = local_370.AllocatorInstance.Data;
  local_198 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::`94'::<lambda_5>,1,0>
               ::_vftable_;
  pcVar11 = *(code **)(local_328._padding_ + 0x18);
  local_1d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_5>,void,FRHICommandListImmediate_&>
              ::Call;
  local_370.AllocatorInstance.Data = (FSceneRenderer **)0x0;
  local_370.ArrayNum = 0;
  local_370.ArrayMax = 0;
  local_1b0 = (longlong *)0x0;
  local_180 = (undefined ***)0x0;
  local_1c8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FRendererModule::BeginRenderingViewFamilies'::`94'::<lambda_5>,1,0>
               ::_vftable_;
  local_1a8 = 0;
  local_88 = (code *)0x0;
  local_60 = FMemory::Malloc(0x40,0x10);
  *local_60 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__AddRenderCommand_ISceneRenderBuilder__QEAAX__QEAV__TUniqueFunction___A6AXAEAVFRHICommandListImmediate___Z___Z__00_00_Function_Private_Core_UE__6B_
  ;
  plVar33 = local_60 + 2;
  *plVar33 = (longlong)local_1d8;
  local_60[7] = (longlong)local_1b0;
  *(undefined4 *)(local_60 + 4) = (undefined4)local_1c8;
  *(undefined4 *)((longlong)local_60 + 0x24) = local_1c8._4_4_;
  *(undefined4 *)(local_60 + 5) = (undefined4)uStack_1c0;
  *(undefined4 *)((longlong)local_60 + 0x2c) = uStack_1c0._4_4_;
  local_60[6] = local_1b8;
  if (*plVar33 != 0) {
    local_1d8 = (code *)0x0;
  }
  if (plVar33 != (longlong *)0x0) {
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>,void>::
               Call;
  }
  (*pcVar11)(&local_328);
  if (local_88 != (code *)0x0) {
    plVar33 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar33 = local_60;
    }
    (**(code **)(*plVar33 + 0x10))();
  }
  if (local_1d8 != (code *)0x0) {
    plVar33 = &local_1c8;
    if (local_1b0 != (longlong *)0x0) {
      plVar33 = local_1b0;
    }
    (**(code **)(*plVar33 + 0x10))();
  }
  if (local_1a8 != 0) {
    pppuVar34 = &local_198;
    if (local_180 != (undefined ***)0x0) {
      pppuVar34 = local_180;
    }
    (*(code *)(*pppuVar34)[2])();
  }
  FSceneRenderBuilder::Execute(&local_328);
  if (GRenderThreadPollingOn != false) {
    pFVar32 = FTaskGraphInterface::Get();
    (**(code **)((longlong)*pFVar32 + 0x90))(pFVar32);
  }
  if (local_370.AllocatorInstance.Data != (FSceneRenderer **)0x0) {
    ppFVar40 = local_370.AllocatorInstance.Data + -1;
    MemoryTrace_Free((ulong64)ppFVar40,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_02 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_02 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_02,Default,ppFVar40,FMalloc,true);
    }
    piVar41 = (int *)((longlong)ppFVar40 - (ulonglong)*(uint *)ppFVar40);
    LOCK();
    iVar22 = *piVar41;
    *piVar41 = *piVar41 + -1;
    UNLOCK();
    if (iVar22 == 1) {
      lVar9 = *(longlong *)(piVar41 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar41,0,0);
      if (lVar9 - (longlong)piVar41 == 0x10000) {
        this_03 = FPageAllocator::Get();
        FPageAllocator::Free(this_03,piVar41);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar41);
      }
    }
  }
  FSceneRenderBuilder::~FSceneRenderBuilder(&local_328);
LAB_1454e228a:
  UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_58);
  FUniformExpressionCacheAsyncUpdateScope::~FUniformExpressionCacheAsyncUpdateScope(local_375);
  if (bVar45) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BeginRenderingViewFamily @ 1454e22f0

void __thiscall
FRendererModule::BeginRenderingViewFamily
          (FRendererModule *this,FCanvas *param_1,FSceneViewFamily *param_2)

{
  FSceneViewFamily *local_res18 [2];
  TArrayView<FSceneViewFamily_*_const,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res18;
  local_res18[0] = param_2;
  BeginRenderingViewFamilies(this,param_1,&local_18);
  return;
}

// BeginScenePrimitiveRendering @ 1454e2330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IScenePrimitiveRenderingContext * __thiscall
FRendererModule::BeginScenePrimitiveRendering
          (FRendererModule *this,FRDGBuilder *param_1,FSceneInterface *param_2)

{
  code *pcVar1;
  bool bVar2;
  FScene *pFVar3;
  IScenePrimitiveRenderingContext *pIVar4;
  FScenePrimitiveRenderingContext *pFVar5;
  
  pFVar3 = (FScene *)(**(code **)(param_2->_padding_ + 0x420))(param_2);
  if (pFVar3 == (FScene *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x154c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (IScenePrimitiveRenderingContext *)(*pcVar1)();
      return pIVar4;
    }
  }
  pFVar5 = ::operator_new(0x4e8);
  if (pFVar5 != (FScenePrimitiveRenderingContext *)0x0) {
    pFVar5 = FScenePrimitiveRenderingContext::FScenePrimitiveRenderingContext
                       (pFVar5,param_1,pFVar3,(FSceneViewFamily *)0x0);
    return (IScenePrimitiveRenderingContext *)pFVar5;
  }
  return (IScenePrimitiveRenderingContext *)0x0;
}

// BeginScenePrimitiveRendering @ 1454e23c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IScenePrimitiveRenderingContext * __thiscall
FRendererModule::BeginScenePrimitiveRendering
          (FRendererModule *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  code *pcVar1;
  bool bVar2;
  IScenePrimitiveRenderingContext *pIVar3;
  FScene *pFVar4;
  FScenePrimitiveRenderingContext *pFVar5;
  
  if (param_2 == (FSceneViewFamily *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewFamily",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x153f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IScenePrimitiveRenderingContext *)(*pcVar1)();
      return pIVar3;
    }
  }
  if (param_2->Scene == (FSceneInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewFamily->Scene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x1540,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IScenePrimitiveRenderingContext *)(*pcVar1)();
      return pIVar3;
    }
  }
  pFVar4 = (FScene *)(**(code **)(param_2->Scene->_padding_ + 0x420))();
  if (pFVar4 == (FScene *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scene",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x1542,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IScenePrimitiveRenderingContext *)(*pcVar1)();
      return pIVar3;
    }
  }
  pFVar5 = ::operator_new(0x4e8);
  if (pFVar5 != (FScenePrimitiveRenderingContext *)0x0) {
    pFVar5 = FScenePrimitiveRenderingContext::FScenePrimitiveRenderingContext
                       (pFVar5,param_1,pFVar4,param_2);
    return (IScenePrimitiveRenderingContext *)pFVar5;
  }
  return (IScenePrimitiveRenderingContext *)0x0;
}

// CreateAndInitSingleView @ 1454e8020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FRendererModule::CreateAndInitSingleView
          (FRendererModule *this,FRHICommandListImmediate *param_1,FSceneViewFamily *param_2,
          FSceneViewInitOptions *param_3)

{
  int *piVar1;
  TUniquePtr<FViewUniformShaderParameters,TDefaultDelete<FViewUniformShaderParameters>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FViewUniformShaderParameters *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FViewInfo *pFVar9;
  FViewUniformShaderParameters *pFVar10;
  undefined1 auStackY_e8 [32];
  FViewInfo *local_98;
  undefined1 local_90 [8];
  TVector<double>_u_0 local_88;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar9 = ::operator_new(0x2970);
  local_98 = (FViewInfo *)0x0;
  if (pFVar9 != (FViewInfo *)0x0) {
    local_98 = FViewInfo::FViewInfo(pFVar9,param_3);
  }
  pFVar3 = (param_2->Views).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar3 + (longlong)(param_2->Views).ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (param_2->Views).ArrayNum;
  piVar1 = &(param_2->Views).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_2->Views).AllocatorInstance,piVar1);
  }
  (param_2->Views).ArrayNum = iVar8 + 1;
  *(FViewInfo **)((param_2->Views).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_98;
  if ((param_2->Views).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_58 = 0;
  local_20 = 0;
  pFVar9 = *(FViewInfo **)(param_2->Views).AllocatorInstance.Data;
  (pFVar9->ViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)pFVar9->_padding_;
  (pFVar9->ViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)pFVar9->_padding_;
  bVar7 = IsInRenderingThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x8a7,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = &pFVar9->CachedViewUniformShaderParameters;
  if (pTVar2->Ptr == (FViewUniformShaderParameters *)0x0) {
    pFVar10 = ::operator_new(0x17b0);
    if (pFVar10 == (FViewUniformShaderParameters *)0x0) {
      pFVar10 = (FViewUniformShaderParameters *)0x0;
    }
    else {
      pFVar10 = FViewUniformShaderParameters::FViewUniformShaderParameters(pFVar10);
    }
    if (pTVar2 != (TUniquePtr<FViewUniformShaderParameters,TDefaultDelete<FViewUniformShaderParameters>_>
                   *)local_90) {
      pFVar4 = pTVar2->Ptr;
      pTVar2->Ptr = pFVar10;
      pFVar10 = (FViewUniformShaderParameters *)0x0;
      ::operator_delete(pFVar4,0x17b0);
    }
    ::operator_delete(pFVar10,0x17b0);
  }
  FViewInfo::SetupUniformBufferParameters
            (pFVar9,(FViewMatrices *)&pFVar9->_padding_,&pFVar9->PrevViewInfo->ViewMatrices,
             (TBox<double> *)&local_88._s_0,2,pTVar2->Ptr);
  FViewInfo::CreateViewUniformBuffers(pFVar9,pTVar2->Ptr);
  iVar8 = GetTranslucencyLightingVolumeDim();
  dVar6 = __real_3ff0000000000000;
  pFVar9->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.X = local_88._s_0.X;
  pFVar9->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.Y = local_88._s_0.Y;
  pFVar9->TranslucencyLightingVolumeMin[0].field0_0x0._s_0.Z = local_88._s_0.Z;
  pFVar9->TranslucencyVolumeVoxelSize[0] =
       (float)((local_70 - local_88._s_0.X) * (dVar6 / (double)iVar8));
  pFVar9->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.X = local_70 - local_88._s_0.X;
  pFVar9->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.Y = local_68 - local_88._s_0.Y;
  pFVar9->TranslucencyLightingVolumeSize[0].field0_0x0._s_0.Z = local_60 - local_88._s_0.Z;
  pFVar9->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.X = local_50;
  pFVar9->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.Y = dStack_48;
  pFVar9->TranslucencyLightingVolumeMin[1].field0_0x0._s_0.Z = local_40;
  pFVar9->TranslucencyVolumeVoxelSize[1] = (float)((local_38 - local_50) * (dVar6 / (double)iVar8));
  pFVar9->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.X = local_38 - local_50;
  pFVar9->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.Y = local_30 - dStack_48;
  pFVar9->TranslucencyLightingVolumeSize[1].field0_0x0._s_0.Z = local_28 - local_40;
  return;
}

// DestroyAdaptiveVirtualTexture @ 1454eace0

void __thiscall
FRendererModule::DestroyAdaptiveVirtualTexture
          (FRendererModule *this,IAdaptiveVirtualTexture *param_1)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::DestroyAdaptiveVirtualTexture(this_00,param_1);
  return;
}

// DestroyVirtualTexture @ 1454eaf10

void __thiscall
FRendererModule::DestroyVirtualTexture(FRendererModule *this,IAllocatedVirtualTexture *param_1)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::DestroyVirtualTexture(this_00,param_1);
  return;
}

// DrawRectangle @ 1454eb8e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRendererModule::DrawRectangle
          (FRendererModule *this,FRHICommandList *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,
          TIntPoint<int> param_10,TIntPoint<int> param_11,
          TShaderRefBase<FShader,FShaderMapPointerTable> *param_12,EDrawRectangleFlags param_13)

{
  ::DrawRectangle(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,1);
  return;
}

// FindProducer @ 1454ef5c0

IVirtualTexture * __thiscall
FRendererModule::FindProducer(FRendererModule *this,FVirtualTextureProducerHandle *param_1)

{
  FVirtualTextureSystem *this_00;
  FVirtualTextureProducer *pFVar1;
  
  this_00 = FVirtualTextureSystem::Get();
  pFVar1 = FVirtualTextureSystem::FindProducer(this_00,param_1);
  if (pFVar1 != (FVirtualTextureProducer *)0x0) {
    return pFVar1->VirtualTexture;
  }
  return (IVirtualTexture *)0x0;
}

// FlushVirtualTextureCache @ 1454f02c0

void __thiscall
FRendererModule::FlushVirtualTextureCache
          (FRendererModule *this,IAllocatedVirtualTexture *param_1,TVector2<float> *param_2,
          TVector2<float> *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FVirtualTextureSystem *this_00;
  uint uVar7;
  FVirtualTextureProducerHandle *pFVar8;
  float fVar9;
  float fVar10;
  TIntRect<int>_u_0 local_38;
  
  if (param_1 != (IAllocatedVirtualTexture *)0x0) {
    uVar6 = (param_1->Description).TileSize;
    uVar2 = param_1->MaxLevel;
    bVar1 = (param_1->Description).NumTextureLayers;
    uVar3 = param_1->SpaceID;
    fVar9 = (float)(uVar6 * param_1->BlockWidthInTiles);
    fVar10 = (float)(uVar6 * param_1->BlockHeightInTiles);
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    local_38._0_4_ = (int)ROUND(fVar9 * (param_2->field0_0x0)._s_0.X - __real_3f000000) >> 1;
    local_38._4_4_ = (int)ROUND(fVar10 * (param_2->field0_0x0)._s_0.Y - __real_3f000000) >> 1;
    local_38._8_4_ = -((int)ROUND(__real_bf000000 - fVar9 * (param_3->field0_0x0)._s_0.X) >> 1);
    local_38._12_4_ = -((int)ROUND(__real_bf000000 - fVar10 * (param_3->field0_0x0)._s_0.Y) >> 1);
    uVar6 = VirtualTextureScalability::GetKeepDirtyPageMappedFrameThreshold();
    uVar7 = 0;
    if (bVar1 != 0) {
      pFVar8 = (param_1->Description).ProducerHandle;
      do {
        this_00 = FVirtualTextureSystem::Get();
        if (((param_1->Description).NumTextureLayers <= uVar7) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InLayerIndex < Description.NumTextureLayers",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VirtualTexturing.h"
                               ,0x1a1,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVirtualTextureSystem::FlushCache
                  (this_00,pFVar8,uVar3,(TIntRect<int> *)&local_38._s_0,uVar2,uVar6,Normal);
        uVar7 = uVar7 + 1;
        pFVar8 = pFVar8 + 1;
      } while (uVar7 < bVar1);
    }
  }
  return;
}

// FlushVirtualTextureCache @ 1454f0450

void __thiscall FRendererModule::FlushVirtualTextureCache(FRendererModule *this)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::FlushCache(this_00);
  return;
}

// GetAllocatedScenes @ 1454f1d90

TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> * __thiscall
FRendererModule::GetAllocatedScenes(FRendererModule *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererModule.h"
                       ,0x4f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return &this->AllocatedScenes;
}

// GetGlobalDistanceFieldParameterData @ 1454f7270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGlobalDistanceFieldParameterData * __thiscall
FRendererModule::GetGlobalDistanceFieldParameterData(FRendererModule *this,FSceneView *param_1)

{
  code *pcVar1;
  bool bVar2;
  FGlobalDistanceFieldParameterData *pFVar3;
  
  if (param_1->bIsViewInfo != false) {
    return (FGlobalDistanceFieldParameterData *)
           ((longlong)param_1[1].SceneViewInitOptions.HiddenPrimitives.Hash.SecondaryData + 0x30);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2483563155284825607>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                     ,0x1607,"View.bIsViewInfo");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGlobalDistanceFieldParameterData *)(*pcVar1)();
    return pFVar3;
  }
  return (FGlobalDistanceFieldParameterData *)0x0;
}

// GetMaterialCacheTagProvider @ 1454f73b0

IMaterialCacheTagProvider * __thiscall
FRendererModule::GetMaterialCacheTagProvider(FRendererModule *this)

{
  code *pcVar1;
  bool bVar2;
  IMaterialCacheTagProvider *pIVar3;
  
  if ((GMaterialCacheTagProvider == (FMaterialCacheTagProvider *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaterialCacheTagProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheTagProvider.cpp"
                         ,0x3a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMaterialCacheTagProvider *)(*pcVar1)();
    return pIVar3;
  }
  return (IMaterialCacheTagProvider *)GMaterialCacheTagProvider;
}

// GetNaniteRequestRecordBuffer @ 1454f7430

ulong64 __thiscall
FRendererModule::GetNaniteRequestRecordBuffer
          (FRendererModule *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1)

{
  return 0xffffffffffffffff;
}

// GetPreviousViewMatrices @ 1454f8030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FViewMatrices * __thiscall
FRendererModule::GetPreviousViewMatrices(FRendererModule *this,FSceneView *param_1)

{
  code *pcVar1;
  bool bVar2;
  FViewMatrices *pFVar3;
  
  if (param_1->bIsViewInfo != false) {
    return (FViewMatrices *)
           ((longlong)param_1[1].ViewMatrices.InvTranslatedViewMatrix.M[3][1] + 0x10);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2483563155284825598>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                     ,0x15fe,"View.bIsViewInfo");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FViewMatrices *)(*pcVar1)();
    return pFVar3;
  }
  return &param_1->ViewMatrices;
}

// GetResolvedSceneColorCallbacks @ 1454f8790

TMulticastDelegate<void___cdecl(FRDGBuilder_&,FSceneTextures_const_&),FDefaultDelegateUserPolicy> *
__thiscall FRendererModule::GetResolvedSceneColorCallbacks(FRendererModule *this)

{
  return &this->PostResolvedSceneColorCallbacks;
}

// GetVirtualTextureRequestRecordBuffer @ 1454fa920

ulong64 __thiscall
FRendererModule::GetVirtualTextureRequestRecordBuffer
          (FRendererModule *this,
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *param_1)

{
  return 0xffffffffffffffff;
}

// LoadPendingVirtualTextureTiles @ 1454fd230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FRendererModule::LoadPendingVirtualTextureTiles
          (FRendererModule *this,FRHICommandListImmediate *param_1,Type param_2)

{
  FVirtualTextureSystem *this_00;
  undefined1 auStackY_838 [32];
  FRDGEventName local_808;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_838;
  local_808.EventFormat = L"";
  local_808.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_808.FormattedEventName.Data.ArrayNum = 0;
  local_808.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_808,None,GMaxRHIShaderPlatform);
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::LoadPendingTiles(this_00,&local_7e8,param_2);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  return;
}

// LockVirtualTextureTiles @ 1454fd2d0

void __thiscall
FRendererModule::LockVirtualTextureTiles
          (FRendererModule *this,FVirtualTextureProducerHandle param_1,int param_2)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::SetMipLevelToLock(this_00,param_1,param_2);
  return;
}

// PerFrameCleanupIfSkipRenderer @ 1454ffa80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRendererModule::PerFrameCleanupIfSkipRenderer(FRendererModule *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  FSyncScope local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_b8;
  UE::RenderCommandPipe::FSyncScope::FSyncScope(&local_28);
  local_70 = (undefined ***)0x0;
  local_88 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_80 = `FRendererModule::PerFrameCleanupIfSkipRenderer'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRendererModule::PerFrameCleanupIfSkipRenderer_::__l2::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pcStack_50 = pcStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FRendererModule::PerFrameCleanupIfSkipRenderer'::__l2::TSTR_CmdPerFrameCleanupIfSkipRenderer5256>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar3);
    uVar5 = (ulonglong)local_38;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar4 = local_40;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar4 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar4 = local_70;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  UE::RenderCommandPipe::FSyncScope::~FSyncScope(&local_28);
  return;
}

// PostRenderAllViewports @ 1454ffc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRendererModule::PostRenderAllViewports(FRendererModule *this)

{
  code *pcVar1;
  bool bVar2;
  FStreamingManagerCollection *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FCoarseMeshStreamingManager *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FCoarseMeshStreamingManager *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  GFrameNumber = GFrameNumber + 1;
  this_00 = IStreamingManager::Get();
  pFStack_70 = FStreamingManagerCollection::GetNaniteCoarseMeshStreamingManager(this_00);
  local_60 = (undefined ***)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRendererModule::PostRenderAllViewports'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRendererModule::PostRenderAllViewports'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRendererModule::PostRenderAllViewports_::__l2::TSTR_PostRenderAllViewports_RenderThread5238>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FRendererModule::PostRenderAllViewports'::__l2::TSTR_PostRenderAllViewports_RenderThread5238>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// PrefetchNaniteResource @ 145500470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRendererModule::PrefetchNaniteResource(FRendererModule *this,FResources *param_1,uint param_2)

{
  Nanite::FStreamingManager::PrefetchResource
            ((FStreamingManager *)&Nanite::GStreamingManager,param_1,param_2);
  return;
}

// RegisterOverlayRenderDelegate @ 1455020c0

FDelegateHandle __thiscall
FRendererModule::RegisterOverlayRenderDelegate
          (FRendererModule *this,
          TDelegate<void___cdecl(FPostOpaqueRenderParameters_&),FDefaultDelegateUserPolicy> *param_1
          )

{
  TMulticastDelegateRegistration<void___cdecl(FPostOpaqueRenderParameters_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FPostOpaqueRenderParameters_&),FDefaultDelegateUserPolicy>
         *)&this->OverlayRenderDelegate,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// RegisterPostOpaqueRenderDelegate @ 1455020f0

FDelegateHandle __thiscall
FRendererModule::RegisterPostOpaqueRenderDelegate
          (FRendererModule *this,
          TDelegate<void___cdecl(FPostOpaqueRenderParameters_&),FDefaultDelegateUserPolicy> *param_1
          )

{
  TMulticastDelegateRegistration<void___cdecl(FPostOpaqueRenderParameters_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(FPostOpaqueRenderParameters_&),FDefaultDelegateUserPolicy>
         *)&this->PostOpaqueRenderDelegate,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// RegisterVirtualTextureProducer @ 145502120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVirtualTextureProducerHandle __thiscall
FRendererModule::RegisterVirtualTextureProducer
          (FRendererModule *this,FRHICommandListBase *param_1,FVTProducerDescription *param_2,
          IVirtualTexture *param_3)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::RegisterProducer(this_00,param_1,param_2,param_3);
  return (FVirtualTextureProducerHandle)(uint)param_1;
}

// ReleaseVirtualTexturePendingResources @ 145502eb0

void __thiscall FRendererModule::ReleaseVirtualTexturePendingResources(FRendererModule *this)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::ReleasePendingResources(this_00);
  return;
}

// ReleaseVirtualTextureProducer @ 145502ed0

void __thiscall
FRendererModule::ReleaseVirtualTextureProducer
          (FRendererModule *this,FVirtualTextureProducerHandle *param_1)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::ReleaseProducer(this_00,param_1);
  return;
}

// RemoveAllVirtualTextureProducerDestroyedCallbacks @ 145502f00

uint __thiscall
FRendererModule::RemoveAllVirtualTextureProducerDestroyedCallbacks
          (FRendererModule *this,void *param_1)

{
  uint uVar1;
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  uVar1 = FVirtualTextureSystem::RemoveAllProducerDestroyedCallbacks(this_00,param_1);
  return uVar1;
}

// RemoveOverlayRenderDelegate @ 145503300

void __thiscall
FRendererModule::RemoveOverlayRenderDelegate(FRendererModule *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OverlayRenderDelegate,
               param_1);
    return;
  }
  return;
}

// RemovePostOpaqueRenderDelegate @ 145503320

void __thiscall
FRendererModule::RemovePostOpaqueRenderDelegate(FRendererModule *this,FDelegateHandle param_1)

{
  if (param_1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->PostOpaqueRenderDelegate
               ,param_1);
    return;
  }
  return;
}

// RenderOverlayExtensions @ 145503350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
FRendererModule::RenderOverlayExtensions
          (FRendererModule *this,FRDGBuilder *param_1,TArrayView<FViewInfo_const_,int> *param_2,
          FSceneTextures *param_3)

{
  TMulticastDelegate<void___cdecl(FPostOpaqueRenderParameters_&),FDefaultDelegateUserPolicy>
  *this_00;
  undefined1 *puVar1;
  FRHIGPUMask FVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  FRDGScope *pFVar11;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  FViewInfo *pFVar17;
  longlong lVar18;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  uint local_298 [2];
  TRDGEventScopeGuard<FRDGScope_RHI> local_290;
  char local_280;
  FRHIComputeCommandList *local_278;
  TArrayView<FViewInfo_const_,int> *local_270;
  FSceneTextures *local_268;
  TRDGEventScopeGuard<FRDGScope_RHI> local_260;
  char local_250;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_248;
  FDestructionSentinel local_238;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_> local_220;
  uint uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  uint uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  TIntPoint<int>_u_0 local_1c8;
  TIntPoint<int>_u_0 TStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FRDGTexture *local_98;
  FRDGBuilder *pFStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FViewInfo *local_68;
  FViewInfo *pFStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  this_00 = &this->OverlayRenderDelegate;
  local_270 = param_2;
  local_268 = param_3;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar6) {
    cVar8 = *(char *)((longlong)&param_1->_padding_ + 6);
    cVar9 = '\0';
    local_250 = '\0';
    if ((cVar8 != '\0') && ((cVar8 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_200 = 0;
        uStack_1fc = 0;
        ::Desc._12_8_ = ZEXT48(uStack_204);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_OverlayExtensio;
        ::Desc._padding_ = (longlong)u_OverlayExtensio;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x14ec;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FRendererModule::RenderOverlayExtensions'::__l10::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_220._Myfirst._Val = &::Desc;
      local_260.State = (FRDGScopeState *)param_1;
      pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar11;
      local_260.Scope = pFVar11;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18>_const_*,std::tuple<>_>_>
                (&(pFVar11->Impl).Impl,(FRDGScopeState *)param_1,&local_220);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
      }
      cVar9 = '\x01';
      local_250 = '\x01';
    }
    iVar13 = param_2->ArrayNum;
    local_298[0] = 0;
    if (0 < iVar13) {
      do {
        uVar16 = local_298[0];
        uVar10 = 0;
        if ((int)local_298[0] < iVar13) {
          uVar10 = ~local_298[0] >> 0x1f;
        }
        if (uVar10 == 0) {
          local_2a0 = (longlong)iVar13;
          local_2a8 = (longlong)(int)local_298[0];
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        cVar8 = '\0';
        local_280 = '\0';
        pFVar17 = param_2->DataPtr + (int)uVar16;
        if (((1 < param_2->ArrayNum) &&
            (cVar9 = *(char *)((longlong)&param_1->_padding_ + 6), cVar9 != '\0')) &&
           ((cVar9 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::Desc._padding_._0_4_ = 0x14f1;
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            local_1e0 = 0;
            uStack_1dc = 0;
            ::Desc._12_8_ = ZEXT48(uStack_1e4);
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_View_d;
            ::Desc._padding_ = (longlong)u_View_d;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FRendererModule::RenderOverlayExtensions'::__l17::<lambda_2>::
                   operator()<int_&>'::__l3::<lambda_1>::operator()<int_&>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_248._padding_ = (longlong)local_298;
          local_248._Myfirst._Val = &::Desc;
          local_290.State = (FRDGScopeState *)param_1;
          pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)pFVar11;
          uVar14 = (ulonglong)(pFVar11->Impl).Impl.TypeIndex;
          local_290.Scope = pFVar11;
          if ((3 < uVar14) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar14])(&pFVar11->Impl);
          this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
          pFVar12 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                              (this_01,&local_248);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&pFVar11->Impl,(FRDGScopeState *)param_1,pFVar12);
          (pFVar11->Impl).Impl.TypeIndex = '\x02';
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
          }
          cVar8 = '\x01';
          local_280 = '\x01';
        }
        local_278 = (FRHIComputeCommandList *)param_1->_padding_;
        FVar2.GPUMask = *(uint *)&local_278->field_0x29c;
        FRHIComputeCommandList::SetGPUMask(local_278,(FRHIGPUMask)(uint)pFVar17->_padding_);
        local_b8 = param_3->_padding_;
        local_a8 = 0;
        uStack_a0 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_1b8 = pFVar17->_padding_;
        lStack_1b0 = pFVar17->_padding_;
        local_1a8 = pFVar17->_padding_;
        lStack_1a0 = pFVar17->_padding_;
        local_198 = pFVar17->_padding_;
        lStack_190 = pFVar17->_padding_;
        local_188 = pFVar17->_padding_;
        lStack_180 = pFVar17->_padding_;
        local_178 = pFVar17->_padding_;
        lStack_170 = pFVar17->_padding_;
        local_168 = pFVar17->_padding_;
        lStack_160 = pFVar17->_padding_;
        local_158 = pFVar17->_padding_;
        lStack_150 = pFVar17->_padding_;
        local_148 = pFVar17->_padding_;
        lStack_140 = pFVar17->_padding_;
        local_138 = pFVar17->_padding_;
        lStack_130 = pFVar17->_padding_;
        local_128 = pFVar17->_padding_;
        lStack_120 = pFVar17->_padding_;
        local_118 = pFVar17->_padding_;
        lStack_110 = pFVar17->_padding_;
        local_108 = pFVar17->_padding_;
        lStack_100 = pFVar17->_padding_;
        local_f8 = pFVar17->_padding_;
        lStack_f0 = pFVar17->_padding_;
        local_e8 = pFVar17->_padding_;
        lStack_e0 = pFVar17->_padding_;
        local_d8 = (undefined4)pFVar17->_padding_;
        uStack_d4 = *(undefined4 *)((longlong)&pFVar17->_padding_ + 4);
        uStack_d0 = (undefined4)pFVar17->_padding_;
        uStack_cc = *(undefined4 *)((longlong)&pFVar17->_padding_ + 4);
        local_c8 = pFVar17->_padding_;
        lStack_c0 = pFVar17->_padding_;
        lStack_b0 = param_3->_padding_;
        local_98 = param_3->SmallDepth;
        local_1c8 = (pFVar17->ViewRect).field0_0x0._s_0.Min.field0_0x0;
        TStack_1c0 = (pFVar17->ViewRect).field0_0x0._s_0.Max.field0_0x0;
        pFStack_90 = param_1;
        local_68 = pFVar17;
        pFStack_60 = pFVar17;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_238);
        puVar1 = &(this->OverlayRenderDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar16 = *(int *)&(this->OverlayRenderDelegate).field_0x10 - 1;
        if (-1 < (int)uVar16) {
          lVar18 = (longlong)(int)uVar16;
          lVar15 = lVar18 << 4;
          bVar6 = false;
          do {
            iVar13 = *(int *)&(this->OverlayRenderDelegate).field_0x10;
            uVar10 = 0;
            if ((int)uVar16 < iVar13) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (local_2a8 = lVar18, local_2a0 = (longlong)iVar13,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(this->OverlayRenderDelegate).field_0x8;
            if (((*(int *)(lVar15 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar15 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar18 = lVar18 + -1;
            lVar15 = lVar15 + -0x10;
            uVar16 = uVar16 - 1;
            cVar8 = local_280;
          } while (-1 < (int)uVar16);
        }
        puVar1 = &(this->OverlayRenderDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_238.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
        }
        FRHIComputeCommandList::SetGPUMask(local_278,FVar2);
        if (cVar8 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_290);
        }
        local_298[0] = local_298[0] + 1;
        iVar13 = local_270->ArrayNum;
        param_2 = local_270;
        param_3 = local_268;
        cVar9 = local_250;
      } while ((int)local_298[0] < iVar13);
    }
    if (cVar9 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_260);
    }
  }
  return;
}

// RenderPostOpaqueExtensions @ 145503a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
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

void __thiscall
FRendererModule::RenderPostOpaqueExtensions
          (FRendererModule *this,FRDGBuilder *param_1,TArrayView<FViewInfo_const_,int> *param_2,
          FSceneTextures *param_3)

{
  TMulticastDelegate<void___cdecl(FPostOpaqueRenderParameters_&),FDefaultDelegateUserPolicy>
  *this_00;
  undefined1 *puVar1;
  FRHIGPUMask FVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FRDGScope *pFVar11;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar12;
  int iVar13;
  longlong lVar14;
  FRHIComputeCommandList *this_02;
  uint uVar15;
  FViewInfo *pFVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong local_2a0;
  uint local_298 [2];
  FSceneTextures *local_290;
  TRDGEventScopeGuard<FRDGScope_RHI> local_288;
  char local_278;
  FRHIComputeCommandList *local_270;
  TArrayView<FViewInfo_const_,int> *local_268;
  TRDGEventScopeGuard<FRDGScope_RHI> local_260;
  char local_250;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
  local_248;
  FDestructionSentinel local_238;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_> local_220;
  uint uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  uint uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  TIntPoint<int>_u_0 local_1c8;
  TIntPoint<int>_u_0 TStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  FRDGTexture *local_a8;
  FRDGTexture *pFStack_a0;
  FRDGTexture *local_98;
  FRDGBuilder *pFStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  FGlobalDistanceFieldParameterData *pFStack_70;
  FViewInfo *local_68;
  FViewInfo *pFStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  this_00 = &this->PostOpaqueRenderDelegate;
  local_290 = param_3;
  local_268 = param_2;
  bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar6) {
    cVar9 = *(char *)((longlong)&param_1->_padding_ + 6);
    cVar7 = '\0';
    local_250 = '\0';
    if ((cVar9 != '\0') && ((cVar9 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_200 = 0;
        uStack_1fc = 0;
        ::Desc._12_8_ = ZEXT48(uStack_204);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_PostOpaqueExten;
        ::Desc._padding_ = (longlong)u_PostOpaqueExten;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._0_4_ = 0x14c5;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FRendererModule::RenderPostOpaqueExtensions'::__l10::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_220._Myfirst._Val = &::Desc;
      local_260.State = (FRDGScopeState *)param_1;
      pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)pFVar11;
      local_260.Scope = pFVar11;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
                (&(pFVar11->Impl).Impl,(FRDGScopeState *)param_1,&local_220);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
      }
      cVar7 = '\x01';
      local_250 = '\x01';
    }
    iVar13 = param_2->ArrayNum;
    local_298[0] = 0;
    if (0 < iVar13) {
      do {
        uVar15 = local_298[0];
        uVar10 = 0;
        if ((int)local_298[0] < iVar13) {
          uVar10 = ~local_298[0] >> 0x1f;
        }
        if (uVar10 == 0) {
          local_2a0 = (longlong)iVar13;
          local_2a8 = (longlong)(int)local_298[0];
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_278 = '\0';
        pFVar16 = param_2->DataPtr + (int)uVar15;
        if (((1 < param_2->ArrayNum) &&
            (cVar9 = *(char *)((longlong)&param_1->_padding_ + 6), cVar9 != '\0')) &&
           ((cVar9 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            local_1e0 = 0;
            uStack_1dc = 0;
            ::Desc._12_8_ = ZEXT48(uStack_1e4);
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_View_d;
            ::Desc._padding_ = (longlong)u_View_d;
            ::Desc._padding_._0_4_ = 0x14ca;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(```FRendererModule::RenderPostOpaqueExtensions'::__l17::<lambda_2>::
                   operator()<int_&>'::__l3::<lambda_1>::operator()<int_&>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          local_248._padding_ = (longlong)local_298;
          local_248._Myfirst._Val = &::Desc;
          local_288.State = (FRDGScopeState *)param_1;
          pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                              ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
          param_1->_padding_ = (longlong)pFVar11;
          uVar17 = (ulonglong)(pFVar11->Impl).Impl.TypeIndex;
          local_288.Scope = pFVar11;
          if ((3 < uVar17) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
            ::__l2::Destructors[uVar17])(&pFVar11->Impl);
          this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
          pFVar12 = FRHIBreadcrumbAllocator::
                    AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
                              (this_01,&local_248);
          FRDGScope_RHI::FRDGScope_RHI
                    ((FRDGScope_RHI *)&pFVar11->Impl,(FRDGScopeState *)param_1,pFVar12);
          (pFVar11->Impl).Impl.TypeIndex = '\x02';
          if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
            FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
            FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
          }
          local_278 = '\x01';
          param_3 = local_290;
        }
        this_02 = (FRHIComputeCommandList *)param_1->_padding_;
        FVar2.GPUMask = *(uint *)&this_02->field_0x29c;
        local_270 = this_02;
        FRHIComputeCommandList::SetGPUMask(this_02,(FRHIGPUMask)(uint)pFVar16->_padding_);
        bVar6 = IsInRenderingThread();
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInRenderingThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                               ,0x14cd,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_b8 = param_3->_padding_;
        local_1b8 = pFVar16->_padding_;
        lStack_1b0 = pFVar16->_padding_;
        local_1a8 = pFVar16->_padding_;
        lStack_1a0 = pFVar16->_padding_;
        local_198 = pFVar16->_padding_;
        lStack_190 = pFVar16->_padding_;
        local_188 = pFVar16->_padding_;
        lStack_180 = pFVar16->_padding_;
        local_178 = pFVar16->_padding_;
        lStack_170 = pFVar16->_padding_;
        local_168 = pFVar16->_padding_;
        lStack_160 = pFVar16->_padding_;
        local_158 = pFVar16->_padding_;
        lStack_150 = pFVar16->_padding_;
        local_148 = pFVar16->_padding_;
        lStack_140 = pFVar16->_padding_;
        local_138 = pFVar16->_padding_;
        lStack_130 = pFVar16->_padding_;
        local_128 = pFVar16->_padding_;
        lStack_120 = pFVar16->_padding_;
        local_118 = pFVar16->_padding_;
        lStack_110 = pFVar16->_padding_;
        local_108 = pFVar16->_padding_;
        lStack_100 = pFVar16->_padding_;
        local_f8 = pFVar16->_padding_;
        lStack_f0 = pFVar16->_padding_;
        local_e8 = pFVar16->_padding_;
        lStack_e0 = pFVar16->_padding_;
        local_d8 = (undefined4)pFVar16->_padding_;
        uStack_d4 = *(undefined4 *)((longlong)&pFVar16->_padding_ + 4);
        uStack_d0 = (undefined4)pFVar16->_padding_;
        uStack_cc = *(undefined4 *)((longlong)&pFVar16->_padding_ + 4);
        local_c8 = pFVar16->_padding_;
        lStack_c0 = pFVar16->_padding_;
        lStack_b0 = param_3->_padding_;
        local_a8 = param_3->GBufferA;
        pFStack_a0 = param_3->Velocity;
        local_98 = param_3->SmallDepth;
        local_88 = pFVar16->_padding_;
        lStack_80 = param_3->_padding_;
        local_78 = param_3->_padding_;
        pFStack_70 = &pFVar16->GlobalDistanceFieldInfo->ParameterData;
        local_1c8 = (pFVar16->ViewRect).field0_0x0._s_0.Min.field0_0x0;
        TStack_1c0 = (pFVar16->ViewRect).field0_0x0._s_0.Max.field0_0x0;
        pFStack_90 = param_1;
        local_68 = pFVar16;
        pFStack_60 = pFVar16;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_238);
        puVar1 = &(this->PostOpaqueRenderDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar15 = *(int *)&(this->PostOpaqueRenderDelegate).field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar18 = (longlong)(int)uVar15;
          lVar14 = lVar18 << 4;
          bVar6 = false;
          do {
            iVar13 = *(int *)&(this->PostOpaqueRenderDelegate).field_0x10;
            uVar10 = 0;
            if ((int)uVar15 < iVar13) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (local_2a8 = lVar18, local_2a0 = (longlong)iVar13,
               bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(this->PostOpaqueRenderDelegate).field_0x8;
            if (((*(int *)(lVar3 + 8 + lVar14) == 0) ||
                (plVar4 = *(longlong **)(lVar3 + lVar14), plVar4 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar4 + 0x68))(), cVar9 == '\0')) {
              bVar6 = true;
            }
            lVar18 = lVar18 + -1;
            lVar14 = lVar14 + -0x10;
            uVar15 = uVar15 - 1;
            this_02 = local_270;
            param_3 = local_290;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(this->PostOpaqueRenderDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_238.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
        }
        FRHIComputeCommandList::SetGPUMask(this_02,FVar2);
        if (local_278 != '\0') {
          TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_288);
        }
        local_298[0] = local_298[0] + 1;
        iVar13 = local_268->ArrayNum;
        param_2 = local_268;
        cVar7 = local_250;
      } while ((int)local_298[0] < iVar13);
    }
    if (cVar7 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_260);
    }
  }
  return;
}

// RenderPostResolvedSceneColorExtension @ 145504180

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRendererModule::RenderPostResolvedSceneColorExtension
          (FRendererModule *this,FRDGBuilder *param_1,FSceneTextures *param_2)

{
  undefined1 *puVar1;
  TMulticastDelegate<void___cdecl(FRDGBuilder_&,FSceneTextures_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  this_00 = &this->PostResolvedSceneColorCallbacks;
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(this->PostResolvedSceneColorCallbacks).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->PostResolvedSceneColorCallbacks).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->PostResolvedSceneColorCallbacks).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->PostResolvedSceneColorCallbacks).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->PostResolvedSceneColorCallbacks).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// RequestNanitePages @ 145504610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRendererModule::RequestNanitePages(FRendererModule *this,TArrayView<unsigned_int,int> *param_1)

{
  TArrayView<unsigned_int,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  Nanite::FStreamingManager::RequestNanitePages
            ((FStreamingManager *)&Nanite::GStreamingManager,&local_18);
  return;
}

// RequestStaticMeshUpdate @ 145504640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRendererModule::RequestStaticMeshUpdate(FRendererModule *this,FPrimitiveSceneInfo *param_1)

{
  if (param_1 != (FPrimitiveSceneInfo *)0x0) {
    FPrimitiveSceneInfo::RequestStaticMeshUpdate(param_1);
    return;
  }
  return;
}

// RequestVirtualTextureTiles @ 145504660

void __thiscall
FRendererModule::RequestVirtualTextureTiles
          (FRendererModule *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::RequestRecordedTiles(this_00,param_1);
  return;
}

// RequestVirtualTextureTiles @ 145504690

void __thiscall
FRendererModule::RequestVirtualTextureTiles
          (FRendererModule *this,TVector2<double> *param_1,int param_2)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::RequestTiles(this_00,param_1,param_2);
  return;
}

// RequestVirtualTextureTiles @ 1455046d0

void __thiscall
FRendererModule::RequestVirtualTextureTiles
          (FRendererModule *this,IAllocatedVirtualTexture *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,TVector2<double> *param_5,
          TVector2<double> *param_6,int param_7)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::RequestTiles
            (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

// RequestVirtualTextureTiles @ 145504720

void __thiscall
FRendererModule::RequestVirtualTextureTiles
          (FRendererModule *this,FMaterialRenderProxy *param_1,TVector2<double> *param_2,
          Type param_3)

{
  FVirtualTextureSystem *this_00;
  
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::RequestTiles(this_00,param_1,param_2,param_3);
  return;
}

// SetNaniteRequestRecordBuffer @ 145504dd0

void __thiscall FRendererModule::SetNaniteRequestRecordBuffer(FRendererModule *this,ulong64 param_1)

{
  return;
}

// SetVirtualTextureRequestRecordBuffer @ 145505230

void __thiscall
FRendererModule::SetVirtualTextureRequestRecordBuffer(FRendererModule *this,ulong64 param_1)

{
  return;
}

// SupportsDynamicReloading @ 14550b180

bool __thiscall FRendererModule::SupportsDynamicReloading(FRendererModule *this)

{
  return true;
}

// SyncVirtualTextureUpdates @ 14550b1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FRendererModule::SyncVirtualTextureUpdates
          (FRendererModule *this,FRHICommandListImmediate *param_1,Type param_2)

{
  FVirtualTextureSystem *this_00;
  undefined1 auStackY_858 [32];
  FRDGEventName local_828;
  FVirtualTextureUpdateSettings local_810;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_858;
  local_828.EventFormat = L"";
  local_828.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_828.FormattedEventName.Data.ArrayNum = 0;
  local_828.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,&local_828,None,GMaxRHIShaderPlatform);
  FVirtualTextureUpdateSettings::FVirtualTextureUpdateSettings(&local_810);
  local_810.MaxRVTPageUploads = 99999;
  local_810.MaxSVTPageUploads = 99999;
  local_810.MaxPagesProduced = 99999;
  local_810.bForceSyncPageUpdate = true;
  this_00 = FVirtualTextureSystem::Get();
  FVirtualTextureSystem::Update(this_00,&local_7e8,param_2,(ISceneRenderer *)0x0,&local_810);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  return;
}

// UpdateMapNeedsLightingFullyRebuiltState @ 14550f030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FRendererModule::UpdateMapNeedsLightingFullyRebuiltState(FRendererModule *this,UWorld *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(param_1->Scene->_padding_ + 0x420))();
  iVar1 = *(int *)(lVar2 + 0x49f8);
  lVar2 = (**(code **)(param_1->Scene->_padding_ + 0x420))();
  UWorld::SetMapNeedsLightingFullyRebuilt(param_1,*(int *)(lVar2 + 0x49f4),iVar1);
  return;
}

// operator() @ 1504cef60

bool __thiscall `FRendererModule::DrawTileMesh'::__l43::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3384140990355865070>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3384140990355865070>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

