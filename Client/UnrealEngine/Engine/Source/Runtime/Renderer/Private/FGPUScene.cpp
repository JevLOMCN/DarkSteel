// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 44

// UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives> @ 1448eab40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>
          (FGPUScene *this,FRDGBuilder *param_1,FRegisteredBuffers *param_2,
          FRDGExternalAccessQueue *param_3,FUploadDataSourceAdapterDynamicPrimitives *param_4,
          FTaskHandle *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  atomic<int> aVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FRDGScope *this_00;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar12;
  atomic<UE::Tasks::Private::FTaskBase_*> this_02;
  FRDGScatterUploader *pFVar13;
  uint uVar14;
  FRHIGPUMask FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  FMeshBatchDynamicPrimitiveData *this_03;
  TReferenceControllerBase<1> local_128;
  FLLMScope local_118;
  uint local_114;
  longlong local_110;
  longlong local_108;
  int local_100;
  int iStack_fc;
  uint uStack_f8;
  int iStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  TRDGEventScopeGuard<FRDGScope_RHI> local_d0;
  char local_c0;
  FName local_b8;
  undefined1 local_b0 [24];
  FPipe local_98;
  uint uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar19;
  
  FLLMScope::FLLMScope(&local_118,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_b8 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope((FMemScope *)(local_b0 + 0x10),&local_b8,true);
  bVar9 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)*(Type *)&this->Scene->field_0x8);
  if ((this->bIsEnabled != bVar9) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_610239441725815562>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x4f6,
                         "bIsEnabled == UseGPUScene(GMaxRHIShaderPlatform, Scene.GetFeatureLevel())"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_128._padding_._0_4_ = param_4->PrimitiveData->ArrayNum;
  if ((int)local_128._padding_ != 0) {
    bVar9 = FApp::ShouldUseThreadingForPerformance();
    pTVar7 = CVarGPUSceneParallelUpdate.Ref;
    if (bVar9) {
      bVar9 = IsInParallelRenderingThread();
      if ((!bVar9) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_128.WeakReferenceCount = *(atomic<int> *)(pTVar7->ShadowedValue + 1);
    }
    else {
      local_128.WeakReferenceCount = (atomic<int>)0x0;
    }
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UpdateGPUScene");
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'
                  ::__l2::__CpuProfilerEventSpecId1281,"UpdateGPUScene",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                 ,0x501);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'
                 ::__l2::__CpuProfilerEventSpecId1281);
    }
    local_b0._8_8_ = param_1->_padding_;
    FVar15.GPUMask = *(uint *)&((FRHIComputeCommandList *)local_b0._8_8_)->field_0x29c;
    local_114 = FVar15.GPUMask;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)local_b0._8_8_,
               (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_c0 = '\0';
    if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_60 = 0;
        uStack_5c = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._12_8_ = ZEXT48(uStack_64);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_UpdateGPUScene_;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_UpdateGPUScene_;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x504;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l10::Desc
               ::operator()<int_const_&>'::__l3::<lambda_1>::operator()<int_const_&>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_98.EmptyEventRef.SharedReferenceCount.ReferenceController = &local_128;
      local_98.DebugName =
           (wchar_t *)
           &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
            ::__l2::Desc;
      local_d0.State = (FRDGScopeState *)param_1;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_00;
      uVar18 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
      local_d0.Scope = this_00;
      if ((3 < uVar18) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
        ::__l2::Destructors[uVar18])(&this_00->Impl);
      this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
      pFVar12 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>,int_const_&>
                          (this_01,(tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>_const_*,std::tuple<int_const_&>_>
                                    *)&local_98.EmptyEventRef.SharedReferenceCount);
      FRDGScope_RHI::FRDGScope_RHI
                ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,pFVar12);
      (this_00->Impl).Impl.TypeIndex = '\x02';
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_c0 = '\x01';
    }
    this_02 = (atomic<UE::Tasks::Private::FTaskBase_*>)
              FRDGBuilder::AllocObject<_anonymous_namespace_::FGPUSceneUploadTaskContext>(param_1);
    *(int *)((longlong)this_02 + 0x30) = (int)local_128._padding_;
    *(int *)((longlong)this_02 + 0x40) = this->InstanceDataTileSizeLog2;
    *(uint *)((longlong)this_02 + 0x44) = (1 << ((byte)this->InstanceDataTileSizeLog2 & 0x1f)) - 1;
    uVar11 = FInstanceSceneShaderData::GetDataStrideInFloat4s();
    *(uint *)((longlong)this_02 + 0x48) = uVar11 << ((byte)this->InstanceDataTileSizeLog2 & 0x1f);
    TArray<FPrimitiveUploadInfoHeader,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
    ::SetNumUninitialized
              ((TArray<FPrimitiveUploadInfoHeader,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                *)this_02,(int)local_128._padding_,Default);
    local_128.SharedReferenceCount = (atomic<int>)0x0;
    uVar11 = (((this->InstancePayloadDataBuffer).Reference)->Desc).NumElements;
    local_128._padding_._4_4_ = uVar11;
    if (0 < (int)local_128._padding_) {
      local_108 = 0;
      local_110 = 0;
      do {
        aVar8 = local_128.SharedReferenceCount;
        uStack_ec = 0;
        if ((param_4->PrimitiveData->ArrayNum <= (int)local_128.SharedReferenceCount) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ItemIndex < PrimitiveData.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                                ,0x692,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar19 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)param_4->PrimitiveData
        ;
        local_100 = param_4->PrimitiveIDStartOffset + (int)aVar8;
        local_128._padding_._4_4_ = ~(uint)aVar8 >> 0x1f;
        uVar16 = 0;
        if ((int)aVar8 < *(int *)((longlong)FVar19 + 0x348)) {
          uVar16 = local_128._padding_._4_4_;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
             ((longlong)FVar19 + 0x340) !=
            (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
          FVar19 = *(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
                    ((longlong)FVar19 + 0x340);
        }
        this_03 = (FMeshBatchDynamicPrimitiveData *)((longlong)FVar19 + local_110);
        iStack_f4 = *(int *)&this_03[1].InstanceDynamicData.DataPtr;
        uVar16 = this_03[1].InstanceSceneData.ArrayNum;
        uStack_f8 = uVar16;
        if (iStack_f4 == -1) {
          iStack_f4 = -1;
          local_f0 = 0;
        }
        else {
          iStack_f4 = iStack_f4 + param_4->PayloadStartOffset;
          local_f0 = FMeshBatchDynamicPrimitiveData::GetPayloadFloat4Stride(this_03);
        }
        aVar8 = local_128.SharedReferenceCount;
        iStack_fc = *(int *)&this_03[1].InstanceSceneData.field_0xc + param_4->InstanceIDStartOffset
        ;
        if (((this_03->DataWriterGPU).GPUSceneWriteDelegate != (FGPUSceneWriteDelegate *)0x0) &&
           (uVar16 = (this_03->InstanceSceneData).ArrayNum, uStack_f8 = uVar16,
           (this_03->InstanceCustomData).ArrayNum == 0)) {
          local_f0 = 0;
        }
        uVar17 = 0;
        if ((0xffffff < (int)(iStack_fc + uVar16)) &&
           (uVar16 = 0x1000000 - iStack_fc, uStack_f8 = uVar16, (int)uVar16 < 0)) {
          uVar16 = uVar17;
          uStack_f8 = uVar17;
        }
        uStack_e8 = 0;
        if (local_f0 != 0) {
          uStack_e8 = uVar16;
        }
        uVar14 = uVar11 - iStack_f4;
        if ((int)(uVar11 - iStack_f4) < 0) {
          uVar14 = uVar17;
        }
        if ((int)uVar14 < (int)(uStack_e8 * local_f0)) {
          uStack_e8 = (int)uVar14 / (int)local_f0;
        }
        *(int *)((longlong)this_02 + 0x38) = *(int *)((longlong)this_02 + 0x38) + uVar16;
        *(int *)((longlong)this_02 + 0x3c) =
             *(int *)((longlong)this_02 + 0x3c) + uStack_e8 * local_f0;
        if ((int)local_128.SharedReferenceCount < *(int *)((longlong)this_02 + 8)) {
          uVar17 = local_128._padding_._4_4_;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_128.SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        lVar5 = *(longlong *)this_02;
        local_110 = local_110 + 0x68;
        *(undefined8 *)(local_108 + lVar5) = CONCAT44(iStack_fc,local_100);
        ((undefined8 *)(local_108 + lVar5))[1] = CONCAT44(iStack_f4,uStack_f8);
        puVar2 = (undefined8 *)(local_108 + 0x10 + lVar5);
        *puVar2 = CONCAT44(uStack_ec,local_f0);
        puVar2[1] = CONCAT44(uStack_e4,uStack_e8);
        puVar2 = (undefined8 *)(local_108 + 0x20 + lVar5);
        *puVar2 = 0;
        puVar2[1] = 0;
        local_108 = local_108 + 0x30;
        FVar15.GPUMask = local_114;
      } while ((int)local_128.SharedReferenceCount < (int)local_128._padding_);
    }
    uVar11 = (param_4->PrimitivesIds).ArrayNum;
    if (((int)uVar11 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar13 = FRDGAsyncScatterUploadBuffer::Begin
                        (&this->PrimitiveUploadBuffer,param_1,
                         (FRDGViewableResource *)param_2->PrimitiveBuffer,uVar11,0x2c0,
                         L"PrimitiveUploadBuffer");
    *(FRDGScatterUploader **)((longlong)this_02 + 0x10) = pFVar13;
    if (0 < *(int *)((longlong)this_02 + 0x3c)) {
      pFVar13 = FRDGAsyncScatterUploadBuffer::BeginPreSized
                          (&this->InstancePayloadUploadBuffer,param_1,
                           (FRDGViewableResource *)param_2->InstancePayloadDataBuffer,
                           *(int *)((longlong)this_02 + 0x3c),0x10,L"InstancePayloadUploadBuffer");
      *(FRDGScatterUploader **)((longlong)this_02 + 0x18) = pFVar13;
    }
    iVar4 = *(int *)((longlong)this_02 + 0x38);
    if (0 < iVar4) {
      uVar11 = FInstanceSceneShaderData::GetDataStrideInFloat4s();
      pFVar13 = FRDGAsyncScatterUploadBuffer::BeginPreSized
                          (&this->InstanceSceneUploadBuffer,param_1,
                           (FRDGViewableResource *)param_2->InstanceSceneDataBuffer,uVar11 * iVar4,
                           0x10,L"InstanceSceneUploadBuffer");
      *(FRDGScatterUploader **)((longlong)this_02 + 0x20) = pFVar13;
    }
    if (0 < *(int *)((longlong)this_02 + 0x34)) {
      pFVar13 = FRDGAsyncScatterUploadBuffer::Begin
                          (&this->LightmapUploadBuffer,param_1,
                           (FRDGViewableResource *)param_2->LightmapDataBuffer,
                           *(int *)((longlong)this_02 + 0x34),0xf0,L"LightmapUploadBuffer");
      *(FRDGScatterUploader **)((longlong)this_02 + 0x28) = pFVar13;
    }
    if (((int)local_128.WeakReferenceCount < 1) ||
       ((*(int *)((longlong)this_02 + 0x3c) <= (int)local_128.WeakReferenceCount &&
        (*(int *)((longlong)this_02 + 0x30) <= (int)local_128.WeakReferenceCount)))) {
      local_98.EmptyEventRef.Object._0_1_ = 0;
    }
    else {
      local_98.EmptyEventRef.Object._0_1_ = 1;
    }
    local_98.EmptyEventRef.Object._4_4_ = this->FeatureLevel;
    local_98.TaskCount = (atomic<unsigned___int64>)param_4;
    local_98.LastTask = this_02;
    FRDGBuilder::
    AddCommandListSetupTask<_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>_::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>
              (param_1,(<lambda_2> *)local_b0,&local_98,(FTaskHandle *)0x0,(ETaskPriority)param_5,
               true,Execute);
    if ((FGPUSceneUploadTaskContext *)local_b0._0_8_ != (FGPUSceneUploadTaskContext *)0x0) {
      LOCK();
      piVar1 = (int *)(local_b0._0_8_ + 0x30);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(((TArray<FPrimitiveUploadInfoHeader,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)local_b0._0_8_)->AllocatorInstance).Data)(local_b0._0_8_,1);
      }
    }
    FRDGAsyncScatterUploadBuffer::End
              (&this->PrimitiveUploadBuffer,param_1,
               *(FRDGScatterUploader **)((longlong)this_02 + 0x10));
    if (*(FRDGScatterUploader **)((longlong)this_02 + 0x18) != (FRDGScatterUploader *)0x0) {
      FRDGAsyncScatterUploadBuffer::End
                (&this->InstancePayloadUploadBuffer,param_1,
                 *(FRDGScatterUploader **)((longlong)this_02 + 0x18));
    }
    if (*(FRDGScatterUploader **)((longlong)this_02 + 0x20) != (FRDGScatterUploader *)0x0) {
      FRDGAsyncScatterUploadBuffer::End
                (&this->InstanceSceneUploadBuffer,param_1,
                 *(FRDGScatterUploader **)((longlong)this_02 + 0x20));
    }
    if (*(FRDGScatterUploader **)((longlong)this_02 + 0x28) != (FRDGScatterUploader *)0x0) {
      FRDGAsyncScatterUploadBuffer::End
                (&this->LightmapUploadBuffer,param_1,
                 *(FRDGScatterUploader **)((longlong)this_02 + 0x28));
    }
    pTVar7 = CVarGPUSceneMaxPooledUploadBufferSize.Ref;
    bVar10 = IsInParallelRenderingThread();
    if ((!bVar10) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = pTVar7->ShadowedValue[1];
    uVar16 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->PrimitiveUploadBuffer);
    if (uVar11 < uVar16) {
      FRDGAsyncScatterUploadBuffer::Release(&this->PrimitiveUploadBuffer);
    }
    uVar16 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->InstanceSceneUploadBuffer);
    if (uVar11 < uVar16) {
      FRDGAsyncScatterUploadBuffer::Release(&this->InstanceSceneUploadBuffer);
    }
    uVar16 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->InstancePayloadUploadBuffer);
    if (uVar11 < uVar16) {
      FRDGAsyncScatterUploadBuffer::Release(&this->InstancePayloadUploadBuffer);
    }
    uVar16 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->LightmapUploadBuffer);
    if (uVar11 < uVar16) {
      FRDGAsyncScatterUploadBuffer::Release(&this->LightmapUploadBuffer);
    }
    if (local_c0 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_d0);
    }
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)local_b0._8_8_,FVar15);
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope((FMemScope *)(local_b0 + 0x10));
  FLLMScope::~FLLMScope(&local_118);
  return;
}

// UploadGeneral<FUploadDataSourceAdapterScenePrimitives> @ 1448eb470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>
          (FGPUScene *this,FRDGBuilder *param_1,FRegisteredBuffers *param_2,
          FRDGExternalAccessQueue *param_3,FUploadDataSourceAdapterScenePrimitives *param_4,
          FTaskHandle *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  FScene *pFVar6;
  FPrimitiveSceneProxy *this_00;
  FPrimitiveSceneInfo *pFVar7;
  longlong lVar8;
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  FRDGScope *this_01;
  FRHIBreadcrumbAllocator *this_02;
  FRHIBreadcrumbNode *pFVar15;
  atomic<UE::Tasks::Private::FTaskBase_*> this_03;
  FRDGScatterUploader *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  FRHIGPUMask FVar19;
  ulonglong uVar20;
  uint uVar21;
  TReferenceControllerBase<1> local_124;
  FLLMScope local_114;
  int local_110;
  uint local_10c;
  int local_108;
  uint local_104;
  uint local_100;
  longlong local_f8;
  int local_f0;
  int iStack_ec;
  uint uStack_e8;
  int iStack_e4;
  int local_e0;
  atomic<int> aStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  FPrimitiveSceneProxy *local_d0;
  FPrimitiveSceneInfo *pFStack_c8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_c0;
  char local_b0;
  FName local_a8;
  undefined1 local_a0 [24];
  FPipe local_88;
  uint uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  FLLMScope::FLLMScope(&local_114,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_a8 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope((FMemScope *)(local_a0 + 0x10),&local_a8,true);
  bVar11 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                       (FGenericStaticFeatureLevel)*(Type *)&this->Scene->field_0x8);
  if ((this->bIsEnabled != bVar11) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_610239441725815562>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                          ,0x4f6,
                          "bIsEnabled == UseGPUScene(GMaxRHIShaderPlatform, Scene.GetFeatureLevel())"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_124._padding_._0_4_ = (param_4->PrimitivesToUpdate).ArrayNum;
  if ((int)local_124._padding_ != 0) {
    bVar11 = FApp::ShouldUseThreadingForPerformance();
    pTVar10 = CVarGPUSceneParallelUpdate.Ref;
    if (bVar11) {
      bVar11 = IsInParallelRenderingThread();
      if ((!bVar11) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_124.SharedReferenceCount = *(atomic<int> *)(pTVar10->ShadowedValue + 1);
    }
    else {
      local_124.SharedReferenceCount = (atomic<int>)0x0;
    }
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UpdateGPUScene");
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'
                  ::__l2::__CpuProfilerEventSpecId1281,"UpdateGPUScene",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                 ,0x501);
      FCpuProfilerTrace::OutputBeginEvent
                (`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'
                 ::__l2::__CpuProfilerEventSpecId1281);
    }
    local_a0._8_8_ = param_1->_padding_;
    FVar19.GPUMask = *(uint *)&((FRHIComputeCommandList *)local_a0._8_8_)->field_0x29c;
    local_100 = FVar19.GPUMask;
    FRHIComputeCommandList::SetGPUMask
              ((FRHIComputeCommandList *)local_a0._8_8_,
               (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_b0 = '\0';
    if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        local_50 = 0;
        uStack_4c = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._12_8_ = ZEXT48(uStack_54);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_._4_4_ = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_UpdateGPUScene_;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)u_UpdateGPUScene_;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc._padding_._0_4_ = 0x504;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
                    ::__l2::Desc.Cs,4000);
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc.TraceGpuSpecId = 0;
        `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l10::Desc::
               operator()<int_const_&>'::__l3::<lambda_1>::operator()<int_const_&>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      local_88.EmptyEventRef.SharedReferenceCount.ReferenceController = &local_124;
      local_88.DebugName =
           (wchar_t *)
           &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`10'::<lambda_1>::operator()<int_const&___ptr64>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64,int_const&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<int_const&___ptr64>(int_const&___ptr64)const___ptr64'
            ::__l2::Desc;
      local_c0.State = (FRDGScopeState *)param_1;
      this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_01;
      uVar18 = (ulonglong)(this_01->Impl).Impl.TypeIndex;
      local_c0.Scope = this_01;
      if ((3 < uVar18) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
        ::__l2::Destructors[uVar18])(&this_01->Impl);
      this_02 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
      pFVar15 = FRHIBreadcrumbAllocator::
                AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>,int_const_&>
                          (this_02,(tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>_const_*,std::tuple<int_const_&>_>
                                    *)&local_88.EmptyEventRef.SharedReferenceCount);
      FRDGScope_RHI::FRDGScope_RHI
                ((FRDGScope_RHI *)&this_01->Impl,(FRDGScopeState *)param_1,pFVar15);
      (this_01->Impl).Impl.TypeIndex = '\x02';
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_b0 = '\x01';
    }
    uVar18 = 0;
    this_03 = (atomic<UE::Tasks::Private::FTaskBase_*>)
              FRDGBuilder::AllocObject<_anonymous_namespace_::FGPUSceneUploadTaskContext>(param_1);
    *(int *)((longlong)this_03 + 0x30) = (int)local_124._padding_;
    *(int *)((longlong)this_03 + 0x40) = this->InstanceDataTileSizeLog2;
    *(uint *)((longlong)this_03 + 0x44) = (1 << ((byte)this->InstanceDataTileSizeLog2 & 0x1f)) - 1;
    uVar13 = FInstanceSceneShaderData::GetDataStrideInFloat4s();
    *(uint *)((longlong)this_03 + 0x48) = uVar13 << ((byte)this->InstanceDataTileSizeLog2 & 0x1f);
    TArray<FPrimitiveUploadInfoHeader,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
    ::SetNumUninitialized
              ((TArray<FPrimitiveUploadInfoHeader,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                *)this_03,(int)local_124._padding_,Default);
    local_124._padding_._4_4_ = 0;
    local_10c = (((this->InstancePayloadDataBuffer).Reference)->Desc).NumElements;
    if (0 < (int)local_124._padding_) {
      local_f8 = 0;
      uVar20 = uVar18;
      do {
        local_104 = ~(uint)uVar18 >> 0x1f;
        uVar13 = 0;
        if ((int)(uint)uVar18 < (param_4->PrimitivesToUpdate).ArrayNum) {
          uVar13 = local_104;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = param_4->Scene;
        iVar4 = *(int *)((param_4->PrimitivesToUpdate).AllocatorInstance.Data + uVar20);
        if ((iVar4 == -1) || ((pFVar6->PersistentPrimitiveIdToIndexMap).ArrayNum <= iVar4)) {
          uVar13 = 0xffffffff;
LAB_1448eb8a4:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Scene.PrimitiveSceneProxies.IsValidIndex(PrimitiveID)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                              ,0x1d5,L"");
          if (bVar12) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        else {
          if ((iVar4 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar13 = *(uint *)((pFVar6->PersistentPrimitiveIdToIndexMap).AllocatorInstance.Data +
                            (longlong)iVar4 * 4);
          if (((int)uVar13 < 0) || ((param_4->Scene->PrimitiveSceneProxies).ArrayNum <= (int)uVar13)
             ) goto LAB_1448eb8a4;
        }
        pFVar6 = param_4->Scene;
        uVar14 = 0;
        if ((int)uVar13 < (pFVar6->PrimitiveSceneProxies).ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_00 = *(FPrimitiveSceneProxy **)
                   ((pFVar6->PrimitiveSceneProxies).AllocatorInstance.Data +
                   (longlong)(int)uVar13 * 8);
        pFVar7 = this_00->PrimitiveSceneInfo;
        local_124.WeakReferenceCount = (atomic<int>)pFVar7->NumLightmapDataEntries;
        iVar5 = pFVar7->InstanceSceneDataOffset;
        local_d0 = (FPrimitiveSceneProxy *)0x0;
        if (this_00->bIsNaniteMesh != '\0') {
          local_d0 = this_00;
        }
        local_108 = pFVar7->InstancePayloadDataOffset;
        local_110 = pFVar7->InstancePayloadDataStride;
        local_f0 = iVar4;
        iStack_ec = iVar5;
        iStack_e4 = local_108;
        local_e0 = local_110;
        aStack_dc = local_124.WeakReferenceCount;
        pFStack_c8 = pFVar7;
        bVar12 = FPrimitiveSceneProxy::IsInstanceDataGPUOnly(this_00);
        if (bVar12) {
          uVar13 = 0;
          uStack_e8 = 0;
        }
        else {
          uVar13 = pFVar7->NumInstanceSceneDataEntries;
          uStack_e8 = uVar13;
          if (((uVar13 != 0) && (iVar5 < 0)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PrimitiveUploadInfo.NumInstanceUploads == 0 || PrimitiveUploadInfo.InstanceSceneDataOffset >= 0"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                                  ,0x1ec,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        uVar14 = local_124._padding_._4_4_;
        uVar21 = 0;
        if ((0xffffff < (int)(iVar5 + uVar13)) &&
           (uVar13 = 0x1000000 - iVar5, uStack_e8 = uVar13, (int)uVar13 < 0)) {
          uVar13 = uVar21;
          uStack_e8 = uVar21;
        }
        uStack_d8 = 0;
        if (local_110 != 0) {
          uStack_d8 = uVar13;
        }
        uVar17 = local_10c - local_108;
        if ((int)(local_10c - local_108) < 0) {
          uVar17 = uVar21;
        }
        if ((int)uVar17 < (int)(uStack_d8 * local_110)) {
          uStack_d8 = (int)uVar17 / local_110;
        }
        *(int *)((longlong)this_03 + 0x38) = *(int *)((longlong)this_03 + 0x38) + uVar13;
        *(int *)((longlong)this_03 + 0x34) =
             *(int *)((longlong)this_03 + 0x34) + (int)local_124.WeakReferenceCount;
        *(int *)((longlong)this_03 + 0x3c) =
             *(int *)((longlong)this_03 + 0x3c) + uStack_d8 * local_110;
        if ((int)local_124._padding_._4_4_ < *(int *)((longlong)this_03 + 8)) {
          uVar21 = local_104;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_124._padding_._4_4_ = uVar14 + 1;
        uVar18 = (ulonglong)local_124._padding_._4_4_;
        lVar8 = *(longlong *)this_03;
        uVar20 = uVar20 + 4;
        *(undefined8 *)(local_f8 + lVar8) = CONCAT44(iStack_ec,local_f0);
        ((undefined8 *)(local_f8 + lVar8))[1] = CONCAT44(iStack_e4,uStack_e8);
        puVar2 = (undefined8 *)(local_f8 + 0x10 + lVar8);
        *puVar2 = CONCAT44(aStack_dc,local_e0);
        puVar2[1] = CONCAT44(uStack_d4,uStack_d8);
        puVar2 = (undefined8 *)(local_f8 + 0x20 + lVar8);
        *puVar2 = local_d0;
        puVar2[1] = pFStack_c8;
        local_f8 = local_f8 + 0x30;
        FVar19.GPUMask = local_100;
      } while ((int)local_124._padding_._4_4_ < (int)local_124._padding_);
    }
    uVar13 = (param_4->PrimitivesToUpdate).ArrayNum;
    if (((int)uVar13 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar16 = FRDGAsyncScatterUploadBuffer::Begin
                        (&this->PrimitiveUploadBuffer,param_1,
                         (FRDGViewableResource *)param_2->PrimitiveBuffer,uVar13,0x2c0,
                         L"PrimitiveUploadBuffer");
    *(FRDGScatterUploader **)((longlong)this_03 + 0x10) = pFVar16;
    if (0 < *(int *)((longlong)this_03 + 0x3c)) {
      pFVar16 = FRDGAsyncScatterUploadBuffer::BeginPreSized
                          (&this->InstancePayloadUploadBuffer,param_1,
                           (FRDGViewableResource *)param_2->InstancePayloadDataBuffer,
                           *(int *)((longlong)this_03 + 0x3c),0x10,L"InstancePayloadUploadBuffer");
      *(FRDGScatterUploader **)((longlong)this_03 + 0x18) = pFVar16;
    }
    iVar4 = *(int *)((longlong)this_03 + 0x38);
    if (0 < iVar4) {
      uVar13 = FInstanceSceneShaderData::GetDataStrideInFloat4s();
      pFVar16 = FRDGAsyncScatterUploadBuffer::BeginPreSized
                          (&this->InstanceSceneUploadBuffer,param_1,
                           (FRDGViewableResource *)param_2->InstanceSceneDataBuffer,uVar13 * iVar4,
                           0x10,L"InstanceSceneUploadBuffer");
      *(FRDGScatterUploader **)((longlong)this_03 + 0x20) = pFVar16;
    }
    if (0 < *(int *)((longlong)this_03 + 0x34)) {
      pFVar16 = FRDGAsyncScatterUploadBuffer::Begin
                          (&this->LightmapUploadBuffer,param_1,
                           (FRDGViewableResource *)param_2->LightmapDataBuffer,
                           *(int *)((longlong)this_03 + 0x34),0xf0,L"LightmapUploadBuffer");
      *(FRDGScatterUploader **)((longlong)this_03 + 0x28) = pFVar16;
    }
    if (((int)local_124.SharedReferenceCount < 1) ||
       ((*(int *)((longlong)this_03 + 0x3c) <= (int)local_124.SharedReferenceCount &&
        (*(int *)((longlong)this_03 + 0x30) <= (int)local_124.SharedReferenceCount)))) {
      local_88.EmptyEventRef.Object._0_1_ = 0;
    }
    else {
      local_88.EmptyEventRef.Object._0_1_ = 1;
    }
    local_88.EmptyEventRef.Object._4_4_ = this->FeatureLevel;
    local_88.TaskCount = (atomic<unsigned___int64>)param_4;
    local_88.LastTask = this_03;
    FRDGBuilder::
    AddCommandListSetupTask<_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>_::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_const_&>
              (param_1,(<lambda_2> *)local_a0,&local_88,(FTaskHandle *)0x0,(ETaskPriority)param_5,
               true,Execute);
    if ((FGPUSceneUploadTaskContext *)local_a0._0_8_ != (FGPUSceneUploadTaskContext *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a0._0_8_ + 0x30);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(((TArray<FPrimitiveUploadInfoHeader,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       *)local_a0._0_8_)->AllocatorInstance).Data)(local_a0._0_8_,1);
      }
    }
    FRDGAsyncScatterUploadBuffer::End
              (&this->PrimitiveUploadBuffer,param_1,
               *(FRDGScatterUploader **)((longlong)this_03 + 0x10));
    if (*(FRDGScatterUploader **)((longlong)this_03 + 0x18) != (FRDGScatterUploader *)0x0) {
      FRDGAsyncScatterUploadBuffer::End
                (&this->InstancePayloadUploadBuffer,param_1,
                 *(FRDGScatterUploader **)((longlong)this_03 + 0x18));
    }
    if (*(FRDGScatterUploader **)((longlong)this_03 + 0x20) != (FRDGScatterUploader *)0x0) {
      FRDGAsyncScatterUploadBuffer::End
                (&this->InstanceSceneUploadBuffer,param_1,
                 *(FRDGScatterUploader **)((longlong)this_03 + 0x20));
    }
    if (*(FRDGScatterUploader **)((longlong)this_03 + 0x28) != (FRDGScatterUploader *)0x0) {
      FRDGAsyncScatterUploadBuffer::End
                (&this->LightmapUploadBuffer,param_1,
                 *(FRDGScatterUploader **)((longlong)this_03 + 0x28));
    }
    pTVar10 = CVarGPUSceneMaxPooledUploadBufferSize.Ref;
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar13 = pTVar10->ShadowedValue[1];
    uVar14 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->PrimitiveUploadBuffer);
    if (uVar13 < uVar14) {
      FRDGAsyncScatterUploadBuffer::Release(&this->PrimitiveUploadBuffer);
    }
    uVar14 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->InstanceSceneUploadBuffer);
    if (uVar13 < uVar14) {
      FRDGAsyncScatterUploadBuffer::Release(&this->InstanceSceneUploadBuffer);
    }
    uVar14 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->InstancePayloadUploadBuffer);
    if (uVar13 < uVar14) {
      FRDGAsyncScatterUploadBuffer::Release(&this->InstancePayloadUploadBuffer);
    }
    uVar14 = FRDGAsyncScatterUploadBuffer::GetNumBytes(&this->LightmapUploadBuffer);
    if (uVar13 < uVar14) {
      FRDGAsyncScatterUploadBuffer::Release(&this->LightmapUploadBuffer);
    }
    if (local_b0 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_c0);
    }
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)local_a0._8_8_,FVar19);
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  FMemScope::~FMemScope((FMemScope *)(local_a0 + 0x10));
  FLLMScope::~FLLMScope(&local_114);
  return;
}

// FGPUScene @ 1448ecfc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGPUScene * __thiscall FGPUScene::FGPUScene(FGPUScene *this,FScene *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  FRendererOnScreenNotification *lpCriticalSection;
  longlong lVar4;
  FDelegateHandle local_res10;
  
  lVar4 = 0;
  this->bUpdateAllPrimitives = false;
  (this->PrimitiveBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitiveUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PrimitiveUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->InstanceSceneDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->InstanceSceneUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->InstanceSceneUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  pTVar1 = CVarGPUSceneUseGrowOnlyAllocationPolicy.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_1448ed016:
    lVar3 = lVar4;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (bVar2) goto LAB_1448ed016;
  }
  FSpanAllocator::FSpanAllocator
            (&this->InstancePayloadDataAllocator,
             *(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0);
  (this->InstancePayloadDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->InstancePayloadUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->InstancePayloadUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  pTVar1 = CVarGPUSceneUseGrowOnlyAllocationPolicy.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_1448ed05a:
    lVar3 = lVar4;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (bVar2) goto LAB_1448ed05a;
  }
  FSpanAllocator::FSpanAllocator
            (&this->LightmapDataAllocator,*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0);
  (this->LightmapDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->LightmapUploadBuffer).ScatterBuffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->LightmapUploadBuffer).UploadBuffer.Reference = (FRDGPooledBuffer *)0x0;
  this->bUseTiledInstanceDataLayout = true;
  this->InstanceDataTileSizeLog2 = -1;
  UE::RendererPrivateUtils::Implementation::FPersistentBuffer::FPersistentBuffer
            ((FPersistentBuffer *)&this->LightDataBuffer,0x100,L"GPUScene.LightData",true);
  this->NumGPULights = 0;
  (this->LightDataSetupTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->LightDataArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightDataArray).ArrayNum = 0;
  (this->LightDataArray).ArrayMax = 0;
  this->Scene = param_1;
  pTVar1 = CVarGPUSceneUseGrowOnlyAllocationPolicy.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_1448ed0f0;
  }
  lVar3 = lVar4;
LAB_1448ed0f0:
  FSpanAllocator::FSpanAllocator
            (&this->InstanceSceneDataAllocator,
             *(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0);
  (this->PrimitivesToUpdate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitivesToUpdate).ArrayNum = 0;
  (this->PrimitivesToUpdate).ArrayMax = 0;
  (this->CachedRegisteredBuffers).PrimitiveBuffer = (FRDGBuffer *)0x0;
  (this->CachedRegisteredBuffers).InstanceSceneDataBuffer = (FRDGBuffer *)0x0;
  (this->CachedRegisteredBuffers).InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  (this->CachedRegisteredBuffers).LightmapDataBuffer = (FRDGBuffer *)0x0;
  (this->CachedRegisteredBuffers).LightDataBuffer = (FRDGBuffer *)0x0;
  (this->PrimitiveDirtyState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveDirtyState).ArrayNum = 0;
  (this->PrimitiveDirtyState).ArrayMax = 0;
  (this->InstanceRangesToClear).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceRangesToClear).ArrayNum = 0;
  (this->InstanceRangesToClear).ArrayMax = 0;
  this->DeferredGPUWritePassDelegates[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->DeferredGPUWritePassDelegates[0].ArrayNum = 0;
  this->DeferredGPUWritePassDelegates[0].ArrayMax = 0;
  this->LastDeferredGPUWritePass = None;
  this->SceneFrameNumber = 0xffffffff;
  this->DynamicPrimitivesOffset = 0;
  this->PrevDynamicPrimitivesMaxSize = 0;
  this->PrevDynamicPrimitivePayloadMaxSize = 0;
  this->PrevDynamicPrimitiveInstanceMaxSize = 0;
  this->bIsEnabled = false;
  this->bInBeginEndBlock = false;
  this->CurrentDynamicContext = (FGPUSceneDynamicContext *)0x0;
  (this->ScreenMessageDelegate).ID = 0;
  this->bLoggedInstanceOverflow = false;
  this->MaxInstancesDuringPrevUpdate = 0;
  this->bLoggedLightOverflow = false;
  this->MaxLightsDuringPrevUpdate = 0;
  this->bLoggedPayloadBufferOverflow = false;
  this->InstancePayloadDataSizeReserveUnclamped = 0;
  lpCriticalSection = FRendererOnScreenNotification::Get();
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::AddLambda<_FGPUScene::FGPUScene_::__l2::<lambda_1>_>
              (&lpCriticalSection->ProxyDelegate,(<lambda_1> *)&local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->ScreenMessageDelegate).ID = local_res10.ID;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~FGPUScene @ 1448ee410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUScene::~FGPUScene(FGPUScene *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  longlong *plVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FDelegateHandle FVar6;
  FScriptContainerElement *pFVar7;
  ForElementType<FSpanAllocator::FLinearAllocation> FVar8;
  FTaskBase *pFVar9;
  undefined8 *puVar10;
  FRDGPooledBuffer *pFVar11;
  longlong lVar12;
  FRendererOnScreenNotification *lpCriticalSection;
  
  lpCriticalSection = FRendererOnScreenNotification::Get();
  FVar6.ID = (this->ScreenMessageDelegate).ID;
  if (lpCriticalSection != (FRendererOnScreenNotification *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
    ::Remove(&lpCriticalSection->ProxyDelegate,FVar6);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar7 = this->DeferredGPUWritePassDelegates[0].AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (this->InstanceRangesToClear).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (this->PrimitiveDirtyState).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (this->PrimitivesToUpdate).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    FVar8 = (this->InstanceSceneDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    FVar8 = (this->InstanceSceneDataAllocator).FreeSpans.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    pFVar7 = (this->LightDataArray).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar9 = (this->LightDataSetupTask).Pimpl.Reference;
    if (pFVar9 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar9->RefCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
    puVar10 = *(undefined8 **)&(this->LightDataBuffer).field_0x18;
    if (puVar10 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar10 + 1);
      LOCK();
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (piVar2 != (int *)0x0)) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->LightmapUploadBuffer);
    pFVar11 = (this->LightmapDataBuffer).Reference;
    if (pFVar11 != (FRDGPooledBuffer *)0x0) {
      plVar3 = &pFVar11->_padding_;
      LOCK();
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar3 != (longlong *)0x0)) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
      }
    }
    FVar8 = (this->LightmapDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    FVar8 = (this->LightmapDataAllocator).FreeSpans.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->InstancePayloadUploadBuffer);
    pFVar11 = (this->InstancePayloadDataBuffer).Reference;
    if (pFVar11 != (FRDGPooledBuffer *)0x0) {
      plVar3 = &pFVar11->_padding_;
      LOCK();
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar3 != (longlong *)0x0)) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
      }
    }
    FVar8 = (this->InstancePayloadDataAllocator).PendingFreeSpans.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    FVar8 = (this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<FSpanAllocator::FLinearAllocation>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->InstanceSceneUploadBuffer);
    pFVar11 = (this->InstanceSceneDataBuffer).Reference;
    if (pFVar11 != (FRDGPooledBuffer *)0x0) {
      plVar3 = &pFVar11->_padding_;
      LOCK();
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar3 != (longlong *)0x0)) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
      }
    }
    FRDGAsyncScatterUploadBuffer::~FRDGAsyncScatterUploadBuffer(&this->PrimitiveUploadBuffer);
    pFVar11 = (this->PrimitiveBuffer).Reference;
    if (pFVar11 != (FRDGPooledBuffer *)0x0) {
      plVar3 = &pFVar11->_padding_;
      LOCK();
      lVar12 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if (((int)lVar12 == 1) && (plVar3 != (longlong *)0x0)) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 1448f2b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FGPUScene::FGPUScene'::__l2::<lambda_1>::operator()
          (void *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  longlong lVar1;
  FText *pFVar2;
  EOnScreenMessageSeverity local_res8 [8];
  FString local_28;
  FText local_18;
  
  if (*(uint *)(*(longlong *)this + 0x404) < 0x1000000) {
    *(undefined1 *)(*(longlong *)this + 0x400) = 0;
  }
  else {
    ::FString::PrintfImpl
              (&local_28,
               L"GPU-Scene Instance data overflow detected, reduce instance count to avoid rendering artifacts"
              );
    pFVar2 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L"  Max allocated ID %d, max instance buffer size: %dM");
    pFVar2 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (*(char *)(*(longlong *)this + 0x400) == '\0') {
      if (2 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      *(undefined1 *)(*(longlong *)this + 0x400) = 1;
    }
  }
  if (*(ulonglong *)(*(longlong *)this + 0x418) < 0x8000000) {
    *(undefined1 *)(*(longlong *)this + 0x410) = 0;
  }
  else {
    ::FString::PrintfImpl
              (&local_28,
               L"GPU-Scene Payload data overflow detected, reduce instance count and/or e.g, use of custom data to avoid rendering artifacts and potentially crashes (depending on the use of payload data)"
              );
    pFVar2 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl
              (&local_28,L"  Buffer size requested %dM, max instance buffer size (in float4s): %dM")
    ;
    pFVar2 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (*(char *)(*(longlong *)this + 0x410) == '\0') {
      if (2 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      *(undefined1 *)(*(longlong *)this + 0x410) = 1;
    }
  }
  lVar1 = *(longlong *)this;
  if (*(int *)(lVar1 + 0x240) < *(int *)(lVar1 + 0x40c)) {
    ::FString::PrintfImpl
              (&local_28,
               L"GPU-Scene Light data overflow detected, reduce light count to avoid rendering artifacts"
              );
    pFVar2 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_28,L"  Max allocated ID %d, light buffer capacity: %d");
    pFVar2 = FText::FromString(&local_18,&local_28);
    local_res8[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_res8,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (*(char *)(*(longlong *)this + 0x408) == '\0') {
      if (2 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      *(undefined1 *)(*(longlong *)this + 0x408) = 1;
      return;
    }
  }
  else {
    *(undefined1 *)(lVar1 + 0x408) = 0;
  }
  return;
}

// operator() @ 1448f2fb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
`FGPUScene::UpdateBufferAllocations'::__l2::<lambda_1>::operator()
          (void *this,FRDGBuilder *param_1,TRefCountPtr<FRDGPooledBuffer> *param_2,uint param_3,
          wchar_t *param_4)

{
  int *piVar1;
  int iVar2;
  TRefCountPtr<FRDGPooledBuffer> TVar3;
  FRDGBuffer *pFVar4;
  undefined8 *local_res8;
  undefined4 uStack_2c;
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  if ((*(char *)this != '\0') && (param_2->Reference == (FRDGPooledBuffer *)0x0)) {
    local_20 = 0x800000000000010;
    _uStack_18 = CONCAT44(uStack_2c,0x410109);
    local_10 = 0;
    TVar3 = AllocatePooledBuffer
                      ((FRDGBufferDesc *)&local_res8,(wchar_t *)&local_20,
                       (ERDGPooledBufferAlignment)param_4);
    TRefCountPtr<FRDGPooledBuffer>::operator=
              (param_2,(TRefCountPtr<FRDGPooledBuffer> *)TVar3.Reference);
    if (local_res8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_res8 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (piVar1 == (int *)0x0) {
          local_res8 = (undefined8 *)0x0;
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
  }
  pFVar4 = ResizeStructuredBufferIfNeeded(param_1,param_2,param_3,param_4);
  return pFVar4;
}

// operator() @ 1448f30a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `FGPUScene::UpdateGPULights'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  bool local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  uint *local_res20;
  <lambda_1> local_118;
  TVector<float>_u_0 local_f8;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UpdateGPUScene_Lights");
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId784,"UpdateGPUScene_Lights",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
               ,0x310);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId784);
  }
  local_res8[0] = FReadOnlyCVARCache::bAllowStaticLighting;
  bVar15 = RenderRectLightsAsSpotLights
                     ((FGenericStaticFeatureLevel)*(Type *)(*(longlong *)this + 0x3f0));
  local_res18[0] = (uint)bVar15;
  local_118.__this = *(FGPUScene **)this;
  local_118.bAllowStaticLighting = local_res8;
  local_118.Flags = local_res18;
  local_118.LightDataUploader =
       (TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
        **)((longlong)this + 8);
  TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
  ForEachCommand<__FGPUScene::UpdateGPULights_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (*(void **)((longlong)this + 0x30),AddedUpdated,&local_118);
  lVar17 = *(longlong *)this;
  local_res10[0] = 0;
  if (0 < *(int *)(lVar17 + 0x240)) {
    do {
      uVar19 = local_res10[0];
      lVar17 = *(longlong *)(lVar17 + 0x280);
      local_f8._0_8_ = 0;
      local_f8._s_0.Z = 0.0;
      uStack_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      if ((((int)local_res10[0] < 0) || (*(int *)(lVar17 + 0x2ac0) <= (int)local_res10[0])) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar20 = lVar17 + 0x2aa8;
      if (*(longlong *)(lVar17 + 0x2ab8) != 0) {
        lVar20 = *(longlong *)(lVar17 + 0x2ab8);
      }
      uVar18 = uVar19 & 0x1f;
      if ((int)uVar19 < 0) {
        uVar19 = uVar19 + 0x1f;
      }
      if ((*(uint *)(lVar20 + (longlong)((int)uVar19 >> 5) * 4) >> uVar18 & 1) == 0) {
        local_f8._s_0.Z = 0.0;
        local_f8._0_8_ = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
      }
      else {
        FGPUScene::InitLightData
                  ((FLightSceneInfoCompact *)
                   ((longlong)(int)local_res10[0] * 0x40 +
                   *(longlong *)(*(longlong *)(*(longlong *)this + 0x280) + 0x2a98)),local_res8[0],
                   local_res18[0],(FLightSceneData *)&local_f8._s_0);
        lVar20 = (longlong)(int)local_res10[0];
        lVar17 = *(longlong *)this;
        uVar19 = 0;
        if ((int)local_res10[0] < *(int *)(lVar17 + 600)) {
          uVar19 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar16 = memcmp(&local_f8,(void *)(lVar20 * 0x60 + *(longlong *)(lVar17 + 0x250)),0x60);
        if (iVar16 != 0) {
          local_res20 = local_res10;
          ``FGPUScene::UpdateGPULights'::__l2::<lambda_1>::operator()'::__l8::<lambda_2>::operator()
                    (&local_res20);
        }
      }
      uVar14 = uStack_a0;
      uVar13 = local_a8;
      uVar12 = uStack_b0;
      uVar11 = local_b8;
      uVar10 = uStack_c0;
      uVar9 = local_c8;
      uVar8 = uStack_d0;
      uVar7 = local_d8;
      uVar6 = local_f8._0_8_;
      lVar20 = (longlong)(int)local_res10[0];
      lVar17 = *(longlong *)this;
      uVar3 = CONCAT44(uStack_ec,local_f8._s_0.Z);
      uVar4 = CONCAT44(uStack_e4,uStack_e8);
      uVar5 = CONCAT44(uStack_dc,uStack_e0);
      uVar19 = 0;
      if ((int)local_res10[0] < *(int *)(lVar17 + 600)) {
        uVar19 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar17 = *(longlong *)(lVar17 + 0x250);
      lVar20 = lVar20 * 0x60;
      *(undefined8 *)(lVar20 + lVar17) = uVar6;
      ((undefined8 *)(lVar20 + lVar17))[1] = uVar3;
      puVar1 = (undefined8 *)(lVar20 + 0x10 + lVar17);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)(lVar20 + 0x20 + lVar17);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1 = (undefined8 *)(lVar20 + 0x30 + lVar17);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)(lVar20 + 0x40 + lVar17);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1 = (undefined8 *)(lVar20 + 0x50 + lVar17);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      lVar17 = *(longlong *)this;
      local_res10[0] = local_res10[0] + 1;
    } while ((int)local_res10[0] < *(int *)(lVar17 + 0x240));
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 1448f39f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  uchar *puVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FInstanceUploadBatch::FItem> FVar8;
  longlong lVar9;
  longlong lVar10;
  ForElementType<FInstanceUploadBatch> FVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  <lambda_1> <Var19;
  bool bVar20;
  undefined1 auStackY_d88 [32];
  uint local_d34;
  uint local_d30;
  longlong local_d28;
  TArrayView<std::nullptr_t,int> local_d08;
  <lambda_1> local_cf8;
  TArrayView<std::nullptr_t,int> local_ce8;
  <lambda_2> local_cd8;
  undefined1 local_cb8 [20];
  int local_ca4;
  uchar *local_ca0;
  ForElementType<FInstanceUploadBatch> local_c98;
  int local_c88;
  int local_c84;
  ForElementType<FInstanceUploadBatch::FItem> local_c80;
  int local_78;
  int local_74;
  TArray<FInstanceBatcher::FPrimitiveItemInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_70;
  int local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d88;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UpdateGPUScene_Primitives");
  <Var19 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId1344,"UpdateGPUScene_Primitives",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
               ,0x540);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId1344);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x10) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(*(FRDGScatterUploader **)(*(longlong *)this + 0x10),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x18) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(*(FRDGScatterUploader **)(*(longlong *)this + 0x18),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x20) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(*(FRDGScatterUploader **)(*(longlong *)this + 0x20),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x28) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(*(FRDGScatterUploader **)(*(longlong *)this + 0x28),param_1);
  }
  FInstanceBatcher::FInstanceBatcher
            ((FInstanceBatcher *)(local_cb8 + 0x10),*(bool *)((longlong)this + 0x10),
             *(int *)(*(longlong *)this + 0x30));
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Primitives");
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
                ::__l3::__CpuProfilerEventSpecId1354,"Primitives",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
               ,0x54a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
               ::__l3::__CpuProfilerEventSpecId1354);
  }
  TArray<FInstanceBatcher::FPrimitiveItemInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  ::SetNumUninitialized(&local_70,*(int *)(*(longlong *)this + 0x30),Default);
  plVar17 = *(longlong **)this;
  uVar13 = 0;
  local_d30 = 0;
  local_d34 = 0;
  if (0 < (int)plVar17[6]) {
    local_d28 = 0;
    uVar12 = uVar13;
    uVar15 = uVar13;
    uVar18 = uVar13;
    do {
      uVar14 = (uint)uVar15;
      uVar6 = 0;
      if ((int)uVar14 < (int)plVar17[1]) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = local_d28 + *plVar17;
      uVar6 = 0;
      if ((int)uVar14 < local_70.ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_70.AllocatorInstance.Data[uVar12] =
           (FPrimitiveItemInfo)((ulonglong)local_d34 << 0x20 | uVar18);
      iVar2 = *(int *)(lVar10 + 8);
      uVar15 = uVar13;
      if (0 < iVar2) {
        do {
          iVar7 = (local_ca4 - local_60) + -1;
          if (iVar7 < 1) {
LAB_1448f3dcb:
            local_60 = 0;
            if (local_c88 == local_c84) {
              local_c88 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch>_>
                                    (0x408,&local_c98,&local_c84);
            }
            FVar11.Data = (FInstanceUploadBatch *)&local_c98;
            if ((ForElementType<FInstanceUploadBatch> *)local_c98.SecondaryData.Data !=
                (ForElementType<FInstanceUploadBatch> *)0x0) {
              FVar11.Data = local_c98.SecondaryData.Data;
            }
            puVar1 = ((ForElementType<FInstanceUploadBatch> *)FVar11.Data)->InlineData +
                     (longlong)local_c88 * 8;
            local_c88 = local_c88 + 1;
            DefaultConstructItems<FInstanceUploadBatch,int>(puVar1,1);
            *(int *)puVar1 = local_78;
            local_ca0 = puVar1;
          }
          else {
            iVar16 = (int)uVar15;
            iVar4 = iVar2 - iVar16;
            if (iVar7 < iVar2 - iVar16) {
              iVar4 = iVar7;
            }
            FVar8.Data = (FItem *)&local_c80;
            if ((ForElementType<FInstanceUploadBatch::FItem> *)local_c80.SecondaryData.Data !=
                (ForElementType<FInstanceUploadBatch::FItem> *)0x0) {
              FVar8.Data = local_c80.SecondaryData.Data;
            }
            local_cb8._0_4_ = uVar14;
            local_cb8._4_4_ = iVar16;
            local_cb8._8_4_ = iVar4;
            if (FVar8.Data <= (ForElementType<FInstanceUploadBatch::FItem> *)local_cb8) {
              FVar8.Data = (FItem *)&local_c80;
              if ((ForElementType<FInstanceUploadBatch::FItem> *)local_c80.SecondaryData.Data !=
                  (ForElementType<FInstanceUploadBatch::FItem> *)0x0) {
                FVar8.Data = local_c80.SecondaryData.Data;
              }
              if ((local_cb8 <
                   ((ForElementType<FInstanceUploadBatch::FItem> *)FVar8.Data)->InlineData +
                   (longlong)local_74 * 0xc) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (local_78 == local_74) {
              local_78 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch::FItem>_>
                                   (0x40c,&local_c80,&local_74);
            }
            lVar9 = (longlong)local_78;
            FVar8.Data = (FItem *)&local_c80;
            if ((ForElementType<FInstanceUploadBatch::FItem> *)local_c80.SecondaryData.Data !=
                (ForElementType<FInstanceUploadBatch::FItem> *)0x0) {
              FVar8.Data = local_c80.SecondaryData.Data;
            }
            uVar15 = (ulonglong)(uint)(iVar16 + iVar4);
            local_78 = local_78 + 1;
            *(ulonglong *)
             (((ForElementType<FInstanceUploadBatch::FItem> *)FVar8.Data)->InlineData + lVar9 * 0xc)
                 = CONCAT44(local_cb8._4_4_,local_cb8._0_4_);
            *(undefined4 *)
             (((ForElementType<FInstanceUploadBatch::FItem> *)FVar8.Data)->InlineData +
             lVar9 * 0xc + 8) = local_cb8._8_4_;
            *(int *)(local_ca0 + 4) = *(int *)(local_ca0 + 4) + 1;
            local_60 = local_60 + 1 + iVar4;
            if ((local_ca4 + -1 < local_60) || ((int)local_cb8._16_4_ <= *(int *)(local_ca0 + 4)))
            goto LAB_1448f3dcb;
          }
        } while ((int)uVar15 < iVar2);
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      local_d30 = local_d30 + *(int *)(lVar10 + 8);
      uVar18 = (ulonglong)local_d30;
      uVar12 = uVar12 + 1;
      plVar17 = *(longlong **)this;
      local_d28 = local_d28 + 0x30;
      local_d34 = local_d34 + *(int *)(lVar10 + 0x18) * *(int *)(lVar10 + 0x10);
    } while ((int)(uVar14 + 1) < (int)plVar17[6]);
  }
  plVar17 = (longlong *)plVar17[2];
  iVar2 = *(int *)(*(longlong *)((longlong)this + 8) + 0x20);
  _Src = *(void **)(*(longlong *)((longlong)this + 8) + 0x18);
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  memcpy((void *)(*plVar17 + (ulonglong)*(uint *)(plVar17 + 2) * 4),_Src,(longlong)iVar2 << 2);
  *(int *)(plVar17 + 2) = (int)plVar17[2] + iVar2;
  local_cf8.UploadDataSourceAdapter =
       *(FUploadDataSourceAdapterDynamicPrimitives **)((longlong)this + 8);
  local_cf8.TaskContext = *(FGPUSceneUploadTaskContext **)this;
  local_d08.DataPtr = (void **)0x0;
  local_d08.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<__FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>_::__l2::<lambda_2>::operator()_::__l3::<lambda_1>,_ParallelForTemplate<__FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>_::__l2::<lambda_2>::operator()_::__l3::<lambda_1>_>_::__l2::<lambda_1>,std::nullptr_t>
            (L"GPUScene Upload Primitives Task",(local_cf8.TaskContext)->NumPrimitiveDataUploads,1,
             &local_cf8,<Var19,(uint)(*(char *)((longlong)this + 0x10) == '\0'),&local_d08);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if ((0 < *(int *)(*(longlong *)this + 0x38)) && (local_c88 != 0)) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Instances");
    bVar20 = -1 < CpuChannel->Enabled;
    if (bVar20) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
                  ::__l9::__CpuProfilerEventSpecId1389,"Instances",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                 ,0x56d);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterDynamicPrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
                 ::__l9::__CpuProfilerEventSpecId1389);
    }
    local_cd8.TaskContext = *(FGPUSceneUploadTaskContext **)this;
    local_cd8.InstanceUpdates = (FInstanceBatcher *)(local_cb8 + 0x10);
    local_cd8.UploadDataSourceAdapter =
         *(FUploadDataSourceAdapterDynamicPrimitives **)((longlong)this + 8);
    local_ce8.DataPtr = (void **)0x0;
    local_ce8.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<__FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>_::__l2::<lambda_2>::operator()_::__l9::<lambda_2>,_ParallelForTemplate<__FGPUScene::UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>_::__l2::<lambda_2>::operator()_::__l9::<lambda_2>_>_::__l2::<lambda_1>,std::nullptr_t>
              (L"GPUScene Upload Instances Task",local_c88,1,&local_cd8,(<lambda_1>)<Var19,
               (uint)(*(char *)((longlong)this + 0x10) == '\0'),&local_ce8);
    if (bVar20) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x10) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Unlock(*(FRDGScatterUploader **)(*(longlong *)this + 0x10),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x18) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Unlock(*(FRDGScatterUploader **)(*(longlong *)this + 0x18),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x20) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Unlock(*(FRDGScatterUploader **)(*(longlong *)this + 0x20),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x28) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Unlock(*(FRDGScatterUploader **)(*(longlong *)this + 0x28),param_1);
  }
  if (local_70.AllocatorInstance.Data != (FPrimitiveItemInfo *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_70.AllocatorInstance.Data)
    ;
  }
  if ((ForElementType<FInstanceUploadBatch::FItem> *)local_c80.SecondaryData.Data !=
      (ForElementType<FInstanceUploadBatch::FItem> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_c80.SecondaryData.Data);
  }
  if ((ForElementType<FInstanceUploadBatch> *)local_c98.SecondaryData.Data !=
      (ForElementType<FInstanceUploadBatch> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_c98.SecondaryData.Data);
  }
  if ((bool)<Var19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 1448f40d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  int iVar1;
  Type TVar2;
  void *_Src;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<FInstanceUploadBatch::FItem> FVar9;
  longlong lVar10;
  FInstanceUploadBatch *pFVar11;
  FItem *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  <lambda_1> <Var20;
  bool bVar21;
  undefined1 auStackY_ec8 [32];
  uint local_e74;
  longlong local_e68;
  TArrayView<std::nullptr_t,int> local_e58;
  <lambda_1> local_e48;
  TArrayView<std::nullptr_t,int> local_e38;
  <lambda_2> local_e28;
  FItem local_e08;
  FItem local_df8 [5];
  FItem *local_db8;
  int local_db0;
  undefined8 local_dac;
  undefined1 local_d98 [40];
  ForElementType<FInstanceUploadBatch::FItem> local_d70;
  int local_168;
  int local_164;
  TArray<FInstanceBatcher::FPrimitiveItemInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_160;
  int local_150;
  FLightmapSceneShaderData local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_ec8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UpdateGPUScene_Primitives");
  <Var20 = (<lambda_1>)(-1 < CpuChannel->Enabled);
  if ((bool)<Var20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId1344,"UpdateGPUScene_Primitives",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
               ,0x540);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId1344);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x10) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(*(FRDGScatterUploader **)(*(longlong *)this + 0x10),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x18) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(*(FRDGScatterUploader **)(*(longlong *)this + 0x18),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x20) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(*(FRDGScatterUploader **)(*(longlong *)this + 0x20),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x28) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Lock(*(FRDGScatterUploader **)(*(longlong *)this + 0x28),param_1);
  }
  FInstanceBatcher::FInstanceBatcher
            ((FInstanceBatcher *)local_d98,*(bool *)((longlong)this + 0x10),
             *(int *)(*(longlong *)this + 0x30));
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Primitives");
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
                ::__l3::__CpuProfilerEventSpecId1354,"Primitives",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
               ,0x54a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
               ::__l3::__CpuProfilerEventSpecId1354);
  }
  TArray<FInstanceBatcher::FPrimitiveItemInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  ::SetNumUninitialized
            ((TArray<FInstanceBatcher::FPrimitiveItemInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              *)(local_d98 + 0xc38),*(int *)(*(longlong *)this + 0x30),Default);
  plVar19 = *(longlong **)this;
  uVar16 = 0;
  local_e74 = 0;
  if (0 < (int)plVar19[6]) {
    uVar14 = 0;
    local_e68 = 0;
    uVar15 = uVar14;
    do {
      uVar13 = 0;
      if ((int)uVar16 < (int)plVar19[1]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = local_e68 + *plVar19;
      uVar13 = 0;
      if ((int)uVar16 < local_160.ArrayNum) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_160.AllocatorInstance.Data[uVar15] =
           (FPrimitiveItemInfo)(uVar14 << 0x20 | (ulonglong)local_e74);
      iVar18 = 0;
      iVar1 = *(int *)(lVar10 + 8);
      if (0 < iVar1) {
        do {
          iVar7 = (local_d98._4_4_ - local_150) + -1;
          if (iVar7 < 1) {
LAB_1448f448c:
            local_150 = 0;
            if (local_d98._32_4_ == local_d98._36_4_) {
              local_d98._32_4_ =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch>_>
                             (0x408,(ForElementType<FInstanceUploadBatch> *)(local_d98 + 0x10),
                              (int *)(local_d98 + 0x24));
            }
            pFVar11 = (FInstanceUploadBatch *)(local_d98 + 0x10);
            if ((FInstanceUploadBatch *)local_d98._24_8_ != (FInstanceUploadBatch *)0x0) {
              pFVar11 = (FInstanceUploadBatch *)local_d98._24_8_;
            }
            pFVar11 = pFVar11 + (int)local_d98._32_4_;
            local_d98._32_4_ = local_d98._32_4_ + 1;
            DefaultConstructItems<FInstanceUploadBatch,int>(pFVar11,1);
            pFVar11->FirstItem = local_168;
            local_d98._8_8_ = pFVar11;
          }
          else {
            iVar4 = iVar1 - iVar18;
            if (iVar7 < iVar1 - iVar18) {
              iVar4 = iVar7;
            }
            FVar9.Data = (FItem *)(local_d98 + 0x28);
            if (local_d70.SecondaryData.Data != (FItem *)0x0) {
              FVar9.Data = local_d70.SecondaryData.Data;
            }
            local_e08.ItemIndex = uVar16;
            local_e08.FirstInstance = iVar18;
            local_e08.NumInstances = iVar4;
            if (FVar9.Data <= &local_e08) {
              FVar9.Data = (FItem *)(local_d98 + 0x28);
              if (local_d70.SecondaryData.Data != (FItem *)0x0) {
                FVar9.Data = local_d70.SecondaryData.Data;
              }
              if ((&local_e08 < FVar9.Data + local_164) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            iVar7 = local_168;
            if (local_168 == local_164) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::ForElementType<FInstanceUploadBatch::FItem>_>
                                (0x40c,(ForElementType<FInstanceUploadBatch::FItem> *)
                                       (local_d98 + 0x28),(int *)(local_d98 + 0xc34));
            }
            local_168 = iVar7 + 1;
            FVar9.Data = (FItem *)(local_d98 + 0x28);
            if (local_d70.SecondaryData.Data != (FItem *)0x0) {
              FVar9.Data = local_d70.SecondaryData.Data;
            }
            iVar18 = iVar18 + iVar4;
            FVar9.Data[iVar7].ItemIndex = local_e08.ItemIndex;
            FVar9.Data[iVar7].FirstInstance = local_e08.FirstInstance;
            FVar9.Data[iVar7].NumInstances = local_e08.NumInstances;
            *(int *)(local_d98._8_8_ + 4) = *(int *)(local_d98._8_8_ + 4) + 1;
            local_150 = local_150 + 1 + iVar4;
            if ((local_d98._4_4_ + -1 < local_150) ||
               ((int)local_d98._0_4_ <= *(int *)(local_d98._8_8_ + 4))) goto LAB_1448f448c;
          }
        } while (iVar18 < iVar1);
      }
      uVar16 = uVar16 + 1;
      local_e74 = local_e74 + *(int *)(lVar10 + 8);
      uVar15 = uVar15 + 1;
      plVar19 = *(longlong **)this;
      local_e68 = local_e68 + 0x30;
      uVar14 = (ulonglong)(uint)((int)uVar14 + *(int *)(lVar10 + 0x18) * *(int *)(lVar10 + 0x10));
    } while ((int)uVar16 < (int)plVar19[6]);
  }
  plVar19 = (longlong *)plVar19[2];
  iVar1 = *(int *)(*(longlong *)((longlong)this + 8) + 0x18);
  _Src = *(void **)(*(longlong *)((longlong)this + 8) + 0x10);
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  memcpy((void *)(*plVar19 + (ulonglong)*(uint *)(plVar19 + 2) * 4),_Src,(longlong)iVar1 << 2);
  *(int *)(plVar19 + 2) = (int)plVar19[2] + iVar1;
  local_e48.UploadDataSourceAdapter =
       *(FUploadDataSourceAdapterScenePrimitives **)((longlong)this + 8);
  local_e48.TaskContext = *(FGPUSceneUploadTaskContext **)this;
  local_e58.DataPtr = (void **)0x0;
  local_e58.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<__FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>_::__l2::<lambda_2>::operator()_::__l3::<lambda_1>,_ParallelForTemplate<__FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>_::__l2::<lambda_2>::operator()_::__l3::<lambda_1>_>_::__l2::<lambda_1>,std::nullptr_t>
            (L"GPUScene Upload Primitives Task",(local_e48.TaskContext)->NumPrimitiveDataUploads,1,
             &local_e48,<Var20,(uint)(*(char *)((longlong)this + 0x10) == '\0'),&local_e58);
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if ((0 < *(int *)(*(longlong *)this + 0x38)) && (local_d98._32_4_ != 0)) {
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"Instances");
    bVar21 = -1 < CpuChannel->Enabled;
    if (bVar21) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
                  ::__l9::__CpuProfilerEventSpecId1389,"Instances",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                 ,0x56d);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:___cdecl_`private:_void___cdecl_FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>(FRDGBuilder&___ptr64,FGPUScene::FRegisteredBuffers_const&___ptr64,FRDGExternalAccessQueue*___ptr64,FUploadDataSourceAdapterScenePrimitives_const&___ptr64,UE::Tasks::Private::FTaskHandle_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(FRHICommandListBase&___ptr64)const___ptr64'
                 ::__l9::__CpuProfilerEventSpecId1389);
    }
    local_e28.TaskContext = *(FGPUSceneUploadTaskContext **)this;
    local_e28.InstanceUpdates = (FInstanceBatcher *)local_d98;
    local_e28.UploadDataSourceAdapter =
         *(FUploadDataSourceAdapterScenePrimitives **)((longlong)this + 8);
    local_e38.DataPtr = (void **)0x0;
    local_e38.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<__FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>_::__l2::<lambda_2>::operator()_::__l9::<lambda_2>,_ParallelForTemplate<__FGPUScene::UploadGeneral<FUploadDataSourceAdapterScenePrimitives>_::__l2::<lambda_2>::operator()_::__l9::<lambda_2>_>_::__l2::<lambda_1>,std::nullptr_t>
              (L"GPUScene Upload Instances Task",local_d98._32_4_,1,&local_e28,(<lambda_1>)<Var20,
               (uint)(*(char *)((longlong)this + 0x10) == '\0'),&local_e38);
    if (bVar21) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  lVar10 = *(longlong *)this;
  if ((*(longlong *)(lVar10 + 0x28) != 0) && (uVar16 = 0, 0 < *(int *)(lVar10 + 0x30))) {
    lVar17 = 0;
    do {
      plVar19 = *(longlong **)((longlong)this + 8);
      local_db8 = (FItem *)0x0;
      local_db0 = 0;
      local_dac = 8;
      uVar13 = 0;
      if ((int)uVar16 < (int)plVar19[3]) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = *plVar19;
      iVar1 = *(int *)(plVar19[2] + lVar17);
      if ((iVar1 != -1) && (iVar1 < *(int *)(lVar10 + 0x2a80))) {
        if ((iVar1 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar13 = *(uint *)(*(longlong *)(lVar10 + 0x2a78) + (longlong)iVar1 * 4);
        if ((-1 < (int)uVar13) && (lVar10 = *plVar19, (int)uVar13 < *(int *)(lVar10 + 0x28b8))) {
          uVar8 = 0;
          if ((int)uVar13 < *(int *)(lVar10 + 0x28b8)) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar19 = *(longlong **)(*(longlong *)(lVar10 + 0x28b0) + (longlong)(int)uVar13 * 8);
          (**(code **)(*plVar19 + 0x1e8))(plVar19,local_df8);
          if ((local_db0 != *(int *)(plVar19[0x45] + 0x238)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("UploadInfo.LCIs.Num() == PrimitiveSceneProxy->GetPrimitiveSceneInfo()->GetNumLightmapDataEntries()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                                  ,0x27d,L""), bVar21)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar13 = 0;
          local_dac = CONCAT44(*(undefined4 *)(plVar19[0x45] + 0x234),(undefined4)local_dac);
          if (0 < local_db0) {
            lVar10 = 0;
            do {
              TVar2 = *(Type *)((longlong)this + 0x14);
              uVar8 = 0;
              if ((int)uVar13 < local_db0) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar12 = local_df8;
              if (local_db8 != (FItem *)0x0) {
                pFVar12 = local_db8;
              }
              FLightmapSceneShaderData::FLightmapSceneShaderData
                        (&local_138,
                         *(FLightCacheInterface **)((longlong)&pFVar12->ItemIndex + lVar10),TVar2);
              plVar19 = *(longlong **)(*(longlong *)this + 0x28);
              *(uint *)(*plVar19 + (ulonglong)*(uint *)(plVar19 + 2) * 4) = local_dac._4_4_ + uVar13
              ;
              lVar5 = plVar19[2];
              *(int *)(plVar19 + 2) = (int)lVar5 + 1;
              memcpy((void *)((ulonglong)((int)lVar5 * *(uint *)(plVar19 + 3)) + plVar19[1]),
                     &local_138,(ulonglong)*(uint *)(plVar19 + 3));
              uVar13 = uVar13 + 1;
              lVar10 = lVar10 + 8;
            } while ((int)uVar13 < local_db0);
          }
        }
      }
      if (local_db8 != (FItem *)0x0) {
        FMemory::Free(local_db8);
      }
      lVar10 = *(longlong *)this;
      uVar16 = uVar16 + 1;
      lVar17 = lVar17 + 4;
    } while ((int)uVar16 < *(int *)(lVar10 + 0x30));
  }
  if (*(FRDGScatterUploader **)(lVar10 + 0x10) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Unlock(*(FRDGScatterUploader **)(lVar10 + 0x10),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x18) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Unlock(*(FRDGScatterUploader **)(*(longlong *)this + 0x18),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x20) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Unlock(*(FRDGScatterUploader **)(*(longlong *)this + 0x20),param_1);
  }
  if (*(FRDGScatterUploader **)(*(longlong *)this + 0x28) != (FRDGScatterUploader *)0x0) {
    FRDGScatterUploader::Unlock(*(FRDGScatterUploader **)(*(longlong *)this + 0x28),param_1);
  }
  if (local_160.AllocatorInstance.Data != (FPrimitiveItemInfo *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_160.AllocatorInstance.Data);
  }
  if (local_d70.SecondaryData.Data != (FItem *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(local_d70.SecondaryData.Data);
  }
  if ((FInstanceUploadBatch *)local_d98._24_8_ != (FInstanceUploadBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((void *)local_d98._24_8_);
  }
  if ((bool)<Var20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// AddClearInstancesPass @ 1448fd030

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUScene::AddClearInstancesPass
          (FGPUScene *this,FRDGBuilder *param_1,FInstanceCullingOcclusionQueryRenderer *param_2)

{
  TArray<FGPUSceneInstanceRange,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FGPUSceneInstanceRange *pFVar4;
  FPackedItem *pFVar5;
  FPackedBatch *pFVar6;
  code *pcVar7;
  uint uVar8;
  FRDGBuilder *pFVar9;
  FInstanceCullingOcclusionQueryRenderer *this_00;
  TRefCountPtr<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FData>
  TVar10;
  bool bVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FInstanceCullingOcclusionQueryRenderer *local_res18;
  undefined4 uStack_8c;
  TArrayView<FGPUSceneInstanceRange_const_,int> local_88;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_78;
  TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_58.Data.Reference = ::operator_new(0x28);
  if (local_58.Data.Reference == (FData *)0x0) {
    local_58.Data.Reference = (FData *)0x0;
  }
  else {
    *(undefined4 *)&(local_58.Data.Reference)->_padding_ = 0;
    ((local_58.Data.Reference)->Batches).AllocatorInstance.Data = (FPackedBatch *)0x0;
    ((local_58.Data.Reference)->Batches).ArrayNum = 0;
    ((local_58.Data.Reference)->Batches).ArrayMax = 0;
    ((local_58.Data.Reference)->Items).AllocatorInstance.Data = (FPackedItem *)0x0;
    ((local_58.Data.Reference)->Items).ArrayNum = 0;
    ((local_58.Data.Reference)->Items).ArrayMax = 0;
    LOCK();
    *(int *)&(local_58.Data.Reference)->_padding_ = (int)(local_58.Data.Reference)->_padding_ + 1;
    UNLOCK();
  }
  local_58.CurrentBatchPrefixSum = 0;
  local_58.CurrentBatchNumItems = 0;
  local_58.CurrentBatchPackedPrefixSum = 0;
  local_58.CurrentBatchFirstItem = 0;
  local_58.TotalInstances = 0;
  local_78.Data.Reference = ::operator_new(0x28);
  if (local_78.Data.Reference == (FData *)0x0) {
    local_78.Data.Reference = (FData *)0x0;
  }
  else {
    *(undefined4 *)&(local_78.Data.Reference)->_padding_ = 0;
    ((local_78.Data.Reference)->Batches).AllocatorInstance.Data = (FPackedBatch *)0x0;
    ((local_78.Data.Reference)->Batches).ArrayNum = 0;
    ((local_78.Data.Reference)->Batches).ArrayMax = 0;
    ((local_78.Data.Reference)->Items).AllocatorInstance.Data = (FPackedItem *)0x0;
    ((local_78.Data.Reference)->Items).ArrayNum = 0;
    ((local_78.Data.Reference)->Items).ArrayMax = 0;
    LOCK();
    *(int *)&(local_78.Data.Reference)->_padding_ = (int)(local_78.Data.Reference)->_padding_ + 1;
    UNLOCK();
  }
  pTVar1 = &this->InstanceRangesToClear;
  local_78.CurrentBatchPrefixSum = 0;
  local_78.CurrentBatchNumItems = 0;
  iVar3 = (this->InstanceRangesToClear).ArrayNum;
  pFVar14 = (pTVar1->AllocatorInstance).Data;
  local_78.CurrentBatchPackedPrefixSum = 0;
  local_78.CurrentBatchFirstItem = 0;
  local_78.TotalInstances = 0;
  pFVar2 = pFVar14 + (longlong)iVar3 * 0xc;
LAB_1448fd101:
  do {
    if ((this->InstanceRangesToClear).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGPUSceneInstanceRange,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    this_00 = local_res18;
    pFVar9 = local_res10;
    if (pFVar14 == pFVar2) {
      if (local_res18 != (FInstanceCullingOcclusionQueryRenderer *)0x0) {
        pFVar4 = (FGPUSceneInstanceRange *)(pTVar1->AllocatorInstance).Data;
        iVar3 = (this->InstanceRangesToClear).ArrayNum;
        if (iVar3 < 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar11) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        local_88._12_4_ = uStack_8c;
        local_88.ArrayNum = iVar3;
        local_88.DataPtr = pFVar4;
        FInstanceCullingOcclusionQueryRenderer::MarkInstancesVisible(this_00,pFVar9,&local_88);
      }
      AddUpdatePrimitiveIdsPass(this,pFVar9,&local_58);
      AddUpdatePrimitiveIdsPass(this,pFVar9,&local_78);
      (this->InstanceRangesToClear).ArrayNum = 0;
      if ((this->InstanceRangesToClear).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&pTVar1->AllocatorInstance,0,&(this->InstanceRangesToClear).ArrayMax);
      }
      TVar10.Reference = local_78.Data.Reference;
      if (local_78.Data.Reference != (FData *)0x0) {
        LOCK();
        lVar12 = (local_78.Data.Reference)->_padding_;
        *(int *)&(local_78.Data.Reference)->_padding_ =
             (int)(local_78.Data.Reference)->_padding_ + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          pFVar5 = ((local_78.Data.Reference)->Items).AllocatorInstance.Data;
          if (pFVar5 != (FPackedItem *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
          }
          pFVar6 = ((TVar10.Reference)->Batches).AllocatorInstance.Data;
          if (pFVar6 != (FPackedBatch *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar6);
          }
          ::operator_delete(TVar10.Reference,0x28);
        }
      }
      TVar10.Reference = local_58.Data.Reference;
      if (local_58.Data.Reference != (FData *)0x0) {
        LOCK();
        lVar12 = (local_58.Data.Reference)->_padding_;
        *(int *)&(local_58.Data.Reference)->_padding_ =
             (int)(local_58.Data.Reference)->_padding_ + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          pFVar5 = ((local_58.Data.Reference)->Items).AllocatorInstance.Data;
          if (pFVar5 != (FPackedItem *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
          }
          pFVar6 = ((TVar10.Reference)->Batches).AllocatorInstance.Data;
          if (pFVar6 != (FPackedBatch *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar6);
          }
          ::operator_delete(TVar10.Reference,0x28);
        }
      }
      return;
    }
    lVar12 = 0x290;
    if ((this->InstanceSceneDataAllocator).bGrowOnly == false) {
      lVar12 = 0x28c;
    }
    iVar15 = 0x1000000;
    if (*(uint *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                 lVar12 + -0x48) < 0x1000000) {
      iVar15 = *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData
                       + lVar12 + -0x48);
    }
    uVar8 = (uint)((ulonglong)*(undefined8 *)pFVar14 >> 0x20);
    if ((int)(uVar8 + *(int *)(pFVar14 + 8)) < iVar15) {
      iVar15 = uVar8 + *(int *)(pFVar14 + 8);
    }
    uVar16 = iVar15 - uVar8;
    if ((int)(iVar15 - uVar8) < 0) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      uVar13 = (uint)*(undefined8 *)pFVar14;
      uVar17 = 0xfffff;
      if (uVar13 != 0xffffffff) {
        uVar17 = uVar13;
      }
      if (uVar17 == 0xfffff) {
        TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        ::Add(&local_58,uVar8,uVar16,0xfffff);
        pFVar14 = pFVar14 + 0xc;
        goto LAB_1448fd101;
      }
      TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
      ::Add(&local_78,uVar8,uVar16,uVar17);
    }
    pFVar14 = pFVar14 + 0xc;
  } while( true );
}

// AddPrimitiveToUpdate @ 1448ff210

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
FGPUScene::AddPrimitiveToUpdate
          (FGPUScene *this,FPersistentPrimitiveIndex param_1,EPrimitiveDirtyState param_2)

{
  int *piVar1;
  TArray<EPrimitiveDirtyState,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FPersistentPrimitiveIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement FVar7;
  uint uVar8;
  longlong lVar9;
  FScriptContainerElement FVar10;
  FLLMScope local_res8 [2];
  uint local_res10 [4];
  FName local_res20;
  FMemScope local_38 [2];
  
  local_res10[0] = param_1.Index;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(local_38,&local_res20,true);
  if ((this->bIsEnabled != false) && (local_res10[0] != 0xffffffff)) {
    this_00 = &this->PrimitiveDirtyState;
    iVar6 = (this->PrimitiveDirtyState).ArrayNum;
    if (iVar6 < (int)(local_res10[0] + 1)) {
      TArray<enum_EPrimitiveDirtyState,TSizedDefaultAllocator<32>_>::AddZeroed
                (this_00,(local_res10[0] + 0x40 & 0xffffffc0) - iVar6);
    }
    lVar9 = (longlong)(int)local_res10[0];
    uVar8 = 0;
    if ((int)local_res10[0] < (this->PrimitiveDirtyState).ArrayNum) {
      uVar8 = ~local_res10[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((this_00->AllocatorInstance).Data[lVar9] == (FScriptContainerElement)0x0) {
      pTVar2 = &this->PrimitivesToUpdate;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
         ((FScriptContainerElement *)local_res10 <
          pFVar3 + (longlong)(this->PrimitivesToUpdate).ArrayMax * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->PrimitivesToUpdate).ArrayNum;
      piVar1 = &(this->PrimitivesToUpdate).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->PrimitivesToUpdate).ArrayNum = iVar6 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
    }
    lVar9 = (longlong)(int)local_res10[0];
    uVar8 = 0;
    if ((int)local_res10[0] < (this->PrimitiveDirtyState).ArrayNum) {
      uVar8 = ~local_res10[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar7 = (FScriptContainerElement)(param_2 | (byte)(this_00->AllocatorInstance).Data[lVar9]);
    lVar9 = (longlong)(int)local_res10[0];
    FVar10 = (FScriptContainerElement)((byte)FVar7 & 0xef);
    if ((param_2 & Removed) == None) {
      FVar10 = FVar7;
    }
    uVar8 = 0;
    if ((int)local_res10[0] < (this->PrimitiveDirtyState).ArrayNum) {
      uVar8 = ~local_res10[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (this_00->AllocatorInstance).Data[lVar9] = FVar10;
  }
  FMemScope::~FMemScope(local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// AddUpdatePrimitiveIdsPass @ 1448ff8e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FGPUScene::AddUpdatePrimitiveIdsPass
          (FGPUScene *this,FRDGBuilder *param_1,
          TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_2)

{
  int *piVar1;
  FData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FGPUData *this_00;
  FGlobalShaderMap *this_01;
  FGlobalShaderType *pFVar7;
  FShaderType *pFVar8;
  FName this_02;
  FRDGEventName *pFVar9;
  FShaderParametersMetadata *pFVar10;
  undefined8 *puVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 *local_108;
  TIntVector3<int>_u_0 local_100 [2];
  TIntVector3<int>_u_0 local_e8;
  TShaderRefBase<FGPUSceneSetInstancePrimitiveIdCS,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  FPackedBatch *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  TArrayView<FInstanceCullingLoadBalancerBase::FPackedBatch_const_,int> local_98;
  FRDGEventName local_88;
  FGPUData local_70;
  
  puVar11 = (undefined8 *)0x0;
  if ((((param_2->Data).Reference)->Items).ArrayNum != 0) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x90,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      puVar6[2] = 0;
      *puVar6 = &___7__TObject_VFParameters_FGPUSceneSetInstancePrimitiveIdCS___FRDGAllocator__6B_;
      puVar6[3] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[0xc] = 0;
      *(undefined1 *)(puVar6 + 0xd) = 1;
      puVar11 = puVar6;
    }
    local_108 = puVar11;
    if ((((undefined8 **)param_1->_padding_ <= &local_108) &&
        (&local_108 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar5 + 1;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_108;
    this_00 = TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              ::Upload(param_2,&local_70,param_1,1);
    FInstanceCullingLoadBalancerBase::FGPUData::GetShaderParameters
              (this_00,param_1,(FShaderParameters *)(puVar11 + 2));
    GetWriteParameters(this,param_1,(FGPUSceneWriterParameters *)(puVar11 + 6),false);
    this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel])
    ;
    pFVar7 = FGPUSceneSetInstancePrimitiveIdCS::GetStaticType();
    if (*(int *)&pFVar7->field_0x50 != 1) {
      local_res18[0] = 0;
      `FGlobalShaderMap::GetShader<FGPUSceneSetInstancePrimitiveIdCS>'::__l2::<lambda_1>::operator()
                (local_res18);
    }
    pFVar8 = (FShaderType *)FGPUSceneSetInstancePrimitiveIdCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_01,&local_c8,pFVar8,0);
    if (local_c8.ShaderContent == (FShader *)0x0) {
      this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res20);
      ::FName::ToString((FName *)this_02,&local_a8);
      FGPUSceneSetInstancePrimitiveIdCS::GetStaticType();
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FGPUSceneSetInstancePrimitiveIdCS::GetStaticType();
    pFVar2 = (param_2->Data).Reference;
    local_d8.ShaderContent = (FGPUSceneSetInstancePrimitiveIdCS *)local_c8.ShaderContent;
    local_d8.ShaderMap = local_c8.ShaderMap;
    local_b8 = (pFVar2->Batches).AllocatorInstance.Data;
    iStack_b0 = (pFVar2->Batches).ArrayNum;
    if ((iStack_b0 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_98._12_4_ = uStack_ac;
    local_98.ArrayNum = iStack_b0;
    local_98.DataPtr = local_b8;
    FInstanceCullingLoadBalancerBase::GetWrappedCsGroupCount
              ((FInstanceCullingLoadBalancerBase *)param_2,(TIntVector3<int> *)&local_100[0]._s_0,
               &local_98,1);
    pFVar9 = FRDGEventName::FRDGEventName(&local_88,1,L"GPUScene::SetInstancePrimitiveIdCS");
    pFVar10 = FGPUSceneSetInstancePrimitiveIdCS::FParameters::FTypeInfo::GetStructMetadata();
    local_e8._0_8_ = local_100[0]._0_8_;
    local_e8._s_0.Z = local_100[0]._s_0.Z;
    FComputeShaderUtils::AddPass<FGPUSceneSetInstancePrimitiveIdCS>
              (param_1,pFVar9,Compute,&local_d8,pFVar10,(FParameters *)(puVar11 + 2),
               (TIntVector3<int> *)&local_e8._s_0);
    if (local_88.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.FormattedEventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AllocateInstancePayloadDataSlots @ 1449000c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FGPUScene::AllocateInstancePayloadDataSlots(FGPUScene *this,int param_1)

{
  int iVar1;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  if ((this->bIsEnabled == false) || (param_1 < 1)) {
    iVar1 = -1;
  }
  else {
    iVar1 = FSpanAllocator::Allocate(&this->InstancePayloadDataAllocator,param_1);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return iVar1;
}

// AllocateInstanceSceneDataSlots @ 144900160

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FGPUScene::AllocateInstanceSceneDataSlots
          (FGPUScene *this,FPersistentPrimitiveIndex param_1,int param_2)

{
  uint uVar1;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_38 [2];
  FGPUSceneInstanceRange local_28;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(local_38,&local_res20,true);
  if ((this->bIsEnabled == false) || (param_2 < 1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FSpanAllocator::Allocate(&this->InstanceSceneDataAllocator,param_2);
    local_28.Primitive.Index = param_1.Index;
    local_28.InstanceSceneDataOffset = uVar1;
    local_28.NumInstanceSceneDataEntries = param_2;
    AddOrMergeInstanceRange(&this->InstanceRangesToClear,&local_28);
  }
  FMemScope::~FMemScope(local_38);
  FLLMScope::~FLLMScope(local_res8);
  return uVar1;
}

// BeginRender @ 144900240

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUScene::BeginRender(FGPUScene *this,FRDGBuilder *param_1,FGPUSceneDynamicContext *param_2)

{
  FRDGBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FRegisteredBuffers *pFVar5;
  longlong lVar6;
  FRegisteredBuffers local_38;
  
  if (this->bInBeginEndBlock != false) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_610239441725816104>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x2d8,"!bInBeginEndBlock");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->CurrentDynamicContext != (FGPUSceneDynamicContext *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_610239441725816103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x2d9,"CurrentDynamicContext == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->CachedRegisteredBuffers).PrimitiveBuffer;
  this->LastDeferredGPUWritePass = None;
  this->CurrentDynamicContext = param_2;
  this->bInBeginEndBlock = true;
  if (pFVar1 != (FRDGBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CachedRegisteredBuffers.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x2de,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bIsEnabled != false) {
    lVar6 = 0x4c28;
    lVar4 = 0x4c28;
    if ((this->Scene->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
      lVar4 = 0x4c24;
    }
    if (this->DynamicPrimitivesOffset !=
        *(int *)((longlong)
                 ((this->Scene->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd) + lVar4
                )) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicPrimitivesOffset == Scene.GetMaxPersistentPrimitiveIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x2e2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->Scene->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
      lVar6 = 0x4c24;
    }
    this->DynamicPrimitivesOffset =
         *(int *)((longlong)
                  ((this->Scene->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd) +
                 lVar6);
    pFVar5 = RegisterBuffers(this,&local_38,param_1);
    pFVar1 = pFVar5->InstanceSceneDataBuffer;
    (this->CachedRegisteredBuffers).PrimitiveBuffer = pFVar5->PrimitiveBuffer;
    (this->CachedRegisteredBuffers).InstanceSceneDataBuffer = pFVar1;
    pFVar1 = pFVar5->LightmapDataBuffer;
    (this->CachedRegisteredBuffers).InstancePayloadDataBuffer = pFVar5->InstancePayloadDataBuffer;
    (this->CachedRegisteredBuffers).LightmapDataBuffer = pFVar1;
    (this->CachedRegisteredBuffers).LightDataBuffer = pFVar5->LightDataBuffer;
  }
  return;
}

// CommitPrimitiveCollector @ 144902200

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRange<int> * __thiscall
FGPUScene::CommitPrimitiveCollector
          (FGPUScene *this,TRange<int> *__return_storage_ptr__,FGPUScenePrimitiveCollector *param_1)

{
  uchar *puVar1;
  int iVar2;
  FGPUSceneDynamicContext *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TRange<int> *pTVar9;
  TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar10;
  uint uVar11;
  uint uVar12;
  TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar13;
  FLLMScope local_res8 [2];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  FName local_68;
  FMemScope local_60;
  FGPUSceneInstanceRange local_58 [2];
  
  if ((this->bInBeginEndBlock == false) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_610239441725814570>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x8d6,"bInBeginEndBlock"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TRange<int> *)(*pcVar4)();
    return pTVar9;
  }
  if ((this->CurrentDynamicContext == (FGPUSceneDynamicContext *)0x0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_610239441725814569>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x8d7,"CurrentDynamicContext != nullptr"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TRange<int> *)(*pcVar4)();
    return pTVar9;
  }
  pFVar3 = this->CurrentDynamicContext;
  if (pFVar3 != (FGPUSceneDynamicContext *)0x0) {
    pTVar13 = (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar3->DymamicPrimitiveUploadData).AllocatorInstance.SecondaryData.Data;
    if (pTVar13 ==
        (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar13 = &pFVar3->DymamicPrimitiveUploadData;
    }
    puVar1 = (pTVar13->AllocatorInstance).InlineData +
             (longlong)(pFVar3->DymamicPrimitiveUploadData).ArrayNum * 8;
    if (pTVar13 !=
        (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar1) {
      pTVar10 = pTVar13;
      do {
        if (*(FUploadData **)(pTVar10->AllocatorInstance).InlineData == param_1->UploadData) {
          if ((int)((longlong)pTVar10 - (longlong)pTVar13 >> 3) != -1) goto LAB_144902309;
          break;
        }
        pTVar10 = (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)((pTVar10->AllocatorInstance).InlineData + 8);
      } while (pTVar10 !=
               (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                *)puVar1);
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_610239441725814566>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x8da,
                       "CurrentDynamicContext == nullptr || CurrentDynamicContext->DymamicPrimitiveUploadData.Find(PrimitiveCollector.UploadData) != INDEX_NONE"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TRange<int> *)(*pcVar4)();
      return pTVar9;
    }
  }
LAB_144902309:
  uVar12 = 0;
  iVar2 = this->DynamicPrimitivesOffset;
  if (param_1->UploadData == (FUploadData *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (param_1->UploadData->PrimitiveData).ArrayNum;
  }
  this->DynamicPrimitivesOffset = iVar6 + iVar2;
  if (param_1->UploadData == (FUploadData *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = param_1->UploadData->TotalInstanceCount;
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  uVar8 = 0xffffffff;
  if ((this->bIsEnabled == false) || ((int)uVar11 < 1)) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = FSpanAllocator::Allocate(&this->InstanceSceneDataAllocator,uVar11);
    local_58[0].Primitive.Index = -1;
    local_58[0].InstanceSceneDataOffset = uVar7;
    local_58[0].NumInstanceSceneDataEntries = uVar11;
    AddOrMergeInstanceRange(&this->InstanceRangesToClear,local_58);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  param_1->UploadData->InstanceSceneDataOffset = uVar7;
  if (param_1->UploadData != (FUploadData *)0x0) {
    uVar12 = param_1->UploadData->InstancePayloadDataFloat4Count;
  }
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_68 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(&local_60,&local_68,true);
  if ((this->bIsEnabled != false) && (0 < (int)uVar12)) {
    uVar8 = FSpanAllocator::Allocate(&this->InstancePayloadDataAllocator,uVar12);
  }
  FMemScope::~FMemScope(&local_60);
  FLLMScope::~FLLMScope(local_res10);
  param_1->UploadData->InstancePayloadDataOffset = uVar8;
  iVar6 = this->DynamicPrimitivesOffset;
  (__return_storage_ptr__->LowerBound).Type.Value = '\x01';
  (__return_storage_ptr__->LowerBound).Value = iVar2;
  (__return_storage_ptr__->UpperBound).Value = iVar6;
  (__return_storage_ptr__->UpperBound).Type.Value = '\0';
  return __return_storage_ptr__;
}

// ConsolidateInstanceDataAllocations @ 144905b70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUScene::ConsolidateInstanceDataAllocations(FGPUScene *this)

{
  if (!__CsvProfilerStat2251) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ConsolidateInstanceDataAllocations");
    __CsvProfilerStat2251 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("ConsolidateInstanceDataAllocations","CSV_ConsolidateInstanceDataAllocations");
  FSpanAllocator::Consolidate(&this->InstanceSceneDataAllocator);
  FSpanAllocator::Consolidate(&this->InstancePayloadDataAllocator);
  FSpanAllocator::Consolidate(&this->LightmapDataAllocator);
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FGPUScene_EndDeferAllocatorMerges");
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2256,"FGPUScene_EndDeferAllocatorMerges",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
               ,0x8d0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2256);
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FCsvProfiler::EndExclusiveStat("ConsolidateInstanceDataAllocations");
  return;
}

// DebugRender @ 14490a6d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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

void __thiscall
FGPUScene::DebugRender
          (FGPUScene *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2,FViewInfo *param_3)

{
  int *piVar1;
  FPrimitiveSceneInfo *this_00;
  FGlobalShaderMap *this_01;
  code *pcVar2;
  FScriptContainerElement FVar3;
  undefined4 uVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<float> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FRDGBuffer *pFVar14;
  ulong64 uVar15;
  FRDGBuffer *pFVar16;
  FRDGBuffer *pFVar17;
  undefined8 *puVar18;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar19;
  FShaderParametersMetadata *pFVar20;
  FRDGBufferSRV *pFVar21;
  FGlobalShaderType *pFVar22;
  FShaderType *pFVar23;
  FName this_02;
  FRDGEventName *pFVar24;
  int iVar25;
  ulonglong uVar26;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  FScene *pFVar29;
  ForAnyElementType FVar30;
  uint uVar31;
  ulonglong uVar32;
  double dVar33;
  double dVar34;
  FScriptContainerElement local_238;
  FScriptContainerElement local_237;
  FScriptContainerElement local_236;
  FScriptContainerElement local_235;
  FScriptContainerElement local_234 [4];
  ForAnyElementType local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined1 local_21f [7];
  ForAnyElementType local_218;
  uint local_210;
  uint local_20c;
  ForAnyElementType local_208;
  uint local_200;
  uint uStack_1fc;
  undefined4 local_1f8;
  uint local_1f4;
  int local_1f0;
  undefined8 *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined4 local_1d8;
  uint uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  TVector<double>_u_0 local_1c0;
  TIntVector3<int>_u_0 local_1a8;
  FShaderPrintData *local_198;
  EUniformBufferBindingFlags EStack_190;
  undefined7 uStack_18f;
  FRDGBufferUAVDesc local_188;
  FString local_178;
  FRDGBufferUAV *local_168;
  TVector<double>_u_0 local_160;
  FRDGBufferSRVDesc local_148;
  FRDGBufferSRVDesc local_128;
  TVector2<double>_u_0 local_108;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_f8;
  FRDGBufferSRVDesc local_e8;
  undefined1 local_c8 [8];
  FString local_c0;
  TShaderRefBase<FGPUSceneDebugRenderCS,FShaderMapPointerTable> local_a8;
  FRDGBufferDesc local_98;
  FRDGBufferDesc local_80;
  FRDGEventName local_68;
  
  pTVar5 = CVarGPUSceneDebugMode.Ref;
  uVar28 = 0;
  iVar12 = 0;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_1dc = pTVar5->ShadowedValue[1];
  if (0 < local_1dc) {
    ShaderPrint::SetEnabled(true);
    lVar13 = 0x290;
    if ((this->InstanceSceneDataAllocator).bGrowOnly == false) {
      lVar13 = 0x28c;
    }
    iVar8 = *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                    lVar13 + -0x48);
    local_198 = &param_3->ShaderPrintData;
    local_1f0 = iVar8;
    bVar7 = ShaderPrint::IsEnabled(local_198);
    if ((bVar7) && (0 < iVar8)) {
      ShaderPrint::RequestSpaceForLines(iVar8 * 0xc);
      uStack_1d0 = 0x4109;
      local_1d8 = 4;
      uStack_1d4 = 1;
      local_98.BytesPerElement = 4;
      local_98.NumElements = 1;
      local_98._12_4_ = uStack_1cc;
      local_98.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
      local_1c8 = 0;
      local_98.Metadata = (FShaderParametersMetadata *)0x0;
      local_188.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_98,L"GPUScene.DebugCounter",None);
      local_188._padding_._0_2_ = 0x1c;
      local_188._padding_._2_1_ = 0;
      local_168 = FRDGBuilder::CreateUAV(param_1,&local_188,None);
      AddClearUAVPass(param_1,local_168,0,Compute);
      local_208.Data = (FScriptContainerElement *)0x0;
      local_200 = 0;
      uStack_1fc = 0;
      local_230.Data = (FScriptContainerElement *)0x0;
      local_228 = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xf00,&local_230,0,(int *)((longlong)&local_228 + 4));
      local_218.Data = (FScriptContainerElement *)0x0;
      local_20c = 0;
      local_1f4 = 0;
      lVar13 = 0x4c28;
      if ((this->Scene->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
        lVar13 = 0x4c24;
      }
      iVar8 = *(int *)((longlong)
                       ((this->Scene->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd) +
                      lVar13) + 0x1f;
      local_1f8 = 0;
      uVar9 = (int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5;
      uVar26 = (ulonglong)uVar9;
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar26);
      }
      local_210 = 0;
      if ((uVar9 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar9,&local_218,0,(int *)&local_20c), 0 < (int)uVar9)) {
        do {
          if ((local_218.Data <= (FScriptContainerElement *)&local_1f8) &&
             (((FScriptContainerElement *)&local_1f8 < local_218.Data + (longlong)(int)local_20c * 4
              && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)))) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_210 == local_20c) {
            local_210 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_218,(int *)&local_20c);
          }
          uVar9 = local_210 + 1;
          *(undefined4 *)(local_218.Data + (longlong)(int)local_210 * 4) = local_1f8;
          uVar26 = uVar26 - 1;
          local_210 = uVar9;
        } while (uVar26 != 0);
      }
      pFVar29 = this->Scene;
      uVar26 = uVar28;
      uVar32 = uVar28;
      if (0 < (pFVar29->PrimitiveSceneProxies).ArrayNum) {
        do {
          uVar31 = (uint)uVar32;
          uVar9 = 0;
          if ((int)uVar31 < (pFVar29->PrimitiveSceneProxies).ArrayNum) {
            uVar9 = ~uVar31 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((*(byte *)(*(longlong *)
                          ((pFVar29->PrimitiveSceneProxies).AllocatorInstance.Data + uVar26) + 0x79)
              & 6) != 0) {
            pFVar29 = this->Scene;
            uVar9 = 0;
            if ((int)uVar31 < (pFVar29->Primitives).ArrayNum) {
              uVar9 = ~uVar31 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this_00 = *(FPrimitiveSceneInfo **)
                       ((pFVar29->Primitives).AllocatorInstance.Data + uVar26);
            iVar12 = (this_00->PersistentIndex).Index;
            uVar10 = (int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5;
            uVar9 = 0;
            if ((int)uVar10 < (int)local_210) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(uint *)(local_218.Data + (longlong)(int)uVar10 * 4) =
                 *(uint *)(local_218.Data + (longlong)(int)uVar10 * 4) | 1 << ((byte)iVar12 & 0x1f);
            if (local_200 < 0x80) {
              FPrimitiveSceneInfo::GetFullnameForDebuggingOnly(this_00,&local_178);
              iVar8 = local_178.Data.ArrayNum;
              local_1e0 = (uint)local_228;
              FVar3 = (FScriptContainerElement)((char)local_178.Data.ArrayNum + -1);
              if (iVar8 == 0) {
                FVar3 = (FScriptContainerElement)0x0;
              }
              pFVar27 = local_178.Data.AllocatorInstance.Data + (longlong)iVar8 * 2 + -2;
              FVar30.Data = local_178.Data.AllocatorInstance.Data;
              iVar25 = (uint)local_228;
              if (iVar8 == 0) {
                pFVar27 = local_178.Data.AllocatorInstance.Data + (longlong)iVar8 * 2;
              }
              while( true ) {
                if (local_178.Data.ArrayNum != iVar8) {
                  local_220 = 0;
                  `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_220);
                  iVar25 = (uint)local_228;
                }
                if (FVar30.Data == pFVar27) break;
                local_238 = *FVar30.Data;
                iVar11 = iVar25;
                if ((local_230.Data <= &local_238) &&
                   (&local_238 < local_230.Data + local_228._4_4_)) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar7) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  iVar11 = (uint)local_228;
                }
                if (iVar11 == local_228._4_4_) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x101,&local_230,(int *)((longlong)&local_228 + 4));
                }
                iVar25 = iVar11 + 1;
                local_228 = CONCAT44(local_228._4_4_,iVar25);
                FVar30.Data = FVar30.Data + 2;
                local_230.Data[iVar11] = local_238;
              }
              if (local_200 == uStack_1fc) {
                local_200 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,&local_208,(int *)&uStack_1fc);
              }
              uVar9 = local_200 + 1;
              local_1f4 = local_1f4 + 1;
              uVar28 = (ulonglong)local_1f4;
              lVar13 = (longlong)(int)local_200;
              *(int *)(local_208.Data + lVar13 * 8) = iVar12;
              local_208.Data[lVar13 * 8 + 6] = FVar3;
              *(short *)(local_208.Data + lVar13 * 8 + 4) = (short)local_1e0;
              local_200 = uVar9;
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
            }
            else {
              uVar28 = (ulonglong)local_1f4;
            }
          }
          iVar12 = (int)uVar28;
          pFVar29 = this->Scene;
          uVar26 = uVar26 + 8;
          uVar32 = (ulonglong)(uVar31 + 1);
        } while ((int)(uVar31 + 1) < (pFVar29->PrimitiveSceneProxies).ArrayNum);
      }
      if (local_200 == 0) {
        if (uStack_1fc == 0) {
          local_200 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_208,(int *)&uStack_1fc);
        }
        lVar13 = (longlong)(int)local_200;
        local_237 = (FScriptContainerElement)0x4e;
        local_200 = local_200 + 1;
        *(undefined4 *)(local_208.Data + lVar13 * 8) = 0xffffffff;
        local_208.Data[lVar13 * 8 + 6] = (FScriptContainerElement)0x4;
        *(undefined2 *)(local_208.Data + lVar13 * 8 + 4) = 0;
        if (((local_230.Data <= &local_237) && (&local_237 < local_230.Data + local_228._4_4_)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = (uint)local_228;
        if ((uint)local_228 == local_228._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&local_230,(int *)((longlong)&local_228 + 4));
        }
        iVar25 = iVar8 + 1;
        local_236 = (FScriptContainerElement)0x6f;
        local_230.Data[iVar8] = local_237;
        local_228._0_4_ = iVar25;
        if (((local_230.Data <= &local_236) && (&local_236 < local_230.Data + local_228._4_4_)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((uint)local_228 == local_228._4_4_) {
          local_228._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&local_230,(int *)((longlong)&local_228 + 4));
        }
        iVar8 = (uint)local_228 + 1;
        local_235 = (FScriptContainerElement)0x6e;
        local_230.Data[(int)(uint)local_228] = local_236;
        local_228._0_4_ = iVar8;
        if (((local_230.Data <= &local_235) && (&local_235 < local_230.Data + local_228._4_4_)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((uint)local_228 == local_228._4_4_) {
          local_228._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&local_230,(int *)((longlong)&local_228 + 4));
        }
        iVar8 = (uint)local_228 + 1;
        local_234[0] = (FScriptContainerElement)0x65;
        local_230.Data[(int)(uint)local_228] = local_235;
        local_228._0_4_ = iVar8;
        if (((local_230.Data <= local_234) && (local_234 < local_230.Data + local_228._4_4_)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar8 = (uint)local_228;
        if ((uint)local_228 == local_228._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&local_230,(int *)((longlong)&local_228 + 4));
        }
        local_228 = CONCAT44(local_228._4_4_,iVar8 + 1);
        local_230.Data[iVar8] = local_234[0];
      }
      ShaderPrint::RequestSpaceForCharacters(iVar12 * 0x30 + (uint)local_228);
      uStack_1d4 = (uint)local_228;
      uStack_1d0 = 0x4109;
      local_1d8 = 1;
      local_80.NumElements = (uint)local_228;
      local_80.BytesPerElement = 1;
      local_80._12_4_ = uStack_1cc;
      local_80.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
      local_1c8 = 0;
      local_80.Metadata = (FShaderParametersMetadata *)0x0;
      pFVar14 = CreateVertexBuffer(param_1,L"GPUScene.Debug.SelectedPrimitiveNames",&local_80,
                                   local_230.Data,(longlong)(int)(uint)local_228,None);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                               ::__l2::_thread_safe_static_guard_0__),
         `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
        ::__l2::DummyElement.PrimitiveID = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
        ::__l2::DummyElement.Offset = 0;
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
        ::__l2::DummyElement.Length = '\0';
        `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
        ::__l2::DummyElement.Pad0 = '\0';
        _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      if (local_200 != 0) {
        uVar15 = (ulong64)(local_200 * 8);
        FVar30.Data = local_208.Data;
        uVar9 = local_200;
      }
      else {
        uVar15 = 8;
        FVar30.Data = (FScriptContainerElement *)
                      &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FPrimitiveSceneDebugNameInfo,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                       ::__l2::DummyElement;
        uVar9 = 1;
      }
      pFVar16 = CreateStructuredBuffer
                          (param_1,L"GPUScene.Debug.SelectedPrimitiveNameInfos",8,uVar9,FVar30.Data,
                           uVar15,local_200 == 0);
      if (local_210 != 0) {
        uVar15 = (ulong64)(local_210 * 4);
        FVar30.Data = local_218.Data;
        uVar9 = local_210;
      }
      else {
        uVar15 = 4;
        FVar30.Data = (FScriptContainerElement *)
                      &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<unsigned_int,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                       ::__l2::DummyElement;
        uVar9 = 1;
      }
      pFVar17 = CreateStructuredBuffer
                          (param_1,L"GPUScene.Debug.SelectedPrimitiveFlags",4,uVar9,FVar30.Data,
                           uVar15,local_210 == 0);
      puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xa0,0x10);
      if (puVar18 == (undefined8 *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        *(undefined1 *)(puVar18 + 3) = 1;
        *puVar18 = &___7__TObject_VFParameters_FGPUSceneDebugRenderCS___FRDGAllocator__6B_;
        puVar18[2] = 0;
        puVar18[4] = 0;
        puVar18[6] = 0;
        puVar18[7] = 0;
        puVar18[10] = 0;
        puVar18[0xb] = 0;
        puVar18[0xc] = 0;
        puVar18[0x12] = 0;
        *(undefined1 *)(puVar18 + 5) = 1;
      }
      local_1e8 = puVar18;
      if ((((undefined8 **)param_1->_padding_ <= &local_1e8) &&
          (&local_1e8 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar12 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      *(int *)&param_1->_padding_ = iVar12 + 1;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar12 * 8) = local_1e8;
      ShaderPrint::SetParameters(param_1,local_198,(FShaderParameters *)(puVar18 + 4));
      pTVar19 = FSceneUniformBuffer::GetBuffer(param_2,param_1);
      pFVar20 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
      local_148._padding_._0_4_ = 0xffffffff;
      EStack_190 = Static;
      if (pFVar20->BindingFlags != StaticAndShader) {
        EStack_190 = pFVar20->BindingFlags;
      }
      *(uint *)(puVar18 + 9) = local_1f4;
      *(uint *)((longlong)puVar18 + 0x44) = (uint)(local_1dc == 3);
      local_148._padding_._4_4_ = 0;
      *(uint *)(puVar18 + 8) = (uint)(local_1dc != 2);
      local_148._padding_ = 0;
      *(TRDGUniformBuffer<FSceneUniformParameters> **)&((FParameters *)(puVar18 + 2))->Scene =
           pTVar19;
      puVar18[3] = CONCAT71(uStack_18f,EStack_190);
      uVar4 = 0;
      if (local_1f4 != 0) {
        uVar4 = (uint)local_228;
      }
      *(undefined4 *)((longlong)puVar18 + 0x4c) = uVar4;
      local_148._padding_._0_1_ = 0;
      if (((pFVar17->Desc).Usage & DrawIndirect) != None) {
        local_148._padding_._0_1_ = 0x1c;
      }
      local_198 = (FShaderPrintData *)pTVar19;
      local_148.Buffer = pFVar17;
      pFVar21 = FRDGBuilder::CreateSRV(param_1,&local_148);
      puVar18[10] = pFVar21;
      local_128._padding_._0_4_ = 0xffffffff;
      local_128._padding_._0_1_ = 0;
      local_128._padding_._4_4_ = 0;
      local_128._padding_ = 0;
      if (((pFVar16->Desc).Usage & DrawIndirect) != None) {
        local_128._padding_._0_1_ = 0x1c;
      }
      local_128.Buffer = pFVar16;
      pFVar21 = FRDGBuilder::CreateSRV(param_1,&local_128);
      puVar18[0xb] = pFVar21;
      local_e8._padding_._0_1_ = 0x39;
      local_e8._padding_._4_4_ = 0;
      local_e8._padding_._0_4_ = 0xffffffff;
      local_e8._padding_ = 0;
      local_e8.Buffer = pFVar14;
      pFVar21 = FRDGBuilder::CreateSRV(param_1,&local_e8);
      puVar18[0xc] = pFVar21;
      pTVar6 = CVarGPUSceneDebugDrawRange.Ref;
      bVar7 = IsInParallelRenderingThread();
      if ((!bVar7) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((longlong)puVar18 + 0x8c) = pTVar6->ShadowedValue[1];
      puVar18[0x12] = local_168;
      local_1c0._s_0.X = 0.0;
      local_1c0._s_0.Y = 0.0;
      local_160._s_0.X = 0.0;
      local_160._s_0.Y = 0.0;
      local_108._s_0.X = (double)(int)param_3->_padding_;
      local_1c0._s_0.Z = 0.0;
      local_108._s_0.Y = (double)(int)((ulonglong)param_3->_padding_ >> 0x20);
      local_160._s_0.Z = 0.0;
      FSceneView::DeprojectFVector2D
                ((FSceneView *)param_3,(TVector2<double> *)&local_108._s_0,
                 (TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_160._s_0);
      *(float *)(puVar18 + 0xe) = (float)local_1c0._s_0.X;
      *(float *)((longlong)puVar18 + 0x74) = (float)local_1c0._s_0.Y;
      *(float *)(puVar18 + 0xf) = (float)local_1c0._s_0.Z;
      dVar33 = local_160._s_0.Y * __real_42a0000000000000;
      dVar34 = local_160._s_0.Z * __real_42a0000000000000;
      *(float *)(puVar18 + 0x10) =
           (float)(local_160._s_0.X * __real_42a0000000000000 + local_1c0._s_0.X);
      *(float *)((longlong)puVar18 + 0x84) = (float)(dVar33 + local_1c0._s_0.Y);
      *(float *)(puVar18 + 0x11) = (float)(dVar34 + local_1c0._s_0.Z);
      this_01 = param_3->ShaderMap;
      pFVar22 = FGPUSceneDebugRenderCS::GetStaticType();
      if (*(int *)&pFVar22->field_0x50 != 1) {
        local_21f[0] = 0;
        `FGlobalShaderMap::GetShader<FGPUSceneDebugRenderCS>'::__l2::<lambda_1>::operator()
                  (local_21f);
      }
      pFVar23 = (FShaderType *)FGPUSceneDebugRenderCS::GetStaticType();
      FGlobalShaderMap::GetShader(this_01,&local_f8,pFVar23,0);
      if (local_f8.ShaderContent == (FShader *)0x0) {
        this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_c8);
        ::FName::ToString((FName *)this_02,&local_c0);
        FGPUSceneDebugRenderCS::GetStaticType();
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FGPUSceneDebugRenderCS::GetStaticType();
      local_a8.ShaderContent = (FGPUSceneDebugRenderCS *)local_f8.ShaderContent;
      local_a8.ShaderMap = local_f8.ShaderMap;
      pFVar24 = FRDGEventName::FRDGEventName(&local_68,1,L"GPUScene::DebugRender");
      pFVar20 = FGPUSceneDebugRenderCS::FParameters::FTypeInfo::GetStructMetadata();
      local_1a8._s_0.Y = 1;
      local_1a8._s_0.Z = 1;
      local_1a8._s_0.X = (int)(local_1f0 + 0x7f + (local_1f0 + 0x7f >> 0x1f & 0x7fU)) >> 7;
      FComputeShaderUtils::AddPass<FGPUSceneDebugRenderCS>
                (param_1,pFVar24,Compute,&local_a8,pFVar20,(FParameters *)(puVar18 + 2),
                 (TIntVector3<int> *)&local_1a8._s_0);
      if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_218.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data);
      }
      if (local_230.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data);
      }
      if ((FPrimitiveSceneDebugNameInfo *)local_208.Data != (FPrimitiveSceneDebugNameInfo *)0x0) {
        FMemory::Free(local_208.Data);
      }
    }
  }
  return;
}

// EndRender @ 14490e800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUScene::EndRender(FGPUScene *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  if (this->bInBeginEndBlock == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_610239441725816084>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x2ec,"bInBeginEndBlock");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->CurrentDynamicContext == (FGPUSceneDynamicContext *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_610239441725816083>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x2ed,"CurrentDynamicContext != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->PrevDynamicPrimitivesMaxSize = this->DynamicPrimitivesOffset;
  lVar3 = 0x40;
  if ((this->InstancePayloadDataAllocator).bGrowOnly == false) {
    lVar3 = 0x3c;
  }
  this->PrevDynamicPrimitivePayloadMaxSize =
       *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
               lVar3 + -0x48);
  lVar3 = 0x290;
  if ((this->InstanceSceneDataAllocator).bGrowOnly == false) {
    lVar3 = 0x28c;
  }
  this->PrevDynamicPrimitiveInstanceMaxSize =
       *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
               lVar3 + -0x48);
  lVar3 = 0x4c28;
  if ((this->Scene->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
    lVar3 = 0x4c24;
  }
  this->DynamicPrimitivesOffset =
       *(int *)((longlong)
                ((this->Scene->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd) + lVar3)
  ;
  this->CurrentDynamicContext = (FGPUSceneDynamicContext *)0x0;
  this->bInBeginEndBlock = false;
  (this->CachedRegisteredBuffers).PrimitiveBuffer = (FRDGBuffer *)0x0;
  (this->CachedRegisteredBuffers).InstanceSceneDataBuffer = (FRDGBuffer *)0x0;
  (this->CachedRegisteredBuffers).InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  (this->CachedRegisteredBuffers).LightmapDataBuffer = (FRDGBuffer *)0x0;
  (this->CachedRegisteredBuffers).LightDataBuffer = (FRDGBuffer *)0x0;
  return;
}

// ExecuteDeferredGPUWritePass @ 144918330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FGPUScene::ExecuteDeferredGPUWritePass
          (FGPUScene *this,FRDGBuilder *param_1,
          TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_2,EGPUSceneGPUWritePass param_3)

{
  char cVar1;
  FRHIGPUMask FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FRDGScope *this_00;
  FRHIBreadcrumbAllocator *this_01;
  FRHIBreadcrumbNode *pFVar7;
  FSceneView *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FSceneView *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_> *pTVar14;
  uint local_res8 [2];
  undefined1 local_res20 [8];
  TRDGEventScopeGuard<FRDGScope_RHI> local_120;
  char local_110;
  ulonglong local_108;
  FRHIComputeCommandList *local_100;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<37,unsigned_int>_const_*,std::tuple<unsigned_int_&&>_>
  local_f8;
  FGPUSceneWriteDelegateParams local_e8;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar9 = (uint)(char)param_3;
  if (((param_3 == None) || ('\0' < (char)param_3)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPUWritePass != EGPUSceneGPUWritePass::None && GPUWritePass < EGPUSceneGPUWritePass::Num"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x8e8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((char)param_3 <= (char)this->LastDeferredGPUWritePass) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastDeferredGPUWritePass < GPUWritePass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x8e9,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (this->bIsEnabled == false) {
    return false;
  }
  local_100 = (FRHIComputeCommandList *)param_1->_padding_;
  FVar2.GPUMask = *(uint *)&local_100->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (local_100,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  this->LastDeferredGPUWritePass = param_3;
  local_108 = (ulonglong)uVar9;
  if (this->DeferredGPUWritePassDelegates[uVar9].ArrayNum == 0) {
    bVar5 = false;
  }
  else {
    cVar1 = *(char *)((longlong)&param_1->_padding_ + 6);
    local_110 = '\0';
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
      local_res8[0] = uVar9;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        local_48 = 0;
        uStack_44 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_4c);
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_GPUScene_Deferr;
        ::Desc._padding_ = (longlong)u_GPUScene_Deferr;
        ::Desc._padding_._0_4_ = 0x8fc;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FGPUScene::ExecuteDeferredGPUWritePass'::__l27::Desc::operator()<unsigned_int>'::
               __l3::<lambda_1>::operator()<unsigned_int>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_f8._padding_ = (longlong)local_res8;
      local_f8._Myfirst._Val = &::Desc;
      local_120.State = (FRDGScopeState *)param_1;
      this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
      param_1->_padding_ = (longlong)this_00;
      uVar12 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
      local_120.Scope = this_00;
      if ((3 < uVar12) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
        ::__l2::Destructors[uVar12])(&this_00->Impl);
      this_01 = FRDGScopeState::GetBreadcrumbAllocator((FRDGScopeState *)param_1);
      pFVar7 = FRHIBreadcrumbAllocator::
               AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<37,unsigned_int>,unsigned_int_&&>
                         (this_01,&local_f8);
      FRDGScope_RHI::FRDGScope_RHI((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,pFVar7)
      ;
      (this_00->Impl).Impl.TypeIndex = '\x02';
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
        FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
      }
      local_110 = '\x01';
    }
    uVar12 = local_108;
    local_e8.PersistentPrimitiveId = 0xffffffff;
    local_e8.InstanceSceneDataOffset = 0xffffffff;
    local_e8.GPUWriteParams.GPUSceneInstanceSceneDataRW = (FRDGBufferUAV *)0x0;
    local_e8.GPUWriteParams.GPUSceneInstancePayloadDataRW = (FRDGBufferUAV *)0x0;
    local_e8.NumCustomDataFloats = 0xffffffff;
    local_e8.PackedInstanceSceneDataFlags = 0;
    local_e8.View = (FSceneView *)0x0;
    local_e8.GPUWriteParams.GPUScenePrimitiveSceneDataRW = (FRDGBufferUAV *)0x0;
    local_e8.GPUWriteParams.GPUSceneWriterUB._0_8_ = 0;
    local_e8.GPUWriteParams.GPUSceneWriterUB._8_1_ = 1;
    local_e8.GPUWritePass = param_3;
    local_e8.GPUSceneWriterUB = GetWriteParameters(this,param_1,&local_e8.GPUWriteParams,true);
    pTVar14 = this->DeferredGPUWritePassDelegates + uVar12;
    iVar3 = pTVar14->ArrayNum;
    pFVar10 = (pTVar14->AllocatorInstance).Data;
    pFVar13 = pFVar10 + (longlong)iVar3 * 0x20;
    while( true ) {
      if (pTVar14->ArrayNum != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FGPUScene::FDeferredGPUWrite,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if (pFVar10 == pFVar13) break;
      pFVar11 = (FSceneView *)(param_2->AllocatorInstance).Data;
      pFVar8 = (FSceneView *)((longlong)pFVar11 + (longlong)param_2->ArrayNum * 0x2970);
      if (pFVar11 != pFVar8) {
        do {
          if (*(int *)((longlong)pFVar11[1].PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64 +
                      4) == *(int *)(pFVar10 + 8)) goto LAB_144918651;
          pFVar11 = (FSceneView *)(pFVar11[1].ProjectionMatrixUnadjustedForRHI.M + 1);
        } while (pFVar11 != pFVar8);
      }
      pFVar11 = (FSceneView *)0x0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("View != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x907,L"Deferred GPU Write found with no matching view in the view family"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
LAB_144918651:
      local_e8._0_8_ = *(undefined8 *)(pFVar10 + 0xc);
      local_e8.NumCustomDataFloats = *(uint *)(pFVar10 + 0x14);
      local_e8.PackedInstanceSceneDataFlags = *(uint *)(pFVar10 + 0x18);
      local_e8.View = pFVar11;
      if ((*(longlong *)pFVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBound()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshBatch.h"
                             ,0x32,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      FGPUSceneWriteDelegate::Execute(*(FGPUSceneWriteDelegate **)pFVar10,param_1,&local_e8);
      pFVar10 = pFVar10 + 0x20;
    }
    pTVar14->ArrayNum = 0;
    if (pTVar14->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar14->AllocatorInstance,0,&pTVar14->ArrayMax);
    }
    bVar5 = true;
    if (local_110 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_120);
    }
  }
  FRHIComputeCommandList::SetGPUMask(local_100,FVar2);
  return bVar5;
}

// FillSceneUniformBuffer @ 144918bf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FGPUScene::FillSceneUniformBuffer(FGPUScene *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  bool bVar1;
  FRegisteredBuffers *pFVar2;
  FShaderParametersMetadata *pFVar3;
  FRDGBuffer *pFVar4;
  FRegisteredBuffers local_d8;
  FRDGBuffer *local_b0;
  FRDGBuffer *pFStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FRDGBufferSRV *local_78;
  FRDGBufferSRV *local_70;
  FRDGBufferSRV *local_68;
  FRDGBufferSRV *local_60;
  FRDGBufferSRV *local_58;
  FRDGBuffer *local_28;
  
  if ((this->bIsEnabled == false) || ((this->PrimitiveBuffer).Reference == (FRDGPooledBuffer *)0x0))
  {
    bVar1 = false;
  }
  else {
    local_b0 = (this->CachedRegisteredBuffers).InstancePayloadDataBuffer;
    pFStack_a8 = (this->CachedRegisteredBuffers).LightmapDataBuffer;
    pFVar4 = (this->CachedRegisteredBuffers).PrimitiveBuffer;
    local_d8.LightmapDataBuffer = (this->CachedRegisteredBuffers).InstanceSceneDataBuffer;
    local_28 = (this->CachedRegisteredBuffers).LightDataBuffer;
    if (pFVar4 == (FRDGBuffer *)0x0) {
      pFVar2 = RegisterBuffers(this,&local_d8,param_1);
      local_b0 = pFVar2->InstancePayloadDataBuffer;
      pFStack_a8 = pFVar2->LightmapDataBuffer;
      pFVar4 = pFVar2->PrimitiveBuffer;
      local_d8.LightmapDataBuffer = pFVar2->InstanceSceneDataBuffer;
      local_28 = pFVar2->LightDataBuffer;
    }
    local_98._0_4_ = (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
    local_98._4_4_ = (this->CommonParameters).GPUSceneInstanceDataTileSizeMask;
    uStack_90._0_4_ = (this->CommonParameters).GPUSceneInstanceDataTileStride;
    uStack_90._4_4_ = (this->CommonParameters).GPUSceneFrameNumber;
    local_88._0_4_ = (this->CommonParameters).GPUSceneMaxAllocatedInstanceId;
    local_88._4_4_ = (this->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
    uStack_80 = *(undefined8 *)&(this->CommonParameters).GPUSceneNumLightmapDataItems;
    local_d8.PrimitiveBuffer._4_4_ = 0;
    local_d8.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
    local_d8.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
    local_d8.PrimitiveBuffer._0_1_ = 0;
    if ((((local_d8.LightmapDataBuffer)->Desc).Usage & DrawIndirect) != None) {
      local_d8.PrimitiveBuffer._0_1_ = 0x1c;
    }
    local_78 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_d8);
    local_d8.PrimitiveBuffer._0_1_ = 0;
    local_d8.LightmapDataBuffer = local_b0;
    local_d8.PrimitiveBuffer._4_4_ = 0;
    local_d8.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
    local_d8.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
    if (((local_b0->Desc).Usage & DrawIndirect) != None) {
      local_d8.PrimitiveBuffer._0_1_ = 0x1c;
    }
    local_70 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_d8);
    local_d8.PrimitiveBuffer._4_4_ = 0;
    local_d8.PrimitiveBuffer._0_1_ = 0;
    local_d8.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
    local_d8.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
    if (((pFVar4->Desc).Usage & DrawIndirect) != None) {
      local_d8.PrimitiveBuffer._0_1_ = 0x1c;
    }
    local_d8.LightmapDataBuffer = pFVar4;
    local_68 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_d8);
    local_d8.PrimitiveBuffer._4_4_ = 0;
    local_d8.PrimitiveBuffer._0_1_ = 0;
    local_d8.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
    local_d8.LightmapDataBuffer = pFStack_a8;
    local_d8.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
    if (((pFStack_a8->Desc).Usage & DrawIndirect) != None) {
      local_d8.PrimitiveBuffer._0_1_ = 0x1c;
    }
    local_60 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_d8);
    local_d8.PrimitiveBuffer._0_1_ = 0;
    local_d8.LightmapDataBuffer = local_28;
    local_d8.PrimitiveBuffer._4_4_ = 0;
    local_d8.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
    local_d8.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
    if (((local_28->Desc).Usage & DrawIndirect) != None) {
      local_d8.PrimitiveBuffer._0_1_ = 0x1c;
    }
    local_58 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_d8);
    pFVar3 = FGPUSceneResourceParameters::FTypeInfo::GetStructMetadata();
    bVar1 = FSceneUniformBuffer::Set(param_2,SceneUB::GPUScene._32_4_,&local_98,pFVar3->Size);
  }
  return bVar1;
}

// FreeInstancePayloadDataSlots @ 1449194b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUScene::FreeInstancePayloadDataSlots(FGPUScene *this,int param_1,int param_2)

{
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  if (this->bIsEnabled != false) {
    FSpanAllocator::Free(&this->InstancePayloadDataAllocator,param_1,param_2);
  }
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// FreeInstanceSceneDataSlots @ 144919550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUScene::FreeInstanceSceneDataSlots(FGPUScene *this,int param_1,int param_2)

{
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_28 [2];
  FGPUSceneInstanceRange local_18;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(local_28,&local_res20,true);
  if (this->bIsEnabled != false) {
    FSpanAllocator::Free(&this->InstanceSceneDataAllocator,param_1,param_2);
    local_18.Primitive.Index = -1;
    local_18.InstanceSceneDataOffset = param_1;
    local_18.NumInstanceSceneDataEntries = param_2;
    AddOrMergeInstanceRange(&this->InstanceRangesToClear,&local_18);
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetAllocatedSize @ 144919d90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall FGPUScene::GetAllocatedSize(FGPUScene *this)

{
  return (longlong)(this->PrimitiveDirtyState).ArrayMax +
         ((longlong)(this->InstanceRangesToClear).ArrayMax * 3 +
          (longlong)this->DeferredGPUWritePassDelegates[0].ArrayMax * 8 +
         (longlong)(this->PrimitivesToUpdate).ArrayMax) * 4;
}

// GetCommonParameters @ 144919f60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGPUSceneCommonParameters * __thiscall
FGPUScene::GetCommonParameters(FGPUScene *this,FGPUSceneCommonParameters *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar1 = (this->CommonParameters).GPUSceneInstanceDataTileSizeMask;
  uVar2 = (this->CommonParameters).GPUSceneInstanceDataTileStride;
  uVar3 = (this->CommonParameters).GPUSceneFrameNumber;
  iVar4 = (this->CommonParameters).GPUSceneMaxAllocatedInstanceId;
  iVar5 = (this->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
  iVar6 = (this->CommonParameters).GPUSceneNumLightmapDataItems;
  uVar7 = *(undefined4 *)&(this->CommonParameters).field_0x1c;
  __return_storage_ptr__->GPUSceneInstanceDataTileSizeLog2 =
       (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
  __return_storage_ptr__->GPUSceneInstanceDataTileSizeMask = uVar1;
  __return_storage_ptr__->GPUSceneInstanceDataTileStride = uVar2;
  __return_storage_ptr__->GPUSceneFrameNumber = uVar3;
  __return_storage_ptr__->GPUSceneMaxAllocatedInstanceId = iVar4;
  __return_storage_ptr__->GPUSceneMaxPersistentPrimitiveIndex = iVar5;
  __return_storage_ptr__->GPUSceneNumLightmapDataItems = iVar6;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = uVar7;
  return __return_storage_ptr__;
}

// GetInstanceDataTileSizeMask @ 14491c430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall FGPUScene::GetInstanceDataTileSizeMask(FGPUScene *this)

{
  return (1 << ((byte)this->InstanceDataTileSizeLog2 & 0x1f)) - 1;
}

// GetInstanceDataTileStride @ 14491c450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall FGPUScene::GetInstanceDataTileStride(FGPUScene *this)

{
  uint uVar1;
  
  uVar1 = FInstanceSceneShaderData::GetDataStrideInFloat4s();
  return uVar1 << ((byte)this->InstanceDataTileSizeLog2 & 0x1f);
}

// GetInstanceIdUpperBoundGPU @ 14491c480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall FGPUScene::GetInstanceIdUpperBoundGPU(FGPUScene *this)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = 0x290;
  if ((this->InstanceSceneDataAllocator).bGrowOnly == false) {
    lVar3 = 0x28c;
  }
  uVar1 = *(uint *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                   lVar3 + -0x48);
  uVar2 = 0x1000000;
  if (uVar1 < 0x1000000) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// GetShaderParameters @ 14491d860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGPUSceneResourceParameters * __thiscall
FGPUScene::GetShaderParameters
          (FGPUScene *this,FGPUSceneResourceParameters *__return_storage_ptr__,FRDGBuilder *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  FRegisteredBuffers *pFVar8;
  FRDGBufferSRV *pFVar9;
  FRDGBuffer *pFVar10;
  FRDGBuffer *local_78;
  FRDGBuffer *pFStack_70;
  FRegisteredBuffers local_68;
  FRDGBuffer *local_20;
  
  local_78 = (this->CachedRegisteredBuffers).InstancePayloadDataBuffer;
  pFStack_70 = (this->CachedRegisteredBuffers).LightmapDataBuffer;
  pFVar10 = (this->CachedRegisteredBuffers).PrimitiveBuffer;
  local_68.LightmapDataBuffer = (this->CachedRegisteredBuffers).InstanceSceneDataBuffer;
  local_20 = (this->CachedRegisteredBuffers).LightDataBuffer;
  if (pFVar10 == (FRDGBuffer *)0x0) {
    pFVar8 = RegisterBuffers(this,&local_68,param_1);
    local_78 = pFVar8->InstancePayloadDataBuffer;
    pFStack_70 = pFVar8->LightmapDataBuffer;
    pFVar10 = pFVar8->PrimitiveBuffer;
    local_68.LightmapDataBuffer = pFVar8->InstanceSceneDataBuffer;
    local_20 = pFVar8->LightDataBuffer;
  }
  uVar1 = (this->CommonParameters).GPUSceneInstanceDataTileSizeMask;
  uVar2 = (this->CommonParameters).GPUSceneInstanceDataTileStride;
  uVar3 = (this->CommonParameters).GPUSceneFrameNumber;
  iVar4 = (this->CommonParameters).GPUSceneMaxAllocatedInstanceId;
  iVar5 = (this->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
  iVar6 = (this->CommonParameters).GPUSceneNumLightmapDataItems;
  uVar7 = *(undefined4 *)&(this->CommonParameters).field_0x1c;
  local_68.PrimitiveBuffer._4_4_ = 0;
  local_68.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
  local_68.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  local_68.PrimitiveBuffer._0_1_ = 0;
  if ((((local_68.LightmapDataBuffer)->Desc).Usage & DrawIndirect) != None) {
    local_68.PrimitiveBuffer._0_1_ = 0x1c;
  }
  (__return_storage_ptr__->CommonParameters).GPUSceneInstanceDataTileSizeLog2 =
       (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
  (__return_storage_ptr__->CommonParameters).GPUSceneInstanceDataTileSizeMask = uVar1;
  (__return_storage_ptr__->CommonParameters).GPUSceneInstanceDataTileStride = uVar2;
  (__return_storage_ptr__->CommonParameters).GPUSceneFrameNumber = uVar3;
  __return_storage_ptr__->GPUSceneInstanceSceneData = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->GPUSceneInstancePayloadData = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->GPUScenePrimitiveSceneData = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->GPUSceneLightmapData = (FRDGBufferSRV *)0x0;
  __return_storage_ptr__->GPUSceneLightData = (FRDGBufferSRV *)0x0;
  (__return_storage_ptr__->CommonParameters).GPUSceneMaxAllocatedInstanceId = iVar4;
  (__return_storage_ptr__->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex = iVar5;
  (__return_storage_ptr__->CommonParameters).GPUSceneNumLightmapDataItems = iVar6;
  *(undefined4 *)&(__return_storage_ptr__->CommonParameters).field_0x1c = uVar7;
  pFVar9 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_68);
  __return_storage_ptr__->GPUSceneInstanceSceneData = pFVar9;
  local_68.PrimitiveBuffer._0_1_ = 0;
  local_68.LightmapDataBuffer = local_78;
  local_68.PrimitiveBuffer._4_4_ = 0;
  local_68.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
  local_68.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  if (((local_78->Desc).Usage & DrawIndirect) != None) {
    local_68.PrimitiveBuffer._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_68);
  __return_storage_ptr__->GPUSceneInstancePayloadData = pFVar9;
  local_68.PrimitiveBuffer._4_4_ = 0;
  local_68.PrimitiveBuffer._0_1_ = 0;
  local_68.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
  local_68.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  if (((pFVar10->Desc).Usage & DrawIndirect) != None) {
    local_68.PrimitiveBuffer._0_1_ = 0x1c;
  }
  local_68.LightmapDataBuffer = pFVar10;
  pFVar9 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_68);
  __return_storage_ptr__->GPUScenePrimitiveSceneData = pFVar9;
  local_68.PrimitiveBuffer._0_1_ = 0;
  local_68.PrimitiveBuffer._4_4_ = 0;
  local_68.LightmapDataBuffer = pFStack_70;
  local_68.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
  local_68.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  if (((pFStack_70->Desc).Usage & DrawIndirect) != None) {
    local_68.PrimitiveBuffer._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_68);
  __return_storage_ptr__->GPUSceneLightmapData = pFVar9;
  local_68.PrimitiveBuffer._0_1_ = 0;
  local_68.PrimitiveBuffer._4_4_ = 0;
  local_68.InstanceSceneDataBuffer._0_4_ = 0xffffffff;
  local_68.InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  local_68.LightmapDataBuffer = local_20;
  if (((local_20->Desc).Usage & DrawIndirect) != None) {
    local_68.PrimitiveBuffer._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_68);
  __return_storage_ptr__->GPUSceneLightData = pFVar9;
  return __return_storage_ptr__;
}

// GetShaderParametersRHI @ 14491da70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGPUSceneResourceParametersRHI * __thiscall
FGPUScene::GetShaderParametersRHI
          (FGPUScene *this,FGPUSceneResourceParametersRHI *__return_storage_ptr__)

{
  FRDGPooledBuffer *pFVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  FGPUSceneResourceParametersRHI *pFVar14;
  
  pFVar1 = (this->InstanceSceneDataBuffer).Reference;
  uVar5 = (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
  uVar6 = (this->CommonParameters).GPUSceneInstanceDataTileSizeMask;
  uVar7 = (this->CommonParameters).GPUSceneInstanceDataTileStride;
  uVar8 = (this->CommonParameters).GPUSceneFrameNumber;
  iVar9 = (this->CommonParameters).GPUSceneMaxAllocatedInstanceId;
  iVar10 = (this->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
  iVar11 = (this->CommonParameters).GPUSceneNumLightmapDataItems;
  uVar12 = *(undefined4 *)&(this->CommonParameters).field_0x1c;
  __return_storage_ptr__->GPUSceneInstanceSceneData = (FRHIShaderResourceView *)0x0;
  (__return_storage_ptr__->CommonParameters).GPUSceneInstanceDataTileSizeLog2 = uVar5;
  (__return_storage_ptr__->CommonParameters).GPUSceneInstanceDataTileSizeMask = uVar6;
  (__return_storage_ptr__->CommonParameters).GPUSceneInstanceDataTileStride = uVar7;
  (__return_storage_ptr__->CommonParameters).GPUSceneFrameNumber = uVar8;
  __return_storage_ptr__->GPUSceneInstancePayloadData = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->GPUScenePrimitiveSceneData = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->GPUSceneLightmapData = (FRHIShaderResourceView *)0x0;
  __return_storage_ptr__->GPUSceneLightData = (FRHIShaderResourceView *)0x0;
  (__return_storage_ptr__->CommonParameters).GPUSceneMaxAllocatedInstanceId = iVar9;
  (__return_storage_ptr__->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex = iVar10;
  (__return_storage_ptr__->CommonParameters).GPUSceneNumLightmapDataItems = iVar11;
  *(undefined4 *)&(__return_storage_ptr__->CommonParameters).field_0x1c = uVar12;
  if (pFVar1->CachedSRV == (FRHIShaderResourceView *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("CachedSRV",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                        ,0x4d2,
                        L"Only byte address and structured buffers can use the default GetSRV call")
    ;
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FGPUSceneResourceParametersRHI *)(*pcVar4)();
      return pFVar14;
    }
  }
  pFVar2 = (this->InstancePayloadDataBuffer).Reference;
  __return_storage_ptr__->GPUSceneInstanceSceneData = pFVar1->CachedSRV;
  if (pFVar2->CachedSRV == (FRHIShaderResourceView *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("CachedSRV",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                        ,0x4d2,
                        L"Only byte address and structured buffers can use the default GetSRV call")
    ;
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FGPUSceneResourceParametersRHI *)(*pcVar4)();
      return pFVar14;
    }
  }
  pFVar1 = (this->PrimitiveBuffer).Reference;
  __return_storage_ptr__->GPUSceneInstancePayloadData = pFVar2->CachedSRV;
  if (pFVar1->CachedSRV == (FRHIShaderResourceView *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("CachedSRV",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                        ,0x4d2,
                        L"Only byte address and structured buffers can use the default GetSRV call")
    ;
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FGPUSceneResourceParametersRHI *)(*pcVar4)();
      return pFVar14;
    }
  }
  pFVar2 = (this->LightmapDataBuffer).Reference;
  __return_storage_ptr__->GPUScenePrimitiveSceneData = pFVar1->CachedSRV;
  if (pFVar2->CachedSRV == (FRHIShaderResourceView *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("CachedSRV",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                        ,0x4d2,
                        L"Only byte address and structured buffers can use the default GetSRV call")
    ;
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FGPUSceneResourceParametersRHI *)(*pcVar4)();
      return pFVar14;
    }
  }
  lVar3 = *(longlong *)&(this->LightDataBuffer).field_0x18;
  __return_storage_ptr__->GPUSceneLightmapData = pFVar2->CachedSRV;
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("CachedSRV",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                        ,0x4d2,
                        L"Only byte address and structured buffers can use the default GetSRV call")
    ;
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FGPUSceneResourceParametersRHI *)(*pcVar4)();
      return pFVar14;
    }
  }
  __return_storage_ptr__->GPUSceneLightData = *(FRHIShaderResourceView **)(lVar3 + 0x30);
  return __return_storage_ptr__;
}

// GetWriteParameters @ 144928dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<FGPUSceneWriterUniformParameters> * __thiscall
FGPUScene::GetWriteParameters
          (FGPUScene *this,FRDGBuilder *param_1,FGPUSceneWriterParameters *param_2,bool param_3)

{
  int *piVar1;
  FGPUSceneWriterUniformParameters *pFVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  byte bVar12;
  EUniformBufferBindingFlags EVar13;
  int iVar14;
  FRegisteredBuffers *pFVar15;
  undefined8 *puVar16;
  TRDGUniformBuffer<FGPUSceneWriterUniformParameters> *pTVar17;
  FRDGBufferUAV *pFVar18;
  FShaderParametersMetadata *pFVar19;
  FRDGBuffer *pFVar20;
  undefined8 *local_d8;
  FRDGBufferUAVDesc local_d0;
  FRDGBufferUAVDesc local_c0;
  FRDGBufferUAVDesc local_b0;
  FRDGBuffer *local_98;
  FRDGBuffer *pFStack_90;
  FRDGBuffer *local_88;
  FRDGBuffer *pFStack_80;
  FRDGBuffer *local_58;
  FRegisteredBuffers local_50;
  
  pFVar20 = (this->CachedRegisteredBuffers).PrimitiveBuffer;
  pFStack_80 = (this->CachedRegisteredBuffers).InstanceSceneDataBuffer;
  local_98 = (this->CachedRegisteredBuffers).InstancePayloadDataBuffer;
  pFStack_90 = (this->CachedRegisteredBuffers).LightmapDataBuffer;
  local_58 = (this->CachedRegisteredBuffers).LightDataBuffer;
  if (pFVar20 == (FRDGBuffer *)0x0) {
    local_88 = pFVar20;
    pFVar15 = RegisterBuffers(this,&local_50,param_1);
    local_98 = pFVar15->InstancePayloadDataBuffer;
    pFStack_90 = pFVar15->LightmapDataBuffer;
    pFVar20 = pFVar15->PrimitiveBuffer;
    pFStack_80 = pFVar15->InstanceSceneDataBuffer;
    local_58 = pFVar15->LightDataBuffer;
  }
  local_88 = pFVar20;
  puVar16 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
  if (puVar16 == (undefined8 *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pTVar17 = (TRDGUniformBuffer<FGPUSceneWriterUniformParameters> *)(*pcVar4)();
      return pTVar17;
    }
  }
  else {
    *puVar16 = &___7__TObject_VFGPUSceneWriterUniformParameters___FRDGAllocator__6B_;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
  }
  local_d8 = puVar16;
  if (((undefined8 **)param_1->_padding_ <= &local_d8) &&
     (&local_d8 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
  {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pTVar17 = (TRDGUniformBuffer<FGPUSceneWriterUniformParameters> *)(*pcVar4)();
      return pTVar17;
    }
  }
  iVar14 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar2 = (FGPUSceneWriterUniformParameters *)(puVar16 + 2);
  *(int *)&param_1->_padding_ = iVar14 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar14 * 8) = local_d8;
  uVar6 = (this->CommonParameters).GPUSceneInstanceDataTileSizeMask;
  uVar5 = *(undefined8 *)&(this->CommonParameters).GPUSceneInstanceDataTileStride;
  local_d0._padding_._2_1_ = 0;
  (pFVar2->CommonParameters).GPUSceneInstanceDataTileSizeLog2 =
       (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
  (pFVar2->CommonParameters).GPUSceneInstanceDataTileSizeMask = uVar6;
  puVar16[3] = uVar5;
  uVar5 = *(undefined8 *)&(this->CommonParameters).GPUSceneNumLightmapDataItems;
  local_d0.Buffer = pFStack_80;
  puVar16[4] = *(undefined8 *)&(this->CommonParameters).GPUSceneMaxAllocatedInstanceId;
  puVar16[5] = uVar5;
  bVar12 = 0;
  if (((pFStack_80->Desc).Usage & DrawIndirect) != None) {
    bVar12 = 0x1c;
  }
  local_d0._padding_._0_2_ = (ushort)bVar12;
  pFVar18 = FRDGBuilder::CreateUAV(param_1,&local_d0,param_3);
  puVar16[6] = pFVar18;
  local_c0._padding_._2_1_ = 0;
  local_c0.Buffer = local_98;
  bVar12 = 0;
  if (((local_98->Desc).Usage & DrawIndirect) != None) {
    bVar12 = 0x1c;
  }
  local_c0._padding_._0_2_ = (ushort)bVar12;
  pFVar18 = FRDGBuilder::CreateUAV(param_1,&local_c0,param_3);
  puVar16[7] = pFVar18;
  local_b0._padding_._2_1_ = 0;
  bVar12 = 0;
  if (((pFVar20->Desc).Usage & DrawIndirect) != None) {
    bVar12 = 0x1c;
  }
  local_b0._padding_._0_2_ = (ushort)bVar12;
  local_b0.Buffer = pFVar20;
  pFVar18 = FRDGBuilder::CreateUAV(param_1,&local_b0,param_3);
  puVar16[8] = pFVar18;
  pFVar19 = FGPUSceneWriterUniformParameters::GetStructMetadata();
  FRDGUserValidation::ValidateCreateUniformBuffer(&param_1->UserValidation,pFVar2,pFVar19);
  pFVar19 = FGPUSceneWriterUniformParameters::GetStructMetadata();
  pwVar3 = pFVar19->ShaderVariableName;
  pTVar17 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
  pTVar17 = TRDGUniformBuffer<FGPUSceneWriterUniformParameters>::
            TRDGUniformBuffer<FGPUSceneWriterUniformParameters>(pTVar17,pFVar2,pwVar3);
  piVar1 = &(param_1->UniformBuffers).Array.ArrayMax;
  iVar14 = (param_1->UniformBuffers).Array.ArrayNum;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGUniformBuffer_*>_>
                       (0x808,(ForElementType<FRDGUniformBuffer_*> *)&param_1->UniformBuffers,piVar1
                       );
  }
  (param_1->UniformBuffers).Array.ArrayNum = iVar14 + 1;
  (param_1->UniformBuffers).Array.AllocatorInstance.Data[iVar14] = (FRDGUniformBuffer *)pTVar17;
  *(int *)&pTVar17->_padding_ = (param_1->UniformBuffers).Array.ArrayNum + -1;
  FRDGUserValidation::ValidateCreateUniformBuffer
            (&param_1->UserValidation,(FRDGUniformBuffer *)pTVar17);
  if (param_2 != (FGPUSceneWriterParameters *)0x0) {
    param_2->GPUSceneInstanceSceneDataSOAStride = 1 << ((byte)this->InstanceDataTileSizeLog2 & 0x1f)
    ;
    param_2->GPUSceneNumAllocatedInstances = *(uint *)(puVar16 + 4);
    param_2->GPUSceneNumAllocatedPrimitives = *(uint *)((longlong)puVar16 + 0x24);
    param_2->GPUSceneInstanceSceneDataRW = (FRDGBufferUAV *)puVar16[6];
    param_2->GPUSceneInstancePayloadDataRW = (FRDGBufferUAV *)puVar16[7];
    param_2->GPUScenePrimitiveSceneDataRW = (FRDGBufferUAV *)puVar16[8];
    pFVar19 = FGPUSceneWriterUniformParameters::GetStructMetadata();
    EVar13 = Static;
    if (pFVar19->BindingFlags != StaticAndShader) {
      EVar13 = pFVar19->BindingFlags;
    }
    pFStack_90 = (FRDGBuffer *)CONCAT71(pFStack_90._1_7_,EVar13);
    *(TRDGUniformBuffer<FGPUSceneWriterUniformParameters> **)&param_2->GPUSceneWriterUB = pTVar17;
    *(FRDGBuffer **)&(param_2->GPUSceneWriterUB).field_0x8 = pFStack_90;
    uVar6 = (this->CommonParameters).GPUSceneInstanceDataTileSizeMask;
    uVar7 = (this->CommonParameters).GPUSceneInstanceDataTileStride;
    uVar8 = (this->CommonParameters).GPUSceneFrameNumber;
    (param_2->CommonParameters).GPUSceneInstanceDataTileSizeLog2 =
         (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
    (param_2->CommonParameters).GPUSceneInstanceDataTileSizeMask = uVar6;
    (param_2->CommonParameters).GPUSceneInstanceDataTileStride = uVar7;
    (param_2->CommonParameters).GPUSceneFrameNumber = uVar8;
    iVar14 = (this->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
    iVar9 = (this->CommonParameters).GPUSceneNumLightmapDataItems;
    uVar10 = *(undefined4 *)&(this->CommonParameters).field_0x1c;
    (param_2->CommonParameters).GPUSceneMaxAllocatedInstanceId =
         (this->CommonParameters).GPUSceneMaxAllocatedInstanceId;
    (param_2->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex = iVar14;
    (param_2->CommonParameters).GPUSceneNumLightmapDataItems = iVar9;
    *(undefined4 *)&(param_2->CommonParameters).field_0x1c = uVar10;
  }
  return pTVar17;
}

// HasPendingGPUWrite @ 144929150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FGPUScene::HasPendingGPUWrite(FGPUScene *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (this->LastDeferredGPUWritePass == None) {
    pFVar1 = this->DeferredGPUWritePassDelegates[0].AllocatorInstance.Data;
    pFVar2 = pFVar1 + (longlong)this->DeferredGPUWritePassDelegates[0].ArrayNum * 0x20;
    for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 0x20) {
      if (*(uint *)(pFVar1 + 0xc) == param_1) {
        return true;
      }
    }
  }
  return false;
}

// InitLightData @ 1449291d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
FGPUScene::InitLightData
          (FLightSceneInfoCompact *param_1,bool param_2,uint param_3,FLightSceneData *param_4)

{
  FLightSceneProxy *pFVar1;
  char cVar2;
  double local_c8;
  double local_c0;
  double local_b8;
  float local_b0;
  float local_9c;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  undefined8 local_84;
  float local_7c;
  float local_78;
  TVector2<float>_u_0 local_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  float local_3c;
  
  pFVar1 = param_1->LightSceneInfo->Proxy;
  (**(code **)(pFVar1->_padding_ + 0x78))(pFVar1,&local_c8);
  cVar2 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1);
  if (cVar2 != '\0') {
    local_9c = 0.0;
  }
  param_4->FalloffExponent = local_9c;
  param_4->InvRadius = local_b0;
  param_4->DiffuseScale = local_88;
  (param_4->WorldPosition).High.field0_0x0._s_0.X = (float)local_c8;
  (param_4->WorldPosition).High.field0_0x0._s_0.Y = (float)local_c0;
  (param_4->WorldPosition).High.field0_0x0._s_0.Z = (float)local_b8;
  (param_4->WorldPosition).Low.field0_0x0._s_0.X = (float)(local_c8 - (double)(float)local_c8);
  *(ulonglong *)((longlong)&(param_4->WorldPosition).Low.field0_0x0 + 4) =
       CONCAT44((float)(local_b8 - (double)(float)local_b8),
                (float)(local_c0 - (double)(float)local_c0));
  *(undefined8 *)&(param_4->Direction).field0_0x0 = local_98;
  param_4->SpecularScale = local_8c;
  *(undefined8 *)&(param_4->Tangent).field0_0x0 = local_84;
  param_4->SourceRadius = local_78;
  (param_4->Direction).field0_0x0._s_0.Z = local_90;
  param_4->SoftSourceRadius = (float)(undefined4)local_6c;
  param_4->SourceLength = (float)local_6c._4_4_;
  param_4->RectLightBarnCosAngle = (float)(undefined4)uStack_64;
  param_4->RectLightBarnLength = (float)uStack_64._4_4_;
  (param_4->Tangent).field0_0x0._s_0.Z = local_7c;
  param_4->InverseExposureBlend = local_3c;
  (param_4->SpotAngles).field0_0x0 = local_74;
  return;
}

// OnPostLightSceneInfoUpdate @ 14492c6f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUScene::OnPostLightSceneInfoUpdate
          (FGPUScene *this,FRDGBuilder *param_1,FLightSceneChangeSet *param_2)

{
  FTaskHandle local_res20;
  
  local_res20.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  UpdateGPULights(this,param_1,&local_res20,param_2);
  return;
}

// OnPostSceneUpdate @ 14492c720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUScene::OnPostSceneUpdate
          (FGPUScene *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  int *piVar1;
  TArray<EPrimitiveDirtyState,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FPersistentPrimitiveIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  FPersistentPrimitiveIndex *pFVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FPersistentPrimitiveIndex *pFVar11;
  FLLMScope local_res18 [2];
  FName local_res20;
  uint local_38 [2];
  FMemScope local_30;
  
  pFVar11 = (param_2->AddedPrimitiveIds).DataPtr;
  pFVar3 = pFVar11 + (param_2->AddedPrimitiveIds).ArrayNum;
  do {
    if (pFVar11 == pFVar3) {
      return;
    }
    local_38[0] = pFVar11->Index;
    FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
    local_res20 = LLMTagDeclaration_GPUScene.UniqueName;
    FMemScope::FMemScope(&local_30,&local_res20,true);
    if ((this->bIsEnabled != false) && (local_38[0] != 0xffffffff)) {
      this_00 = &this->PrimitiveDirtyState;
      iVar9 = (this->PrimitiveDirtyState).ArrayNum;
      if (iVar9 < (int)(local_38[0] + 1)) {
        TArray<enum_EPrimitiveDirtyState,TSizedDefaultAllocator<32>_>::AddZeroed
                  (this_00,(local_38[0] + 0x40 & 0xffffffc0) - iVar9);
      }
      lVar10 = (longlong)(int)local_38[0];
      uVar8 = 0;
      if ((int)local_38[0] < (this->PrimitiveDirtyState).ArrayNum) {
        uVar8 = ~local_38[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((this_00->AllocatorInstance).Data[lVar10] == (FScriptContainerElement)0x0) {
        pTVar2 = &this->PrimitivesToUpdate;
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar5 + (longlong)(this->PrimitivesToUpdate).ArrayMax * 4)) &&
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
        iVar9 = (this->PrimitivesToUpdate).ArrayNum;
        piVar1 = &(this->PrimitivesToUpdate).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PrimitivesToUpdate).ArrayNum = iVar9 + 1;
        *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38[0];
      }
      lVar10 = (longlong)(int)local_38[0];
      uVar8 = 0;
      if ((int)local_38[0] < (this->PrimitiveDirtyState).ArrayNum) {
        uVar8 = ~local_38[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (this_00->AllocatorInstance).Data[lVar10];
      lVar10 = (longlong)(int)local_38[0];
      uVar8 = 0;
      if ((int)local_38[0] < (this->PrimitiveDirtyState).ArrayNum) {
        uVar8 = ~local_38[0] >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (this_00->AllocatorInstance).Data[lVar10] = (FScriptContainerElement)((byte)FVar4 | 0x1e);
    }
    FMemScope::~FMemScope(&local_30);
    FLLMScope::~FLLMScope(local_res18);
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// OnPreSceneUpdate @ 14492c9d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUScene::OnPreSceneUpdate(FGPUScene *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2)

{
  int iVar1;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  EPrimitiveDirtyState EVar5;
  undefined1 local_res8 [8];
  
  pTVar2 = param_2->PrimitiveUpdates;
  iVar1 = (pTVar2->Commands).ArrayNum;
  pFVar3 = (pTVar2->Commands).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((pTVar2->Commands).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::FUpdateCommand_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if ((pFVar3[0x18] != (FScriptContainerElement)0x0) ||
       ((pFVar3[0x19] == (FScriptContainerElement)0x0 && (((byte)pFVar3[0x14] & 0x10) != 0)))) {
      EVar5 = ChangedAll;
      if (pFVar3[0x18] != (FScriptContainerElement)0x0) {
        EVar5 = Removed;
      }
      AddPrimitiveToUpdate(this,(FPersistentPrimitiveIndex)*(int *)(pFVar3 + 0x10),EVar5);
    }
    pFVar3 = pFVar3 + 0x50;
  }
  return;
}

// RegisterBuffers @ 14492ce20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRegisteredBuffers * __thiscall
FGPUScene::RegisterBuffers
          (FGPUScene *this,FRegisteredBuffers *__return_storage_ptr__,FRDGBuilder *param_1)

{
  FRDGBuffer *pFVar1;
  
  __return_storage_ptr__->PrimitiveBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->InstanceSceneDataBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->LightmapDataBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->LightDataBuffer = (FRDGBuffer *)0x0;
  pFVar1 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->PrimitiveBuffer,None);
  __return_storage_ptr__->PrimitiveBuffer = pFVar1;
  pFVar1 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->InstanceSceneDataBuffer,None);
  __return_storage_ptr__->InstanceSceneDataBuffer = pFVar1;
  pFVar1 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->InstancePayloadDataBuffer,None);
  __return_storage_ptr__->InstancePayloadDataBuffer = pFVar1;
  pFVar1 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->LightmapDataBuffer,None);
  __return_storage_ptr__->LightmapDataBuffer = pFVar1;
  pFVar1 = FRDGBuilder::RegisterExternalBuffer
                     (param_1,(TRefCountPtr<FRDGPooledBuffer> *)&(this->LightDataBuffer).field_0x18,
                      None);
  __return_storage_ptr__->LightDataBuffer = pFVar1;
  return __return_storage_ptr__;
}

// SetEnabled @ 144930c70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGPUScene::SetEnabled(FGPUScene *this,Type param_1)

{
  bool bVar1;
  
  this->FeatureLevel = param_1;
  bVar1 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)param_1);
  this->bIsEnabled = bVar1;
  return;
}

// Update @ 144937d00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUScene::Update(FGPUScene *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2,
                 FRDGExternalAccessQueue *param_3,
                 TPayloadRangeView<FUpdateInstanceFromComputeCommand> *param_4,FTaskHandle *param_5)

{
  FRHIGPUMask FVar1;
  FRHIComputeCommandList *this_00;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  if (this->bIsEnabled != false) {
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    FVar1.GPUMask = *(uint *)&this_00->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    if (this->bInBeginEndBlock != false) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_610239441725814848>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x7c0,"!bInBeginEndBlock");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar4 = 0x4c28;
    if ((this->Scene->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
      lVar4 = 0x4c24;
    }
    this->DynamicPrimitivesOffset =
         *(int *)((longlong)
                  ((this->Scene->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd) +
                 lVar4);
    UpdateInternal(this,param_1,param_2,param_3,param_5,param_4);
    FRHIComputeCommandList::SetGPUMask(this_00,FVar1);
  }
  return;
}

// UpdateBufferAllocations @ 144937e00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRegisteredBuffers * __thiscall
FGPUScene::UpdateBufferAllocations
          (FGPUScene *this,FRegisteredBuffers *__return_storage_ptr__,FRDGBuilder *param_1,
          FSceneUniformBuffer *param_2)

{
  ulonglong uVar1;
  FRHIGPUMask FVar2;
  FScene *pFVar3;
  code *pcVar4;
  FRDGBuffer *pFVar5;
  FRDGBuffer *pFVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FRegisteredBuffers *pFVar11;
  FRDGBuffer *pFVar12;
  longlong lVar13;
  FShaderParametersMetadata *pFVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  undefined4 local_res18;
  FSceneUniformBuffer *local_res20;
  FResizeResourceSOAParams local_168;
  undefined4 local_160;
  int local_15c;
  undefined4 local_158;
  undefined4 local_154;
  FName local_150;
  FRHIComputeCommandList *local_148;
  FMemScope local_140;
  FRDGBufferSRVDesc local_138;
  FRDGBufferSRVDesc local_118;
  FRDGBufferSRVDesc local_f8;
  FRDGBufferSRVDesc local_d8;
  FRDGBufferSRVDesc local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FRDGBufferSRV *local_78;
  FRDGBufferSRV *local_70;
  FRDGBufferSRV *local_68;
  FRDGBufferSRV *local_60;
  FRDGBufferSRV *local_58;
  
  local_res20 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_150 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(&local_140,&local_150,true);
  bVar8 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)*(Type *)&this->Scene->field_0x8);
  if (this->bIsEnabled != bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsEnabled == UseGPUScene(GMaxRHIShaderPlatform, Scene.GetFeatureLevel())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                       ,0x40b,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FRegisteredBuffers *)(*pcVar4)();
      return pFVar11;
    }
  }
  local_148 = (FRHIComputeCommandList *)param_1->_padding_;
  FVar2.GPUMask = *(uint *)&local_148->field_0x29c;
  FRHIComputeCommandList::SetGPUMask
            (local_148,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  pTVar7 = CVarGPUSceneUseReservedResources.Ref;
  __return_storage_ptr__->PrimitiveBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->InstanceSceneDataBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->InstancePayloadDataBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->LightmapDataBuffer = (FRDGBuffer *)0x0;
  __return_storage_ptr__->LightDataBuffer = (FRDGBuffer *)0x0;
  bVar8 = IsInParallelRenderingThread();
  if (!bVar8) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FRegisteredBuffers *)(*pcVar4)();
      return pFVar11;
    }
  }
  if ((pTVar7->ShadowedValue[1] == false) || (GRHIGlobals.ReservedResources.Supported == false)) {
    local_res8[0] = 0;
  }
  else {
    local_res8[0] = 1;
  }
  iVar16 = 0x100;
  if (0x100 < this->DynamicPrimitivesOffset) {
    iVar16 = this->DynamicPrimitivesOffset;
  }
  if (iVar16 < this->PrevDynamicPrimitivesMaxSize) {
    iVar16 = this->PrevDynamicPrimitivesMaxSize;
  }
  iVar9 = 1;
  if (iVar16 != 0) {
    iVar9 = iVar16;
  }
  uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_res18 = (undefined4)lVar13;
  pFVar12 = `FGPUScene::UpdateBufferAllocations'::__l2::<lambda_1>::operator()
                      (local_res8,param_1,&this->PrimitiveBuffer,
                       (1 << ((byte)lVar13 & 0x1f)) * 0x2c0,L"GPUScene.PrimitiveData");
  bVar8 = (this->InstanceSceneDataAllocator).bGrowOnly;
  __return_storage_ptr__->PrimitiveBuffer = pFVar12;
  lVar13 = 0x290;
  if (bVar8 == false) {
    lVar13 = 0x28c;
  }
  uVar10 = 0x100;
  if (0x100 < *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                      lVar13 + -0x48)) {
    uVar10 = *(uint *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                      lVar13 + -0x48);
  }
  if ((int)uVar10 < this->PrevDynamicPrimitiveInstanceMaxSize) {
    uVar10 = this->PrevDynamicPrimitiveInstanceMaxSize;
  }
  if (0x1000000 < uVar10) {
    uVar10 = 0x1000000;
  }
  if (this->bUseTiledInstanceDataLayout == false) {
    uVar17 = 1;
    if (uVar10 != 0) {
      uVar17 = uVar10;
    }
    uVar1 = (ulonglong)(uVar17 - 1) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_160 = (undefined4)lVar13;
    uVar17 = 1 << ((byte)lVar13 & 0x1f);
    uVar10 = FInstanceSceneShaderData::GetDataStrideInFloat4s();
    local_168.NumBytes = uVar10 * uVar17 * 0x10;
    local_168.NumArrays = FInstanceSceneShaderData::GetDataStrideInFloat4s();
    pFVar12 = ResizeStructuredBufferSOAIfNeeded
                        (param_1,&this->InstanceSceneDataBuffer,&local_168,
                         L"GPUScene.InstanceSceneData");
    __return_storage_ptr__->InstanceSceneDataBuffer = pFVar12;
    if ((uVar17 & uVar17 - 1) != 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(InstanceSceneDataSizeReserve)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x432,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FRegisteredBuffers *)(*pcVar4)();
        return pFVar11;
      }
    }
    local_15c = 0x1f;
    if (uVar17 != 0) {
      for (; uVar17 >> local_15c == 0; local_15c = local_15c + -1) {
      }
    }
    iVar16 = 0;
    if (uVar17 != 0) {
      iVar16 = local_15c;
    }
    this->InstanceDataTileSizeLog2 = iVar16;
  }
  else {
    uVar17 = FInstanceSceneShaderData::GetDataStrideInFloat4s();
    bVar15 = (byte)this->InstanceDataTileSizeLog2;
    uVar18 = 1 << (bVar15 & 0x1f);
    pFVar12 = ResizeStructuredBufferIfNeeded
                        (param_1,&this->InstanceSceneDataBuffer,
                         (((uVar18 - 1) + uVar10) / uVar18) * (uVar17 << (bVar15 & 0x1f)) * 0x10 +
                         0xffffff & 0xff000000,L"GPUScene.InstanceSceneData");
    __return_storage_ptr__->InstanceSceneDataBuffer = pFVar12;
  }
  lVar13 = 0x40;
  if ((this->InstancePayloadDataAllocator).bGrowOnly == false) {
    lVar13 = 0x3c;
  }
  iVar16 = 0x100;
  if (0x100 < *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                      lVar13 + -0x48)) {
    iVar16 = *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                     lVar13 + -0x48);
  }
  if (iVar16 < this->PrevDynamicPrimitivePayloadMaxSize) {
    iVar16 = this->PrevDynamicPrimitivePayloadMaxSize;
  }
  iVar9 = 1;
  if (iVar16 != 0) {
    iVar9 = iVar16;
  }
  uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar17 = 1 << ((byte)lVar13 & 0x1f);
  local_158 = (undefined4)lVar13;
  this->InstancePayloadDataSizeReserveUnclamped = (ulonglong)uVar17;
  uVar10 = uVar17 << 4;
  if (0x8000000 < uVar17) {
    uVar10 = 0x80000000;
  }
  pFVar12 = `FGPUScene::UpdateBufferAllocations'::__l2::<lambda_1>::operator()
                      (local_res8,param_1,&this->InstancePayloadDataBuffer,uVar10,
                       L"GPUScene.InstancePayloadData");
  bVar8 = (this->LightmapDataAllocator).bGrowOnly;
  __return_storage_ptr__->InstancePayloadDataBuffer = pFVar12;
  lVar13 = 0x130;
  if (bVar8 == false) {
    lVar13 = 300;
  }
  iVar16 = 0x100;
  if (0x100 < *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                      lVar13 + -0x48)) {
    iVar16 = *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                     lVar13 + -0x48);
  }
  iVar9 = 1;
  if (iVar16 != 0) {
    iVar9 = iVar16;
  }
  uVar1 = (ulonglong)(iVar9 - 1) * 2 + 1;
  lVar13 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_154 = (undefined4)lVar13;
  pFVar12 = `FGPUScene::UpdateBufferAllocations'::__l2::<lambda_1>::operator()
                      (local_res8,param_1,&this->LightmapDataBuffer,
                       (1 << ((byte)lVar13 & 0x1f)) * 0xf0,L"GPUScene.LightmapData");
  __return_storage_ptr__->LightmapDataBuffer = pFVar12;
  pFVar12 = FRDGBuilder::RegisterExternalBuffer
                      (param_1,(TRefCountPtr<FRDGPooledBuffer> *)&(this->LightDataBuffer).field_0x18
                       ,None);
  uVar10 = this->InstanceDataTileSizeLog2;
  __return_storage_ptr__->LightDataBuffer = pFVar12;
  (this->CommonParameters).GPUSceneInstanceDataTileSizeMask = (1 << ((byte)uVar10 & 0x1f)) - 1;
  (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2 = uVar10;
  uVar10 = FInstanceSceneShaderData::GetDataStrideInFloat4s();
  (this->CommonParameters).GPUSceneInstanceDataTileStride =
       uVar10 << ((byte)this->InstanceDataTileSizeLog2 & 0x1f);
  (this->CommonParameters).GPUSceneFrameNumber = this->SceneFrameNumber;
  lVar13 = 0x290;
  if ((this->InstanceSceneDataAllocator).bGrowOnly == false) {
    lVar13 = 0x28c;
  }
  pFVar3 = this->Scene;
  (this->CommonParameters).GPUSceneMaxAllocatedInstanceId =
       *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
               lVar13 + -0x48);
  lVar13 = 0x4c28;
  if ((pFVar3->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
    lVar13 = 0x4c24;
  }
  (this->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex =
       *(int *)((longlong)((pFVar3->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd) +
               lVar13);
  uVar10 = 0x130;
  if ((this->LightmapDataAllocator).bGrowOnly == false) {
    uVar10 = 300;
  }
  (this->CommonParameters).GPUSceneNumLightmapDataItems =
       *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
               ((ulonglong)uVar10 - 0x48));
  local_138.Buffer = __return_storage_ptr__->InstanceSceneDataBuffer;
  local_98._0_4_ = (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
  local_98._4_4_ = (this->CommonParameters).GPUSceneInstanceDataTileSizeMask;
  uStack_90._0_4_ = (this->CommonParameters).GPUSceneInstanceDataTileStride;
  uStack_90._4_4_ = (this->CommonParameters).GPUSceneFrameNumber;
  local_88._0_4_ = (this->CommonParameters).GPUSceneMaxAllocatedInstanceId;
  local_88._4_4_ = (this->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
  uStack_80 = *(undefined8 *)&(this->CommonParameters).GPUSceneNumLightmapDataItems;
  local_138._padding_._4_4_ = 0;
  local_138._padding_._0_4_ = 0xffffffff;
  local_138._padding_ = 0;
  local_138._padding_._0_1_ = 0;
  if ((((local_138.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_138._padding_._0_1_ = 0x1c;
  }
  local_78 = FRDGBuilder::CreateSRV(param_1,&local_138);
  local_118.Buffer = __return_storage_ptr__->InstancePayloadDataBuffer;
  local_118._padding_._0_1_ = 0;
  local_118._padding_._4_4_ = 0;
  local_118._padding_._0_4_ = 0xffffffff;
  local_118._padding_ = 0;
  if ((((local_118.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_118._padding_._0_1_ = 0x1c;
  }
  local_70 = FRDGBuilder::CreateSRV(param_1,&local_118);
  local_f8.Buffer = __return_storage_ptr__->PrimitiveBuffer;
  local_f8._padding_._0_1_ = 0;
  local_f8._padding_._4_4_ = 0;
  local_f8._padding_._0_4_ = 0xffffffff;
  local_f8._padding_ = 0;
  if ((((local_f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_f8._padding_._0_1_ = 0x1c;
  }
  local_68 = FRDGBuilder::CreateSRV(param_1,&local_f8);
  local_d8.Buffer = __return_storage_ptr__->LightmapDataBuffer;
  local_d8._padding_._0_1_ = 0;
  local_d8._padding_._4_4_ = 0;
  local_d8._padding_._0_4_ = 0xffffffff;
  local_d8._padding_ = 0;
  if ((((local_d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_d8._padding_._0_1_ = 0x1c;
  }
  local_60 = FRDGBuilder::CreateSRV(param_1,&local_d8);
  local_b8._padding_._0_1_ = 0;
  local_b8._padding_._4_4_ = 0;
  local_b8._padding_._0_4_ = 0xffffffff;
  local_b8._padding_ = 0;
  local_b8.Buffer = __return_storage_ptr__->LightDataBuffer;
  if ((((local_b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_b8._padding_._0_1_ = 0x1c;
  }
  local_58 = FRDGBuilder::CreateSRV(param_1,&local_b8);
  pFVar14 = FGPUSceneResourceParameters::FTypeInfo::GetStructMetadata();
  FSceneUniformBuffer::Set(local_res20,SceneUB::GPUScene._32_4_,&local_98,pFVar14->Size);
  if (this->bInBeginEndBlock == false) {
    if ((this->CachedRegisteredBuffers).PrimitiveBuffer != (FRDGBuffer *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CachedRegisteredBuffers.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                         ,0x469,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FRegisteredBuffers *)(*pcVar4)();
        return pFVar11;
      }
    }
  }
  else {
    pFVar12 = __return_storage_ptr__->InstanceSceneDataBuffer;
    pFVar5 = __return_storage_ptr__->InstancePayloadDataBuffer;
    pFVar6 = __return_storage_ptr__->LightmapDataBuffer;
    (this->CachedRegisteredBuffers).PrimitiveBuffer = __return_storage_ptr__->PrimitiveBuffer;
    (this->CachedRegisteredBuffers).InstanceSceneDataBuffer = pFVar12;
    pFVar12 = __return_storage_ptr__->LightDataBuffer;
    (this->CachedRegisteredBuffers).InstancePayloadDataBuffer = pFVar5;
    (this->CachedRegisteredBuffers).LightmapDataBuffer = pFVar6;
    (this->CachedRegisteredBuffers).LightDataBuffer = pFVar12;
  }
  FRHIComputeCommandList::SetGPUMask(local_148,FVar2);
  FMemScope::~FMemScope(&local_140);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// UpdateGPULights @ 144938490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUScene::UpdateGPULights
          (FGPUScene *this,FRDGBuilder *param_1,FTaskHandle *param_2,FLightSceneChangeSet *param_3)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  TRefCountPtr<FRDGPooledBuffer> *pTVar3;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *pTVar4;
  TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_> *pTVar5;
  FTaskHandle *pFVar6;
  atomic<unsigned_int> aVar7;
  FTaskBase *pFVar8;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *pTVar9;
  code *pcVar10;
  TConsoleVariableData<int> *pTVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  atomic<unsigned___int64> this_00;
  FRDGBuffer *pFVar16;
  FRDGBuffer *pFVar17;
  FRDGBuffer *pFVar18;
  FScriptContainerElement *_Dst;
  undefined ***pppuVar19;
  uint uVar20;
  FGPUScene *pFVar21;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> **ppTVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [24];
  TRefCountPtr<UE::Tasks::Private::FTaskBase> local_150;
  FTaskBase *local_148;
  TRefCountPtr<UE::Tasks::Private::FTaskBase> *local_140;
  undefined4 local_138;
  FScatterInfo local_130;
  FPipe local_120;
  undefined8 uStack_f8;
  TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> *local_f0;
  TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTStack_e8;
  undefined8 local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  atomic<unsigned___int64> local_c0;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  atomic<unsigned___int64> local_90;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  atomic<unsigned___int64> local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar5 = &this->LightDataArray;
  piVar1 = &(this->LightDataArray).ArrayNum;
  this->MaxLightsDuringPrevUpdate = *(int *)&(this->Scene->Lights).field_0x8;
  uVar20 = *(uint *)&(this->Scene->Lights).field_0x8;
  if (0x800000 < (int)uVar20) {
    uVar20 = 0x800000;
  }
  this->NumGPULights = uVar20;
  iVar15 = *piVar1;
  local_168._16_8_ = param_3;
  if (iVar15 < (int)uVar20) {
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,4,uVar20 - iVar15,&pTVar5->AllocatorInstance,piVar1,
                        &(this->LightDataArray).ArrayMax);
    DefaultConstructItems<UE::HLSL::FLightSceneData,int>
              ((pTVar5->AllocatorInstance).Data + (longlong)iVar14 * 0x60,uVar20 - iVar15);
  }
  else {
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    if ((int)uVar20 < iVar15) {
      uVar23 = iVar15 - uVar20;
      if (((int)(uVar20 | uVar23) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (uVar23 != 0) {
        _Dst = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x60;
        iVar15 = (*piVar1 - uVar23) - uVar20;
        if (iVar15 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar23 * 0x60,(longlong)iVar15 * 0x60);
        }
        *piVar1 = *piVar1 - uVar23;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,4,&pTVar5->AllocatorInstance,*piVar1,&(this->LightDataArray).ArrayMax);
      }
    }
  }
  local_168._8_4_ =
       ((*(TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> **)
          (local_168._16_8_ + 0x20))->Commands).ArrayNum;
  this_00 = (atomic<unsigned___int64>)
            FRDGAllocator::
            Alloc<UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>,int_&>
                      ((FRDGAllocator *)&param_1->_padding_,(int *)(local_168 + 8));
  pTVar11 = CVarGPUSceneLightsAsyncSetup.Ref;
  bVar13 = IsInParallelRenderingThread();
  if ((!bVar13) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar13)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar12 = local_168._16_8_;
  local_150.Reference = (param_2->Pimpl).Reference;
  iVar15 = pTVar11->ShadowedValue[1];
  if (local_150.Reference != (FTaskBase *)0x0) {
    LOCK();
    (local_150.Reference)->RefCount =
         (atomic<unsigned_int>)((int)(local_150.Reference)->RefCount + 1);
    UNLOCK();
  }
  pFVar6 = &this->LightDataSetupTask;
  local_148 = (pFVar6->Pimpl).Reference;
  if (local_148 != (FTaskBase *)0x0) {
    LOCK();
    local_148->RefCount = (atomic<unsigned_int>)((int)local_148->RefCount + 1);
    UNLOCK();
  }
  local_140 = &local_150;
  lVar24 = 2;
  local_120.EmptyEventRef.Object =
       (TEventCount<unsigned_int> *)((TArrayView<int_const_,int> *)local_168._16_8_)->DataPtr;
  local_120.EmptyEventRef.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&((TArrayView<int_const_,int> *)local_168._16_8_)->ArrayNum;
  local_120.DebugName =
       (wchar_t *)((TArrayView<int_const_,int> *)(local_168._16_8_ + 0x10))->DataPtr;
  uStack_f8 = *(undefined8 *)&((TArrayView<int_const_,int> *)(local_168._16_8_ + 0x10))->ArrayNum;
  local_138 = 2;
  local_f0 = *(TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> **)
              (local_168._16_8_ + 0x20);
  pTStack_e8 = *(TBitArray<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> **)
                (local_168._16_8_ + 0x28);
  local_e0 = *(undefined8 *)(local_168._16_8_ + 0x30);
  local_120.LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)this;
  local_120.TaskCount = this_00;
  FRDGBuilder::
  AddSetupTask<_FGPUScene::UpdateGPULights_::__l2::<lambda_1>,TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>_>
            (param_1,(<lambda_1> *)local_168,&local_120,
             (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)0x0,(ETaskPriority)&local_140
             ,true,iVar15 != 0);
  pFVar21 = (FGPUScene *)local_168._0_8_;
  if (pFVar6 != (FTaskHandle *)local_168) {
    pFVar8 = (pFVar6->Pimpl).Reference;
    (pFVar6->Pimpl).Reference = (FTaskBase *)local_168._0_8_;
    pFVar21 = (FGPUScene *)0x0;
    local_168._0_8_ = (FGPUScene *)0x0;
    if (pFVar8 != (FTaskBase *)0x0) {
      LOCK();
      paVar2 = &pFVar8->RefCount;
      aVar7 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar7 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
    }
  }
  if (pFVar21 != (FGPUScene *)0x0) {
    LOCK();
    pTVar3 = &(pFVar21->InstanceSceneUploadBuffer).UploadBuffer;
    iVar14 = *(int *)&pTVar3->Reference;
    *(int *)&pTVar3->Reference = *(int *)&pTVar3->Reference + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (*(code *)**(undefined8 **)&pFVar21->bUpdateAllPrimitives)(pFVar21,1);
    }
  }
  ppTVar22 = &local_140;
  do {
    pTVar9 = ppTVar22[-1];
    ppTVar22 = ppTVar22 + -1;
    lVar24 = lVar24 + -1;
    if (pTVar9 != (TRefCountPtr<UE::Tasks::Private::FTaskBase> *)0x0) {
      LOCK();
      pTVar4 = pTVar9 + 6;
      iVar14 = *(int *)&pTVar4->Reference;
      *(int *)&pTVar4->Reference = *(int *)&pTVar4->Reference + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (*(code *)pTVar9->Reference->_padding_)(pTVar9,1);
      }
    }
  } while (lVar24 != 0);
  iVar14 = this->NumGPULights;
  if (((*(TSceneUpdateCommandQueue<FLightSceneInfo,ELightDirtyFlags,ELightUpdateId> **)
         (uVar12 + 0x20))->Commands).ArrayNum == 0) {
    UE::RendererPrivateUtils::Implementation::
    TPersistentBuffer<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
    ::ResizeBufferIfNeeded(&this->LightDataBuffer,param_1,iVar14);
  }
  else if (iVar15 == 0) {
    local_130.ScatterOffsetsRDG = (FRDGBuffer *)0x0;
    local_130.NumScatters = 0;
    UE::RendererPrivateUtils::Implementation::
    TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
    ::ResizeAndUploadTo((TBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>
                         *)this_00,param_1,&this->LightDataBuffer,iVar14,&local_130);
  }
  else {
    if ((*(FUploadData **)((longlong)this_00 + 8) != (FUploadData *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Base::UploadDataProxy == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererPrivateUtils.h"
                            ,0x196,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar16 = UE::RendererPrivateUtils::Implementation::
              TPersistentBuffer<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits>
              ::ResizeBufferIfNeeded(&this->LightDataBuffer,param_1,iVar14);
    local_c8 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__1__ResizeAndUploadToAsync___TAsyncBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__QEAAPEAVFRDGBuffer__AEAVFRDGBuilder__AEAV__TPersistentBuffer_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__456_H_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_b0 = (undefined ***)0x0;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_1>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
    local_c0 = this_00;
    pFVar17 = CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
                        (param_1,L"ScatterUploader.Offsets",
                         (TFunction<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&___cdecl(void)>
                          *)local_d8);
    if (local_d8[0] != (code *)0x0) {
      pppuVar19 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar19 = local_b0;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    local_80 = (undefined ***)0x0;
    local_98 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__ResizeAndUploadToAsync___TAsyncBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__QEAAPEAVFRDGBuffer__AEAVFRDGBuilder__AEAV__TPersistentBuffer_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__456_H_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_2>,TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
    local_90 = this_00;
    pFVar18 = CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>
                        (param_1,L"ScatterUploader.Values",
                         (TFunction<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&___cdecl(void)>
                          *)local_a8);
    if (local_a8[0] != (code *)0x0) {
      pppuVar19 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar19 = local_80;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    local_68 = &
               ___7__TFunction_OwnedObject_V<lambda_3>__1__ResizeAndUploadToAsync___TAsyncBufferScatterUploader_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__00_Implementation_RendererPrivateUtils_UE__QEAAPEAVFRDGBuffer__AEAVFRDGBuilder__AEAV__TPersistentBuffer_UFLightSceneData_HLSL_UE__UFByteAddressBufferTraits_Implementation_RendererPrivateUtils_3__456_H_Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_3>,unsigned___int64>
                  ::Call;
    local_50 = (undefined ***)0x0;
    local_60 = this_00;
    FBufferScatterUploader::UploadTo
              ((FBufferScatterUploader *)((longlong)this_00 + 8),param_1,pFVar16,pFVar17,pFVar18,
               (TFunction<unsigned___int64___cdecl(void)> *)local_78,0x60,-1);
    if (local_78[0] != (code *)0x0) {
      pppuVar19 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar19 = local_50;
      }
      (*(code *)(*pppuVar19)[2])();
    }
  }
  return;
}

// UpdateInternal @ 144941b10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FGPUScene::UpdateInternal
          (FGPUScene *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2,
          FRDGExternalAccessQueue *param_3,FTaskHandle *param_4,
          TPayloadRangeView<FUpdateInstanceFromComputeCommand> *param_5)

{
  int *piVar1;
  TArray<FGPUSceneInstanceRange,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPersistentPrimitiveIndex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EPrimitiveDirtyState,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  ushort uVar6;
  FRDGPooledBuffer *pFVar7;
  FScene *pFVar8;
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>
  *pTVar9;
  FBasePayloadArray *pFVar10;
  FPrimitiveSceneInfo *this_00;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  TConsoleVariableData<int> *pTVar17;
  FRDGBuilder *pFVar18;
  TArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FUpdateCommand,TSizedDefaultAllocator<32>_>
  *pTVar19;
  FUploadDataSourceAdapterScenePrimitives *pFVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  FRDGScope *pFVar27;
  TRefCountPtr<FRDGPooledBuffer> TVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<_private:_void___cdecl_FGPUScene::UpdateInternal(FRDGBuilder_&,FSceneUniformBuffer_&,FRDGExternalAccessQueue_&,UE::Tasks::Private::FTaskHandle_const_&,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadRangeView<FUpdateInstanceFromComputeCommand>_const_&)_::_85_::FStat_STAT_UpdateGPUScene>
  FVar30;
  FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime> FVar31;
  FThreadStats *pFVar32;
  FThreadStatsPool *pFVar33;
  FInstanceSceneDataBuffers *pFVar34;
  int iVar35;
  ulonglong uVar36;
  FBasePayloadArray **this_01;
  FNameEntryId FVar37;
  TRefCountPtr<FRDGPooledBuffer> *pTVar38;
  FName FVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar42;
  FName FVar43;
  longlong lVar44;
  FScriptContainerElement *pFVar45;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FSceneUniformBuffer *local_res18;
  FRDGExternalAccessQueue *local_res20;
  FScriptContainerElement local_2b8 [4];
  undefined4 local_2b4;
  uint local_2b0;
  uint uStack_2ac;
  FLLMScope local_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 local_29c;
  FBasePayloadArray *local_298;
  TArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FUpdateCommand,TSizedDefaultAllocator<32>_>
  *local_290;
  uint local_288;
  FColor_u_0 local_280;
  FColor_u_0 local_27c;
  FUploadDataSourceAdapterScenePrimitives *local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_250;
  FName local_240;
  undefined8 *local_238;
  LARGE_INTEGER local_230;
  LARGE_INTEGER local_228;
  FMemScope local_220;
  FStatMessage local_218;
  FStatMessage local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  FBasePayloadArray *local_1e0;
  TArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::FUpdateCommand,TSizedDefaultAllocator<32>_>
  *local_1d8;
  uint local_1d0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1c8;
  char local_1b8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1b0;
  char local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_> local_168;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42>_const_*,std::tuple<>_> local_158;
  FGPUSceneWriteDelegateParams local_148;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  FRegisteredBuffers local_78;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  FLLMScope::FLLMScope(&local_2a8,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_240 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(&local_220,&local_240,true);
  bVar21 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                       (FGenericStaticFeatureLevel)*(Type *)&this->Scene->field_0x8);
  if ((this->bIsEnabled != bVar21) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsEnabled == UseGPUScene(GMaxRHIShaderPlatform, Scene.GetFeatureLevel())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                          ,0x377,L""), bVar21)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((this->DynamicPrimitivesOffset < (this->Scene->Primitives).ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("DynamicPrimitivesOffset >= Scene.Primitives.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                          ,0x379,L""), bVar21)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (__CsvProfilerStat891 == false) {
    FCsvProfilerTrace::OutputInlineStat("InstanceAllocMaxSize",_GCsvCategory_GPUScene.Index);
    __CsvProfilerStat891 = true;
  }
  lVar41 = 0x290;
  uVar25 = 0x290;
  if ((this->InstanceSceneDataAllocator).bGrowOnly == false) {
    uVar25 = 0x28c;
  }
  FCsvProfiler::RecordCustomStat
            ("InstanceAllocMaxSize",_GCsvCategory_GPUScene.Index,
             *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                     ((ulonglong)uVar25 - 0x48)),Set);
  if (__CsvProfilerStat892 == false) {
    FCsvProfilerTrace::OutputInlineStat("InstanceAllocUsedSize",_GCsvCategory_GPUScene.Index);
    __CsvProfilerStat892 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("InstanceAllocUsedSize",_GCsvCategory_GPUScene.Index,
             (this->InstanceSceneDataAllocator).CurrentSize,Set);
  if (__CsvProfilerStat894 == false) {
    FCsvProfilerTrace::OutputInlineStat("InstancePayloadAllocMaxSize",_GCsvCategory_GPUScene.Index);
    __CsvProfilerStat894 = true;
  }
  lVar44 = 0x40;
  if ((this->InstancePayloadDataAllocator).bGrowOnly == false) {
    lVar44 = 0x3c;
  }
  FCsvProfiler::RecordCustomStat
            ("InstancePayloadAllocMaxSize",_GCsvCategory_GPUScene.Index,
             *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                     lVar44 + -0x48),Set);
  if (__CsvProfilerStat895 == false) {
    FCsvProfilerTrace::OutputInlineStat("InstancePayloadAllocUsedSize",_GCsvCategory_GPUScene.Index)
    ;
    __CsvProfilerStat895 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("InstancePayloadAllocUsedSize",_GCsvCategory_GPUScene.Index,
             (this->InstancePayloadDataAllocator).CurrentSize,Set);
  if (__CsvProfilerStat897 == false) {
    FCsvProfilerTrace::OutputInlineStat("LightmapDataAllocMaxSize",_GCsvCategory_GPUScene.Index);
    __CsvProfilerStat897 = true;
  }
  lVar44 = 0x130;
  if ((this->LightmapDataAllocator).bGrowOnly == false) {
    lVar44 = 300;
  }
  FCsvProfiler::RecordCustomStat
            ("LightmapDataAllocMaxSize",_GCsvCategory_GPUScene.Index,
             *(int *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                     lVar44 + -0x48),Set);
  if (__CsvProfilerStat898 == false) {
    FCsvProfilerTrace::OutputInlineStat("LightmapDataAllocUsedSize",_GCsvCategory_GPUScene.Index);
    __CsvProfilerStat898 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("LightmapDataAllocUsedSize",_GCsvCategory_GPUScene.Index,
             (this->LightmapDataAllocator).CurrentSize,Set);
  cVar23 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_1a0 = '\0';
  if ((cVar23 != '\0') && ((cVar23 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_a8 = 0;
      uStack_a4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_ac);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_GPUScene_Update;
      ::Desc._padding_ = (longlong)u_GPUScene_Update;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 900;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FGPUScene::UpdateInternal'::__l45::Desc::operator()<>'::__l3::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_168._Myfirst._Val = &::Desc;
    local_1b0.State = (FRDGScopeState *)param_1;
    pFVar27 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar27;
    local_1b0.Scope = pFVar27;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16>_const_*,std::tuple<>_>_>
              (&(pFVar27->Impl).Impl,(FRDGScopeState *)param_1,&local_168);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar27,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar27,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_1a0 = '\x01';
  }
  if (__CsvProfilerStat903 == false) {
    FCsvProfilerTrace::OutputInlineStat("GPUSceneInstanceCount",0);
    __CsvProfilerStat903 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("GPUSceneInstanceCount",0,(float)(this->InstanceSceneDataAllocator).CurrentSize,Set);
  if ((this->InstanceSceneDataAllocator).bGrowOnly == false) {
    lVar41 = 0x28c;
  }
  bVar21 = this->bUseTiledInstanceDataLayout;
  this->MaxInstancesDuringPrevUpdate =
       *(uint *)((this->InstancePayloadDataAllocator).FreeSpans.AllocatorInstance.InlineData +
                lVar41 + -0x48);
  pTVar17 = CVarGPUSceneInstanceDataTileSizeLog2.Ref;
  bVar22 = IsInParallelRenderingThread();
  if ((!bVar22) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this->bUseTiledInstanceDataLayout = (bool)((byte)((uint)pTVar17->ShadowedValue[1] >> 0x1f) ^ 1);
  pTVar17 = CVarGPUSceneInstanceDataTileSizeLog2.Ref;
  bVar22 = IsInParallelRenderingThread();
  if ((!bVar22) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  cVar23 = this->bUseTiledInstanceDataLayout;
  iVar24 = pTVar17->ShadowedValue[1];
  if (pTVar17->ShadowedValue[1] < 0) {
    iVar24 = 0;
  }
  if (bVar21 != (bool)cVar23) {
    pFVar7 = (this->InstanceSceneDataBuffer).Reference;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      (this->InstanceSceneDataBuffer).Reference = (FRDGPooledBuffer *)0x0;
      FRefCountBase::Release((FRefCountBase *)pFVar7);
      cVar23 = this->bUseTiledInstanceDataLayout;
    }
    this->bUpdateAllPrimitives = true;
  }
  if (cVar23 != '\0') {
    if (iVar24 != this->InstanceDataTileSizeLog2) {
      this->InstanceDataTileSizeLog2 = iVar24;
      this->bUpdateAllPrimitives = true;
    }
    pTVar38 = &this->InstanceSceneDataBuffer;
    if ((GRHIGlobals.ReservedResources.Supported != false) &&
       (pTVar38->Reference == (FRDGPooledBuffer *)0x0)) {
      uStack_1f0 = 0x10109;
      local_1f8 = 0x10;
      uStack_1f4 = 0x8000000;
      local_198 = 0x800000000000010;
      local_1e8 = 0;
      uStack_190 = CONCAT44(uStack_1ec,0x410109);
      local_188 = 0;
      TVar28 = AllocatePooledBuffer((FRDGBufferDesc *)&local_238,(wchar_t *)&local_198,0x20);
      if ((FRDGPooledBuffer *)pTVar38 != TVar28.Reference) {
        pFVar7 = pTVar38->Reference;
        pTVar38->Reference = (FRDGPooledBuffer *)(TVar28.Reference)->_padding_;
        (TVar28.Reference)->_padding_ = 0;
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          FRefCountBase::Release((FRefCountBase *)pFVar7);
        }
      }
      if (local_238 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_238 + 1);
        LOCK();
        iVar24 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (((iVar24 == 1) && (piVar1 != (int *)0x0)) && (local_238 != (undefined8 *)0x0)) {
          (**(code **)*local_238)();
        }
      }
    }
  }
  pTVar17 = CVarGPUSceneUploadEveryFrame.Ref;
  bVar21 = IsInParallelRenderingThread();
  if ((!bVar21) &&
     (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar21)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((pTVar17->ShadowedValue[1] != 0) || (this->bUpdateAllPrimitives != false)) {
    (this->PrimitivesToUpdate).ArrayNum = 0;
    if ((this->PrimitivesToUpdate).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->PrimitivesToUpdate).AllocatorInstance,0,
                 &(this->PrimitivesToUpdate).ArrayMax);
    }
    lVar41 = 0x4c28;
    if ((this->Scene->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
      lVar41 = 0x4c24;
    }
    if (this->bIsEnabled != false) {
      iVar24 = *(int *)((longlong)
                        ((this->Scene->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd)
                       + lVar41);
      iVar35 = (this->PrimitiveDirtyState).ArrayNum;
      if (iVar35 < iVar24) {
        TArray<enum_EPrimitiveDirtyState,TSizedDefaultAllocator<32>_>::AddZeroed
                  (&this->PrimitiveDirtyState,(iVar24 + 0x3fU & 0xffffffc0) - iVar35);
      }
    }
    pTVar2 = &this->InstanceRangesToClear;
    uVar25 = (this->Scene->Primitives).ArrayNum;
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    (this->InstanceRangesToClear).ArrayNum = 0;
    if ((this->InstanceRangesToClear).ArrayMax < (int)uVar25) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar25,&pTVar2->AllocatorInstance,0,&(this->InstanceRangesToClear).ArrayMax);
    }
    pFVar8 = this->Scene;
    pTVar3 = &this->PrimitivesToUpdate;
    local_2b0 = (pFVar8->Primitives).ArrayNum;
    uVar36 = (ulonglong)(int)local_2b0;
    pFVar45 = (pFVar8->Primitives).AllocatorInstance.Data;
    local_278 = (FUploadDataSourceAdapterScenePrimitives *)(pFVar45 + uVar36 * 8);
    while( true ) {
      pFVar20 = local_278;
      if ((pFVar8->Primitives).ArrayNum != (int)uVar36) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPrimitiveSceneInfo_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if ((FUploadDataSourceAdapterScenePrimitives *)pFVar45 == pFVar20) break;
      lVar41 = *(longlong *)pFVar45;
      uVar25 = *(uint *)(lVar41 + 0x18c);
      uVar40 = 0;
      if ((int)uVar25 < (this->PrimitiveDirtyState).ArrayNum) {
        uVar40 = ~uVar25 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar5 = (this->PrimitiveDirtyState).AllocatorInstance.Data + (int)uVar25;
      *pFVar5 = (FScriptContainerElement)((byte)*pFVar5 | 0xe);
      local_2b4 = *(undefined4 *)(lVar41 + 0x18c);
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_2b4) &&
          ((FScriptContainerElement *)&local_2b4 <
           pFVar5 + (longlong)(this->PrimitivesToUpdate).ArrayMax * 4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar24 = (this->PrimitivesToUpdate).ArrayNum;
      if (iVar24 == (this->PrimitivesToUpdate).ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,&(this->PrimitivesToUpdate).ArrayMax);
      }
      (this->PrimitivesToUpdate).ArrayNum = iVar24 + 1;
      *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar24 * 4) = local_2b4;
      local_2a4 = *(undefined4 *)(lVar41 + 0x18c);
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      uStack_2a0 = *(undefined4 *)(lVar41 + 0x224);
      local_29c = *(undefined4 *)(lVar41 + 0x228);
      if (((pFVar5 <= (FScriptContainerElement *)&local_2a4) &&
          ((FScriptContainerElement *)&local_2a4 <
           pFVar5 + (longlong)(this->InstanceRangesToClear).ArrayMax * 0xc)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar24 = (this->InstanceRangesToClear).ArrayNum;
      if (iVar24 == (this->InstanceRangesToClear).ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar2->AllocatorInstance,&(this->InstanceRangesToClear).ArrayMax
                           );
      }
      pFVar45 = pFVar45 + 8;
      (this->InstanceRangesToClear).ArrayNum = iVar24 + 1;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      *(ulonglong *)(pFVar5 + (longlong)iVar24 * 0xc) = CONCAT44(uStack_2a0,local_2a4);
      *(undefined4 *)(pFVar5 + (longlong)iVar24 * 0xc + 8) = local_29c;
      uVar36 = (ulonglong)local_2b0;
    }
    this->bUpdateAllPrimitives = false;
    param_2 = local_res18;
    param_1 = local_res10;
  }
  uVar25 = (**(code **)(*(longlong *)this->Scene + 0x4e8))();
  uVar42 = 0;
  this->SceneFrameNumber = uVar25;
  uVar36 = uVar42;
  if (0 < (this->PrimitivesToUpdate).ArrayNum) {
    do {
      uVar40 = (uint)uVar42;
      uVar25 = 0;
      if ((int)uVar40 < (this->PrimitivesToUpdate).ArrayNum) {
        uVar25 = ~uVar40 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar25 = *(uint *)((this->PrimitivesToUpdate).AllocatorInstance.Data + uVar36);
      lVar41 = (longlong)(int)uVar25;
      if (((int)uVar25 < 0) || ((this->PrimitiveDirtyState).ArrayNum <= (int)uVar25)) {
        uVar25 = 0;
        if ((int)uVar40 < (this->PrimitivesToUpdate).ArrayNum) {
          uVar25 = ~uVar40 >> 0x1f;
        }
joined_r0x0001449425ad:
        if ((uVar25 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar24 = (this->PrimitivesToUpdate).ArrayNum;
        pFVar45 = (this->PrimitivesToUpdate).AllocatorInstance.Data;
        iVar35 = ~uVar40 + iVar24;
        if (1 < iVar35) {
          iVar35 = 1;
        }
        if (iVar35 != 0) {
          memmove(pFVar45 + (longlong)(int)uVar40 * 4,pFVar45 + (longlong)(iVar24 - iVar35) * 4,
                  (longlong)iVar35 << 2);
        }
        piVar1 = &(this->PrimitivesToUpdate).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      else {
        uVar26 = 0;
        if ((int)uVar25 < (this->PrimitiveDirtyState).ArrayNum) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (((byte)(this->PrimitiveDirtyState).AllocatorInstance.Data[lVar41] & 0x20) != 0) {
          uVar26 = 0;
          if ((int)uVar25 < (this->PrimitiveDirtyState).ArrayNum) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (((byte)(this->PrimitiveDirtyState).AllocatorInstance.Data[lVar41] & 0x10) == 0) {
            uVar25 = 0;
            if ((int)uVar40 < (this->PrimitivesToUpdate).ArrayNum) {
              uVar25 = ~uVar40 >> 0x1f;
            }
            goto joined_r0x0001449425ad;
          }
        }
        pFVar8 = this->Scene;
        if ((int)uVar25 < (pFVar8->PersistentPrimitiveIdToIndexMap).ArrayNum) {
          if (((int)uVar25 < 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(int *)((pFVar8->PersistentPrimitiveIdToIndexMap).AllocatorInstance.Data + lVar41 * 4
                      ) == -1) goto LAB_14494256b;
        }
        else {
LAB_14494256b:
          bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Scene.GetPrimitiveIndex(PersistentPrimitiveIndex) != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                              ,0x3d5,L"");
          if (bVar21) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        uVar42 = (ulonglong)(uVar40 + 1);
        uVar36 = uVar36 + 4;
      }
      param_2 = local_res18;
      param_1 = local_res10;
    } while ((int)uVar42 < (this->PrimitivesToUpdate).ArrayNum);
  }
  pTVar4 = &this->PrimitiveDirtyState;
  local_278 = FRDGAllocator::
              Alloc<FUploadDataSourceAdapterScenePrimitives,FScene_&,unsigned_int_&,TArray<FPersistentPrimitiveIndex,TSizedDefaultAllocator<32>_>,TArray<enum_EPrimitiveDirtyState,TSizedDefaultAllocator<32>_>_>
                        ((FRDGAllocator *)&param_1->_padding_,this->Scene,&this->SceneFrameNumber,
                         &this->PrimitivesToUpdate,pTVar4);
  UpdateBufferAllocations(this,&local_78,param_1,param_2);
  AddClearInstancesPass(this,param_1,this->Scene->InstanceCullingOcclusionQueryRenderer);
  piVar1 = &(this->PrimitivesToUpdate).ArrayMax;
  (this->PrimitivesToUpdate).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PrimitivesToUpdate).AllocatorInstance,0,piVar1);
  }
  uVar25 = (this->PrimitiveDirtyState).ArrayNum;
  uVar36 = (ulonglong)uVar25;
  local_2b8[0] = (FScriptContainerElement)0x0;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar36);
  }
  piVar1 = &(this->PrimitiveDirtyState).ArrayMax;
  (this->PrimitiveDirtyState).ArrayNum = 0;
  if (*piVar1 != uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar25,&pTVar4->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar25) {
    do {
      pFVar45 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar45 <= local_2b8) && (local_2b8 < pFVar45 + *piVar1)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar24 = (this->PrimitiveDirtyState).ArrayNum;
      if (iVar24 == *piVar1) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x101,&pTVar4->AllocatorInstance,piVar1);
      }
      (this->PrimitiveDirtyState).ArrayNum = iVar24 + 1;
      (pTVar4->AllocatorInstance).Data[iVar24] = local_2b8[0];
      uVar36 = uVar36 - 1;
    } while (uVar36 != 0);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"UpdateGPUScene");
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId999,"UpdateGPUScene",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
               ,999);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId999);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_UpdateGPUScene ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FGPUScene::UpdateInternal(FRDGBuilder_&,FSceneUniformBuffer_&,FRDGExternalAccessQueue_&,UE::Tasks::Private::FTaskHandle_const_&,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadRangeView<FUpdateInstanceFromComputeCommand>_const_&)_::_85_::FStat_STAT_UpdateGPUScene>
         )0x0) {
      pFVar29 = ::FName::FName(&local_180,"STAT_UpdateGPUScene");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGPUScene,*pFVar29,
                 L"STAT_UpdateGPUScene","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar30 = StatPtr_STAT_UpdateGPUScene;
  if (StatPtr_STAT_UpdateGPUScene ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FGPUScene::UpdateInternal(FRDGBuilder_&,FSceneUniformBuffer_&,FRDGExternalAccessQueue_&,UE::Tasks::Private::FTaskHandle_const_&,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadRangeView<FUpdateInstanceFromComputeCommand>_const_&)_::_85_::FStat_STAT_UpdateGPUScene>
       )0x0) {
    pFVar29 = ::FName::FName(&local_178,"STAT_UpdateGPUScene");
    FVar30 = (FThreadSafeStaticStat<_private:_void___cdecl_FGPUScene::UpdateInternal(FRDGBuilder_&,FSceneUniformBuffer_&,FRDGExternalAccessQueue_&,UE::Tasks::Private::FTaskHandle_const_&,TSceneUpdateCommandQueue<FPrimitiveSceneInfo,EPrimitiveUpdateDirtyFlags,EPrimitiveUpdateId>::TPayloadRangeView<FUpdateInstanceFromComputeCommand>_const_&)_::_85_::FStat_STAT_UpdateGPUScene>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGPUScene,*pFVar29,
                          L"STAT_UpdateGPUScene","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar43 = *(FName *)FVar30;
  bVar22 = false;
  bVar16 = false;
  local_260.ComparisonIndex.Value = 0;
  local_260.Number = 0;
  FVar37 = FVar43.ComparisonIndex.Value;
  uVar25 = FVar43.Number;
  if ((FVar37.Value == 0) && (uVar25 == 0)) {
LAB_144942967:
    bVar15 = false;
    FVar43 = local_260;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_280.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_280._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar22 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_270.ComparisonIndex.Value = FVar37.Value;
        local_270.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_270,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                   ,1000);
        bVar22 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144942967;
    local_2b0 = FVar37.Value;
    uStack_2ac = uVar25;
    FThreadStats::AddMessage(FVar43,CycleScopeStart);
    bVar15 = true;
  }
  FVar31 = StatPtr_STAT_UpdateGPUSceneTime;
  if (StatPtr_STAT_UpdateGPUSceneTime == (FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime>)0x0)
  {
    pFVar29 = ::FName::FName(&local_170,"STAT_UpdateGPUSceneTime");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_UpdateGPUSceneTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateGPUSceneTime,*pFVar29,
                        L"Update GPU Scene","STATGROUP_SceneUpdate","STATCAT_Advanced",
                        L"Scene Update",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar39 = *(FName *)FVar31;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  bVar13 = false;
  bVar12 = false;
  FVar37 = FVar39.ComparisonIndex.Value;
  uVar25 = FVar39.Number;
  if ((FVar37.Value != 0) || (uVar25 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_27c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_27c._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = FVar37.Value;
        local_268.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                   ,0x3e9);
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2b0 = FVar37.Value;
      uStack_2ac = uVar25;
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar14 = true;
      goto LAB_144942a85;
    }
  }
  bVar14 = false;
  FVar39 = local_250;
LAB_144942a85:
  pFVar18 = local_res10;
  UploadGeneral<FUploadDataSourceAdapterScenePrimitives>
            (this,local_res10,&local_78,local_res20,local_278,param_4);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar14) && (FVar39 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar32 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar32 == (FThreadStats *)0x0) {
      pFVar33 = FThreadStatsPool::Get();
      pFVar32 = FThreadStatsPool::GetFromPool(pFVar33);
    }
    if (pFVar32->bWaitForExplicitFlush < pFVar32->ScopeCount) {
      local_218.NameAndInfo.Index = FVar39.ComparisonIndex.Value;
      local_218.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_230);
      local_218.StatData.Pad[4] = '\0';
      local_218.StatData.Pad[5] = '\0';
      local_218.StatData.Pad[6] = '\0';
      local_218.StatData.Pad[7] = '\0';
      local_218.StatData.Pad[0] = local_230.s.LowPart._0_1_;
      local_218.StatData.Pad[1] = local_230.s.LowPart._1_1_;
      local_218.StatData.Pad[2] = local_230.s.LowPart._2_1_;
      local_218.StatData.Pad[3] = local_230.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar32,&local_218);
      piVar1 = &pFVar32->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar32,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar32,false,false);
      }
    }
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar15) && (FVar43 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar32 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar32 == (FThreadStats *)0x0) {
      pFVar33 = FThreadStatsPool::Get();
      pFVar32 = FThreadStatsPool::GetFromPool(pFVar33);
    }
    if (pFVar32->bWaitForExplicitFlush < pFVar32->ScopeCount) {
      local_208.NameAndInfo.Index = FVar43.ComparisonIndex.Value;
      local_208.NameAndInfo.Number = FVar43.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_228);
      local_208.StatData.Pad[4] = '\0';
      local_208.StatData.Pad[5] = '\0';
      local_208.StatData.Pad[6] = '\0';
      local_208.StatData.Pad[7] = '\0';
      local_208.StatData.Pad[0] = local_228.s.LowPart._0_1_;
      local_208.StatData.Pad[1] = local_228.s.LowPart._1_1_;
      local_208.StatData.Pad[2] = local_228.s.LowPart._2_1_;
      local_208.StatData.Pad[3] = local_228.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar32,&local_208);
      piVar1 = &pFVar32->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar32,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar32,false,false);
      }
    }
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (param_5->NumItems != 0) {
    cVar23 = *(char *)((longlong)&pFVar18->_padding_ + 6);
    local_1b8 = '\0';
    if ((cVar23 != '\0') && ((cVar23 != '\x01' || ((pFVar18->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0x3f1;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        local_88 = 0;
        uStack_84 = 0;
        ::Desc._12_8_ = ZEXT48(uStack_8c);
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_ = (longlong)u_UpdateGPUScene_;
        ::Desc._padding_ = (longlong)u_UpdateGPUScene_;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```FGPUScene::UpdateInternal'::__l93::<lambda_2>::operator()<>'::__l3::<lambda_1>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      local_1c8.State = (FRDGScopeState *)pFVar18;
      local_158._Myfirst._Val = &::Desc;
      pFVar27 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar18->_padding_,(FRDGScope **)pFVar18);
      pFVar18->_padding_ = (longlong)pFVar27;
      local_1c8.Scope = pFVar27;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42>_const_*,std::tuple<>_>_>
                (&(pFVar27->Impl).Impl,(FRDGScopeState *)pFVar18,&local_158);
      if (*(char *)((longlong)&pFVar18->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(pFVar27,(FRHIComputeCommandList *)pFVar18->_padding_,false);
        FRDGScope::BeginGPU(pFVar27,(FRHIComputeCommandList *)pFVar18->_padding_);
      }
      local_1b8 = '\x01';
    }
    local_148.PersistentPrimitiveId = 0xffffffff;
    local_148.InstanceSceneDataOffset = 0xffffffff;
    local_148.PackedInstanceSceneDataFlags = 0;
    local_148.View = (FSceneView *)0x0;
    local_148.GPUWriteParams.GPUSceneInstanceSceneDataRW = (FRDGBufferUAV *)0x0;
    local_148.GPUWriteParams.GPUSceneInstancePayloadDataRW = (FRDGBufferUAV *)0x0;
    local_148.GPUWriteParams.GPUScenePrimitiveSceneDataRW = (FRDGBufferUAV *)0x0;
    local_148.GPUWriteParams.GPUSceneWriterUB._0_8_ = 0;
    local_148.NumCustomDataFloats = 0xffffffff;
    local_148.GPUWritePass = None;
    local_148.GPUWriteParams.GPUSceneWriterUB._8_1_ = 1;
    local_148.GPUSceneWriterUB = GetWriteParameters(this,pFVar18,&local_148.GPUWriteParams,true);
    pTVar9 = param_5->UpdateBuffer;
    pFVar10 = (pTVar9->PayloadArrays).Elements[9].Ptr;
    if (((pFVar10 != (FBasePayloadArray *)0x0) && (pFVar10->PayloadByteSize != 0x28)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                            ,0x236,L""), bVar21)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_298 = (pTVar9->PayloadArrays).Elements[9].Ptr;
    local_290 = &pTVar9->Commands;
    local_288 = 0;
    TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
    ::TConstPayloadIterator<FUpdateInstanceFromComputeCommand>::SkipDeleted(&local_298);
    pTVar9 = param_5->UpdateBuffer;
    pFVar10 = (pTVar9->PayloadArrays).Elements[9].Ptr;
    if (((pFVar10 != (FBasePayloadArray *)0x0) && (pFVar10->PayloadByteSize != 0x28)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("PayloadArrays[int32(PayloadType::Id)] == nullptr || PayloadArrays[int32(PayloadType::Id)]->PayloadByteSize == sizeof(PayloadType)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                            ,0x236,L""), bVar21)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_1e0 = (pTVar9->PayloadArrays).Elements[9].Ptr;
    local_1d0 = 0;
    if (local_1e0 != (FBasePayloadArray *)0x0) {
      local_1d0 = local_1e0[1].PayloadByteSize;
    }
    local_1d8 = &pTVar9->Commands;
    this_01 = &local_1e0;
    while( true ) {
      TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
      ::TConstPayloadIterator<FUpdateInstanceFromComputeCommand>::SkipDeleted(this_01);
      if ((local_298 != local_1e0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Payloads == It.Payloads",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                              ,0x17d,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (local_288 == local_1d0) break;
      if (((local_298 == (FBasePayloadArray *)0x0) ||
          (local_298[2].PayloadByteSize <= (int)local_288)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Payloads && Index < Payloads->CommandSlots.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                              ,0x175,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar19 = local_290;
      pFVar10 = local_298;
      lVar41 = (longlong)(int)local_288;
      uVar25 = 0;
      if ((int)local_288 < local_298[2].PayloadByteSize) {
        uVar25 = ~local_288 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar25 = *(uint *)(pFVar10[2]._padding_ + lVar41 * 4);
      uVar40 = 0;
      if ((int)uVar25 < pTVar19->ArrayNum) {
        uVar40 = ~uVar25 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar45 = (pTVar19->AllocatorInstance).Data;
      if ((pFVar45[(longlong)(int)uVar25 * 0x50 + 0x18] != (FScriptContainerElement)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Command.bDeleted",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                              ,0x177,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar10 = local_298;
      lVar41 = (longlong)(int)local_288;
      uVar40 = 0;
      if ((int)local_288 < local_298[1].PayloadByteSize) {
        uVar40 = ~local_288 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      this_00 = *(FPrimitiveSceneInfo **)(pFVar45 + (longlong)(int)uVar25 * 0x50);
      lVar44 = pFVar10[1]._padding_;
      local_148.InstanceSceneDataOffset = this_00->InstanceSceneDataOffset;
      local_148.PersistentPrimitiveId = (this_00->PersistentIndex).Index;
      pFVar34 = FPrimitiveSceneInfo::GetInstanceSceneDataBuffers(this_00);
      if ((pFVar34 == (FInstanceSceneDataBuffers *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceSceneDataBuffers",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                              ,0x3fe,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (((pFVar34->CurrentWriterTag).Value != (atomic<unsigned_int>)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("AccessTag.Kind == FAccessTag::EKind::Reader && CurrentWriterTag.Value == 0u || AccessTag.Kind == FAccessTag::EKind::Writer && CurrentWriterTag.Value == AccessTag.WriterTag"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceDataSceneProxy.h"
                              ,0x182,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_148.NumCustomDataFloats = pFVar34->NumCustomDataFloats;
      uVar6 = (pFVar34->Flags).Packed;
      local_148.PackedInstanceSceneDataFlags =
           ((uVar6 & 0x20) * 2 | uVar6 & 0x9f) * 2 | uVar6 & 0x40;
      FGPUSceneWriteDelegate::Execute
                ((FGPUSceneWriteDelegate *)(lVar44 + 8 + lVar41 * 0x28),pFVar18,&local_148);
      local_288 = local_288 + 1;
      this_01 = &local_298;
    }
    if (local_1b8 != '\0') {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1c8);
    }
  }
  if (local_1a0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1b0);
  }
  FMemScope::~FMemScope(&local_220);
  FLLMScope::~FLLMScope(&local_2a8);
  return;
}

// UploadDynamicPrimitiveShaderDataForView @ 144943ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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
FGPUScene::UploadDynamicPrimitiveShaderDataForView
          (FGPUScene *this,FRDGBuilder *param_1,FViewInfo *param_2,bool param_3,
          IShadowInvalidatingInstances *param_4)

{
  FRHIGPUMask FVar1;
  FRHIComputeCommandList *this_00;
  
  if (this->bIsEnabled != false) {
    this_00 = (FRHIComputeCommandList *)param_1->_padding_;
    FVar1.GPUMask = *(uint *)&this_00->field_0x29c;
    FRHIComputeCommandList::SetGPUMask
              (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
    UploadDynamicPrimitiveShaderDataForViewInternal(this,param_1,param_2,param_3,param_4);
    FRHIComputeCommandList::SetGPUMask(this_00,FVar1);
  }
  return;
}

// UploadDynamicPrimitiveShaderDataForViewInternal @ 144943f70

/* WARNING: Removing unreachable block (ram,0x000144944fb4) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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
FGPUScene::UploadDynamicPrimitiveShaderDataForViewInternal
          (FGPUScene *this,FRDGBuilder *param_1,FViewInfo *param_2,bool param_3,
          IShadowInvalidatingInstances *param_4)

{
  uint *puVar1;
  TRangeBound<int> *pTVar2;
  FUploadData *pFVar3;
  FGPUSceneDynamicContext *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TRangeBound<int> TVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FRDGScope *pFVar17;
  longlong lVar18;
  TRange<int> *pTVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<_private:_void___cdecl_FGPUScene::UploadDynamicPrimitiveShaderDataForViewInternal(FRDGBuilder_&,FViewInfo_&,bool,UE::Renderer::Private::IShadowInvalidatingInstances_*)_::_13_::FStat_STAT_UploadDynamicPrimitiveShaderData>
  FVar21;
  FUploadDataSourceAdapterDynamicPrimitives *pFVar22;
  FSceneUniformBuffer *pFVar23;
  FRegisteredBuffers *pFVar24;
  FShaderParametersMetadata *pFVar25;
  char cVar26;
  ulonglong uVar27;
  TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar28;
  FNameEntryId FVar29;
  FName FVar30;
  ForElementType<unsigned_int> FVar31;
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar32;
  TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar33;
  FGPUScenePrimitiveCollector *pFVar34;
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar35;
  ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> FVar36;
  FScriptContainerElement *pFVar37;
  int iVar38;
  TArray<FGPUScene::FDeferredGPUWrite,TSizedDefaultAllocator<32>_> *pTVar39;
  bool bVar40;
  FRDGBuffer *pFVar41;
  FRDGBuffer *pFVar42;
  undefined1 local_397;
  undefined1 local_396 [2];
  uint local_394;
  ForElementType<unsigned_int> local_390;
  undefined8 local_388;
  uint local_380;
  FLLMScope local_37c;
  FRDGScope *local_378;
  uint local_370;
  uint uStack_36c;
  FColor_u_0 local_368;
  int local_364;
  FName local_360;
  undefined8 local_358;
  int iStack_350;
  int iStack_34c;
  int local_348;
  undefined4 uStack_344;
  uint uStack_340;
  undefined4 uStack_33c;
  FName local_338;
  FName local_328;
  FTaskHandle local_320;
  FScriptContainerElement *local_318;
  FMemScope local_310;
  TRDGEventScopeGuard<FRDGScope_RHI> local_308;
  char local_2f8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_2f0;
  char local_2e0;
  FRDGBufferSRVDesc local_2d8;
  FRDGBufferSRVDesc local_2b8;
  FRDGBufferSRVDesc local_298;
  FRDGBufferSRVDesc local_278;
  FRDGBufferSRVDesc local_258;
  FName local_238;
  FName local_230;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49>_const_*,std::tuple<>_> local_228;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_> local_218;
  FGPUSceneWriteDelegateParams local_208;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  FRDGBufferSRV *local_158;
  FRDGBufferSRV *local_150;
  FRDGBufferSRV *local_148;
  FRDGBufferSRV *local_140;
  FRDGBufferSRV *local_138;
  uint uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  FRDGBuffer *local_c8;
  TRange<int> local_c0;
  FRegisteredBuffers local_b0;
  FRegisteredBuffers local_88;
  
  FLLMScope::FLLMScope(&local_37c,LLMTagDeclaration_GPUScene.UniqueName,false,None,Default,true);
  local_328 = LLMTagDeclaration_GPUScene.UniqueName;
  FMemScope::FMemScope(&local_310,&local_328,true);
  cVar26 = *(char *)((longlong)&param_1->_padding_ + 6);
  bVar11 = false;
  local_2e0 = '\0';
  if ((cVar26 != '\0') && ((cVar26 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_118 = 0;
      uStack_114 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_11c);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_GPUScene_Upload;
      ::Desc._padding_ = (longlong)u_GPUScene_Upload;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x6fa;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FGPUScene::UploadDynamicPrimitiveShaderDataForViewInternal'::__l7::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_228._Myfirst._Val = &::Desc;
    local_2f0.State = (FRDGScopeState *)param_1;
    pFVar17 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar17;
    local_2f0.Scope = pFVar17;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49>_const_*,std::tuple<>_>_>
              (&(pFVar17->Impl).Impl,(FRDGScopeState *)param_1,&local_228);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_2e0 = '\x01';
  }
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Green,"FGPUScene_UploadDynamicPrimitiveShaderDataForView");
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1787,"FGPUScene_UploadDynamicPrimitiveShaderDataForView",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
               ,0x6fb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1787);
  }
  if ((this->bInBeginEndBlock == false) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_610239441725815043>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                          ,0x6fd,"bInBeginEndBlock"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar18 = 0x4c28;
  if ((this->Scene->PersistentPrimitiveIdAllocator).bGrowOnly == false) {
    lVar18 = 0x4c24;
  }
  if ((this->DynamicPrimitivesOffset <
       *(int *)((longlong)
                ((this->Scene->UniformBuffers).MobileDirectionalLightUniformBuffers + -0xd) + lVar18
               )) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_610239441725815042>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                          ,0x6fe,"DynamicPrimitivesOffset >= Scene.GetMaxPersistentPrimitiveIndex()"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar18 = 0x2930;
  if (!param_3) {
    lVar18 = 0x2900;
  }
  pFVar34 = (FGPUScenePrimitiveCollector *)((longlong)&param_2->_padding_ + lVar18);
  cVar26 = pFVar34->bCommitted;
  if ((bool)cVar26 == false) {
    if (pFVar34->UploadData != (FUploadData *)0x0) {
      pTVar19 = CommitPrimitiveCollector
                          (pFVar34->GPUSceneDynamicContext->GPUScene,&local_c0,pFVar34);
      TVar8 = pTVar19->UpperBound;
      (pFVar34->PrimitiveIdRange).LowerBound = pTVar19->LowerBound;
      (pFVar34->PrimitiveIdRange).UpperBound = TVar8;
    }
    pFVar34->bCommitted = true;
    cVar26 = '\x01';
  }
  pFVar3 = pFVar34->UploadData;
  if (pFVar3 == (FUploadData *)0x0) {
    iVar38 = 0;
  }
  else {
    iVar38 = (pFVar3->PrimitiveData).ArrayNum;
  }
  if (((cVar26 == '\0') && (pFVar3 != (FUploadData *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bCommitted || UploadData == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                          ,0x6e,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = &(pFVar34->PrimitiveIdRange).UpperBound;
  if (((pFVar34->PrimitiveIdRange).LowerBound.Type.Value == '\x02') ||
     ((pTVar2->Type).Value == '\x02')) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                        ,0x1ad,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((pTVar2->Type).Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar15 = (pFVar34->PrimitiveIdRange).UpperBound.Value;
  if (((pFVar34->PrimitiveIdRange).LowerBound.Type.Value == '\x02') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((iVar15 - (pFVar34->PrimitiveIdRange).LowerBound.Value != iVar38) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_610239441725815030>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                          ,0x70a,
                          "Collector.GetPrimitiveIdRange().Size<int32>() == NumPrimitiveDataUploads"
                         ), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pFVar34->UploadData != (FUploadData *)0x0) {
    pFVar4 = this->CurrentDynamicContext;
    pTVar33 = (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)(pFVar4->DymamicPrimitiveUploadData).AllocatorInstance.SecondaryData.Data;
    if (pTVar33 ==
        (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)0x0) {
      pTVar33 = &pFVar4->DymamicPrimitiveUploadData;
    }
    for (pTVar28 = pTVar33;
        pTVar28 !=
        (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)((pTVar33->AllocatorInstance).InlineData +
           (longlong)(pFVar4->DymamicPrimitiveUploadData).ArrayNum * 8);
        pTVar28 = (TArray<FGPUScenePrimitiveCollector::FUploadData_*,TSizedInlineAllocator<128,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                   *)((pTVar28->AllocatorInstance).InlineData + 8)) {
      if (*(FUploadData **)(pTVar28->AllocatorInstance).InlineData == pFVar34->UploadData) {
        if ((int)((longlong)pTVar28 - (longlong)pTVar33 >> 3) != -1) goto LAB_144944365;
        break;
      }
    }
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_610239441725815027>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                        ,0x70d,
                        "Collector.UploadData == nullptr || CurrentDynamicContext->DymamicPrimitiveUploadData.Find(Collector.UploadData) != INDEX_NONE"
                       );
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
LAB_144944365:
  if (((pFVar34->UploadData == (FUploadData *)0x0) || (iVar38 < 1)) ||
     (pFVar34->UploadData->bIsUploaded != false)) goto LAB_144944870;
  pFVar17 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar17;
  uVar27 = (ulonglong)(pFVar17->Impl).Impl.TypeIndex;
  local_378 = pFVar17;
  if ((3 < uVar27) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar27])(&pFVar17->Impl);
  (pFVar17->Impl).Impl._padding_ = (longlong)"UploadDynamicPrimitiveShaderData";
  FCsvProfiler::BeginExclusiveStat("UploadDynamicPrimitiveShaderData",(char *)0x0);
  (pFVar17->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UploadDynamicPrimitiveShaderData ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FGPUScene::UploadDynamicPrimitiveShaderDataForViewInternal(FRDGBuilder_&,FViewInfo_&,bool,UE::Renderer::Private::IShadowInvalidatingInstances_*)_::_13_::FStat_STAT_UploadDynamicPrimitiveShaderData>
         )0x0) {
      pFVar20 = ::FName::FName(&local_238,"STAT_UploadDynamicPrimitiveShaderData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UploadDynamicPrimitiveShaderData,
                 *pFVar20,L"STAT_UploadDynamicPrimitiveShaderData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar21 = StatPtr_STAT_UploadDynamicPrimitiveShaderData;
  if (StatPtr_STAT_UploadDynamicPrimitiveShaderData ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FGPUScene::UploadDynamicPrimitiveShaderDataForViewInternal(FRDGBuilder_&,FViewInfo_&,bool,UE::Renderer::Private::IShadowInvalidatingInstances_*)_::_13_::FStat_STAT_UploadDynamicPrimitiveShaderData>
       )0x0) {
    pFVar20 = ::FName::FName(&local_230,"STAT_UploadDynamicPrimitiveShaderData");
    FVar21 = (FThreadSafeStaticStat<_private:_void___cdecl_FGPUScene::UploadDynamicPrimitiveShaderDataForViewInternal(FRDGBuilder_&,FViewInfo_&,bool,UE::Renderer::Private::IShadowInvalidatingInstances_*)_::_13_::FStat_STAT_UploadDynamicPrimitiveShaderData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UploadDynamicPrimitiveShaderData,*pFVar20,
                          L"STAT_UploadDynamicPrimitiveShaderData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar21;
  bVar9 = false;
  bVar11 = false;
  local_338.ComparisonIndex.Value = 0;
  local_338.Number = 0;
  bVar12 = false;
  bVar10 = false;
  FVar29 = FVar30.ComparisonIndex.Value;
  uVar13 = FVar30.Number;
  if ((FVar29.Value == 0) && (uVar13 == 0)) {
LAB_144944577:
    bVar9 = bVar12;
    bVar11 = bVar10;
    bVar10 = false;
    FVar30 = local_338;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_368.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_368._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar9 = false;
      bVar11 = true;
      bVar12 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_360.ComparisonIndex.Value = FVar29.Value;
        local_360.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_360,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                   ,0x714);
        bVar9 = true;
        bVar11 = true;
        bVar12 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144944577;
    local_370 = FVar29.Value;
    uStack_36c = uVar13;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar10 = true;
  }
  pFVar34->UploadData->bIsUploaded = true;
  if (((pFVar34->bCommitted == false) && (pFVar34->UploadData != (FUploadData *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bCommitted || UploadData == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                          ,0x6e,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((pFVar34->PrimitiveIdRange).LowerBound.Type.Value == '\x02') &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_364 = (pFVar34->PrimitiveIdRange).LowerBound.Value;
  local_380 = pFVar34->UploadData->InstanceSceneDataOffset;
  if ((this->DynamicPrimitivesOffset <= local_364) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_610239441725815014>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                          ,0x71a,"UploadIdStart < DynamicPrimitivesOffset"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((local_380 == 0xffffffff) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_610239441725815013>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                          ,0x71b,"InstanceIdStart != INDEX_NONE"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_4 != (IShadowInvalidatingInstances *)0x0) {
    FVar36 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)pFVar34->UploadData;
    iVar38 = *(int *)((longlong)FVar36 + 0x348);
    FVar32 = *(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
              ((longlong)FVar36 + 0x340);
    if (*(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)((longlong)FVar36 + 0x340)
        == (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
      FVar32 = FVar36;
    }
    FVar35 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)
             ((longlong)iVar38 * 0x68 + (longlong)FVar32);
    while( true ) {
      if (*(int *)((longlong)FVar36 + 0x348) != iVar38) {
        local_397 = 0;
        `TCheckedPointerIterator<FGPUScenePrimitiveCollector::FPrimitiveData,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_397);
      }
      if (FVar32 == FVar35) break;
      if ((*(int *)((longlong)FVar32 + 0x5c) == -1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrimitiveData.LocalInstanceSceneDataOffset != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.cpp"
                              ,0x723,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)((longlong)*param_4 + 0x10))
                (param_4,0xffffffff,local_380 + *(int *)((longlong)FVar32 + 0x5c),
                 *(undefined4 *)((longlong)FVar32 + 0x58));
      FVar32 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)
               ((longlong)FVar32 + 0x68);
    }
  }
  pFVar22 = FRDGAllocator::
            Alloc<FUploadDataSourceAdapterDynamicPrimitives,TArray<FGPUScenePrimitiveCollector::FPrimitiveData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&,int_const_&,int_const_&,unsigned_int_&,unsigned_int_&>
                      ((FRDGAllocator *)&param_1->_padding_,&pFVar34->UploadData->PrimitiveData,
                       &local_364,(int *)&local_380,&pFVar34->UploadData->InstancePayloadDataOffset,
                       &this->SceneFrameNumber);
  lVar18 = param_2->_padding_;
  if ((*(longlong *)(lVar18 + 0x178) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneRenderer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                          ,0xa7b,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar23 = (FSceneUniformBuffer *)(**(code **)(**(longlong **)(lVar18 + 0x178) + 0x10))();
  UpdateBufferAllocations(this,&local_b0,param_1,pFVar23);
  AddClearInstancesPass(this,param_1,this->Scene->InstanceCullingOcclusionQueryRenderer);
  local_320.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
  UploadGeneral<FUploadDataSourceAdapterDynamicPrimitives>
            (this,param_1,&local_b0,(FRDGExternalAccessQueue *)0x0,pFVar22,&local_320);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  pFVar17 = local_378;
  if (local_378 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(local_378,(FRHIComputeCommandList *)param_1->_padding_);
      FRDGScope::EndCPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_,false);
    }
    FRDGScope::ImmediateEnd(pFVar17,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  bVar11 = true;
LAB_144944870:
  lVar18 = param_2->_padding_;
  if ((*(longlong *)(lVar18 + 0x178) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneRenderer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                          ,0xa7b,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar23 = (FSceneUniformBuffer *)(**(code **)(**(longlong **)(lVar18 + 0x178) + 0x10))();
  if ((this->bIsEnabled != false) && ((this->PrimitiveBuffer).Reference != (FRDGPooledBuffer *)0x0))
  {
    pFVar41 = (this->CachedRegisteredBuffers).PrimitiveBuffer;
    local_2d8.Buffer = (this->CachedRegisteredBuffers).InstanceSceneDataBuffer;
    local_c8 = (this->CachedRegisteredBuffers).LightDataBuffer;
    local_2b8.Buffer = (this->CachedRegisteredBuffers).InstancePayloadDataBuffer;
    pFVar42 = (this->CachedRegisteredBuffers).LightmapDataBuffer;
    if (pFVar41 == (FRDGBuffer *)0x0) {
      pFVar24 = RegisterBuffers(this,&local_88,param_1);
      pFVar41 = pFVar24->PrimitiveBuffer;
      local_2d8.Buffer = pFVar24->InstanceSceneDataBuffer;
      local_c8 = pFVar24->LightDataBuffer;
      local_2b8.Buffer = pFVar24->InstancePayloadDataBuffer;
      pFVar42 = pFVar24->LightmapDataBuffer;
    }
    local_178._0_4_ = (this->CommonParameters).GPUSceneInstanceDataTileSizeLog2;
    local_178._4_4_ = (this->CommonParameters).GPUSceneInstanceDataTileSizeMask;
    uStack_170._0_4_ = (this->CommonParameters).GPUSceneInstanceDataTileStride;
    uStack_170._4_4_ = (this->CommonParameters).GPUSceneFrameNumber;
    local_168._0_4_ = (this->CommonParameters).GPUSceneMaxAllocatedInstanceId;
    local_168._4_4_ = (this->CommonParameters).GPUSceneMaxPersistentPrimitiveIndex;
    uStack_160 = *(undefined8 *)&(this->CommonParameters).GPUSceneNumLightmapDataItems;
    local_2d8._padding_._4_4_ = 0;
    local_2d8._padding_ = 0;
    local_2d8._padding_._0_4_ = 0xffffffff;
    local_2d8._padding_._0_1_ = 0;
    if ((((local_2d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_2d8._padding_._0_1_ = 0x1c;
    }
    local_158 = FRDGBuilder::CreateSRV(param_1,&local_2d8);
    local_2b8._padding_._0_4_ = 0xffffffff;
    local_2b8._padding_._4_4_ = 0;
    local_2b8._padding_ = 0;
    local_2b8._padding_._0_1_ = 0;
    if ((((local_2b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_2b8._padding_._0_1_ = 0x1c;
    }
    local_150 = FRDGBuilder::CreateSRV(param_1,&local_2b8);
    local_298._padding_._4_4_ = 0;
    local_298._padding_ = 0;
    local_298._padding_._0_4_ = 0xffffffff;
    local_298._padding_._0_1_ = 0;
    if (((pFVar41->Desc).Usage & DrawIndirect) != None) {
      local_298._padding_._0_1_ = 0x1c;
    }
    local_298.Buffer = pFVar41;
    local_148 = FRDGBuilder::CreateSRV(param_1,&local_298);
    local_278._padding_._4_4_ = 0;
    local_278._padding_ = 0;
    local_278._padding_._0_1_ = 0;
    local_278._padding_._0_4_ = 0xffffffff;
    if (((pFVar42->Desc).Usage & DrawIndirect) != None) {
      local_278._padding_._0_1_ = 0x1c;
    }
    local_278.Buffer = pFVar42;
    local_140 = FRDGBuilder::CreateSRV(param_1,&local_278);
    local_258._padding_._0_1_ = 0;
    local_258._padding_._4_4_ = 0;
    local_258._padding_ = 0;
    local_258._padding_._0_4_ = 0xffffffff;
    local_258.Buffer = local_c8;
    if (((local_c8->Desc).Usage & DrawIndirect) != None) {
      local_258._padding_._0_1_ = 0x1c;
    }
    local_138 = FRDGBuilder::CreateSRV(param_1,&local_258);
    pFVar25 = FGPUSceneResourceParameters::FTypeInfo::GetStructMetadata();
    FSceneUniformBuffer::Set(pFVar23,SceneUB::GPUScene._32_4_,&local_178,pFVar25->Size);
  }
  if (bVar11) {
    if (((pFVar34->bCommitted == false) && (pFVar34->UploadData != (FUploadData *)0x0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("bCommitted || UploadData == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                            ,0x6e,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((pFVar34->PrimitiveIdRange).LowerBound.Type.Value == '\x02') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar38 = (pFVar34->PrimitiveIdRange).LowerBound.Value;
    uVar13 = (pFVar34->UploadData->GPUWritePrimitives).ArrayNum;
    local_378 = (FRDGScope *)CONCAT44(local_378._4_4_,pFVar34->UploadData->InstanceSceneDataOffset);
    local_388._0_4_ = 0;
    local_390.Data = (uint *)0x0;
    local_388 = 0;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (0 < (int)uVar13) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                (4,4,uVar13,&local_390,0,(int *)((longlong)&local_388 + 4));
    }
    pFVar3 = pFVar34->UploadData;
    local_370 = (pFVar3->GPUWritePrimitives).ArrayNum;
    uVar27 = (ulonglong)(int)local_370;
    pFVar37 = (pFVar3->GPUWritePrimitives).AllocatorInstance.Data;
    local_318 = pFVar37 + uVar27 * 4;
    FVar31.Data = local_390.Data;
    iVar15 = (int)local_388;
    while( true ) {
      pFVar5 = local_318;
      if ((pFVar3->GPUWritePrimitives).ArrayNum != (int)uVar27) {
        local_396[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_396);
      }
      if (pFVar37 == pFVar5) break;
      local_394 = *(uint *)pFVar37;
      lVar18 = (longlong)(int)local_394;
      FVar36 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)pFVar34->UploadData;
      uVar13 = 0;
      if ((int)local_394 < *(int *)((longlong)FVar36 + 0x348)) {
        uVar13 = ~local_394 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)((longlong)FVar36 + 0x340)
          != (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
        FVar36 = *(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
                  ((longlong)FVar36 + 0x340);
      }
      lVar18 = lVar18 * 0x68 + (longlong)FVar36;
      cVar26 = *(char *)(lVar18 + 0x48);
      if ((cVar26 == -1) || (cVar26 <= (char)this->LastDeferredGPUWritePass)) {
        if ((FVar31.Data <= &local_394) &&
           ((&local_394 < FVar31.Data + local_388._4_4_ &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (iVar15 == local_388._4_4_) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                             (0x404,&local_390,(int *)((longlong)&local_388 + 4));
          FVar31.Data = local_390.Data;
        }
        pFVar37 = pFVar37 + 4;
        lVar18 = (longlong)iVar15;
        iVar15 = iVar15 + 1;
        FVar31.Data[lVar18] = local_394;
        uVar27 = (ulonglong)local_370;
        local_388 = CONCAT44(local_388._4_4_,iVar15);
      }
      else {
        local_358 = *(undefined8 *)(lVar18 + 0x40);
        iStack_34c = iVar38 + local_394;
        pTVar39 = this->DeferredGPUWritePassDelegates + (uint)(int)cVar26;
        iStack_350 = param_2->SceneRendererPrimaryViewId;
        local_348 = (int)local_378 + *(int *)(lVar18 + 0x5c);
        uStack_344 = *(undefined4 *)(lVar18 + 0x4c);
        uStack_340 = (uint)*(ushort *)(lVar18 + 0x4a);
        pFVar5 = (pTVar39->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_358) &&
            ((FScriptContainerElement *)&local_358 < pFVar5 + (longlong)pTVar39->ArrayMax * 0x20))
           && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = pTVar39->ArrayNum;
        if (iVar14 == pTVar39->ArrayMax) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar39->AllocatorInstance,&pTVar39->ArrayMax);
        }
        pTVar39->ArrayNum = iVar14 + 1;
        pFVar6 = (pTVar39->AllocatorInstance).Data;
        pFVar37 = pFVar37 + 4;
        pFVar5 = pFVar6 + (longlong)iVar14 * 0x20;
        *(undefined4 *)pFVar5 = (undefined4)local_358;
        *(undefined4 *)(pFVar5 + 4) = local_358._4_4_;
        *(int *)(pFVar5 + 8) = iStack_350;
        *(int *)(pFVar5 + 0xc) = iStack_34c;
        pFVar6 = pFVar6 + (longlong)iVar14 * 0x20 + 0x10;
        *(ulonglong *)pFVar6 = CONCAT44(uStack_344,local_348);
        *(ulonglong *)(pFVar6 + 8) = CONCAT44(uStack_33c,uStack_340);
        uVar27 = (ulonglong)local_370;
      }
    }
    if (0 < iVar15) {
      cVar26 = *(char *)((longlong)&param_1->_padding_ + 6);
      local_2f8 = '\0';
      if ((cVar26 != '\0') && ((cVar26 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x761;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          local_f8 = 0;
          uStack_f4 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_fc);
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_GPU_Writer_Dele;
          ::Desc._padding_ = (longlong)u_GPU_Writer_Dele;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FGPUScene::UploadDynamicPrimitiveShaderDataForViewInternal'::__l47::<lambda_2>::
                 operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_218._Myfirst._Val = &::Desc;
        local_308.State = (FRDGScopeState *)param_1;
        pFVar17 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)pFVar17;
        local_308.Scope = pFVar17;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
                  (&(pFVar17->Impl).Impl,(FRDGScopeState *)param_1,&local_218);
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(pFVar17,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_2f8 = '\x01';
      }
      local_208.PersistentPrimitiveId = 0xffffffff;
      local_208.InstanceSceneDataOffset = 0xffffffff;
      local_208.PackedInstanceSceneDataFlags = 0;
      local_208.GPUWriteParams.GPUScenePrimitiveSceneDataRW = (FRDGBufferUAV *)0x0;
      local_208.GPUWriteParams.GPUSceneWriterUB._0_8_ = 0;
      local_208.NumCustomDataFloats = 0xffffffff;
      local_208.GPUWriteParams.GPUSceneInstanceSceneDataRW = (FRDGBufferUAV *)0x0;
      local_208.GPUWriteParams.GPUSceneInstancePayloadDataRW = (FRDGBufferUAV *)0x0;
      local_208.GPUWriteParams.GPUSceneWriterUB._8_1_ = 1;
      local_208.GPUWritePass = None;
      local_208.View = (FSceneView *)param_2;
      local_208.GPUSceneWriterUB = GetWriteParameters(this,param_1,&local_208.GPUWriteParams,true);
      puVar1 = FVar31.Data + iVar15;
      for (; FVar31.Data != puVar1; FVar31.Data = FVar31.Data + 1) {
        uVar13 = *FVar31.Data;
        FVar36 = (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)pFVar34->UploadData;
        uVar16 = 0;
        if ((int)uVar13 < *(int *)((longlong)FVar36 + 0x348)) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
             ((longlong)FVar36 + 0x340) !=
            (ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData>)0x0) {
          FVar36 = *(ForElementType<FGPUScenePrimitiveCollector::FPrimitiveData> *)
                    ((longlong)FVar36 + 0x340);
        }
        lVar18 = (longlong)(int)uVar13 * 0x68 + (longlong)FVar36;
        local_208.InstanceSceneDataOffset = (int)local_378 + *(int *)(lVar18 + 0x5c);
        local_208.PersistentPrimitiveId = iVar38 + uVar13;
        local_208.NumCustomDataFloats = *(uint *)(lVar18 + 0x4c);
        local_208.PackedInstanceSceneDataFlags = (uint)*(ushort *)(lVar18 + 0x4a);
        if ((*(longlong *)(lVar18 + 0x40) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsBound()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshBatch.h"
                                ,0x32,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FGPUSceneWriteDelegate::Execute
                  (*(FGPUSceneWriteDelegate **)(lVar18 + 0x40),param_1,&local_208);
      }
      FVar31.Data = local_390.Data;
      if (local_2f8 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_308);
        FVar31.Data = local_390.Data;
      }
    }
    if (FVar31.Data != (uint *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar31.Data);
    }
  }
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  if (local_2e0 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_2f0);
  }
  FMemScope::~FMemScope(&local_310);
  FLLMScope::~FLLMScope(&local_37c);
  return;
}

