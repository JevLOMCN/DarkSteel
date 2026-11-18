// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// ReleaseRHI @ 1458a94a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVirtualTextureFeedbackBufferResource::ReleaseRHI(FVirtualTextureFeedbackBufferResource *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->PooledBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->PooledBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  this->UAV = (FRHIUnorderedAccessView *)0x0;
  return;
}

// operator() @ 1458d3530

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FVirtualTextureFeedbackBufferResource::Begin'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  undefined8 uVar1;
  IRHIComputeContext *pIVar2;
  undefined8 *puVar3;
  TArrayView<FRHITransitionInfo_const_,int> local_58;
  FRHITransitionInfo local_48;
  
  local_48.field1_0x8 = *(FRHITransitionInfo_u_8 *)this;
  local_58.ArrayNum = 1;
  local_58.DataPtr = &local_48;
  local_48._padding_._0_4_ = 0xffffffff;
  local_48._padding_._4_2_ = 0xffff;
  local_48.Type = UAV;
  local_48.AccessBefore = None;
  local_48.AccessAfter = UAVCompute;
  local_48.Flags = None;
  local_48.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_58,None);
  uVar1 = *(undefined8 *)this;
  local_58.DataPtr = (FRHITransitionInfo *)0x0;
  local_58.ArrayNum = 0;
  local_58._12_4_ = 0;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
    *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
    **(undefined8 **)&param_2->field_0x30 = puVar3;
    *(undefined8 **)&param_2->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &___7FRHICommandClearUAVUint__6B_;
    puVar3[2] = uVar1;
    puVar3[3] = local_58.DataPtr;
    puVar3[4] = local_58._8_8_;
  }
  else {
    pIVar2 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_2);
    (**(code **)(pIVar2->_padding_ + 0x60))(pIVar2,uVar1);
  }
  local_48.field1_0x8 = *(FRHITransitionInfo_u_8 *)this;
  local_58.ArrayNum = 1;
  local_58.DataPtr = &local_48;
  local_48._padding_._0_4_ = 0xffffffff;
  local_48._padding_._4_2_ = 0xffff;
  local_48.Type = UAV;
  local_48.AccessBefore = UAVCompute;
  local_48.AccessAfter = UAVMask;
  local_48.Flags = None;
  local_48.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_2,&local_58,None);
  FRHIComputeCommandList::BeginUAVOverlap
            ((FRHIComputeCommandList *)param_2,*(FRHIUnorderedAccessView **)this);
  return;
}

// operator() @ 1458d3af0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  FRHIComputeCommandList::EndUAVOverlap
            ((FRHIComputeCommandList *)param_1,*(FRHIUnorderedAccessView **)this);
  local_48.ArrayNum = 1;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)this;
  local_48.DataPtr = &local_38;
  local_38.Type = UAV;
  local_38.AccessBefore = UAVMask;
  local_38.AccessAfter = CopySrc;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  return;
}

// operator() @ 1458d3de0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FVirtualTextureFeedbackBufferResource::End'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  FRHIComputeCommandList::EndUAVOverlap
            ((FRHIComputeCommandList *)param_1,*(FRHIUnorderedAccessView **)this);
  local_48.ArrayNum = 1;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)this;
  local_48.DataPtr = &local_38;
  local_38.Type = UAV;
  local_38.AccessBefore = UAVMask;
  local_38.AccessAfter = SRVCompute;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  return;
}

// operator() @ 1458d3e80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  TArrayView<FRHITransitionInfo_const_,int> local_48;
  FRHITransitionInfo local_38;
  
  local_48.ArrayNum = 1;
  local_38._padding_._0_4_ = 0xffffffff;
  local_38._padding_._4_2_ = 0xffff;
  local_38.field1_0x8 = *(FRHITransitionInfo_u_8 *)this;
  local_48.DataPtr = &local_38;
  local_38.Type = UAV;
  local_38.AccessBefore = CopySrc;
  local_38.AccessAfter = UAVMask;
  local_38.Flags = None;
  local_38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_48,None);
  FRHIComputeCommandList::BeginUAVOverlap
            ((FRHIComputeCommandList *)param_1,*(FRHIUnorderedAccessView **)this);
  return;
}

// Begin @ 1458de8b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualTextureFeedbackBufferResource::Begin
          (FVirtualTextureFeedbackBufferResource *this,FRDGBuilder *param_1,uint param_2,
          uint param_3,Type param_4)

{
  int *piVar1;
  FRDGPooledBuffer *pFVar2;
  int iVar3;
  FRDGEventName *pFVar4;
  void *this_00;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FVirtualTextureFeedbackBufferResource::Begin(FRDGBuilder_&,unsigned_int,unsigned_int,ERHIFeatureLevel::Type)_::_2_::<lambda_1>_>
  *pTVar5;
  <lambda_1> local_res8;
  FRDGBufferDesc local_68;
  FRDGBufferDesc local_50;
  FRDGEventName local_38;
  
  local_68.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_68.Metadata = (FShaderParametersMetadata *)0x0;
  this->FeatureLevel = param_4;
  local_68.NumElements = param_2 + param_3;
  local_68.BytesPerElement = 4;
  this->FeedbackBufferSize = param_2;
  this->ExtendedDebugBufferSize = param_3;
  local_50.BytesPerElement = 4;
  local_50.NumElements = param_2 + param_3;
  local_50._12_4_ = local_68._12_4_;
  local_50.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  local_50.Metadata = (FShaderParametersMetadata *)0x0;
  AllocatePooledBuffer(&local_50,&this->PooledBuffer,L"VirtualTexture_FeedbackBuffer",Page);
  pFVar2 = (this->PooledBuffer).Reference;
  local_68.BytesPerElement = 0;
  local_68.NumElements = 0;
  local_68.Usage = None;
  local_68._12_4_ = 0;
  local_res8.UAV =
       FRHIBufferViewCache::GetOrCreateUAV
                 (&pFVar2->ViewCache,(FRHICommandListBase *)param_1->_padding_,
                  (pFVar2->Buffer).Reference,(FRHIBufferUAVCreateInfo *)&local_68);
  this->UAV = local_res8.UAV;
  pFVar4 = FRDGEventName::FRDGEventName(&local_38,1,L"VirtualTextureClear");
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar4,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this_00 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
  pTVar5 = TRDGEmptyLambdaPass<`FVirtualTextureFeedbackBufferResource::Begin'::__l2::<lambda_1>_>::
           TRDGEmptyLambdaPass<_FVirtualTextureFeedbackBufferResource::Begin_::__l2::<lambda_1>_>
                     (this_00,pFVar4,NeverCull,&local_res8);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar3 = (param_1->Passes).Array.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar3 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar3] = (FRDGPass *)pTVar5;
  *(int *)&pTVar5->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar5);
  if (local_38.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.FormattedEventName.Data.AllocatorInstance.Data);
  }
  this->bIsInBeginEndScope = true;
  return;
}

// End @ 1458ebf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FVirtualTextureFeedbackBufferResource::End
          (FVirtualTextureFeedbackBufferResource *this,FRDGBuilder *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FRDGScope *this_00;
  FRDGEventName *pFVar9;
  void *this_01;
  TRDGEmptyLambdaPass<_public:_void___cdecl_FVirtualTextureFeedbackBufferResource::End(FRDGBuilder_&)_::_2_::<lambda_2>_>
  *pTVar10;
  FRDGBufferUAV *pFVar11;
  FRDGBuffer *pFVar12;
  FRDGBuffer *pFVar13;
  undefined8 *puVar14;
  FShaderType *pFVar15;
  FName FVar16;
  FShaderParametersMetadata *pFVar17;
  undefined8 *puVar18;
  FRDGBufferSRV *pFVar19;
  byte bVar20;
  longlong *plVar21;
  uint uVar22;
  undefined1 auStackY_418 [32];
  <lambda_1> local_3c8;
  uint local_3b0;
  int local_3ac;
  undefined8 *local_3a8;
  undefined8 *local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  FRDGBuffer *local_388;
  FRDGBufferSRV *local_380;
  FGlobalShaderMap *local_378;
  FRDGBufferUAVDesc local_370;
  FRDGBuffer *local_360;
  FRDGBuffer *local_350;
  FRDGBufferUAVDesc local_348;
  FRDGBufferUAVDesc local_338;
  FRDGBufferUAVDesc local_328;
  FRDGBuffer *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_308;
  TIntVector3<int>_u_0 local_2f8;
  TIntVector3<int>_u_0 local_2e8;
  FRDGBufferUAVDesc local_2d8;
  FRDGBufferUAVDesc local_2c8;
  FRDGBufferUAVDesc local_2b8;
  FRDGBufferUAVDesc local_2a8;
  undefined4 local_298;
  <lambda_2> local_290;
  FRDGBuffer *local_288;
  undefined1 local_280 [6];
  undefined2 local_27a;
  TRDGEventScopeGuard<FRDGScope_RHI> local_278;
  char local_268;
  FRDGBufferSRVDesc local_260;
  FVirtualTextureFeedback *local_240;
  EBufferUsageFlags EStack_238;
  undefined4 uStack_234;
  FShaderParametersMetadata *local_230;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_228;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_218;
  FRDGBufferSRVDesc local_208;
  FRDGBufferSRVDesc local_1e8;
  FVirtualTextureFeedback *local_1c8;
  EBufferUsageFlags EStack_1c0;
  undefined4 uStack_1bc;
  FShaderParametersMetadata *local_1b8;
  undefined1 local_1b0 [8];
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_> local_1a8;
  FString local_198;
  TShaderRefBase<FBuildFeedbackHashTableIndirectArgsCS,FShaderMapPointerTable> local_188;
  FString local_178;
  TShaderRefBase<FBuildFeedbackHashTableCS,FShaderMapPointerTable> local_168;
  FString local_158;
  TShaderRefBase<FCompactFeedbackHashTableCS,FShaderMapPointerTable> local_148;
  undefined1 local_138 [8];
  undefined1 local_130 [16];
  FShaderParametersMetadata *local_120;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  FRDGEventName local_f8;
  FRDGEventName local_e0;
  FRDGEventName local_c8;
  FRDGEventName local_b0;
  FRDGEventName local_98;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  puVar18 = (undefined8 *)0x0;
  if (this->bIsInBeginEndScope != false) {
    this->bIsInBeginEndScope = false;
    cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_268 = '\0';
    if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x73;
        local_108 = 0x54bdac90;
        uStack_104 = 1;
        ::Desc._padding_._0_4_ = 0x54bdac90;
        ::Desc._padding_._4_4_ = uStack_10c;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_VirtualTextureU;
        ::Desc._padding_ = (longlong)u_VirtualTextureU;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FVirtualTextureFeedbackBufferResource::End'::__l10::Desc::operator()<>'::__l3::
               <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_1a8._Myfirst._Val = &::Desc;
      local_278.State = (FRDGScopeState *)param_1;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_00;
      local_278.Scope = this_00;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
                (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_1a8);
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_268 = '\x01';
    }
    local_290.UAV = this->UAV;
    pFVar9 = FRDGEventName::FRDGEventName(&local_f8,1,L"VirtualTextureFeedbackTransition");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar9,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    this_01 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
    pTVar10 = TRDGEmptyLambdaPass<`FVirtualTextureFeedbackBufferResource::End'::__l2::<lambda_2>_>::
              TRDGEmptyLambdaPass<_FVirtualTextureFeedbackBufferResource::End_::__l2::<lambda_2>_>
                        (this_01,pFVar9,NeverCull,&local_290);
    piVar1 = &(param_1->Passes).Array.ArrayMax;
    iVar7 = (param_1->Passes).Array.ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
    }
    (param_1->Passes).Array.ArrayNum = iVar7 + 1;
    (param_1->Passes).Array.AllocatorInstance.Data[iVar7] = (FRDGPass *)pTVar10;
    *(int *)&pTVar10->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar10);
    if (local_f8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    local_260._padding_._4_4_ = 0;
    local_260._padding_._0_1_ = 0;
    local_260._padding_._0_4_ = 0xffffffff;
    local_260._padding_ = 0;
    local_260.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PooledBuffer,SkipTracking)
    ;
    local_260._padding_._0_1_ = 0;
    if ((((local_260.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_260._padding_._0_1_ = 0x1c;
    }
    local_380 = FRDGBuilder::CreateSRV(param_1,&local_260);
    uVar8 = 1;
    if (1 < GVirtualTextureFeedbackCompactionFactor) {
      uVar8 = GVirtualTextureFeedbackCompactionFactor;
    }
    uVar8 = this->FeedbackBufferSize / uVar8;
    local_3c8.Buffer._0_4_ = 0x10109;
    local_3c8.Desc.BufferSize = 0;
    local_3c8.Desc.bSizeInHeader = false;
    local_3c8.Desc.bPageAndCount = false;
    local_3c8.Desc._6_2_ = 0;
    uVar22 = 0x4000;
    if (uVar8 < 0x4000) {
      uVar22 = uVar8;
    }
    local_1b8 = (FShaderParametersMetadata *)0x0;
    uVar8 = 0x10;
    if (0x10 < uVar22) {
      uVar8 = uVar22;
    }
    uVar22 = 1;
    if (uVar8 != 0) {
      uVar22 = uVar8;
    }
    uVar2 = (ulonglong)(uVar22 - 1) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_3b0 = 1 << ((byte)lVar4 & 0x1f);
    local_3c8.__this = (FVirtualTextureFeedback *)CONCAT44(local_3b0,8);
    local_298 = (undefined4)lVar4;
    uVar8 = local_3b0 * 2;
    local_3ac = uVar8 - 1;
    local_1c8 = local_3c8.__this;
    uStack_1bc = local_3c8.Buffer._4_4_;
    EStack_1c0 = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
    local_350 = FRDGBuilder::CreateBuffer
                          (param_1,(FRDGBufferDesc *)&local_1c8,L"VirtualTexture.CompactedFeedback",
                           None);
    local_2d8._padding_._0_2_ = 0x1c;
    local_2d8._padding_._2_1_ = 0;
    local_2d8.Buffer = local_350;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_2d8,None);
    AddClearUAVPass(param_1,pFVar11,0,Compute);
    local_3c8.Buffer._0_4_ = 0x10109;
    local_3c8.__this = (FVirtualTextureFeedback *)CONCAT44(uVar8,4);
    local_3c8.Desc.BufferSize = 0;
    local_3c8.Desc.bSizeInHeader = false;
    local_3c8.Desc.bPageAndCount = false;
    local_3c8.Desc._6_2_ = 0;
    local_240 = local_3c8.__this;
    EStack_238 = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    uStack_234 = local_3c8.Buffer._4_4_;
    local_230 = (FShaderParametersMetadata *)0x0;
    pFVar12 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)&local_240,L"VirtualTexture.HashTableKeys",None);
    local_288 = pFVar12;
    local_360 = FRDGBuilder::CreateBuffer
                          (param_1,(FRDGBufferDesc *)&local_240,
                           L"VirtualTexture.HashTableElementIndices",None);
    pFVar13 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)&local_240,
                         L"VirtualTexture.HashTableElementCounts",None);
    local_2c8._padding_._0_2_ = 0x1c;
    local_2c8._padding_._2_1_ = 0;
    local_2c8.Buffer = pFVar12;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_2c8,None);
    AddClearUAVPass(param_1,pFVar11,0,Compute);
    local_2b8._padding_._0_2_ = 0x1c;
    local_2b8._padding_._2_1_ = 0;
    local_2b8.Buffer = pFVar13;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_2b8,None);
    AddClearUAVPass(param_1,pFVar11,0,Compute);
    local_3c8.Buffer =
         (FRDGBuffer *)
         CONCAT44(local_3c8.Buffer._4_4_,
                  VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static);
    local_3c8.__this = (FVirtualTextureFeedback *)0x10000000c;
    local_3c8.Desc.BufferSize = 0;
    local_3c8.Desc.bSizeInHeader = false;
    local_3c8.Desc.bPageAndCount = false;
    local_3c8.Desc._6_2_ = 0;
    local_130._0_4_ = 0xc;
    local_130._4_4_ = 1;
    local_130._8_8_ = local_3c8.Buffer;
    local_120 = (FShaderParametersMetadata *)0x0;
    local_388 = FRDGBuilder::CreateBuffer
                          (param_1,(FRDGBufferDesc *)local_130,
                           L"VirtualTexture.BuildHashTableIndirectArgs",None);
    local_378 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)this->FeatureLevel]);
    puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
    if (puVar14 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar14[2] = 0;
      *puVar14 = &
                 ___7__TObject_VFParameters_FBuildFeedbackHashTableIndirectArgsCS___FRDGAllocator__6B_
      ;
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar18 = puVar14;
    }
    local_3a8 = puVar18;
    if ((((undefined8 **)param_1->_padding_ <= &local_3a8) &&
        (&local_3a8 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    if (iVar7 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,
                         (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    local_2a8._padding_._0_2_ = 0x1c;
    local_2a8._padding_._2_1_ = 0;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_3a8;
    local_2a8.Buffer = local_388;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_2a8,None);
    ((FParameters *)(puVar18 + 2))->RWBuildHashTableIndirectArgs = pFVar11;
    puVar18[3] = local_380;
    puVar18[4] = local_380;
    *(uint *)(puVar18 + 5) = this->FeedbackBufferSize;
    pFVar15 = (FShaderType *)FBuildFeedbackHashTableIndirectArgsCS::GetStaticType();
    FGlobalShaderMap::GetShader(local_378,&local_228,pFVar15,0);
    if (local_228.ShaderContent == (FShader *)0x0) {
      FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1b0);
      ::FName::ToString((FName *)FVar16,&local_198);
      FBuildFeedbackHashTableIndirectArgsCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FBuildFeedbackHashTableIndirectArgsCS::GetStaticType();
    local_188.ShaderContent = (FBuildFeedbackHashTableIndirectArgsCS *)local_228.ShaderContent;
    local_188.ShaderMap = local_228.ShaderMap;
    pFVar9 = FRDGEventName::FRDGEventName(&local_e0,1,L"Hash table indirect arguments");
    pFVar17 = FBuildFeedbackHashTableIndirectArgsCS::FParameters::FTypeInfo::GetStructMetadata();
    local_2f8._s_0.X = 1;
    local_2f8._s_0.Y = 1;
    local_2f8._s_0.Z = 1;
    FComputeShaderUtils::AddPass<FBuildFeedbackHashTableIndirectArgsCS>
              (param_1,pFVar9,Compute,&local_188,pFVar17,(FParameters *)(puVar18 + 2),
               (TIntVector3<int> *)&local_2f8._s_0);
    if (local_e0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x60,0x10);
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      *(undefined4 *)(puVar18 + 3) = 4;
      *puVar18 = &___7__TObject_VFParameters_FBuildFeedbackHashTableCS___FRDGAllocator__6B_;
      puVar18[2] = 0;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[6] = 0;
      puVar18[8] = 0;
      puVar18[9] = 0;
    }
    local_3a0 = puVar18;
    if ((((undefined8 **)param_1->_padding_ <= &local_3a0) &&
        (&local_3a0 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    if (iVar7 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,
                         (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    uStack_310 = 4;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_3a0;
    local_318 = local_388;
    local_370.Buffer = local_288;
    local_370._padding_._2_1_ = 0;
    *(FRDGBuffer **)&((FParameters *)(puVar18 + 2))->BuildHashTableIndirectArgs = local_388;
    puVar18[3] = CONCAT44(uStack_30c,4);
    bVar20 = 0;
    if (((local_288->Desc).Usage & DrawIndirect) != None) {
      bVar20 = 0x1c;
    }
    local_370._padding_._0_2_ = (ushort)bVar20;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_370,None);
    puVar18[4] = pFVar11;
    local_348.Buffer = local_360;
    bVar20 = 0;
    local_348._padding_._2_1_ = 0;
    if (((local_360->Desc).Usage & DrawIndirect) != None) {
      bVar20 = 0x1c;
    }
    local_348._padding_._0_2_ = (ushort)bVar20;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_348,None);
    puVar18[5] = pFVar11;
    bVar20 = 0;
    local_338._padding_._2_1_ = 0;
    if (((pFVar13->Desc).Usage & DrawIndirect) != None) {
      bVar20 = 0x1c;
    }
    local_338._padding_._0_2_ = (ushort)bVar20;
    local_338.Buffer = pFVar13;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_338,None);
    puVar18[6] = pFVar11;
    *(uint *)(puVar18 + 7) = local_3b0 * 2;
    *(int *)((longlong)puVar18 + 0x3c) = local_3ac;
    puVar18[8] = local_380;
    puVar18[9] = local_380;
    *(uint *)(puVar18 + 10) = this->FeedbackBufferSize;
    pFVar15 = (FShaderType *)FBuildFeedbackHashTableCS::GetStaticType();
    FGlobalShaderMap::GetShader(local_378,&local_218,pFVar15,0);
    if (local_218.ShaderContent == (FShader *)0x0) {
      FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_138);
      ::FName::ToString((FName *)FVar16,&local_178);
      FBuildFeedbackHashTableCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FBuildFeedbackHashTableCS::GetStaticType();
    puVar14 = (undefined8 *)0x0;
    local_168.ShaderContent = (FBuildFeedbackHashTableCS *)local_218.ShaderContent;
    local_168.ShaderMap = local_218.ShaderMap;
    local_78._0_8_ = 0;
    local_50 = (longlong *)0x0;
    pFVar9 = FRDGEventName::FRDGEventName(&local_c8,1,L"Build feedback hash table");
    FComputeShaderUtils::AddPass<FBuildFeedbackHashTableCS>
              (param_1,pFVar9,Compute,&local_168,(FParameters *)(puVar18 + 2),local_388,0,
               (TFunction<void___cdecl(void)> *)local_78);
    if (local_c8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_78._0_8_ != 0) {
      plVar21 = (longlong *)(local_78 + 0x10);
      if (local_50 != (longlong *)0x0) {
        plVar21 = local_50;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
    if (puVar18 == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar18[2] = 0;
      *puVar18 = &___7__TObject_VFParameters_FCompactFeedbackHashTableCS___FRDGAllocator__6B_;
      puVar18[4] = 0;
      puVar18[5] = 0;
      puVar18[7] = 0;
      puVar18[8] = 0;
      puVar14 = puVar18;
    }
    local_398 = puVar14;
    if ((((undefined8 **)param_1->_padding_ <= &local_398) &&
        (&local_398 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    if (iVar7 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,
                         (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_398;
    local_328._padding_._2_1_ = 0;
    local_328.Buffer = local_350;
    bVar20 = 0;
    if (((local_350->Desc).Usage & DrawIndirect) != None) {
      bVar20 = 0x1c;
    }
    local_328._padding_._0_2_ = (ushort)bVar20;
    pFVar11 = FRDGBuilder::CreateUAV(param_1,&local_328,None);
    uVar8 = local_3b0;
    ((FParameters *)(puVar14 + 2))->RWCompactedFeedbackBuffer = pFVar11;
    *(uint *)(puVar14 + 3) = local_3b0;
    *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
    local_208._padding_._4_4_ = 0;
    local_208._padding_ = 0;
    local_208.Buffer = local_360;
    local_208._padding_._0_1_ = 0x1c;
    local_208._padding_._0_4_ = 0xffffffff;
    pFVar19 = FRDGBuilder::CreateSRV(param_1,&local_208);
    puVar14[4] = pFVar19;
    local_1e8._padding_._0_1_ = 0x1c;
    local_1e8._padding_._4_4_ = 0;
    local_1e8._padding_ = 0;
    local_1e8._padding_._0_4_ = 0xffffffff;
    local_1e8.Buffer = pFVar13;
    pFVar19 = FRDGBuilder::CreateSRV(param_1,&local_1e8);
    puVar14[5] = pFVar19;
    *(uint *)(puVar14 + 6) = uVar8 * 2;
    *(int *)((longlong)puVar14 + 0x34) = local_3ac;
    puVar14[7] = local_380;
    puVar14[8] = local_380;
    *(uint *)(puVar14 + 9) = this->FeedbackBufferSize;
    pFVar15 = (FShaderType *)FCompactFeedbackHashTableCS::GetStaticType();
    FGlobalShaderMap::GetShader(local_378,&local_308,pFVar15,0);
    if (local_308.ShaderContent == (FShader *)0x0) {
      FVar16 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_280);
      ::FName::ToString((FName *)FVar16,&local_158);
      FCompactFeedbackHashTableCS::GetStaticType();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FCompactFeedbackHashTableCS::GetStaticType();
    local_148.ShaderContent = (FCompactFeedbackHashTableCS *)local_308.ShaderContent;
    pFVar9 = FRDGEventName::FRDGEventName(&local_b0,1,L"Compact feedback hash table");
    pFVar17 = FCompactFeedbackHashTableCS::FParameters::FTypeInfo::GetStructMetadata();
    uVar8 = local_3b0;
    local_2e8._s_0.Y = 1;
    local_2e8._s_0.Z = 1;
    iVar7 = local_3b0 * 2 + 0x3f;
    local_2e8._s_0.X = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fU)) >> 6;
    FComputeShaderUtils::AddPass<FCompactFeedbackHashTableCS>
              (param_1,pFVar9,Compute,&local_148,pFVar17,(FParameters *)(puVar14 + 2),
               (TIntVector3<int> *)&local_2e8._s_0);
    if (local_b0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.FormattedEventName.Data.AllocatorInstance.Data);
    }
    puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      puVar18[2] = 0;
      *puVar18 = &___7__TObject_VFVirtualTextureFeedbackCopyParameters___FRDGAllocator__6B_;
      *(undefined4 *)(puVar18 + 3) = 0x80;
    }
    local_390 = puVar18;
    if ((((undefined8 **)param_1->_padding_ <= &local_390) &&
        (&local_390 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (int)param_1->_padding_;
    if (iVar7 == *(int *)((longlong)&param_1->_padding_ + 4)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,
                         (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(int *)&param_1->_padding_ = iVar7 + 1;
    local_308.ShaderMap._0_4_ = 0x80;
    local_3c8.Desc.bSizeInHeader = true;
    local_3c8.Desc.bPageAndCount = true;
    local_3c8.Desc.BufferSize = uVar8;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_390;
    local_308.ShaderContent = (FShader *)local_350;
    local_3c8.Buffer = local_350;
    local_3c8.__this = (FVirtualTextureFeedback *)&GVirtualTextureFeedback;
    puVar18[2] = local_350;
    puVar18[3] = CONCAT44(local_308.ShaderMap._4_4_,0x80);
    local_3c8.Desc._6_2_ = local_27a;
    pFVar9 = FRDGEventName::FRDGEventName(&local_98,1,L"VirtualTextureFeedbackCopy");
    FRDGBuilder::
    AddPass<FVirtualTextureFeedbackCopyParameters,_FVirtualTextureFeedback::TransferGPUToCPU_::__l2::<lambda_1>_>
              (param_1,pFVar9,(FVirtualTextureFeedbackCopyParameters *)(puVar18 + 2),Readback,
               &local_3c8);
    if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
    }
    if (local_268 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_278);
    }
  }
  return;
}

// GetBufferSize @ 1458ff940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
FVirtualTextureFeedbackBufferResource::GetBufferSize(FVirtualTextureFeedbackBufferResource *this)

{
  if (this->bIsInBeginEndScope != false) {
    return this->FeedbackBufferSize;
  }
  return 0;
}

// GetExtendedDebugBufferSize @ 145900640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall
FVirtualTextureFeedbackBufferResource::GetExtendedDebugBufferSize
          (FVirtualTextureFeedbackBufferResource *this)

{
  if (this->bIsInBeginEndScope != false) {
    return this->ExtendedDebugBufferSize;
  }
  return 0;
}

// GetUAV @ 145908a20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIUnorderedAccessView * __thiscall
FVirtualTextureFeedbackBufferResource::GetUAV(FVirtualTextureFeedbackBufferResource *this)

{
  FRHIUnorderedAccessView *pFVar1;
  
  pFVar1 = this->UAV;
  if ((pFVar1 == (FRHIUnorderedAccessView *)0x0) || (this->bIsInBeginEndScope == false)) {
    pFVar1 = (GEmptyStructuredBufferWithUAV->UnorderedAccessViewRHI).Reference;
  }
  return pFVar1;
}

// ResolveExtendedDebugBuffer @ 14591c830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer
          (FVirtualTextureFeedbackBufferResource *this,FRDGBuilder *param_1)

{
  TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *pTVar1;
  int iVar2;
  FRDGEventName *pFVar3;
  void *pvVar4;
  TRDGEmptyLambdaPass<_public:_class_FRDGBuffer_*___cdecl_FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer(FRDGBuilder_&)_::_2_::<lambda_1>_>
  *pTVar5;
  FRDGBuffer *pFVar6;
  FRDGBuffer *pFVar7;
  TRDGEmptyLambdaPass<_public:_class_FRDGBuffer_*___cdecl_FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer(FRDGBuilder_&)_::_2_::<lambda_2>_>
  *pTVar8;
  <lambda_1> local_res8;
  undefined4 uStack_4c;
  wchar_t *local_40;
  ForAnyElementType FStack_38;
  FShaderParametersMetadata *local_30;
  
  if ((this->bIsInBeginEndScope != false) && (this->ExtendedDebugBufferSize != 0)) {
    local_res8.UAV = this->UAV;
    pFVar3 = FRDGEventName::FRDGEventName
                       ((FRDGEventName *)&local_40,1,
                        L"VirtualTextureFeedbackTransitionBeforeExtract");
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pTVar1 = &param_1->Passes;
    pvVar4 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
    pTVar5 = TRDGEmptyLambdaPass<`FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer'::__l2::<lambda_1>_>
             ::
             TRDGEmptyLambdaPass<_FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer_::__l2::<lambda_1>_>
                       (pvVar4,pFVar3,NeverCull,&local_res8);
    iVar2 = (param_1->Passes).Array.ArrayNum;
    if (iVar2 == (param_1->Passes).Array.ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)pTVar1,
                         &(param_1->Passes).Array.ArrayMax);
    }
    (param_1->Passes).Array.ArrayNum = iVar2 + 1;
    (pTVar1->Array).AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar5;
    *(int *)&pTVar5->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar5);
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    pFVar6 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PooledBuffer,SkipTracking);
    local_40 = (wchar_t *)CONCAT44(this->ExtendedDebugBufferSize,4);
    FStack_38.Data = (FScriptContainerElement *)CONCAT44(uStack_4c,0x10109);
    local_30 = (FShaderParametersMetadata *)0x0;
    pFVar7 = FRDGBuilder::CreateBuffer
                       (param_1,(FRDGBufferDesc *)&local_40,L"VirtualTexture.DebugBufferCopy",None);
    AddCopyBufferPass(param_1,pFVar7,0,pFVar6,(ulonglong)this->FeedbackBufferSize << 2,
                      (ulonglong)this->ExtendedDebugBufferSize << 2);
    local_res8.UAV = this->UAV;
    pFVar3 = FRDGEventName::FRDGEventName
                       ((FRDGEventName *)&local_40,1,L"VirtualTextureFeedbackTransitionAfterExtract"
                       );
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar3,None);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pvVar4 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,400,8);
    pTVar8 = TRDGEmptyLambdaPass<`FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer'::__l2::<lambda_2>_>
             ::
             TRDGEmptyLambdaPass<_FVirtualTextureFeedbackBufferResource::ResolveExtendedDebugBuffer_::__l2::<lambda_2>_>
                       (pvVar4,pFVar3,NeverCull,(<lambda_2> *)&local_res8);
    iVar2 = (param_1->Passes).Array.ArrayNum;
    if (iVar2 == (param_1->Passes).Array.ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                        (0x808,(ForElementType<FRDGPass_*> *)pTVar1,
                         &(param_1->Passes).Array.ArrayMax);
    }
    (param_1->Passes).Array.ArrayNum = iVar2 + 1;
    (pTVar1->Array).AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar8;
    *(int *)&pTVar8->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
    FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar8);
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    return pFVar7;
  }
  return (FRDGBuffer *)0x0;
}

