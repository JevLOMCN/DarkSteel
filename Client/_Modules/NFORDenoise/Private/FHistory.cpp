// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 4

// ~FHistory @ 14e9d89c0

void __thiscall FNFORDenoiser::FHistory::~FHistory(FHistory *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FHistory_FNFORDenoiser__6B_;
  DestructItems<FExternalFrameCache,int>
            ((FExternalFrameCache *)(this->FrameCaches).AllocatorInstance.Data,
             (this->FrameCaches).ArrayNum);
  pFVar1 = (this->FrameCaches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ =
       (longlong)&___7IHistory_IPathTracingSpatialTemporalDenoiser_Private_Renderer_UE__6B_;
  return;
}

// AddFrame @ 14e9ddde0

/* WARNING: Removing unreachable block (ram,0x00014e9de24f) */
/* WARNING: Removing unreachable block (ram,0x00014e9de25f) */
/* WARNING: Removing unreachable block (ram,0x00014e9de26f) */
/* WARNING: Removing unreachable block (ram,0x00014e9de27f) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNFORDenoiser::FHistory::AddFrame
          (FHistory *this,FRDGBuilder *param_1,FSceneView *param_2,FInputs *param_3)

{
  TArray<FExternalFrameCache,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  FExternalFrameCache *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FRDGScope *this_00;
  FRDGTexture *pFVar10;
  FRDGTexture *pFVar11;
  FRDGTexture *pFVar12;
  FRDGTexture *pFVar13;
  FRDGTexture *pFVar14;
  FExternalFrameCache local_d0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a8;
  char local_98;
  FRDGFrameCache local_90;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_> local_68;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  iVar8 = NFORDenoise::GetFrameCount(param_2);
  if (0 < iVar8) {
    cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_98 = '\0';
    if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_48 = 0;
        uStack_44 = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._12_8_ = ZEXT48(uStack_4c);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_AddFrame;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_AddFrame;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x83;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FNFORDenoiser::FHistory::AddFrame'::__l10::Desc::operator()<>'::__l3::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_68._Myfirst._Val =
           &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FNFORDenoiser::FHistory::AddFrame(FRDGBuilder&___ptr64,FSceneView_const&___ptr64,UE::Renderer::Private::IPathTracingSpatialTemporalDenoiser::FInputs_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
            ::__l2::Desc;
      local_a8.State = (FRDGScopeState *)param_1;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_00;
      local_a8.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_68);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_98 = '\x01';
    }
    pFVar10 = FRDGBuilder::CreateTexture
                        (param_1,&param_3->ColorTex->Desc,L"NFOR.Radiance",MultiFrame);
    local_90.Radiance = pFVar10;
    pFVar11 = FRDGBuilder::CreateTexture
                        (param_1,&param_3->VarianceTex->Desc,L"NFOR.RadianceVariance",MultiFrame);
    local_90.RadianceVariance = pFVar11;
    pFVar12 = FRDGBuilder::CreateTexture
                        (param_1,&param_3->AlbedoTex->Desc,L"NFOR.Albedo",MultiFrame);
    local_90.Albedo = pFVar12;
    pFVar13 = FRDGBuilder::CreateTexture
                        (param_1,&param_3->NormalTex->Desc,L"NFOR.Normal",MultiFrame);
    local_90.Normal = pFVar13;
    pFVar14 = FRDGBuilder::CreateTexture(param_1,&param_3->DepthTex->Desc,L"NFOR.Depth",MultiFrame);
    local_90.Depth = pFVar14;
    AddCopyTexturePass(param_1,param_3->ColorTex,pFVar10,UE::Math::TIntPoint<int>::ZeroValue,
                       UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue);
    AddCopyTexturePass(param_1,param_3->VarianceTex,pFVar11,UE::Math::TIntPoint<int>::ZeroValue,
                       UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue);
    AddCopyTexturePass(param_1,param_3->AlbedoTex,pFVar12,UE::Math::TIntPoint<int>::ZeroValue,
                       UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue);
    AddCopyTexturePass(param_1,param_3->NormalTex,pFVar13,UE::Math::TIntPoint<int>::ZeroValue,
                       UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue);
    AddCopyTexturePass(param_1,param_3->DepthTex,pFVar14,UE::Math::TIntPoint<int>::ZeroValue,
                       UE::Math::TIntPoint<int>::ZeroValue,UE::Math::TIntPoint<int>::ZeroValue);
    FRDGFrameCache::ToExternalResource(&local_90,&local_d0,param_1,param_2);
    pTVar1 = &this->FrameCaches;
    if (iVar8 <= (this->FrameCaches).ArrayNum) {
      do {
        if (((this->FrameCaches).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (*(longlong **)(pFVar4 + 0x20) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(pFVar4 + 0x20) + 0x38))();
        }
        if (*(longlong **)(pFVar4 + 0x18) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(pFVar4 + 0x18) + 0x38))();
        }
        if (*(longlong **)(pFVar4 + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(pFVar4 + 0x10) + 0x38))();
        }
        if (*(longlong **)(pFVar4 + 8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(pFVar4 + 8) + 0x38))();
        }
        if (*(longlong **)pFVar4 != (longlong *)0x0) {
          (**(code **)(**(longlong **)pFVar4 + 0x38))();
        }
        iVar9 = (this->FrameCaches).ArrayNum + -1;
        if (iVar9 != 0) {
          memmove(pFVar4,pFVar4 + 0x28,(longlong)iVar9 * 0x28);
        }
        piVar2 = &(this->FrameCaches).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&pTVar1->AllocatorInstance,(this->FrameCaches).ArrayNum,
                   &(this->FrameCaches).ArrayMax);
      } while (iVar8 <= (this->FrameCaches).ArrayNum);
    }
    pFVar5 = (FExternalFrameCache *)(pTVar1->AllocatorInstance).Data;
    if (((pFVar5 <= &local_d0) && (&local_d0 < pFVar5 + (this->FrameCaches).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->FrameCaches).ArrayNum;
    piVar2 = &(this->FrameCaches).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar1->AllocatorInstance,piVar2);
      (this->FrameCaches).ArrayNum = iVar8;
    }
    (this->FrameCaches).ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x28;
    *(undefined8 *)pFVar4 = 0;
    *(IPooledRenderTarget **)pFVar4 = local_d0.Radiance.Reference;
    *(undefined8 *)(pFVar4 + 8) = 0;
    *(IPooledRenderTarget **)(pFVar4 + 8) = local_d0.RadianceVariance.Reference;
    *(undefined8 *)(pFVar4 + 0x10) = 0;
    *(IPooledRenderTarget **)(pFVar4 + 0x10) = local_d0.Albedo.Reference;
    *(undefined8 *)(pFVar4 + 0x18) = 0;
    *(IPooledRenderTarget **)(pFVar4 + 0x18) = local_d0.Normal.Reference;
    *(undefined8 *)(pFVar4 + 0x20) = 0;
    *(IPooledRenderTarget **)(pFVar4 + 0x20) = local_d0.Depth.Reference;
    local_d0.Depth.Reference = (IPooledRenderTarget *)0x0;
    local_d0.Normal.Reference = (IPooledRenderTarget *)0x0;
    local_d0.Albedo.Reference = (IPooledRenderTarget *)0x0;
    local_d0.RadianceVariance.Reference = (IPooledRenderTarget *)0x0;
    local_d0.Radiance.Reference = (IPooledRenderTarget *)0x0;
    if (local_98 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a8);
    }
  }
  return;
}

// FetchFrames @ 14e9ecc20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNFORDenoiser::FHistory::FetchFrames
          (FHistory *this,FRDGBuilder *param_1,FSceneView *param_2,
          TArray<NFORDenoise::FFeatureDesc,TSizedDefaultAllocator<32>_> *param_3,
          TArray<NFORDenoise::FFeatureDesc,TSizedDefaultAllocator<32>_> *param_4,bool param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  FRDGFrameCache local_58;
  
  uVar5 = (this->FrameCaches).ArrayNum;
  uVar8 = (ulonglong)uVar5;
  if (0 < (int)uVar5) {
    if (param_5) {
      uVar5 = uVar5 - 1;
      lVar7 = (longlong)(int)uVar5 * 0x28;
      do {
        uVar6 = 0;
        if ((int)uVar5 < (this->FrameCaches).ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar4 = (this->FrameCaches).AllocatorInstance.Data + lVar7;
        local_58.Radiance =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)pFVar4,None);
        local_58.RadianceVariance =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar4 + 8),None);
        local_58.Albedo =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar4 + 0x10),None);
        local_58.Normal =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar4 + 0x18),None);
        local_58.Depth =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar4 + 0x20),None);
        FRDGFrameCache::AppendToNFORBuffer(&local_58,param_3,param_4);
        uVar5 = uVar5 - 1;
        lVar7 = lVar7 + -0x28;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    else {
      uVar6 = 0;
      lVar7 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < (this->FrameCaches).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar4 = (this->FrameCaches).AllocatorInstance.Data + lVar7;
        local_58.Radiance =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)pFVar4,None);
        local_58.RadianceVariance =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar4 + 8),None);
        local_58.Albedo =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar4 + 0x10),None);
        local_58.Normal =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar4 + 0x18),None);
        local_58.Depth =
             FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)(pFVar4 + 0x20),None);
        FRDGFrameCache::AppendToNFORBuffer(&local_58,param_3,param_4);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x28;
      } while ((int)uVar6 < (int)uVar5);
    }
  }
  return;
}

// GetDebugName @ 14e9f0bd0

wchar_t * __thiscall FNFORDenoiser::FHistory::GetDebugName(FHistory *this)

{
  return this->DebugName;
}

