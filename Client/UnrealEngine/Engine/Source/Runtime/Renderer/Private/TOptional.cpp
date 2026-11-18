// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 9

// Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<6>_const_*,std::tuple<>_>_> @ 1447ee290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_RHI> * __thiscall
TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_>::
Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<6>_const_*,std::tuple<>_>_>
          (TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_> *this,FRDGBuilder *param_1,
          ERDGScopeFlags *param_2,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<6>_const_*,std::tuple<>_> *param_3
          )

{
  ERDGScopeFlags EVar1;
  FRDGScope *pFVar2;
  
  if (this->bIsSet != false) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&this->TypedValue);
  }
  EVar1 = *param_2;
  (this->TypedValue).State = (FRDGScopeState *)param_1;
  pFVar2 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  (this->TypedValue).Scope = pFVar2;
  if ((EVar1 & Final) != None) {
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 4;
  }
  param_1->_padding_ = (longlong)(this->TypedValue).Scope;
  TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
  Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<6>_const_*,std::tuple<>_>_>
            (&(((this->TypedValue).Scope)->Impl).Impl,(FRDGScopeState *)param_1,param_3);
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_,false)
    ;
    FRDGScope::BeginGPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_);
  }
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_> @ 1447ee340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_RHI> * __thiscall
TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_>::
Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_>
          (TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_> *this,FRDGBuilder *param_1,
          ERDGScopeFlags *param_2,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>
          *param_3)

{
  ERDGScopeFlags EVar1;
  FRDGScope *pFVar2;
  
  if (this->bIsSet != false) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&this->TypedValue);
  }
  EVar1 = *param_2;
  (this->TypedValue).State = (FRDGScopeState *)param_1;
  pFVar2 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  (this->TypedValue).Scope = pFVar2;
  if ((EVar1 & Final) != None) {
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 4;
  }
  param_1->_padding_ = (longlong)(this->TypedValue).Scope;
  TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
  Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>_const_*,std::tuple<>_>_>
            (&(((this->TypedValue).Scope)->Impl).Impl,(FRDGScopeState *)param_1,param_3);
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_,false)
    ;
    FRDGScope::BeginGPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_);
  }
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_>_> @ 1447ee3f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_RHI> * __thiscall
TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_>::
Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_>_>
          (TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_> *this,FRDGBuilder *param_1,
          ERDGScopeFlags *param_2,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_>
          *param_3)

{
  ERDGScopeFlags EVar1;
  FRDGScope *pFVar2;
  
  if (this->bIsSet != false) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&this->TypedValue);
  }
  EVar1 = *param_2;
  (this->TypedValue).State = (FRDGScopeState *)param_1;
  pFVar2 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  (this->TypedValue).Scope = pFVar2;
  if ((EVar1 & Final) != None) {
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 4;
  }
  param_1->_padding_ = (longlong)(this->TypedValue).Scope;
  TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
  Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15>_const_*,std::tuple<>_>_>
            (&(((this->TypedValue).Scope)->Impl).Impl,(FRDGScopeState *)param_1,param_3);
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_,false)
    ;
    FRDGScope::BeginGPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_);
  }
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_> @ 1447ee4a0

FRHIBreadcrumbScope * __thiscall
TOptional<FRHIBreadcrumbScope>::
Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
          (TOptional<FRHIBreadcrumbScope> *this,FRHIComputeCommandList *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> *param_2
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<0> *pTVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  
  if (this->bIsSet != false) {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&this->TypedValue);
  }
  pFVar5 = FRHIComputeCommandList::GetBreadcrumbAllocator(param_1);
  pTVar1 = (param_2->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<0> *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x50,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pTVar1;
    pFVar6->TraceCpuSpecId = 0;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar3 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = uVar3;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar6[1]._padding_ = (longlong)pTVar1;
    if (pTVar1->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar2 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar2) {
        lpCriticalSection = &pTVar1->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar1->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar4 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar1->_padding_,(char *)pTVar1->_padding_,
                             (uint)pTVar1->_padding_);
          LOCK();
          pTVar1->TraceCpuSpecId = aVar4;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar6->TraceCpuSpecId = (uint)pTVar1->TraceCpuSpecId;
  }
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&this->TypedValue,param_1,pFVar6);
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_>_> @ 144855a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_RHI> * __thiscall
TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_>::
Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_>_>
          (TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_> *this,FRDGBuilder *param_1,
          ERDGScopeFlags *param_2,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_>
          *param_3)

{
  ERDGScopeFlags EVar1;
  FRDGScope *pFVar2;
  
  if (this->bIsSet != false) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&this->TypedValue);
  }
  EVar1 = *param_2;
  (this->TypedValue).State = (FRDGScopeState *)param_1;
  pFVar2 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  (this->TypedValue).Scope = pFVar2;
  if ((EVar1 & Final) != None) {
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 4;
  }
  param_1->_padding_ = (longlong)(this->TypedValue).Scope;
  TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
  Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11>_const_*,std::tuple<>_>_>
            (&(((this->TypedValue).Scope)->Impl).Impl,(FRDGScopeState *)param_1,param_3);
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_,false)
    ;
    FRDGScope::BeginGPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_);
  }
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_>_> @ 1448e3310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_RHI> * __thiscall
TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_>::
Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_>_>
          (TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_> *this,FRDGBuilder *param_1,
          ERDGScopeFlags *param_2,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_>
          *param_3)

{
  ERDGScopeFlags EVar1;
  FRDGScope *pFVar2;
  
  if (this->bIsSet != false) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&this->TypedValue);
  }
  EVar1 = *param_2;
  (this->TypedValue).State = (FRDGScopeState *)param_1;
  pFVar2 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  (this->TypedValue).Scope = pFVar2;
  if ((EVar1 & Final) != None) {
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 4;
  }
  param_1->_padding_ = (longlong)(this->TypedValue).Scope;
  TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
  Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[10],wchar_t_const_*_&&>_>_>_>
            (&(((this->TypedValue).Scope)->Impl).Impl,(FRDGScopeState *)param_1,param_3);
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_,false)
    ;
    FRDGScope::BeginGPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_);
  }
  this->bIsSet = true;
  return &this->TypedValue;
}

// Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_> @ 144c1b0a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGEventScopeGuard<FRDGScope_RHI> * __thiscall
TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_>::
Emplace<FRDGBuilder_&,enum_ERDGScopeFlags,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
          (TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_> *this,FRDGBuilder *param_1,
          ERDGScopeFlags *param_2,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>
          *param_3)

{
  ERDGScopeFlags EVar1;
  FRDGScope *pFVar2;
  
  if (this->bIsSet != false) {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&this->TypedValue);
  }
  EVar1 = *param_2;
  (this->TypedValue).State = (FRDGScopeState *)param_1;
  pFVar2 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                     ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  (this->TypedValue).Scope = pFVar2;
  if ((EVar1 & Final) != None) {
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ | 4;
  }
  param_1->_padding_ = (longlong)(this->TypedValue).Scope;
  TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
  Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21>_const_*,std::tuple<>_>_>
            (&(((this->TypedValue).Scope)->Impl).Impl,(FRDGScopeState *)param_1,param_3);
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_,false)
    ;
    FRDGScope::BeginGPU((this->TypedValue).Scope,(FRHIComputeCommandList *)param_1->_padding_);
  }
  this->bIsSet = true;
  return &this->TypedValue;
}

// operator-> @ 145521c50

TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *
__thiscall
TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
::operator->(TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
             *this)

{
  code *pcVar1;
  bool bVar2;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *pTVar3;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          *)this;
}

// Emplace<FStateStreamCopyContext_&,FStaticMeshDynamicState_&> @ 1456ca640

FStaticMeshDynamicState * __thiscall
TOptional<FStaticMeshDynamicState>::Emplace<FStateStreamCopyContext_&,FStaticMeshDynamicState_&>
          (TOptional<FStaticMeshDynamicState> *this,FStateStreamCopyContext *param_1,
          FStaticMeshDynamicState *param_2)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UStaticMesh *pUVar5;
  uint uVar6;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar7;
  
  pTVar1 = &(this->TypedValue).Owners;
  if (this->bIsSet != false) {
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (this->TypedValue).OverrideMaterials.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    FStateStreamHandle::~FStateStreamHandle((FStateStreamHandle *)&(this->TypedValue).Transform);
  }
  pTVar7 = &(this->TypedValue).OverrideMaterials;
  (this->TypedValue).ModifiedFlags = param_2->ModifiedFlags;
  FStateStreamHandle::FStateStreamHandle
            ((FStateStreamHandle *)&(this->TypedValue).Transform,param_1,
             (FStateStreamHandle *)&param_2->Transform);
  pUVar5 = (param_2->Mesh).field0_0x0.DebugPtr;
  (this->TypedValue).Mesh.field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  piVar2 = &(this->TypedValue).OverrideMaterials.ArrayMax;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_2->OverrideMaterials).ArrayNum;
  pFVar4 = (param_2->OverrideMaterials).AllocatorInstance.Data;
  (this->TypedValue).OverrideMaterials.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar7->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
              ((pTVar7->AllocatorInstance).Data,(TObjectPtr<UMaterialInterface> *)pFVar4,iVar3);
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->TypedValue).Owners.ArrayMax;
  iVar3 = (param_2->Owners).ArrayNum;
  pFVar4 = (param_2->Owners).AllocatorInstance.Data;
  (this->TypedValue).Owners.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  uVar6 = ((this->TypedValue).bOnlyOwnerSee ^ param_2->bOnlyOwnerSee) & 1 ^
          *(uint *)&(this->TypedValue).field_0x40;
  *(uint *)&(this->TypedValue).field_0x40 = uVar6;
  *(uint *)&(this->TypedValue).field_0x40 = (uVar6 ^ *(uint *)&param_2->field_0x40) & 2 ^ uVar6;
  this->bIsSet = true;
  return &this->TypedValue;
}

