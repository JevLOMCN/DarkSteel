// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 7

// FNiagaraAsyncGpuTraceProviderHwrt @ 148df0770

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraAsyncGpuTraceProviderHwrt * __thiscall
FNiagaraAsyncGpuTraceProviderHwrt::FNiagaraAsyncGpuTraceProviderHwrt
          (FNiagaraAsyncGpuTraceProviderHwrt *this,EShaderPlatform param_1,
          FNiagaraGpuComputeDispatchInterface *param_2)

{
  *(EShaderPlatform *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)&___7FNiagaraAsyncGpuTraceProviderHwrt__6B_;
  this->RayTracingPipelineState = (FRayTracingPipelineState *)0x0;
  this->RayTracingSBT = (FRHIShaderBindingTable *)0x0;
  this->TLASSRV = (FRHIShaderResourceView *)0x0;
  this->ViewUniformBuffer = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
  this->_padding_ = (longlong)param_2;
  return this;
}

// GetType @ 148e07d20

Type __thiscall FNiagaraAsyncGpuTraceProviderHwrt::GetType(FNiagaraAsyncGpuTraceProviderHwrt *this)

{
  return HWRT;
}

// IsAvailable @ 148e09140

bool __thiscall
FNiagaraAsyncGpuTraceProviderHwrt::IsAvailable(FNiagaraAsyncGpuTraceProviderHwrt *this)

{
  char cVar1;
  bool bVar2;
  
  if ((GNiagaraAsyncGpuTraceHwrtEnabled != 0) && ((char)((longlong *)this->_padding_)[0x3c] == '\0')
     ) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x88))();
    if (cVar1 != '\0') {
      bVar2 = UE::FXRenderingUtils::RayTracing::HasRayTracingScene
                        (*(FSceneInterface **)(this->_padding_ + 0x20));
      return bVar2;
    }
  }
  return false;
}

// IsSupported @ 148e09740

bool __cdecl FNiagaraAsyncGpuTraceProviderHwrt::IsSupported(void)

{
  bool bVar1;
  
  if (GNiagaraAsyncGpuTraceHwrtEnabled != 0) {
    bVar1 = IsRayTracingEnabled();
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IssueTraces @ 148e09cb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceProviderHwrt::IssueTraces
          (FNiagaraAsyncGpuTraceProviderHwrt *this,FRHICommandList *param_1,
          FDispatchRequest *param_2,TUniformBufferRef<FSceneUniformParameters> param_3,
          FCollisionGroupHashMap *param_4)

{
  FShaderMapResource *this_00;
  FRHIShaderBindingTable *pFVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  FRHIBreadcrumbNode *pFVar9;
  FGlobalShaderMap *this_01;
  FShaderParametersMetadata *pFVar10;
  FShaderType *pFVar11;
  FName this_02;
  atomic<FRHIShader_*> aVar12;
  FRHIBatchedShaderUnbinds *pFVar13;
  FRHIBatchedShaderParameters *pFVar14;
  FRHIRayTracingShader *pFVar15;
  atomic<FRHIShader_*> aVar16;
  undefined1 local_res8 [8];
  TShaderRefBase<FNiagaraCollisionRayTraceRG,FShaderMapPointerTable> local_148;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_138;
  TUniformBufferRef<FViewUniformShaderParameters> local_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  TUniformBufferBinding<FSceneUniformParameters> local_118;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_108;
  char *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  wchar_t *pwStack_e0;
  TUniformBufferRef<FViewUniformShaderParameters> local_d8;
  undefined8 uStack_d0;
  TUniformBufferBinding<FSceneUniformParameters> local_c8;
  FRHIShaderResourceView *local_b8;
  FRHIShaderResourceView *pFStack_b0;
  uint local_a8;
  FRHIShaderResourceView *local_a0;
  FRHIShaderResourceView *local_98;
  uint local_90;
  FRHIUnorderedAccessView *local_88;
  uint local_80;
  FRHIShaderResourceView *local_78;
  uint local_70;
  uint local_6c;
  FRHIBreadcrumbScope local_68;
  char local_58;
  FString local_50;
  
  cVar4 = (**(code **)(this->_padding_ + 8))();
  if ((cVar4 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAvailable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderHwrt.cpp"
                         ,0x19c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2->MaxTraceCount != 0) {
    aVar16 = (atomic<FRHIShader_*>)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_f8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderHwrt.cpp"
      ;
      pwStack_e0 = L"NiagaraIssueTracesHwrt";
      uStack_f0 = 0x1a3;
      local_e8 = 0;
      ::Desc._padding_._0_4_ = 0x51cf8ca0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x1a3;
      ::Desc._padding_._4_4_ = uStack_ec;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51cf91a0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraAsyncGpuTraceProviderHwrt::IssueTraces'::__l17::<lambda_1>::operator()<>'::
             __l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar9 = FMemStackBase::Alloc(&pFVar8->Inner,0x50,8);
    pFVar9->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar9->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar9->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar9->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar9->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar9->Allocator = pFVar8;
    pFVar9->TraceCpuSpecId = 0;
    pFVar9->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar9->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar9->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar9->ID = uVar6;
    pFVar9->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar9[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar5)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar7 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar7;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar9->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_68,(FRHIComputeCommandList *)param_1,pFVar9);
    local_58 = '\x01';
    this_01 = GetGlobalShaderMap((EShaderPlatform)this->_padding_);
    local_128 = this->ViewUniformBuffer;
    local_b8 = (FRHIShaderResourceView *)0x0;
    pFStack_b0 = (FRHIShaderResourceView *)0x0;
    local_78 = (FRHIShaderResourceView *)0x0;
    uStack_120 = 1;
    pFVar10 = FViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar10->BindingFlags & Shader) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAllFlags(StructMetadata->GetBindingFlags(), GetBindingFlags())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0xf5,
                           L"Uniform buffer binding flags don\'t match those supported by the uniform buffer layout \'%s."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uStack_d0._1_7_ = uStack_11f;
    uStack_d0._0_1_ = uStack_120;
    local_d8 = local_128;
    pFVar10 = ::GetForwardDeclaredShaderParametersStructMetadata((FSceneUniformParameters *)0x0);
    local_118._0_8_ = *(undefined8 *)param_3;
    local_118._8_1_ = Static;
    if (pFVar10->BindingFlags != StaticAndShader) {
      local_118._8_1_ = pFVar10->BindingFlags;
    }
    local_c8._9_7_ = local_118._9_7_;
    local_c8._8_1_ = local_118._8_1_;
    if (param_4 != (FCollisionGroupHashMap *)0x0) {
      local_b8 = (param_4->PrimIdHashTable).SRV.Reference;
      local_a8 = param_4->HashTableSize;
      pFStack_b0 = (param_4->HashToCollisionGroups).SRV.Reference;
    }
    local_a0 = this->TLASSRV;
    local_98 = (param_2->TracesBuffer->SRV).Reference;
    local_90 = param_2->TracesOffset;
    local_88 = (param_2->ResultsBuffer->UAV).Reference;
    local_80 = param_2->ResultsOffset;
    local_6c = param_2->MaxRetraceCount;
    local_70 = param_2->TraceCountsOffset;
    local_c8._0_8_ = local_118._0_8_;
    if ((GRHIGlobals.RayTracing.SupportsInlineRayTracing == false) ||
       (GNiagaraAsyncGpuTraceHwrtInline == 0)) {
      if (GRHIGlobals.RayTracing.SupportsShaders != false) {
        if ((this->RayTracingPipelineState == (FRayTracingPipelineState *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("RayTracingPipelineState",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderHwrt.cpp"
                               ,0x1cf,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FNiagaraCollisionRayTraceRG::GetShader
                  (&local_148,this_01,param_4 != (FCollisionGroupHashMap *)0x0);
        if (GRHIGlobals.RayTracing.SupportsDispatchIndirect == false) {
          local_78 = (param_2->TraceCountsBuffer->SRV).Reference;
          pFVar14 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
          SetShaderParameters<FNiagaraCollisionRayTraceRG>
                    (pFVar14,&local_148,(FParameters *)&local_d8);
          uVar6 = param_2->MaxTraceCount;
          pFVar1 = this->RayTracingSBT;
          pFVar15 = TShaderRefBase<FNiagaraCollisionRayTraceRG,FShaderMapPointerTable>::
                    GetRayTracingShader(&local_148);
          FRHIComputeCommandList::RayTraceDispatch
                    ((FRHIComputeCommandList *)param_1,this->RayTracingPipelineState,pFVar15,pFVar1,
                     pFVar14,uVar6,1);
        }
        else {
          pFVar14 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
          SetShaderParameters<FNiagaraCollisionRayTraceRG>
                    (pFVar14,&local_148,(FParameters *)&local_d8);
          uVar6 = param_2->TraceCountsOffset;
          pFVar1 = this->RayTracingSBT;
          pFVar2 = (param_2->TraceCountsBuffer->Buffer).Reference;
          pFVar15 = TShaderRefBase<FNiagaraCollisionRayTraceRG,FShaderMapPointerTable>::
                    GetRayTracingShader(&local_148);
          FRHIComputeCommandList::RayTraceDispatchIndirect
                    ((FRHIComputeCommandList *)param_1,this->RayTracingPipelineState,pFVar15,pFVar1,
                     pFVar14,pFVar2,uVar6 << 2);
        }
      }
    }
    else {
      pFVar11 = (FShaderType *)FNiagaraCollisionRayTraceCS::GetStaticType();
      FGlobalShaderMap::GetShader
                (this_01,&local_138,pFVar11,(uint)(param_4 != (FCollisionGroupHashMap *)0x0));
      if (local_138.ShaderContent == (FShader *)0x0) {
        this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
        ::FName::ToString((FName *)this_02,&local_50);
        FNiagaraCollisionRayTraceCS::GetStaticType();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FNiagaraCollisionRayTraceCS::GetStaticType();
      aVar12 = aVar16;
      if (local_138.ShaderContent != (FShader *)0x0) {
        this_00 = ((local_138.ShaderMap)->Resource).Reference;
        if ((this_00 == (FShaderMapResource *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x426,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        aVar12 = (this_00->RHIShaders).Ptr[(local_138.ShaderContent)->ResourceIndex];
        if (((aVar12 == (atomic<FRHIShader_*>)0x0) &&
            (aVar12 = (atomic<FRHIShader_*>)
                      FShaderMapResource::CreateShaderOrCrash
                                (this_00,(local_138.ShaderContent)->ResourceIndex,true),
            aVar12 == (atomic<FRHIShader_*>)0x0)) && (aVar12 = aVar16, 4 < (byte)LogShaders._0_1_))
        {
          if (((local_138.ShaderMap)->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FShader::GetType(local_138.ShaderContent,(local_138.ShaderMap)->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraCollisionRayTraceCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
      }
      local_78 = (param_2->TraceCountsBuffer->SRV).Reference;
      SetComputePipelineState((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar12);
      pFVar10 = FNiagaraCollisionRayTrace::FParameters::FTypeInfo::GetStructMetadata();
      local_108.ShaderContent = local_138.ShaderContent;
      local_108.ShaderMap = local_138.ShaderMap;
      ValidateShaderParameters(&local_108,pFVar10,&local_d8);
      ::SetShaderParameters
                (param_1,(FRHIComputeShader *)aVar12,&(local_138.ShaderContent)->Bindings,pFVar10,
                 &local_d8);
      FRHIComputeCommandList::DispatchComputeShader
                ((FRHIComputeCommandList *)param_1,param_2->MaxTraceCount + 0x1f >> 5,1,1);
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar13 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
        if ((((local_138.ShaderContent)->Bindings).RootParameterBufferIndex != 0xffff) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                               ,0xb3,
                               L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UnsetShaderUAVs(pFVar13,&(local_138.ShaderContent)->Bindings);
        FRHIComputeCommandList::SetBatchedShaderUnbinds
                  ((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar12,pFVar13);
      }
    }
    if (local_58 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_68);
    }
  }
  if (*(FRHIResource **)param_3 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)param_3);
  }
  return;
}

// PostRenderOpaque @ 148e0b530

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceProviderHwrt::PostRenderOpaque
          (FNiagaraAsyncGpuTraceProviderHwrt *this,FRHICommandList *param_1,
          TStridedView<FSceneView_const_,int> *param_2,
          TUniformBufferRef<FSceneUniformParameters> param_3,FCollisionGroupHashMap *param_4)

{
  int iVar1;
  FSceneInterface *pFVar2;
  TUniformBufferRef<FViewUniformShaderParameters> this_00;
  TUniformBufferRef<FViewUniformShaderParameters> this_01;
  FShaderMapResource *pFVar3;
  code *pcVar4;
  FRHICommandList *pFVar5;
  char cVar6;
  bool bVar7;
  FSceneView *pFVar8;
  FRHIShaderResourceView *pFVar9;
  FGlobalShaderMap *this_02;
  TShaderRefBase<FNiagaraCollisionRayTraceRG,FShaderMapPointerTable> *this_03;
  FRHIRayTracingShader *pFVar10;
  FGlobalShaderType *pFVar11;
  FShaderType *pFVar12;
  FName FVar13;
  atomic<FRHIShader_*> aVar14;
  atomic<FRHIShader_*> aVar15;
  FRayTracingPipelineState *pFVar16;
  TRefCountPtr<FRHIShaderBindingTable> TVar17;
  FRayTracingMeshCommandStorage *pFVar18;
  TArrayView<FRayTracingShaderBindingData_const_,int> *pTVar19;
  atomic<FRHIShader_*> aVar20;
  undefined1 local_res8 [8];
  FRHICommandList *local_res10;
  undefined1 local_res18 [8];
  TUniformBufferRef<FSceneUniformParameters> local_res20;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [32];
  atomic<FRHIShader_*> local_1a0;
  FSceneInterface *local_198;
  undefined1 local_190 [32];
  longlong local_170;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_168;
  IRHICommandContext *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FBaseGraphTask *local_148;
  undefined1 auStack_140 [8];
  undefined1 local_138 [16];
  undefined1 local_128 [80];
  TRefCountPtr<FBaseGraphTask> local_d8;
  FRHIBatchedShaderParameters *pFStack_d0;
  FRHIBatchedShaderParametersAllocator *local_c8;
  ForAnyElementType FStack_c0;
  FRHIRayTracingShader **local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  FString local_a0;
  FString local_90;
  TArrayView<FRayTracingShaderBindingData_const_,int> local_78;
  TShaderRefBase<FNiagaraCollisionRayTraceRG,FShaderMapPointerTable> local_68;
  TArrayView<FRayTracingShaderBindingData_const_,int> local_58;
  
  local_res10 = param_1;
  local_res20 = param_3;
  cVar6 = (**(code **)(this->_padding_ + 8))();
  if ((cVar6 == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsAvailable()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderHwrt.cpp"
                         ,0x168,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_2->NumElements < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Views.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProviderHwrt.cpp"
                         ,0x169,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar8 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0);
  pFVar2 = *(FSceneInterface **)(this->_padding_ + 0x20);
  local_198 = pFVar2;
  local_190._8_8_ = pFVar8;
  bVar7 = UE::FXRenderingUtils::RayTracing::HasRayTracingScene(pFVar2);
  if (bVar7) {
    pFVar9 = UE::FXRenderingUtils::RayTracing::GetRayTracingSceneView
                       ((FRHICommandListBase *)param_1,pFVar2,pFVar8);
    this->TLASSRV = pFVar9;
    this_00 = pFVar8->ViewUniformBuffer;
    this_01 = this->ViewUniformBuffer;
    if (this_01 != this_00) {
      this->ViewUniformBuffer = this_00;
      if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      if (this_01 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if (((GRHIGlobals.RayTracing.SupportsInlineRayTracing == false) ||
        (GNiagaraAsyncGpuTraceHwrtInline == 0)) && (GRHIGlobals.RayTracing.SupportsShaders != false)
       ) {
      this_02 = GetGlobalShaderMap((EShaderPlatform)this->_padding_);
      this_03 = FNiagaraCollisionRayTraceRG::GetShader
                          (&local_68,this_02,param_4 != (FCollisionGroupHashMap *)0x0);
      pFVar10 = TShaderRefBase<FNiagaraCollisionRayTraceRG,FShaderMapPointerTable>::
                GetRayTracingShader(this_03);
      pFVar11 = FNiagaraCollisionRayTraceCH::GetStaticType();
      if (*(int *)&pFVar11->field_0x50 != 1) {
        local_res8[0] = 0;
        `FGlobalShaderMap::GetShader<FNiagaraCollisionRayTraceCH>'::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      pFVar12 = (FShaderType *)FNiagaraCollisionRayTraceCH::GetStaticType();
      FGlobalShaderMap::GetShader
                (this_02,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_190 + 0x18),
                 pFVar12,0);
      if ((FMemMark *)local_190._24_8_ == (FMemMark *)0x0) {
        FVar13 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_a8);
        ::FName::ToString((FName *)FVar13,&local_a0);
        FNiagaraCollisionRayTraceCH::GetStaticType();
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FNiagaraCollisionRayTraceCH::GetStaticType();
      aVar20 = (atomic<FRHIShader_*>)0x0;
      aVar14 = aVar20;
      if ((FMemMark *)local_190._24_8_ != (FMemMark *)0x0) {
        pFVar3 = *(FShaderMapResource **)(local_170 + 8);
        if ((pFVar3 == (FShaderMapResource *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x426,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar1 = *(int *)((longlong)&((FMemMark *)(local_190._24_8_ + 200))->Top + 4);
        aVar14 = (pFVar3->RHIShaders).Ptr[iVar1];
        if (aVar14 == (atomic<FRHIShader_*>)0x0) {
          aVar14 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(pFVar3,iVar1,true);
        }
      }
      pFVar11 = FNiagaraCollisionRayTraceMiss::GetStaticType();
      if (*(int *)&pFVar11->field_0x50 != 1) {
        local_res18[0] = 0;
        `FGlobalShaderMap::GetShader<FNiagaraCollisionRayTraceMiss>'::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      pFVar12 = (FShaderType *)FNiagaraCollisionRayTraceMiss::GetStaticType();
      FGlobalShaderMap::GetShader(this_02,&local_168,pFVar12,0);
      if (local_168.ShaderContent == (FShader *)0x0) {
        FVar13 = LegacyShaderPlatformToShaderFormat((short)local_1c0 + 8);
        ::FName::ToString((FName *)FVar13,&local_90);
        FNiagaraCollisionRayTraceMiss::GetStaticType();
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FNiagaraCollisionRayTraceMiss::GetStaticType();
      local_1a0 = aVar20;
      if (local_168.ShaderContent != (FShader *)0x0) {
        pFVar3 = ((local_168.ShaderMap)->Resource).Reference;
        if ((pFVar3 == (FShaderMapResource *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x426,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1a0 = (pFVar3->RHIShaders).Ptr[(local_168.ShaderContent)->ResourceIndex];
        if (local_1a0 == (atomic<FRHIShader_*>)0x0) {
          local_1a0 = (atomic<FRHIShader_*>)
                      FShaderMapResource::CreateShaderOrCrash
                                (pFVar3,(local_168.ShaderContent)->ResourceIndex,true);
        }
      }
      local_128._48_8_ = (FRHIRayTracingPipelineState *)0x0;
      local_128._56_8_ = (FRHIShaderBindingLayout *)0x0;
      local_158 = (IRHICommandContext *)(local_1c0 + 0x18);
      uStack_150 = 1;
      local_128[0] = true;
      local_128[1] = false;
      local_128[2] = None;
      local_128[3] = None;
      local_128._32_8_ = (FRHIParallelRenderPassInfo *)0x0;
      local_128[0x28] = false;
      local_128[0x29] = false;
      local_b8 = (FRHIRayTracingShader **)0x0;
      local_b0 = 0;
      local_128._4_4_ = 0x28;
      local_1c0._16_4_ = 1;
      local_128._72_8_ = CONCAT44(uStack_14c,1);
      if (pFVar10 == (FRHIRayTracingShader *)0x0) {
        local_128._8_8_ = (FRHICommandRHIThreadFence *)0x9552b72710480035;
      }
      else {
        local_128._8_8_ = pFVar10->_padding_ + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
      }
      local_1c0._8_8_ = local_1c0;
      FStack_c0.Data = (FScriptContainerElement *)CONCAT44(local_1c0._20_4_,1);
      aVar15 = aVar20;
      if (aVar14 != (atomic<FRHIShader_*>)0x0) {
        aVar15 = *(atomic<FRHIShader_*> *)((longlong)aVar14 + 0xf0);
      }
      auStack_140._0_4_ = 1;
      local_128._24_8_ = (longlong)aVar15 + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
      local_148 = (FBaseGraphTask *)&local_1a0;
      pFStack_d0 = (FRHIBatchedShaderParameters *)CONCAT44(auStack_140._4_4_,1);
      if (local_1a0 != (atomic<FRHIShader_*>)0x0) {
        aVar20 = *(atomic<FRHIShader_*> *)((longlong)local_1a0 + 0xf0);
      }
      local_128._16_8_ = (longlong)aVar20 + 0xda48bfd15ce60c08U ^ 0x4f1a08f64cae0c3d;
      local_1c0._0_8_ = aVar14;
      local_1c0._24_8_ = pFVar10;
      local_128._64_8_ = local_158;
      local_d8.Reference = local_148;
      local_c8 = (FRHIBatchedShaderParametersAllocator *)local_1c0._8_8_;
      FRayTracingPipelineStateInitializer::GetMaxLocalBindingDataSize
                ((FRayTracingPipelineStateInitializer *)local_128);
      pFVar5 = local_res10;
      pFVar16 = PipelineStateCache::GetAndOrCreateRayTracingPipelineState
                          (local_res10,(FRayTracingPipelineStateInitializer *)local_128,Default);
      if ((FRHIRayTracingPipelineState *)local_128._48_8_ != (FRHIRayTracingPipelineState *)0x0) {
        FRHIResource::Release((FRHIResource *)local_128._48_8_);
      }
      pFVar2 = local_198;
      this->RayTracingPipelineState = pFVar16;
      TVar17 = UE::FXRenderingUtils::RayTracing::CreateShaderBindingTable
                         ((FRHICommandListBase *)local_190,(FSceneInterface *)pFVar5,(uint)local_198
                         );
      this->RayTracingSBT = (FRHIShaderBindingTable *)(TVar17.Reference)->_padding_;
      if ((FRHIResource *)local_190._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_190._0_8_);
      }
      pFVar16 = this->RayTracingPipelineState;
      local_138._8_8_ = local_1c8;
      local_1c8[0] = 0;
      local_138._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`FNiagaraAsyncGpuTraceProviderHwrt::PostRenderOpaque'::__l22::<lambda_2>,unsigned_int,FRayTracingMeshCommand_const_&>
           ::Call;
      pFVar18 = UE::FXRenderingUtils::RayTracing::GetRayTracingMeshCommands(pFVar2);
      pTVar19 = UE::FXRenderingUtils::RayTracing::GetVisibleRayTracingShaderBindings
                          (&local_58,(FSceneView *)local_190._8_8_);
      local_78.DataPtr = pTVar19->DataPtr;
      local_78.ArrayNum = pTVar19->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&pTVar19->field_0xc;
      BindNiagaraRayTracingMeshCommands
                (pFVar5,this->RayTracingSBT,(FRHIUniformBuffer *)this->ViewUniformBuffer,&local_78,
                 pFVar18,pFVar16,
                 (TFunctionRef<unsigned_int___cdecl(FRayTracingMeshCommand_const_&)> *)local_138);
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x28))(this);
  }
  if (*(FRHIResource **)local_res20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)local_res20);
  }
  return;
}

// Reset @ 148e0c8d0

void __thiscall FNiagaraAsyncGpuTraceProviderHwrt::Reset(FNiagaraAsyncGpuTraceProviderHwrt *this)

{
  TUniformBufferRef<FViewUniformShaderParameters> this_00;
  TUniformBufferRef<FViewUniformShaderParameters> *pTVar1;
  TUniformBufferRef<FViewUniformShaderParameters> local_18 [3];
  
  this->RayTracingPipelineState = (FRayTracingPipelineState *)0x0;
  this->RayTracingSBT = (FRHIShaderBindingTable *)0x0;
  this->TLASSRV = (FRHIShaderResourceView *)0x0;
  pTVar1 = &this->ViewUniformBuffer;
  if (pTVar1 != local_18) {
    this_00 = *pTVar1;
    *pTVar1 = (TUniformBufferRef<FViewUniformShaderParameters>)0x0;
    if (this_00 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
      return;
    }
  }
  return;
}

