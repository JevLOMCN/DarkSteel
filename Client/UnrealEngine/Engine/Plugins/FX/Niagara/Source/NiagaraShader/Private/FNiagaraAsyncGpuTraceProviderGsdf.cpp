// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 7

// FNiagaraAsyncGpuTraceProviderGsdf @ 148df0720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraAsyncGpuTraceProviderGsdf * __thiscall
FNiagaraAsyncGpuTraceProviderGsdf::FNiagaraAsyncGpuTraceProviderGsdf
          (FNiagaraAsyncGpuTraceProviderGsdf *this,EShaderPlatform param_1,
          FNiagaraGpuComputeDispatchInterface *param_2)

{
  *(EShaderPlatform *)&this->field_0x8 = param_1;
  *(FNiagaraGpuComputeDispatchInterface **)&this->field_0x10 = param_2;
  *(undefined ***)this = &___7FNiagaraAsyncGpuTraceProviderGsdf__6B_;
  memset(&this->m_DistanceFieldData,0,0x200);
  this->m_ViewUniformBuffer = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  return this;
}

// GetType @ 148e07d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall FNiagaraAsyncGpuTraceProviderGsdf::GetType(FNiagaraAsyncGpuTraceProviderGsdf *this)

{
  return GSDF;
}

// IsAvailable @ 148e09110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FNiagaraAsyncGpuTraceProviderGsdf::IsAvailable(FNiagaraAsyncGpuTraceProviderGsdf *this)

{
  if (GNiagaraAsyncGpuTraceGsdfEnabled != 0) {
    return 2 < *(int *)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x20) + 8);
  }
  return false;
}

// IsSupported @ 148e09710

bool __cdecl FNiagaraAsyncGpuTraceProviderGsdf::IsSupported(void)

{
  bool bVar1;
  
  if (GNiagaraAsyncGpuTraceGsdfEnabled != 0) {
    bVar1 = DoesProjectSupportDistanceFields();
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IssueTraces @ 148e097b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceProviderGsdf::IssueTraces
          (FNiagaraAsyncGpuTraceProviderGsdf *this,FRHICommandList *param_1,
          FDispatchRequest *param_2,TUniformBufferRef<FSceneUniformParameters> param_3,
          FCollisionGroupHashMap *param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  int iVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar9;
  FName this_01;
  FShaderParametersMetadata *pFVar10;
  FRHIComputeShader *pFVar11;
  FRHIBatchedShaderUnbinds *pFVar12;
  undefined1 auStackY_378 [32];
  TShaderRefBase<FNiagaraRayMarchGlobalSdfCS,FShaderMapPointerTable> local_348;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_338;
  TUniformBufferRef<FViewUniformShaderParameters> local_328;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  char *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  wchar_t *pwStack_300;
  FRHIBreadcrumbScope local_2f8;
  char local_2e8;
  undefined1 local_2e0 [8];
  FString local_2d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2c8;
  FRHIShaderResourceView *local_2b8;
  FRHIShaderResourceView *pFStack_2b0;
  FRHIUnorderedAccessView *local_2a8;
  TUniformBufferRef<FViewUniformShaderParameters> local_298;
  undefined8 uStack_290;
  FGlobalDistanceFieldParameters2 local_288;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined4 local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_378;
  cVar2 = (**(code **)(*(longlong *)this + 8))();
  if ((cVar2 == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAvailable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderGsdf.cpp"
                         ,0x7d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2->MaxTraceCount != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_318 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderGsdf.cpp"
      ;
      pwStack_300 = L"NiagaraIssueTracesGsdf";
      uStack_310 = 0x84;
      local_308 = 0;
      ::Desc._padding_._0_4_ = 0x51cf8a30;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x84;
      ::Desc._padding_._4_4_ = uStack_30c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51cf8c58;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraAsyncGpuTraceProviderGsdf::IssueTraces'::__l17::<lambda_1>::operator()<>'::
             __l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar7 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
    pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar8->TraceCpuSpecId = 0;
    pFVar8->TraceCpuMetadataId = 0;
    pFVar8->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar8->Allocator = pFVar7;
    LOCK();
    UNLOCK();
    uVar4 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar8->ID = uVar4;
    pFVar8->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar8[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar5 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar5;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar8->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_2f8,(FRHIComputeCommandList *)param_1,pFVar8);
    local_2e8 = '\x01';
    this_00 = GetGlobalShaderMap(*(EShaderPlatform *)&this->field_0x8);
    pFVar9 = (FShaderType *)FNiagaraRayMarchGlobalSdfCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_338,pFVar9,0);
    if (local_338.ShaderContent == (FShader *)0x0) {
      this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_2e0);
      ::FName::ToString((FName *)this_01,&local_2d8);
      FNiagaraRayMarchGlobalSdfCS::GetStaticType();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraRayMarchGlobalSdfCS::GetStaticType();
    local_348.ShaderContent = (FNiagaraRayMarchGlobalSdfCS *)local_338.ShaderContent;
    local_348.ShaderMap = local_338.ShaderMap;
    local_2a8 = (FRHIUnorderedAccessView *)0x0;
    local_2b8 = (FRHIShaderResourceView *)0x0;
    pFStack_2b0 = (FRHIShaderResourceView *)0x0;
    local_298 = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
    uStack_290 = CONCAT71(uStack_290._1_7_,1);
    FGlobalDistanceFieldParameters2::FGlobalDistanceFieldParameters2(&local_288);
    local_328 = this->m_ViewUniformBuffer;
    uStack_320 = 1;
    pFVar10 = FViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar10->BindingFlags & Shader) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAllFlags(StructMetadata->GetBindingFlags(), GetBindingFlags())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0xf5,
                           L"Uniform buffer binding flags don\'t match those supported by the uniform buffer layout \'%s."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uStack_290 = CONCAT71(uStack_31f,uStack_320);
    local_298 = local_328;
    local_2b8 = (param_2->TracesBuffer->SRV).Reference;
    pFStack_2b0 = (param_2->TraceCountsBuffer->SRV).Reference;
    local_2a8 = (param_2->ResultsBuffer->UAV).Reference;
    FNiagaraDistanceFieldHelper::SetGlobalDistanceFieldParameters
              (&this->m_DistanceFieldData,&local_288);
    local_78 = param_2->TracesOffset;
    local_74 = param_2->TraceCountsOffset;
    local_70 = param_2->ResultsOffset;
    local_6c = 0x3f800000;
    pFVar11 = TShaderRefBase<FNiagaraRayMarchGlobalSdfCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_348);
    SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar11);
    pFVar11 = TShaderRefBase<FNiagaraRayMarchGlobalSdfCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_348);
    pFVar10 = FNiagaraRayMarchGlobalSdfCS::FParameters::FTypeInfo::GetStructMetadata();
    local_2c8.ShaderContent = local_338.ShaderContent;
    local_2c8.ShaderMap = local_338.ShaderMap;
    ValidateShaderParameters(&local_2c8,pFVar10,&local_2b8);
    ::SetShaderParameters(param_1,pFVar11,&(local_338.ShaderContent)->Bindings,pFVar10,&local_2b8);
    iVar6 = param_2->MaxTraceCount + 0x1f;
    DispatchComputeShader
              ((FRHIComputeCommandList *)param_1,local_338.ShaderContent,
               (int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5,1,1);
    pFVar11 = TShaderRefBase<FNiagaraRayMarchGlobalSdfCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_348);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar12 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
      if ((((local_338.ShaderContent)->Bindings).RootParameterBufferIndex != 0xffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnsetShaderUAVs(pFVar12,&(local_338.ShaderContent)->Bindings);
      FRHIComputeCommandList::SetBatchedShaderUnbinds
                ((FRHIComputeCommandList *)param_1,pFVar11,pFVar12);
    }
    if (local_2e8 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_2f8);
    }
  }
  if (*(FRHIResource **)param_3 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)param_3);
  }
  return;
}

// PostRenderOpaque @ 148e0b1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceProviderGsdf::PostRenderOpaque
          (FNiagaraAsyncGpuTraceProviderGsdf *this,FRHICommandList *param_1,
          TStridedView<FSceneView_const_,int> *param_2,
          TUniformBufferRef<FSceneUniformParameters> param_3,FCollisionGroupHashMap *param_4)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FRDGPooledBuffer *pFVar3;
  TUniformBufferRef<FViewUniformShaderParameters> this_00;
  TUniformBufferRef<FViewUniformShaderParameters> this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  longlong lVar9;
  FGlobalDistanceFieldParameterData *pFVar10;
  FSceneView *pFVar11;
  undefined1 auStack_268 [32];
  TStridedView<FSceneView_const_,int> local_248;
  FGlobalDistanceFieldParameterData local_238;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_248.FirstElementPtr = param_2->FirstElementPtr;
  local_248.BytesBetweenElements = param_2->BytesBetweenElements;
  local_248.NumElements = param_2->NumElements;
  pFVar10 = UE::FXRenderingUtils::GetGlobalDistanceFieldParameterData(&local_248);
  if (pFVar10 == (FGlobalDistanceFieldParameterData *)0x0) {
    memset(&local_238,0,0x200);
    FGlobalDistanceFieldParameterData::operator=(&this->m_DistanceFieldData,&local_238);
    if (local_238.PageObjectGridBuffer.Reference != (FRDGPooledBuffer *)0x0) {
      plVar1 = &(local_238.PageObjectGridBuffer.Reference)->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)(local_238.PageObjectGridBuffer.Reference)->_padding_)();
      }
    }
  }
  else {
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedCenterAndExtent[0].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[0].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedCenterAndExtent[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[0].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedCenterAndExtent[1].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[1].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedCenterAndExtent[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[1].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedCenterAndExtent[2].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[2].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedCenterAndExtent[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[2].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedCenterAndExtent[3].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[3].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedCenterAndExtent[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[3].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedCenterAndExtent[4].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[4].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedCenterAndExtent[4].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[4].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedCenterAndExtent[5].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[5].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedCenterAndExtent[5].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedCenterAndExtent[5].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedWorldToUVAddAndMul[0].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[0].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedWorldToUVAddAndMul[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[0].field0_0x0 + 8) = uVar7
    ;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedWorldToUVAddAndMul[1].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[1].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedWorldToUVAddAndMul[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[1].field0_0x0 + 8) = uVar7
    ;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedWorldToUVAddAndMul[2].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[2].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedWorldToUVAddAndMul[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[2].field0_0x0 + 8) = uVar7
    ;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedWorldToUVAddAndMul[3].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[3].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedWorldToUVAddAndMul[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[3].field0_0x0 + 8) = uVar7
    ;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedWorldToUVAddAndMul[4].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[4].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedWorldToUVAddAndMul[4].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[4].field0_0x0 + 8) = uVar7
    ;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->TranslatedWorldToUVAddAndMul[5].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[5].field0_0x0 =
         *(undefined8 *)&pFVar10->TranslatedWorldToUVAddAndMul[5].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).TranslatedWorldToUVAddAndMul[5].field0_0x0 + 8) = uVar7
    ;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVScale[0].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[0].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVScale[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[0].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVScale[1].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[1].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVScale[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[1].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVScale[2].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[2].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVScale[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[2].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVScale[3].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[3].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVScale[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[3].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVScale[4].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[4].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVScale[4].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[4].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVScale[5].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[5].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVScale[5].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVScale[5].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVBias[0].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[0].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVBias[0].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[0].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVBias[1].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[1].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVBias[1].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[1].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVBias[2].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[2].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVBias[2].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[2].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVBias[3].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[3].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVBias[3].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[3].field0_0x0 + 8) = uVar7;
    uVar7 = *(undefined8 *)((longlong)&pFVar10->MipTranslatedWorldToUVBias[4].field0_0x0 + 8);
    *(undefined8 *)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[4].field0_0x0 =
         *(undefined8 *)&pFVar10->MipTranslatedWorldToUVBias[4].field0_0x0;
    *(undefined8 *)
     ((longlong)&(this->m_DistanceFieldData).MipTranslatedWorldToUVBias[4].field0_0x0 + 8) = uVar7;
    fVar4 = pFVar10->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Y;
    fVar5 = pFVar10->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Z;
    fVar6 = pFVar10->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.W;
    (this->m_DistanceFieldData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.X =
         pFVar10->MipTranslatedWorldToUVBias[5].field0_0x0._s_0.X;
    (this->m_DistanceFieldData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Y = fVar4;
    (this->m_DistanceFieldData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.Z = fVar5;
    (this->m_DistanceFieldData).MipTranslatedWorldToUVBias[5].field0_0x0._s_0.W = fVar6;
    (this->m_DistanceFieldData).MipFactor = pFVar10->MipFactor;
    (this->m_DistanceFieldData).MipTransition = pFVar10->MipTransition;
    (this->m_DistanceFieldData).PageAtlasTexture = pFVar10->PageAtlasTexture;
    (this->m_DistanceFieldData).CoverageAtlasTexture = pFVar10->CoverageAtlasTexture;
    pFVar2 = (pFVar10->PageObjectGridBuffer).Reference;
    pFVar3 = (this->m_DistanceFieldData).PageObjectGridBuffer.Reference;
    if (pFVar3 != pFVar2) {
      (this->m_DistanceFieldData).PageObjectGridBuffer.Reference = pFVar2;
      if (pFVar2 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)();
        }
      }
    }
    (this->m_DistanceFieldData).PageTableTexture = pFVar10->PageTableTexture;
    (this->m_DistanceFieldData).MipTexture = pFVar10->MipTexture;
    (this->m_DistanceFieldData).ClipmapSizeInPages = pFVar10->ClipmapSizeInPages;
    dVar8 = (pFVar10->InvPageAtlasSize).field0_0x0._s_0.Y;
    (this->m_DistanceFieldData).InvPageAtlasSize.field0_0x0._s_0.X =
         (pFVar10->InvPageAtlasSize).field0_0x0._s_0.X;
    (this->m_DistanceFieldData).InvPageAtlasSize.field0_0x0._s_0.Y = dVar8;
    (this->m_DistanceFieldData).InvPageAtlasSize.field0_0x0._s_0.Z =
         (pFVar10->InvPageAtlasSize).field0_0x0._s_0.Z;
    dVar8 = (pFVar10->InvCoverageAtlasSize).field0_0x0._s_0.Y;
    (this->m_DistanceFieldData).InvCoverageAtlasSize.field0_0x0._s_0.X =
         (pFVar10->InvCoverageAtlasSize).field0_0x0._s_0.X;
    (this->m_DistanceFieldData).InvCoverageAtlasSize.field0_0x0._s_0.Y = dVar8;
    (this->m_DistanceFieldData).InvCoverageAtlasSize.field0_0x0._s_0.Z =
         (pFVar10->InvCoverageAtlasSize).field0_0x0._s_0.Z;
    (this->m_DistanceFieldData).MaxPageNum = pFVar10->MaxPageNum;
    (this->m_DistanceFieldData).GlobalDFResolution = pFVar10->GlobalDFResolution;
    (this->m_DistanceFieldData).MaxDFAOConeDistance = pFVar10->MaxDFAOConeDistance;
    (this->m_DistanceFieldData).NumGlobalSDFClipmaps = pFVar10->NumGlobalSDFClipmaps;
  }
  pFVar11 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
  this_00 = this->m_ViewUniformBuffer;
  this_01 = pFVar11->ViewUniformBuffer;
  if (this_00 != this_01) {
    this->m_ViewUniformBuffer = this_01;
    if (this_01 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (*(FRHIResource **)param_3 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)param_3);
  }
  return;
}

// Reset @ 148e0c820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FNiagaraAsyncGpuTraceProviderGsdf::Reset(FNiagaraAsyncGpuTraceProviderGsdf *this)

{
  longlong *plVar1;
  TUniformBufferRef<FViewUniformShaderParameters> *pTVar2;
  TUniformBufferRef<FViewUniformShaderParameters> this_00;
  longlong lVar3;
  undefined1 auStack_248 [32];
  undefined8 local_228 [2];
  FGlobalDistanceFieldParameterData local_218;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_248;
  memset(&local_218,0,0x200);
  FGlobalDistanceFieldParameterData::operator=(&this->m_DistanceFieldData,&local_218);
  if (local_218.PageObjectGridBuffer.Reference != (FRDGPooledBuffer *)0x0) {
    plVar1 = &(local_218.PageObjectGridBuffer.Reference)->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(local_218.PageObjectGridBuffer.Reference)->_padding_)
                (local_218.PageObjectGridBuffer.Reference,1);
    }
  }
  pTVar2 = &this->m_ViewUniformBuffer;
  if (pTVar2 != (TUniformBufferRef<FViewUniformShaderParameters> *)local_228) {
    this_00 = *pTVar2;
    *pTVar2 = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
    if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

