// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// RHIThreadCrash @ 148b6e470

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl `UEngine::PerformError'::__l14::FCrash::RHIThreadCrash(FRHICommandList *param_1)

{
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  FRHIBreadcrumbAllocator *pFVar4;
  FRHIBreadcrumbNode *pFVar5;
  undefined8 *puVar6;
  FRHIBreadcrumbScope local_28;
  undefined8 local_18;
  wchar_t *pwStack_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28.Node._0_4_ = 0x2b12;
      local_28.RHICmdList = (FRHIComputeCommandList *)0x151c54710;
      local_18 = 0;
      pwStack_10 = L"Debug RHI Thread Crash";
      ::Desc._padding_._0_4_ = 0x51c54710;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x2b12;
      ::Desc._padding_._4_4_ = local_28.Node._4_4_;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51c624f0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UEngine::PerformError'::__l14::FCrash::RHIThreadCrash'::__l7::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar4 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar5 = FMemStackBase::Alloc(&pFVar4->Inner,0x50,8);
  pFVar5->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar5->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar5->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar5->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar5->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar5->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar5->Allocator = pFVar4;
  pFVar5->TraceCpuSpecId = 0;
  pFVar5->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar2 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar5->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar5->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar5->ID = uVar2;
  pFVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar5[1]._padding_ = (longlong)&::Desc;
  if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar1 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar1) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar3 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar3;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
  }
  pFVar5->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_28,(FRHIComputeCommandList *)param_1,pFVar5);
  local_18 = CONCAT71(local_18._1_7_,1);
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar6;
    *(undefined8 **)&param_1->field_0x30 = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &TRHILambdaCommand<FRHICommandList,``UEngine::PerformError'::`14'::FCrash::RHIThreadCrash'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar6[3] = L"TRHILambdaCommand";
  }
  else {
    if (2 < (byte)LogEngine._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u_Printed_warning_151c62520,
                 (FLogCategoryBase *)&LogEngine);
    }
    FGenericCrashContext::SetCrashTrigger(Debug);
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)&PTR_u_Crashing_the_RH_151c62540,
               (FLogCategoryBase *)&LogEngine);
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_28);
  return;
}

