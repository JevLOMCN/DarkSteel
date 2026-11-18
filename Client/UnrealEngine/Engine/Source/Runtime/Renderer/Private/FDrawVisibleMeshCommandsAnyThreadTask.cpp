// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// DoTask @ 144f03500

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDrawVisibleMeshCommandsAnyThreadTask::DoTask
          (FDrawVisibleMeshCommandsAnyThreadTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  undefined1 *puVar1;
  FRHIComputeCommandList *this_00;
  FRHICommandListBase *this_01;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  FRHIBreadcrumbAllocator *this_02;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_> *pTVar6;
  IRHICommandContext *pIVar7;
  FRHICommandBase *pFVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  FTaskTagScope local_68;
  FRHIBreadcrumbScope local_58;
  undefined1 local_48;
  uint uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  FTaskTagScope::FTaskTagScope(&local_68,EParallelRenderingThread);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"DrawVisibleMeshCommandsAnyThreadTask");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1597,"DrawVisibleMeshCommandsAnyThreadTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
               ,0x63d);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1597);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    local_30 = 0;
    uStack_2c = 0;
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc._12_8_ = ZEXT48(uStack_34);
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 0;
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc._padding_ = (longlong)u_ParallelDraw;
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc._padding_ = (longlong)u_ParallelDraw__I;
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0x643;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
                ::__l2::Desc.Cs,4000);
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc.TraceGpuSpecId = 0;
    `public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
    ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FDrawVisibleMeshCommandsAnyThreadTask::DoTask'::__l9::<lambda_1>::
           operator()<int_&,int_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  this_00 = (FRHIComputeCommandList *)this->RHICmdList;
  this_02 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
  pTVar6 = FRHIBreadcrumbAllocator::
           Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_const_&,int_&,int_&>
                     (this_02,this_02,
                      &`public:_UNKNOWN___cdecl_`public:_void___cdecl_FDrawVisibleMeshCommandsAnyThreadTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`9'::<lambda_1>::operator()<int&___ptr64,int&___ptr64>(int&___ptr64,int&___ptr64)const___ptr64'
                       ::__l2::Desc,&this->TaskIndex,&this->TaskNum);
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_58,this_00,(FRHIBreadcrumbNode *)pTVar6);
  local_48 = 1;
  iVar9 = this->VisibleMeshDrawCommands->ArrayNum;
  if (this->TaskIndex < iVar9) {
    iVar5 = this->TaskNum;
    iVar5 = (iVar5 + -1 + iVar9) / iVar5;
  }
  else {
    iVar5 = 0;
  }
  iVar10 = this->TaskIndex * iVar5;
  iVar9 = iVar9 - iVar10;
  if (iVar5 < iVar9) {
    iVar9 = iVar5;
  }
  FInstanceCullingContext::SubmitDrawCommands
            (this->InstanceCullingContext,this->VisibleMeshDrawCommands,
             this->GraphicsMinimalPipelineStateSet,&this->OverrideArgs,iVar10,iVar9,
             this->InstanceFactor,this->RHICmdList);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_58);
  this_01 = (FRHICommandListBase *)this->RHICmdList;
  if ((this_01->SubRenderPassInfo).Object == (FRHIParallelRenderPassInfo *)0x0) {
    if (((this_01->PersistentState).bInsideRenderPass == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInsideRenderPass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x10c5,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((this_01->PersistentState).bInsideComputePass != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsInsideComputePass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x10c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = (this_01->PersistentState).field_0xdb;
    if ((this_01->PersistentState).bInsideOcclusionQueryBatch != '\0') {
      (**(code **)(GDynamicRHI->_padding_ + 0x270))(GDynamicRHI,this_01,1);
      (this_01->PersistentState).bInsideOcclusionQueryBatch = '\0';
      bVar4 = (this_01->PersistentState).field_0xdb;
    }
    if ((GRHICommandList.bLatchedBypass == false) || ((bVar4 & 0x20) == 0)) {
      pFVar8 = FMemStackBase::Alloc((FMemStackBase *)this_01,0x10,8);
      this_01->NumCommands = this_01->NumCommands + 1;
      *this_01->CommandLink = pFVar8;
      this_01->CommandLink = &pFVar8->Next;
      pFVar8->Next = (FRHICommandBase *)0x0;
      pFVar8->_padding_ = (longlong)&___7FRHICommandEndRenderPass__6B_;
    }
    else {
      pIVar7 = FRHICommandListBase::GetContext(this_01);
      (**(code **)(pIVar7->_padding_ + 0x250))(pIVar7);
    }
    (this_01->PersistentState).bInsideRenderPass = '\0';
    (this_01->PersistentState).SubpassHint = None;
    (this_01->PersistentState).SubpassIndex = '\0';
  }
  FRHICommandListBase::FinishRecording((FRHICommandListBase *)this->RHICmdList);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_68);
  return;
}

