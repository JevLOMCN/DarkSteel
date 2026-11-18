// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FRendererViewDataManager @ 14574eba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRendererViewDataManager * __thiscall
FRendererViewDataManager::FRendererViewDataManager
          (FRendererViewDataManager *this,FRDGBuilder *param_1,FScene *param_2,
          FSceneUniformBuffer *param_3,TArray<FViewInfo_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  FViewInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FRendererViewDataManager *pFVar10;
  FRDGBuffer *pFVar11;
  FRDGBufferSRV *pFVar12;
  ulong64 uVar13;
  undefined ***pppuVar14;
  TArray<FViewInfo_*,TSizedDefaultAllocator<32>_> *pTVar15;
  FPackedView *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStackY_f8 [32];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_b8;
  FRDGBuilder *local_a8;
  FRDGBufferSRVDesc local_a0;
  code *local_78 [2];
  undefined **local_68;
  FRendererViewDataManager *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar18 = 0;
  this->Scene = param_2;
  this->SceneUniforms = param_3;
  this->GPUScene = &param_2->GPUScene;
  piVar1 = &(this->CullingViews).ArrayNum;
  piVar2 = &(this->CullingViews).ArrayMax;
  this->SceneRendererPrimaryViews = param_4;
  this->NumRegisteredViews = (atomic<int>)0x0;
  (this->CullingViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->bIsEnabled = (param_2->GPUScene).bIsEnabled;
  this->CullingViewsRDG = (FRDGBuffer *)0x0;
  this->PrimaryViewsRDG = (FRDGBuffer *)0x0;
  this->NumSceneRendererPrimaryViews = 0;
  this->InstanceMaskWordStride = 0;
  this->PersistentIdToIndexMapRDG = (FRDGBuffer *)0x0;
  (this->CullingShaderParameters).InViews = (FRDGBufferSRV *)0x0;
  (this->ShaderParameters).Common.InViews = (FRDGBufferSRV *)0x0;
  (this->ShaderParameters).DeformingInstanceViewMask = (FRDGBufferSRV *)0x0;
  (this->ShaderParameters).PersistentIdToIndexMap = (FRDGBufferSRV *)0x0;
  (this->WriterShaderParameters).Common.InViews = (FRDGBufferSRV *)0x0;
  (this->WriterShaderParameters).OutDeformingInstanceViewMask = (FRDGBufferUAV *)0x0;
  this->DeformingInstanceViewMaskRDG = (FRDGBuffer *)0x0;
  if (this->bIsEnabled != false) {
    uVar7 = *(uint *)&(param_2->PersistentViewStateUniqueIDs).field_0x8;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    local_a8 = param_1;
    if ((int)uVar7 < 1) {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
    }
    else {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar7,&local_b8.AllocatorInstance,&local_b8.ArrayNum,&local_b8.ArrayMax
                        );
      memset(local_b8.AllocatorInstance.Data + (longlong)iVar6 * 4,0,(longlong)(int)uVar7 << 2);
    }
    iVar6 = this->SceneRendererPrimaryViews->ArrayNum;
    this->NumSceneRendererPrimaryViews = iVar6;
    if (this->bIsEnabled != false) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3d0,0x10,(this->CullingViews).ArrayNum + iVar6,
                 &(this->CullingViews).AllocatorInstance,piVar1,piVar2);
    }
    pTVar15 = this->SceneRendererPrimaryViews;
    uVar19 = uVar18;
    if (0 < pTVar15->ArrayNum) {
      do {
        uVar17 = (uint)uVar18;
        uVar7 = 0;
        if ((int)uVar17 < pTVar15->ArrayNum) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FRendererViewDataManager *)(*pcVar4)();
          return pFVar10;
        }
        pFVar3 = *(FViewInfo **)((pTVar15->AllocatorInstance).Data + uVar19);
        iVar6 = pFVar3->SceneRendererPrimaryViewId;
        iVar8 = RegisterPrimaryView(this,pFVar3);
        if ((iVar6 != iVar8) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_4911746929240571884>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ViewData.cpp"
                               ,0x14,"View.SceneRendererPrimaryViewId == RegisterPrimaryView(View)")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FRendererViewDataManager *)(*pcVar4)();
          return pFVar10;
        }
        uVar7 = (pFVar3->PersistentViewId).Index;
        if (uVar7 != 0xffffffff) {
          uVar9 = 0;
          if ((int)uVar7 < local_b8.ArrayNum) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar10 = (FRendererViewDataManager *)(*pcVar4)();
            return pFVar10;
          }
          *(uint *)(local_b8.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = uVar17 + 1;
        }
        pTVar15 = this->SceneRendererPrimaryViews;
        uVar18 = (ulonglong)(uVar17 + 1);
        param_1 = local_a8;
        uVar19 = uVar19 + 8;
      } while ((int)(uVar17 + 1) < pTVar15->ArrayNum);
    }
    pFVar11 = CreateStructuredBuffer<unsigned_int,TSizedDefaultAllocator<32>_>
                        (param_1,L"InstanceCullingManager.PersistentIdToIndexMap",&local_b8);
    this->PersistentIdToIndexMapRDG = pFVar11;
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    (this->CullingShaderParameters).InViews = (FRDGBufferSRV *)0x0;
    (this->CullingShaderParameters).NumCullingViews = 0;
    bVar5 = FRDGBuilder::IsImmediateMode();
    if (bVar5) {
      FlushRegisteredViews(this,param_1);
    }
    else {
      local_50 = (undefined ***)0x0;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FRendererViewDataManager::FRendererViewDataManager'::`14'::<lambda_1>,0,0>
                  ::_vftable_;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRendererViewDataManager::FRendererViewDataManager'::__l14::<lambda_1>,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>
                    ::Call;
      local_60 = this;
      local_a0.Buffer =
           CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>
                     (param_1,L"ViewData.CullingViews",
                      (TFunction<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&___cdecl(void)>
                       *)local_78);
      if (local_78[0] != (code *)0x0) {
        pppuVar14 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar14 = local_50;
        }
        (*(code *)(*pppuVar14)[2])();
      }
      this->CullingViewsRDG = local_a0.Buffer;
      local_a0._padding_._4_4_ = 0;
      local_a0._padding_._0_4_ = 0xffffffff;
      local_a0._padding_ = 0;
      local_a0._padding_._0_1_ = 0;
      if ((((local_a0.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_a0._padding_._0_1_ = 0x1c;
      }
      pFVar12 = FRDGBuilder::CreateSRV(param_1,&local_a0);
      (this->CullingShaderParameters).InViews = pFVar12;
      (this->CullingShaderParameters).NumCullingViews = this->NumSceneRendererPrimaryViews;
    }
    pFVar16 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
               ::__l2::DummyElement;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                             ::__l2::_thread_safe_static_guard_0__),
       `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      memset(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
              ::__l2::DummyElement,0,0x290);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.PreViewTranslationLow.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._840_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.PreViewTranslationHigh.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._728_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.PrevPreViewTranslationHigh.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._744_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.PrevPreViewTranslationLow.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._760_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.ViewOriginLow.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._776_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.CullingViewOriginTranslatedWorld.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._792_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.ViewForward.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._808_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.ViewSizeAndInvSize.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.ClipSpaceScaleOffset.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.MaterialCacheUnwrapMinAndInvSize.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.MaterialCachePageOffsetAndInvSize.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.TranslatedGlobalClipPlane.field0_0x0 =
           (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.LODScales.field0_0x0 = (TVector2<float>_u_0)(TVector2<float>_u_0_s_0)0x0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.InstanceOcclusionQueryMask = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.StreamingPriorityCategory_AndFlags = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.TargetLayerIdX_AndMipLevelY_AndNumMipLevelsZ.field0_0x0 =
           (TIntVector4<int>_u_0)ZEXT816(0);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.HZBTestViewRect.field0_0x0 = (TIntVector4<int>_u_0)ZEXT816(0);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.FirstPersonTransformRowsExceptRow2Z.field0_0x0 =
           (TIntVector4<unsigned_int>_u_0)ZEXT816(0);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.PrevPreViewTranslationHZBHigh.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._920_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.PrevPreViewTranslationHZBLow.field0_0x0._0_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement._936_8_ = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.PrevFirstPersonTransformRowsExceptRow2Z.field0_0x0 =
           (TIntVector4<unsigned_int>_u_0)ZEXT816(0);
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.DynamicDepthCullRange.field0_0x0 =
           (TVector2<float>_u_0)(TVector2<float>_u_0_s_0)0x0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.LightingChannelMask = 0;
      `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
      ::__l2::DummyElement.SceneRendererPrimaryViewId = 0;
      _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    uVar7 = (this->CullingViews).ArrayNum;
    bVar5 = uVar7 != 0;
    if (bVar5) {
      pFVar16 = (FPackedView *)(this->CullingViews).AllocatorInstance.Data;
      uVar13 = (ulong64)(uVar7 * 0x3d0);
    }
    else {
      uVar7 = 1;
      uVar13 = 0x3d0;
    }
    pFVar11 = CreateStructuredBuffer
                        (param_1,L"ViewData.PrimaryViews",0x3d0,uVar7,pFVar16,uVar13,!bVar5);
    (this->CullingShaderParameters).NumSceneRendererPrimaryViews =
         this->NumSceneRendererPrimaryViews;
    this->PrimaryViewsRDG = pFVar11;
  }
  return this;
}

// AllocateViews @ 145759d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRendererViewDataManager::AllocateViews(FRendererViewDataManager *this,int param_1)

{
  if (this->bIsEnabled != false) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x3d0,0x10,(this->CullingViews).ArrayNum + param_1,
               &(this->CullingViews).AllocatorInstance,&(this->CullingViews).ArrayNum,
               &(this->CullingViews).ArrayMax);
  }
  return;
}

// FlushRegisteredViews @ 14576e2a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRendererViewDataManager::FlushRegisteredViews(FRendererViewDataManager *this,FRDGBuilder *param_1)

{
  atomic<int> aVar1;
  code *pcVar2;
  bool bVar3;
  FRDGBufferSRV *pFVar4;
  atomic<int> aVar5;
  FPackedView *pFVar6;
  ulong64 uVar7;
  FRDGBufferSRVDesc local_28;
  
  aVar1 = this->NumRegisteredViews;
  if ((atomic<int>)(this->CullingShaderParameters).NumCullingViews != aVar1) {
    bVar3 = FRDGBuilder::IsImmediateMode();
    if (bVar3) {
      pFVar6 = (FPackedView *)(this->CullingViews).AllocatorInstance.Data;
      if ((int)aVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          memset(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
                  ::__l2::DummyElement,0,0x290);
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.PreViewTranslationLow.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._840_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.PreViewTranslationHigh.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._728_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.PrevPreViewTranslationHigh.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._744_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.PrevPreViewTranslationLow.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._760_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.ViewOriginLow.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._776_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.CullingViewOriginTranslatedWorld.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._792_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.ViewForward.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._808_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.ViewSizeAndInvSize.field0_0x0 =
               (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.ClipSpaceScaleOffset.field0_0x0 =
               (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.MaterialCacheUnwrapMinAndInvSize.field0_0x0 =
               (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.MaterialCachePageOffsetAndInvSize.field0_0x0 =
               (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.TranslatedGlobalClipPlane.field0_0x0 =
               (TVector4<float>_u_0)(TVector4<float>_u_0)___xmm_3f800000000000000000000000000000;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.LODScales.field0_0x0 =
               (TVector2<float>_u_0)(TVector2<float>_u_0_s_0)0x0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.InstanceOcclusionQueryMask = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.StreamingPriorityCategory_AndFlags = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.TargetLayerIdX_AndMipLevelY_AndNumMipLevelsZ.field0_0x0 =
               (TIntVector4<int>_u_0)ZEXT816(0);
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.HZBTestViewRect.field0_0x0 = (TIntVector4<int>_u_0)ZEXT816(0);
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.FirstPersonTransformRowsExceptRow2Z.field0_0x0 =
               (TIntVector4<unsigned_int>_u_0)ZEXT816(0);
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.PrevPreViewTranslationHZBHigh.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._920_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.PrevPreViewTranslationHZBLow.field0_0x0._0_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement._936_8_ = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.PrevFirstPersonTransformRowsExceptRow2Z.field0_0x0 =
               (TIntVector4<unsigned_int>_u_0)ZEXT816(0);
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.DynamicDepthCullRange.field0_0x0 =
               (TVector2<float>_u_0)(TVector2<float>_u_0_s_0)0x0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.LightingChannelMask = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
          ::__l2::DummyElement.SceneRendererPrimaryViewId = 0;
          _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      if (aVar1 != (atomic<int>)0x0) {
        uVar7 = (longlong)(int)aVar1 * 0x3d0;
        aVar5 = aVar1;
      }
      else {
        uVar7 = 0x3d0;
        pFVar6 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<Nanite::FPackedView>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArrayView<Nanite::FPackedView_const_,int>,ERDGInitialDataFlags)'
                  ::__l2::DummyElement;
        aVar5 = (atomic<int>)0x1;
      }
      local_28.Buffer =
           CreateStructuredBuffer
                     (param_1,L"ViewData.CullingViews",0x3d0,(uint)aVar5,pFVar6,uVar7,
                      aVar1 == (atomic<int>)0x0);
      this->CullingViewsRDG = local_28.Buffer;
      local_28._padding_._4_4_ = 0;
      local_28._padding_ = 0;
      local_28._padding_._0_4_ = 0xffffffff;
      local_28._padding_._0_1_ = 0;
      if ((((local_28.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_28._padding_._0_1_ = 0x1c;
      }
      pFVar4 = FRDGBuilder::CreateSRV(param_1,&local_28);
      (this->CullingShaderParameters).InViews = pFVar4;
    }
    (this->CullingShaderParameters).NumCullingViews = (uint)aVar1;
  }
  return;
}

// GetCullingParameters @ 145770a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FCullingShaderParameters * __thiscall
FRendererViewDataManager::GetCullingParameters
          (FRendererViewDataManager *this,FCullingShaderParameters *__return_storage_ptr__,
          FRDGBuilder *param_1)

{
  uint uVar1;
  uint uVar2;
  
  FlushRegisteredViews(this,param_1);
  uVar1 = (this->CullingShaderParameters).NumSceneRendererPrimaryViews;
  uVar2 = (this->CullingShaderParameters).NumCullingViews;
  __return_storage_ptr__->InViews = (this->CullingShaderParameters).InViews;
  __return_storage_ptr__->NumSceneRendererPrimaryViews = uVar1;
  __return_storage_ptr__->NumCullingViews = uVar2;
  return __return_storage_ptr__;
}

// InitInstanceState @ 14577b930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRendererViewDataManager::InitInstanceState(FRendererViewDataManager *this,FRDGBuilder *param_1)

{
  FSceneUniformBuffer *this_00;
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  FRDGBufferUAV *pFVar7;
  FRDGBufferSRV *pFVar8;
  FShaderParametersMetadata *pFVar9;
  undefined1 uVar10;
  FRDGBufferUAVDesc local_58;
  undefined8 local_48;
  FRDGBufferSRVDesc local_40;
  
  if (this->bIsEnabled != false) {
    lVar6 = 0x290;
    if ((this->GPUScene->InstanceSceneDataAllocator).bGrowOnly == false) {
      lVar6 = 0x28c;
    }
    iVar5 = *(int *)((this->GPUScene->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.
                     InlineData + lVar6 + -0x48) + 0x1f;
    local_58.Buffer = (FRDGBuffer *)CONCAT44(local_58.Buffer._4_4_,0x10109);
    local_58._padding_._0_1_ = 4;
    local_58._padding_._1_1_ = 0;
    local_58._padding_._2_1_ = 0;
    local_58._padding_._3_1_ = 0;
    local_48 = 0;
    local_58._padding_._4_4_ = (int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5;
    this->InstanceMaskWordStride = local_58._padding_._4_4_;
    local_58._padding_._4_4_ = local_58._padding_._4_4_ * this->NumSceneRendererPrimaryViews;
    local_40._padding_ = 0;
    if (local_58._padding_._4_4_ < 1) {
      local_58._padding_._4_4_ = 1;
    }
    local_40._padding_ = CONCAT44(local_58._padding_._4_4_,4);
    local_40._padding_ = (longlong)local_58.Buffer;
    local_58.Buffer =
         FRDGBuilder::CreateBuffer
                   (param_1,(FRDGBufferDesc *)&local_40,L"ViewData.DeformingInstanceViewMask",None);
    this->DeformingInstanceViewMaskRDG = local_58.Buffer;
    local_58._padding_._2_1_ = 0;
    local_58._padding_._1_1_ = 0;
    local_58._padding_._0_1_ = 0;
    if ((((local_58.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_58._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_58,None);
    AddClearUAVPass(param_1,pFVar7,0,Compute);
    local_40.Buffer = this->DeformingInstanceViewMaskRDG;
    uVar10 = 0;
    local_40._padding_._1_7_ = (uint7)((ulonglong)local_40._padding_ >> 8) & 0xffffff;
    local_40._padding_._0_4_ = 0xffffffff;
    local_40._padding_ = 0;
    if ((((local_40.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar10 = 0x1c;
    }
    local_40._padding_._0_1_ = uVar10;
    pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_40);
    (this->ShaderParameters).DeformingInstanceViewMask = pFVar8;
    local_40.Buffer = this->PersistentIdToIndexMapRDG;
    uVar10 = 0;
    local_40._padding_._0_4_ = 0xffffffff;
    local_40._padding_ = 0;
    if ((((local_40.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar10 = 0x1c;
    }
    local_40._padding_ = (longlong)CONCAT31((int3)local_40._padding_._1_7_,uVar10);
    pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_40);
    (this->ShaderParameters).PersistentIdToIndexMap = pFVar8;
    (this->ShaderParameters).Common.InstanceMaskWordStride = this->InstanceMaskWordStride;
    (this->ShaderParameters).Common.NumSceneRendererPrimaryViews =
         this->NumSceneRendererPrimaryViews;
    local_40._padding_ = CONCAT44(local_40._padding_._4_4_,0xffffffff);
    local_40._padding_ = 0;
    local_40.Buffer = this->PrimaryViewsRDG;
    (this->ShaderParameters).Common.MaxPersistentViewId =
         *(int *)&(this->Scene->PersistentViewStateUniqueIDs).field_0x8;
    uVar10 = 0;
    if ((((local_40.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar10 = 0x1c;
    }
    local_40._padding_ = CONCAT71((int7)((ulonglong)local_40._padding_ >> 8),uVar10) & 0xffffffff;
    pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_40);
    this_00 = this->SceneUniforms;
    (this->ShaderParameters).Common.InViews = pFVar8;
    pFVar9 = RendererViewData::FParameters::FTypeInfo::GetStructMetadata();
    FSceneUniformBuffer::Set(this_00,SceneUB::ViewData._32_4_,&this->ShaderParameters,pFVar9->Size);
    local_58.Buffer = this->DeformingInstanceViewMaskRDG;
    local_58._padding_._1_1_ = 0;
    local_58._padding_._0_1_ = 0;
    local_58._padding_._2_1_ = 0;
    if ((((local_58.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_58._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_58,SkipBarrier);
    iVar5 = (this->ShaderParameters).Common.MaxPersistentViewId;
    uVar2 = (this->ShaderParameters).Common.NumSceneRendererPrimaryViews;
    uVar3 = (this->ShaderParameters).Common.InstanceMaskWordStride;
    uVar4 = *(undefined4 *)&(this->ShaderParameters).Common.field_0x14;
    uVar1 = *(undefined8 *)&(this->ShaderParameters).Common.field_0x18;
    (this->WriterShaderParameters).Common.InViews = (this->ShaderParameters).Common.InViews;
    (this->WriterShaderParameters).Common.MaxPersistentViewId = iVar5;
    (this->WriterShaderParameters).Common.NumSceneRendererPrimaryViews = uVar2;
    (this->WriterShaderParameters).OutDeformingInstanceViewMask = pFVar7;
    (this->WriterShaderParameters).Common.InstanceMaskWordStride = uVar3;
    *(undefined4 *)&(this->WriterShaderParameters).Common.field_0x14 = uVar4;
    *(undefined8 *)&(this->WriterShaderParameters).Common.field_0x18 = uVar1;
  }
  return;
}

// RegisterPrimaryView @ 145783de0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

int __thiscall
FRendererViewDataManager::RegisterPrimaryView(FRendererViewDataManager *this,FViewInfo *param_1)

{
  atomic<int> *paVar1;
  FPreviousViewInfo *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  int iVar11;
  FPackedView *pFVar12;
  FPackedView *pFVar13;
  undefined8 *puVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  atomic<int> aVar18;
  undefined1 auStack_19d8 [32];
  longlong local_19b8;
  longlong local_19b0;
  TIntPoint<int>_u_0 local_19a8;
  int local_19a0;
  int iStack_199c;
  undefined8 local_1998 [122];
  FPackedView local_15c8;
  FPackedViewParams local_11f8;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x145783e04;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_19d8;
  FViewMatrices::FViewMatrices(&local_11f8.ViewMatrices);
  FViewMatrices::FViewMatrices(&local_11f8.PrevViewMatrices);
  local_11f8.LODScaleFactor = 1.0;
  local_11f8.StreamingPriorityCategory = 0;
  local_11f8.MinBoundsRadius = 0.0;
  local_11f8.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_11f8.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_11f8.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_11f8.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_11f8.ViewLODDistanceFactor = 1.0;
  local_11f8.Flags = 2;
  local_11f8.CullingViewOrigin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_11f8.CullingViewOrigin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  lVar17 = 7;
  local_11f8.CullingViewOrigin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_11f8.GlobalClippingPlane._padding_ = 0;
  local_11f8.GlobalClippingPlane._padding_ = 0;
  local_11f8.TargetLayerIndex = -1;
  local_11f8.PrevTargetLayerIndex = -1;
  aVar18 = (atomic<int>)0x0;
  local_11f8.TargetMipLevel = 0;
  local_11f8.TargetMipCount = 1;
  local_11f8.RangeBasedCullingDistance = 0.0;
  local_11f8.MaxPixelsPerEdgeMultipler = 1.0;
  local_11f8.bUseCullingViewOverrides = false;
  local_11f8.CullingViewScreenMultipleSq = 0.0;
  local_11f8.CullingViewMinRadiusTestFactorSq = 0.0;
  local_11f8.GlobalClippingPlane._padding_ = 0;
  local_11f8.GlobalClippingPlane.W = 0.0;
  local_11f8.InstanceOcclusionQueryMask = 0;
  local_11f8.LightingChannelMask = 7;
  local_11f8.bUseLightingChannelMask = false;
  local_11f8.bUseCurrentPreTranslationForHZB = false;
  local_11f8.SceneRendererPrimaryViewId = -1;
  local_11f8.DynamicDepthCullRange.field0_0x0._s_0.X = 0.0;
  local_11f8.DynamicDepthCullRange.field0_0x0._s_0.Y = 3.4028235e+38;
  memcpy(&local_11f8,&param_1->_padding_,0x880);
  pFVar2 = param_1->PrevViewInfo;
  memcpy(&local_11f8.PrevViewMatrices,&pFVar2->ViewMatrices,0x880);
  local_11f8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)((TIntPoint<int>_u_0 *)((longlong)&(param_1->ViewRect).field0_0x0 + 8))->_s_0
  ;
  local_11f8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)*(undefined8 *)&(param_1->ViewRect).field0_0x0;
  local_11f8.ViewLODDistanceFactor = *(float *)&param_1->_padding_;
  local_19a8._s_0.Y = local_11f8.ViewRect.field0_0x0._12_4_ - local_11f8.ViewRect.field0_0x0._4_4_;
  local_19a8._s_0.X = local_11f8.ViewRect.field0_0x0._8_4_ - local_11f8.ViewRect.field0_0x0._0_4_;
  local_11f8.RasterContextSize.field0_0x0 = local_19a8;
  iStack_199c = *(int *)((longlong)&(pFVar2->ViewRect).field0_0x0 + 0xc) -
                *(int *)((longlong)&(pFVar2->ViewRect).field0_0x0 + 4);
  local_19a0 = *(int *)((longlong)&(pFVar2->ViewRect).field0_0x0 + 8) -
               *(int *)&(pFVar2->ViewRect).field0_0x0;
  local_11f8.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_11f8.HZBTestViewRect.field0_0x0._12_4_ = iStack_199c;
  local_11f8.HZBTestViewRect.field0_0x0._8_4_ = local_19a0;
  local_11f8.InstanceOcclusionQueryMask = pFVar2->InstanceOcclusionQueryMask;
  local_11f8.SceneRendererPrimaryViewId = param_1->SceneRendererPrimaryViewId;
  local_19a8 = (TIntPoint<int>_u_0)0x0;
  if (this->bIsEnabled != false) {
    LOCK();
    paVar1 = &this->NumRegisteredViews;
    aVar18 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (((this->CullingViews).ArrayNum < (int)aVar18) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ViewIndex <= CullingViews.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ViewData.cpp"
                            ,0x6b,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      iVar11 = (*pcVar3)();
      return iVar11;
    }
    pFVar12 = Nanite::CreatePackedView(&local_15c8,&local_11f8);
    lVar15 = 7;
    puVar8 = local_1998;
    do {
      puVar14 = puVar8;
      pFVar13 = pFVar12;
      uVar4 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[0] + 2);
      uVar5 = *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[1];
      uVar6 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[1] + 2);
      *puVar14 = *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[0];
      puVar14[1] = uVar4;
      uVar4 = *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[2];
      uVar7 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[2] + 2);
      puVar14[2] = uVar5;
      puVar14[3] = uVar6;
      uVar5 = *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[3];
      uVar6 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[3] + 2);
      puVar14[4] = uVar4;
      puVar14[5] = uVar7;
      uVar4 = *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[0];
      uVar7 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[0] + 2);
      puVar14[6] = uVar5;
      puVar14[7] = uVar6;
      uVar5 = *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[1];
      uVar6 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[1] + 2);
      puVar14[8] = uVar4;
      puVar14[9] = uVar7;
      uVar4 = *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[2];
      uVar7 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[2] + 2);
      puVar14[10] = uVar5;
      puVar14[0xb] = uVar6;
      uVar5 = *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[3];
      uVar6 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[3] + 2);
      puVar14[0xc] = uVar4;
      puVar14[0xd] = uVar7;
      puVar14[0xe] = uVar5;
      puVar14[0xf] = uVar6;
      lVar15 = lVar15 + -1;
      pFVar12 = (FPackedView *)&pFVar13->TranslatedWorldToView;
      puVar8 = puVar14 + 0x10;
    } while (lVar15 != 0);
    uVar4 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[0] + 2);
    uVar5 = *(undefined8 *)(pFVar13->TranslatedWorldToView).M[1];
    uVar6 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[1] + 2);
    puVar14[0x10] = *(undefined8 *)(pFVar13->TranslatedWorldToView).M[0];
    puVar14[0x11] = uVar4;
    uVar4 = *(undefined8 *)(pFVar13->TranslatedWorldToView).M[2];
    uVar7 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[2] + 2);
    puVar14[0x12] = uVar5;
    puVar14[0x13] = uVar6;
    uVar5 = *(undefined8 *)(pFVar13->TranslatedWorldToView).M[3];
    uVar6 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[3] + 2);
    puVar14[0x14] = uVar4;
    puVar14[0x15] = uVar7;
    uVar4 = *(undefined8 *)(pFVar13->TranslatedWorldToClip).M[0];
    uVar7 = *(undefined8 *)((pFVar13->TranslatedWorldToClip).M[0] + 2);
    puVar14[0x16] = uVar5;
    puVar14[0x17] = uVar6;
    puVar14[0x18] = uVar4;
    puVar14[0x19] = uVar7;
    iVar11 = (this->CullingViews).ArrayNum;
    local_19b0 = (longlong)iVar11;
    if ((int)aVar18 < 0 || iVar11 <= (int)aVar18) {
      local_19b8 = (longlong)(int)aVar18;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return iVar11;
      }
    }
    puVar8 = local_1998;
    pFVar9 = (this->CullingViews).AllocatorInstance.Data + (longlong)(int)aVar18 * 0x3d0;
    do {
      pFVar16 = pFVar9;
      puVar14 = puVar8;
      uVar4 = puVar14[1];
      uVar5 = puVar14[2];
      uVar6 = puVar14[3];
      *(undefined8 *)pFVar16 = *puVar14;
      *(undefined8 *)(pFVar16 + 8) = uVar4;
      uVar4 = puVar14[4];
      uVar7 = puVar14[5];
      *(undefined8 *)(pFVar16 + 0x10) = uVar5;
      *(undefined8 *)(pFVar16 + 0x18) = uVar6;
      uVar5 = puVar14[6];
      uVar6 = puVar14[7];
      *(undefined8 *)(pFVar16 + 0x20) = uVar4;
      *(undefined8 *)(pFVar16 + 0x28) = uVar7;
      uVar4 = puVar14[8];
      uVar7 = puVar14[9];
      *(undefined8 *)(pFVar16 + 0x30) = uVar5;
      *(undefined8 *)(pFVar16 + 0x38) = uVar6;
      uVar5 = puVar14[10];
      uVar6 = puVar14[0xb];
      *(undefined8 *)(pFVar16 + 0x40) = uVar4;
      *(undefined8 *)(pFVar16 + 0x48) = uVar7;
      uVar4 = puVar14[0xc];
      uVar7 = puVar14[0xd];
      *(undefined8 *)(pFVar16 + 0x50) = uVar5;
      *(undefined8 *)(pFVar16 + 0x58) = uVar6;
      uVar5 = puVar14[0xe];
      uVar6 = puVar14[0xf];
      *(undefined8 *)(pFVar16 + 0x60) = uVar4;
      *(undefined8 *)(pFVar16 + 0x68) = uVar7;
      *(undefined8 *)(pFVar16 + 0x70) = uVar5;
      *(undefined8 *)(pFVar16 + 0x78) = uVar6;
      lVar17 = lVar17 + -1;
      puVar8 = puVar14 + 0x10;
      pFVar9 = pFVar16 + 0x80;
    } while (lVar17 != 0);
    uVar4 = puVar14[0x11];
    uVar5 = puVar14[0x12];
    uVar6 = puVar14[0x13];
    *(undefined8 *)(pFVar16 + 0x80) = puVar14[0x10];
    *(undefined8 *)(pFVar16 + 0x88) = uVar4;
    uVar4 = puVar14[0x14];
    uVar7 = puVar14[0x15];
    *(undefined8 *)(pFVar16 + 0x90) = uVar5;
    *(undefined8 *)(pFVar16 + 0x98) = uVar6;
    uVar5 = puVar14[0x16];
    uVar6 = puVar14[0x17];
    *(undefined8 *)(pFVar16 + 0xa0) = uVar4;
    *(undefined8 *)(pFVar16 + 0xa8) = uVar7;
    uVar4 = puVar14[0x18];
    uVar7 = puVar14[0x19];
    *(undefined8 *)(pFVar16 + 0xb0) = uVar5;
    *(undefined8 *)(pFVar16 + 0xb8) = uVar6;
    *(undefined8 *)(pFVar16 + 0xc0) = uVar4;
    *(undefined8 *)(pFVar16 + 200) = uVar7;
  }
  return (int)aVar18;
}

// RegisterView @ 1457841d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FRendererViewDataManager::RegisterView(FRendererViewDataManager *this,FPackedViewParams *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  int iVar11;
  FPackedView *pFVar12;
  FPackedView *pFVar13;
  undefined8 *puVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined8 local_7a8 [122];
  FPackedView local_3d8;
  
  if (this->bIsEnabled == false) {
    return 0;
  }
  LOCK();
  paVar1 = &this->NumRegisteredViews;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((this->CullingViews).ArrayNum < (int)aVar2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("ViewIndex <= CullingViews.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ViewData.cpp"
                        ,0x6b,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      iVar11 = (*pcVar3)();
      return iVar11;
    }
  }
  pFVar12 = Nanite::CreatePackedView(&local_3d8,param_1);
  lVar17 = 7;
  lVar15 = 7;
  puVar8 = local_7a8;
  do {
    puVar14 = puVar8;
    pFVar13 = pFVar12;
    uVar4 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[0] + 2);
    uVar5 = *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[1];
    uVar6 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[1] + 2);
    *puVar14 = *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[0];
    puVar14[1] = uVar4;
    uVar4 = *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[2];
    uVar7 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[2] + 2);
    puVar14[2] = uVar5;
    puVar14[3] = uVar6;
    uVar5 = *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[3];
    uVar6 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[3] + 2);
    puVar14[4] = uVar4;
    puVar14[5] = uVar7;
    uVar4 = *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[0];
    uVar7 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[0] + 2);
    puVar14[6] = uVar5;
    puVar14[7] = uVar6;
    uVar5 = *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[1];
    uVar6 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[1] + 2);
    puVar14[8] = uVar4;
    puVar14[9] = uVar7;
    uVar4 = *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[2];
    uVar7 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[2] + 2);
    puVar14[10] = uVar5;
    puVar14[0xb] = uVar6;
    uVar5 = *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[3];
    uVar6 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[3] + 2);
    puVar14[0xc] = uVar4;
    puVar14[0xd] = uVar7;
    puVar14[0xe] = uVar5;
    puVar14[0xf] = uVar6;
    lVar15 = lVar15 + -1;
    pFVar12 = (FPackedView *)&pFVar13->TranslatedWorldToView;
    puVar8 = puVar14 + 0x10;
  } while (lVar15 != 0);
  uVar4 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[0] + 2);
  iVar11 = (this->CullingViews).ArrayNum;
  uVar5 = *(undefined8 *)(pFVar13->TranslatedWorldToView).M[1];
  uVar6 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[1] + 2);
  puVar14[0x10] = *(undefined8 *)(pFVar13->TranslatedWorldToView).M[0];
  puVar14[0x11] = uVar4;
  uVar4 = *(undefined8 *)(pFVar13->TranslatedWorldToView).M[2];
  uVar7 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[2] + 2);
  puVar14[0x12] = uVar5;
  puVar14[0x13] = uVar6;
  uVar5 = *(undefined8 *)(pFVar13->TranslatedWorldToView).M[3];
  uVar6 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[3] + 2);
  puVar14[0x14] = uVar4;
  puVar14[0x15] = uVar7;
  uVar4 = *(undefined8 *)(pFVar13->TranslatedWorldToClip).M[0];
  uVar7 = *(undefined8 *)((pFVar13->TranslatedWorldToClip).M[0] + 2);
  puVar14[0x16] = uVar5;
  puVar14[0x17] = uVar6;
  puVar14[0x18] = uVar4;
  puVar14[0x19] = uVar7;
  if ((int)aVar2 < 0 || iVar11 <= (int)aVar2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      iVar11 = (*pcVar3)();
      return iVar11;
    }
  }
  puVar8 = local_7a8;
  pFVar9 = (this->CullingViews).AllocatorInstance.Data + (longlong)(int)aVar2 * 0x3d0;
  do {
    pFVar16 = pFVar9;
    puVar14 = puVar8;
    uVar4 = puVar14[1];
    uVar5 = puVar14[2];
    uVar6 = puVar14[3];
    *(undefined8 *)pFVar16 = *puVar14;
    *(undefined8 *)(pFVar16 + 8) = uVar4;
    uVar4 = puVar14[4];
    uVar7 = puVar14[5];
    *(undefined8 *)(pFVar16 + 0x10) = uVar5;
    *(undefined8 *)(pFVar16 + 0x18) = uVar6;
    uVar5 = puVar14[6];
    uVar6 = puVar14[7];
    *(undefined8 *)(pFVar16 + 0x20) = uVar4;
    *(undefined8 *)(pFVar16 + 0x28) = uVar7;
    uVar4 = puVar14[8];
    uVar7 = puVar14[9];
    *(undefined8 *)(pFVar16 + 0x30) = uVar5;
    *(undefined8 *)(pFVar16 + 0x38) = uVar6;
    uVar5 = puVar14[10];
    uVar6 = puVar14[0xb];
    *(undefined8 *)(pFVar16 + 0x40) = uVar4;
    *(undefined8 *)(pFVar16 + 0x48) = uVar7;
    uVar4 = puVar14[0xc];
    uVar7 = puVar14[0xd];
    *(undefined8 *)(pFVar16 + 0x50) = uVar5;
    *(undefined8 *)(pFVar16 + 0x58) = uVar6;
    uVar5 = puVar14[0xe];
    uVar6 = puVar14[0xf];
    *(undefined8 *)(pFVar16 + 0x60) = uVar4;
    *(undefined8 *)(pFVar16 + 0x68) = uVar7;
    *(undefined8 *)(pFVar16 + 0x70) = uVar5;
    *(undefined8 *)(pFVar16 + 0x78) = uVar6;
    lVar17 = lVar17 + -1;
    puVar8 = puVar14 + 0x10;
    pFVar9 = pFVar16 + 0x80;
  } while (lVar17 != 0);
  uVar4 = puVar14[0x11];
  uVar5 = puVar14[0x12];
  uVar6 = puVar14[0x13];
  *(undefined8 *)(pFVar16 + 0x80) = puVar14[0x10];
  *(undefined8 *)(pFVar16 + 0x88) = uVar4;
  uVar4 = puVar14[0x14];
  uVar7 = puVar14[0x15];
  *(undefined8 *)(pFVar16 + 0x90) = uVar5;
  *(undefined8 *)(pFVar16 + 0x98) = uVar6;
  uVar5 = puVar14[0x16];
  uVar6 = puVar14[0x17];
  *(undefined8 *)(pFVar16 + 0xa0) = uVar4;
  *(undefined8 *)(pFVar16 + 0xa8) = uVar7;
  uVar4 = puVar14[0x18];
  uVar7 = puVar14[0x19];
  *(undefined8 *)(pFVar16 + 0xb0) = uVar5;
  *(undefined8 *)(pFVar16 + 0xb8) = uVar6;
  *(undefined8 *)(pFVar16 + 0xc0) = uVar4;
  *(undefined8 *)(pFVar16 + 200) = uVar7;
  return (int)aVar2;
}

