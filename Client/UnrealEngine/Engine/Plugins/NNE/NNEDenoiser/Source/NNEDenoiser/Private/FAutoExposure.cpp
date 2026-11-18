// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 3

// ~FAutoExposure @ 14eae6ad0

void __thiscall UE::NNEDenoiser::Private::FAutoExposure::~FAutoExposure(FAutoExposure *this)

{
  return;
}

// EnqueueRDG @ 14eaf28c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FAutoExposure::EnqueueRDG
          (FAutoExposure *this,FRDGBuilder *param_1,FRDGTexture *param_2,FRDGBuffer *param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  FRDGBufferUAV *pFVar7;
  FGlobalShaderMap *pFVar8;
  FShaderType *pFVar9;
  FName FVar10;
  FRDGScope *pFVar11;
  FRDGEventName *pFVar12;
  FShaderParametersMetadata *pFVar13;
  FRDGBufferSRV *pFVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS,FShaderMapPointerTable>
  local_398;
  undefined8 local_388;
  int local_378;
  undefined8 *local_370;
  undefined8 *local_368;
  undefined8 *local_360;
  int local_358;
  int local_350;
  int iStack_34c;
  uint local_340;
  FRDGBuffer *local_338;
  FRDGBuffer *local_330;
  FRDGBuffer *local_328;
  TIntVector3<int>_u_0 local_318;
  TIntVector3<int>_u_0 local_308;
  FRDGBufferUAVDesc local_2f8;
  FRDGBufferUAVDesc local_2e8;
  FRDGBufferUAVDesc local_2d8;
  FRDGBufferUAVDesc local_2c8;
  TIntVector3<int>_u_0 local_2b8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2a8;
  undefined1 local_298;
  TRDGEventScopeGuard<FRDGScope_RHI> local_290;
  undefined1 local_280;
  TRDGEventScopeGuard<FRDGScope_RHI> local_278;
  undefined1 local_268;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_258;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_248;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_238;
  FRDGBufferSRVDesc local_228;
  FRDGBufferSRVDesc local_208;
  FRDGBufferSRVDesc local_1e8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_> local_1c8;
  TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS,FShaderMapPointerTable>
  local_1b8;
  FString local_1a8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_> local_198;
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  FString local_170;
  FAutoExposureReduceFinalCS *local_160;
  EBufferUsageFlags EStack_158;
  undefined4 uStack_154;
  FShaderParametersMetadata *local_150;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_> local_148;
  FAutoExposureReduceFinalCS *local_138;
  FShaderMapBase *pFStack_130;
  FShaderParametersMetadata *local_128;
  FAutoExposureReduceFinalCS *local_120;
  EBufferUsageFlags EStack_118;
  undefined4 uStack_114;
  FShaderParametersMetadata *local_110;
  TShaderRefBase<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS,FShaderMapPointerTable>
  local_108;
  FString local_f8;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  FRDGEventName local_88;
  FRDGEventName local_70;
  FRDGEventName local_58;
  
  local_350 = *(int *)&(param_2->Desc).field_0x28;
  local_358 = *(int *)&(param_2->Desc).field_0x24;
  puVar15 = (undefined8 *)0x0;
  local_398.ShaderMap._0_4_ = 0x4109;
  local_388 = 0;
  local_150 = (FShaderParametersMetadata *)0x0;
  iVar18 = (int)((local_358 + 0xf >> 0x1f & 0xfU) + local_358 + 0xf) >> 4;
  local_378 = (int)(local_350 + 0xf + (local_350 + 0xf >> 0x1f & 0xfU)) >> 4;
  local_340 = local_378 * iVar18;
  local_398.ShaderContent = (FAutoExposureReduceFinalCS *)CONCAT44(local_340,4);
  uVar4 = (int)(local_340 + 0x1f + ((int)(local_340 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
  local_160 = local_398.ShaderContent;
  EStack_158 = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  uStack_154 = local_398.ShaderMap._4_4_;
  uVar16 = 0x20;
  if ((int)uVar4 < 0x20) {
    uVar16 = uVar4;
  }
  local_338 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)&local_160,L"AutoExposureOutputBins",None);
  local_398.ShaderMap._0_4_ = 0x4109;
  local_398.ShaderContent = (FAutoExposureReduceFinalCS *)CONCAT44(uVar16,4);
  local_388 = 0;
  local_120 = local_398.ShaderContent;
  EStack_118 = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  uStack_114 = local_398.ShaderMap._4_4_;
  local_110 = (FShaderParametersMetadata *)0x0;
  local_330 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)&local_120,L"AutoExposureOutputSums",None);
  local_398.ShaderMap =
       (FShaderMapBase *)
       CONCAT44(local_398.ShaderMap._4_4_,VertexBuffer|ShaderResource|UnorderedAccess|Static);
  local_398.ShaderContent = (FAutoExposureReduceFinalCS *)CONCAT44(uVar16,4);
  local_388 = 0;
  local_138 = local_398.ShaderContent;
  pFStack_130 = local_398.ShaderMap;
  local_128 = (FShaderParametersMetadata *)0x0;
  local_328 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)&local_138,L"AutoExposureOutputCounts",None);
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[3] = 0;
    *puVar6 = &
              ___7__TObject_VFParameters_FAutoExposureDownsampleCS_Internal_NNEDenoiserShaders_UE___FRDGAllocator__6B_
    ;
    puVar6[5] = 0;
    puVar15 = puVar6;
  }
  plVar17 = &param_1->_padding_;
  local_370 = puVar15;
  if ((((undefined8 **)param_1->_padding_ <= &local_370) &&
      (&local_370 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (int)param_1->_padding_;
  if (iVar5 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)plVar17,(int *)((longlong)&param_1->_padding_ + 4)
                      );
  }
  *(int *)&param_1->_padding_ = iVar5 + 1;
  local_2f8._padding_._0_2_ = 0xd;
  local_2f8._padding_._2_1_ = 0;
  *(undefined8 **)(*plVar17 + (longlong)iVar5 * 8) = local_370;
  ((FParameters *)(puVar15 + 2))->InputTextureWidth = local_358;
  *(int *)((longlong)puVar15 + 0x14) = local_350;
  *(int *)(puVar15 + 4) = iVar18;
  *(int *)((longlong)puVar15 + 0x24) = local_378;
  local_2f8.Buffer = local_338;
  puVar15[3] = param_2;
  pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_2f8,None);
  puVar15[5] = pFVar7;
  pFVar8 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar9 = (FShaderType *)NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar8,&local_258,pFVar9,0);
  if (local_258.ShaderContent == (FShader *)0x0) {
    FVar10 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_188);
    ::FName::ToString((FName *)FVar10,&local_170);
    NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS::GetStaticType();
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar3 = false;
  local_108.ShaderContent = (FAutoExposureDownsampleCS *)local_258.ShaderContent;
  local_108.ShaderMap = local_258.ShaderMap;
  local_298 = 0;
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x76;
      local_d8 = 0x54dc4fc0;
      uStack_d4 = 1;
      ::Desc._padding_._0_4_ = 0x54dc4fc0;
      ::Desc._padding_._4_4_ = uStack_dc;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_AutoExposure_Do;
      ::Desc._padding_ = (longlong)u_AutoExposure_Do;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::NNEDenoiser::Private::FAutoExposure::EnqueueRDG'::__l8::Desc::operator()<>'::
             __l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_148._Myfirst._Val = &::Desc;
    local_2a8.State = (FRDGScopeState *)param_1;
    pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar11;
    local_2a8.Scope = pFVar11;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24>_const_*,std::tuple<>_>_>
              (&(pFVar11->Impl).Impl,(FRDGScopeState *)param_1,&local_148);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar3 = true;
    local_298 = 1;
  }
  iStack_34c = local_378;
  local_350 = iVar18;
  pFVar12 = FRDGEventName::FRDGEventName(&local_88,1,L"AutoExposure.Downsample");
  pFVar13 = NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS::FParameters::FTypeInfo::
            GetStructMetadata();
  local_2b8._0_8_ = CONCAT44(iStack_34c,local_350);
  local_2b8._s_0.Z = 1;
  FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureDownsampleCS>
            (param_1,pFVar12,NeverCull|Compute,&local_108,pFVar13,(FParameters *)(puVar15 + 2),
             (TIntVector3<int> *)&local_2b8._s_0);
  if (local_88.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2a8);
  }
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x40,0x10);
  puVar15 = (undefined8 *)0x0;
  if (puVar6 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[3] = 0;
    *puVar6 = &
              ___7__TObject_VFParameters_FAutoExposureReduceCS_Internal_NNEDenoiserShaders_UE___FRDGAllocator__6B_
    ;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar15 = puVar6;
  }
  local_368 = puVar15;
  if ((((undefined8 **)*plVar17 <= &local_368) &&
      (&local_368 < (undefined8 **)*plVar17 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar18 = (int)param_1->_padding_;
  if (iVar18 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar18 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar17,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar18 + 1;
  local_228._padding_._0_1_ = 0xd;
  local_228._padding_._4_4_ = 0;
  local_228._padding_._0_4_ = 0xffffffff;
  *(undefined8 **)(*plVar17 + (longlong)iVar18 * 8) = local_368;
  ((FParameters *)(puVar15 + 2))->InputSize = local_340;
  local_228.Buffer = local_338;
  local_228._padding_ = 0;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_228);
  puVar15[3] = pFVar14;
  local_2e8.Buffer = local_330;
  local_2e8._padding_._0_2_ = 0xd;
  local_2e8._padding_._2_1_ = 0;
  pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_2e8,None);
  puVar15[4] = pFVar7;
  local_2d8.Buffer = local_328;
  local_2d8._padding_._0_2_ = 0x1d;
  local_2d8._padding_._2_1_ = 0;
  pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_2d8,None);
  puVar15[5] = pFVar7;
  *(uint *)(puVar15 + 6) = uVar16 << 4;
  pFVar8 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar9 = (FShaderType *)NNEDenoiserShaders::Internal::FAutoExposureReduceCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar8,&local_248,pFVar9,0);
  if (local_248.ShaderContent == (FShader *)0x0) {
    FVar10 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_180);
    ::FName::ToString((FName *)FVar10,&local_f8);
    NNEDenoiserShaders::Internal::FAutoExposureReduceCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  NNEDenoiserShaders::Internal::FAutoExposureReduceCS::GetStaticType();
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar3 = false;
  local_1b8.ShaderContent = (FAutoExposureReduceCS *)local_248.ShaderContent;
  local_1b8.ShaderMap = local_248.ShaderMap;
  local_280 = 0;
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x8d;
      local_b8 = 0x54dc5030;
      uStack_b4 = 1;
      ::Desc._padding_._0_4_ = 0x54dc5030;
      ::Desc._padding_._4_4_ = uStack_bc;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_AutoExposure_Re;
      ::Desc._padding_ = (longlong)u_AutoExposure_Re;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::NNEDenoiser::Private::FAutoExposure::EnqueueRDG'::__l14::<lambda_2>::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_1c8._Myfirst._Val = &::Desc;
    local_290.State = (FRDGScopeState *)param_1;
    pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar11;
    local_290.Scope = pFVar11;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_>_>
              (&(pFVar11->Impl).Impl,(FRDGScopeState *)param_1,&local_1c8);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar3 = true;
    local_280 = 1;
  }
  pFVar12 = FRDGEventName::FRDGEventName(&local_70,1,L"AutoExposure.Recude");
  pFVar13 = NNEDenoiserShaders::Internal::FAutoExposureReduceCS::FParameters::FTypeInfo::
            GetStructMetadata();
  local_318._s_0.Y = 1;
  local_318._s_0.Z = 1;
  local_318._s_0.X = uVar16;
  FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceCS>
            (param_1,pFVar12,NeverCull|Compute,&local_1b8,pFVar13,(FParameters *)(puVar15 + 2),
             (TIntVector3<int> *)&local_318._s_0);
  if (local_70.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_290);
  }
  puVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    *puVar15 = &
               ___7__TObject_VFParameters_FAutoExposureReduceFinalCS_Internal_NNEDenoiserShaders_UE___FRDGAllocator__6B_
    ;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
  }
  local_360 = puVar15;
  if ((((undefined8 **)*plVar17 <= &local_360) &&
      (&local_360 < (undefined8 **)*plVar17 + *(int *)((longlong)&param_1->_padding_ + 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar18 = (int)param_1->_padding_;
  if (iVar18 == *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar18 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)plVar17,
                        (int *)((longlong)&param_1->_padding_ + 4));
  }
  *(int *)&param_1->_padding_ = iVar18 + 1;
  local_208._padding_._0_1_ = 0xd;
  local_208._padding_._4_4_ = 0;
  local_208._padding_._0_4_ = 0xffffffff;
  *(undefined8 **)(*plVar17 + (longlong)iVar18 * 8) = local_360;
  ((FParameters *)(puVar15 + 2))->InputSize = uVar16;
  local_208.Buffer = local_330;
  local_208._padding_ = 0;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_208);
  puVar15[3] = pFVar14;
  local_1e8.Buffer = local_328;
  local_1e8._padding_._0_1_ = 0x1d;
  local_1e8._padding_._4_4_ = 0;
  local_1e8._padding_._0_4_ = 0xffffffff;
  local_1e8._padding_ = 0;
  pFVar14 = FRDGBuilder::CreateSRV(param_1,&local_1e8);
  puVar15[4] = pFVar14;
  local_2c8._padding_._0_2_ = 0xd;
  local_2c8._padding_._2_1_ = 0;
  local_2c8.Buffer = param_3;
  pFVar7 = FRDGBuilder::CreateUAV(param_1,&local_2c8,None);
  puVar15[5] = pFVar7;
  pFVar8 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar9 = (FShaderType *)NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar8,&local_238,pFVar9,0);
  if (local_238.ShaderContent == (FShader *)0x0) {
    FVar10 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_178);
    ::FName::ToString((FName *)FVar10,&local_1a8);
    NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS::GetStaticType();
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar3 = false;
  local_398.ShaderContent = (FAutoExposureReduceFinalCS *)local_238.ShaderContent;
  local_398.ShaderMap = local_238.ShaderMap;
  local_268 = 0;
  if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0xa3;
      local_98 = 0x54dc50a0;
      uStack_94 = 1;
      ::Desc._padding_._0_4_ = 0x54dc50a0;
      ::Desc._padding_._4_4_ = uStack_9c;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_AutoExposure_Re;
      ::Desc._padding_ = (longlong)u_AutoExposure_Re;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::NNEDenoiser::Private::FAutoExposure::EnqueueRDG'::__l20::<lambda_3>::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_198._Myfirst._Val = &::Desc;
    local_278.State = (FRDGScopeState *)param_1;
    pFVar11 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar11;
    local_278.Scope = pFVar11;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<25>_const_*,std::tuple<>_>_>
              (&(pFVar11->Impl).Impl,(FRDGScopeState *)param_1,&local_198);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar11,(FRHIComputeCommandList *)param_1->_padding_);
    }
    bVar3 = true;
    local_268 = 1;
  }
  pFVar12 = FRDGEventName::FRDGEventName(&local_58,1,L"AutoExposure.RecudeFinal");
  pFVar13 = NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS::FParameters::FTypeInfo::
            GetStructMetadata();
  local_308._s_0.X = 1;
  local_308._s_0.Y = 1;
  local_308._s_0.Z = 1;
  FComputeShaderUtils::AddPass<UE::NNEDenoiserShaders::Internal::FAutoExposureReduceFinalCS>
            (param_1,pFVar12,NeverCull|Compute,&local_398,pFVar13,(FParameters *)(puVar15 + 2),
             (TIntVector3<int> *)&local_308._s_0);
  if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_278);
  }
  return;
}

// Run @ 14eafda40

void __thiscall
UE::NNEDenoiser::Private::FAutoExposure::Run
          (FAutoExposure *this,TArrayView<FLinearColor_const_,int> *param_1,TIntPoint<int> param_2,
          float *param_3)

{
  float *pfVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_110;
  uint local_104;
  int local_100;
  ForAnyElementType local_f8;
  int local_f0 [2];
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  uint local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong local_90;
  
  iVar13 = param_1->ArrayNum;
  *param_3 = 0.0;
  if (iVar13 != 0) {
    iVar13 = param_2.field0_0x0._0_4_;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0[0] = 0;
    local_f0[1] = 0;
    iVar7 = param_2.field0_0x0._4_4_ + 0xf;
    iVar15 = (int)((iVar13 + 0xf >> 0x1f & 0xfU) + iVar13 + 0xf) >> 4;
    uVar8 = (int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4;
    local_c8 = uVar8 * iVar15;
    if ((int)local_c8 < 1) {
      if ((int)local_c8 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)local_c8);
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_c8,&local_f8,local_f0,local_f0 + 1);
    }
    fVar21 = __real_3f3714ba;
    fVar4 = __real_3e59c66d;
    fVar22 = __real_3d93cd57;
    fVar24 = 0.0;
    local_104 = 0;
    if (0 < iVar15) {
      local_98 = 0;
      local_100 = 0;
      do {
        if (0 < (int)uVar8) {
          local_e0 = (longlong)iVar13;
          local_cc = 0;
          local_a0 = (ulonglong)uVar8;
          local_d0 = (uint)((longlong)local_100 / (longlong)iVar15);
          uVar12 = (longlong)local_100 / (longlong)iVar15 & 0xffffffff;
          iVar7 = (local_100 + iVar13) / iVar15;
          local_90 = (longlong)iVar15;
          lVar18 = local_e0 << 4;
          local_d4 = iVar7 - local_d0;
          local_110 = local_104;
          local_e8 = lVar18;
          local_c0 = local_98;
          do {
            local_a8 = 0x10;
            fVar23 = 0.0;
            lVar17 = (longlong)local_cc;
            iVar9 = (int)(lVar17 / (longlong)(int)uVar8);
            local_cc = param_2.field0_0x0._4_4_ + local_cc;
            iVar19 = local_cc / (int)uVar8;
            local_d8 = iVar9 * iVar13;
            local_b8 = (longlong)(local_d8 + (int)uVar12);
            lVar11 = local_b8 << 4;
            do {
              uVar14 = lVar17 / (longlong)(int)uVar8 & 0xffffffff;
              iVar20 = 0;
              iVar3 = (int)uVar12;
              uVar16 = iVar3 + local_d8;
              local_b0 = lVar11;
              do {
                if ((iVar3 < iVar7) && ((int)uVar14 < iVar19)) {
                  uVar10 = 0;
                  if ((int)uVar16 < param_1->ArrayNum) {
                    uVar10 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), lVar18 = local_e8, bVar6)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pfVar1 = (float *)((longlong)&param_1->DataPtr->field0_0x0 + lVar11);
                  fVar23 = fVar23 + pfVar1[1] * fVar21 + *pfVar1 * fVar4 + pfVar1[2] * fVar22;
                }
                lVar5 = local_c0;
                iVar20 = iVar20 + 1;
                uVar16 = uVar16 + iVar13;
                lVar11 = lVar11 + lVar18;
                uVar14 = (ulonglong)((int)uVar14 + 1);
              } while (iVar20 < 0x10);
              uVar12 = (ulonglong)(iVar3 + 1);
              local_b8 = local_b8 + 1;
              lVar11 = local_b0 + 0x10;
              local_a8 = local_a8 + -1;
            } while (local_a8 != 0);
            uVar16 = 0;
            if ((int)local_110 < local_f0[0]) {
              uVar16 = ~local_110 >> 0x1f;
            }
            local_b0 = lVar11;
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               lVar18 = local_e8, bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_110 = local_110 + iVar15;
            uVar12 = (ulonglong)local_d0;
            *(float *)(local_f8.Data + lVar5 * 4) = fVar23 / (float)((iVar19 - iVar9) * local_d4);
            local_c0 = lVar5 + local_90;
            local_a0 = local_a0 - 1;
          } while (local_a0 != 0);
          local_a0 = 0;
        }
        local_104 = local_104 + 1;
        local_100 = local_100 + iVar13;
        local_98 = local_98 + 1;
      } while ((int)local_104 < iVar15);
    }
    fVar4 = __real_3fb8aa3b;
    fVar22 = __real_322bcc77;
    lVar18 = (longlong)(int)local_c8;
    iVar13 = 0;
    uVar8 = 0;
    fVar21 = __real_3f800000;
    if (0 < lVar18) {
      lVar17 = 0;
      do {
        uVar16 = 0;
        if ((int)uVar8 < local_f0[0]) {
          uVar16 = ~uVar8 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (fVar22 < *(float *)(local_f8.Data + lVar17 * 4)) {
          fVar21 = logf(*(float *)(local_f8.Data + lVar17 * 4));
          iVar13 = iVar13 + 1;
          fVar24 = fVar24 + fVar21 * fVar4;
        }
        uVar8 = uVar8 + 1;
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar18);
      fVar21 = __real_3f800000;
      if (0 < iVar13) {
        fVar22 = powf(__real_40000000,
                      (float)((uint)(fVar24 / (float)iVar13) ^
                             __xmm_80000000800000008000000080000000));
        fVar21 = fVar22 * __real_3e3851ec;
      }
    }
    *param_3 = fVar21;
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  return;
}

