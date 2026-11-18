// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 8

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_><unsigned___int64_&> @ 148d982a0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
* __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_><unsigned___int64_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_> *param_2,
          ulong64 *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  array<wchar_t_const_*,1> *paVar4;
  FMetadataSerializer local_28;
  
  this->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  this->_padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  LOCK();
  UNLOCK();
  uVar2 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = uVar2;
  this->_padding_ = *param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__08V__tuple_AEAY0N___CB_W_K_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  this->Desc = param_2;
  if ((param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar1 = GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar1)) {
    lpCriticalSection = &param_2->Cs;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar3 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)param_2->_padding_,(char *)param_2->_padding_,
                         (uint)param_2->_padding_);
      LOCK();
      param_2->TraceCpuSpecId = aVar3;
      UNLOCK();
      GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
      for (paVar4 = &param_2->FieldNames;
          paVar4 != (array<wchar_t_const_*,1> *)&param_2->TraceGpuSpecId; paVar4 = paVar4 + 1) {
        GPUProfiler::FMetadataSerializer::AppendValue(&local_28,paVar4->_Elems[0]);
      }
      FCpuProfilerTrace::OutputEventMetadataSpec
                ((uint)param_2->TraceCpuSpecId,(wchar_t *)param_2->_padding_,
                 (wchar_t *)param_2->_padding_,&local_28.CborData);
      GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  aVar3 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&this->_padding_ = aVar3;
  if (aVar3 != (atomic<unsigned_int>)0x0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,this->_padding_);
    uVar2 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_><unsigned___int64_&,int_&> @ 148d98440

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
* __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_><unsigned___int64_&,int_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>
          *param_2,ulong64 *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  array<wchar_t_const_*,2> *paVar4;
  FMetadataSerializer local_28;
  
  this->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  this->_padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  LOCK();
  UNLOCK();
  uVar2 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = uVar2;
  *(int *)&this->_padding_ = *param_4;
  this->_padding_ = *param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BH_V__tuple_AEAY0N___CB_W_K_std__V__tuple_AEAY0BB___CB_WH_2__Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  this->Desc = param_2;
  if ((param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar1 = GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar1)) {
    lpCriticalSection = &param_2->Cs;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar3 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)param_2->_padding_,(char *)param_2->_padding_,
                         (uint)param_2->_padding_);
      LOCK();
      param_2->TraceCpuSpecId = aVar3;
      UNLOCK();
      GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
      for (paVar4 = &param_2->FieldNames;
          paVar4 != (array<wchar_t_const_*,2> *)&param_2->TraceGpuSpecId;
          paVar4 = (array<wchar_t_const_*,2> *)(paVar4->_Elems + 1)) {
        GPUProfiler::FMetadataSerializer::AppendValue(&local_28,paVar4->_Elems[0]);
      }
      FCpuProfilerTrace::OutputEventMetadataSpec
                ((uint)param_2->TraceCpuSpecId,(wchar_t *)param_2->_padding_,
                 (wchar_t *)param_2->_padding_,&local_28.CborData);
      GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  aVar3 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&this->_padding_ = aVar3;
  if (aVar3 != (atomic<unsigned_int>)0x0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    uVar2 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// GetTCHAR @ 148da4120

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
           *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 148da4160

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
           *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 148db2360

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_> *pTVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  array<wchar_t_const_*,1> *paVar6;
  FMetadataSerializer local_48;
  
  pTVar1 = this->Desc;
  if ((pTVar1->TraceGpuSpecId == 0) &&
     (bVar4 = GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
    pwVar2 = (wchar_t *)pTVar1->_padding_;
    pwVar3 = (wchar_t *)pTVar1->_padding_;
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_48);
    for (paVar6 = &pTVar1->FieldNames; paVar6 != (array<wchar_t_const_*,1> *)&pTVar1->TraceGpuSpecId
        ; paVar6 = paVar6 + 1) {
      GPUProfiler::FMetadataSerializer::AppendValue(&local_48,paVar6->_Elems[0]);
    }
    uVar5 = GPUProfiler::FGpuProfilerTrace::InternalBreadcrumbSpec(pwVar3,pwVar2,&local_48.CborData)
    ;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_48);
    pTVar1->TraceGpuSpecId = uVar5;
  }
  uVar5 = pTVar1->TraceGpuSpecId;
  if (uVar5 != 0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_48);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_48,this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_48.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_48);
  }
  return;
}

// TraceBeginGPU @ 148db2460

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>
  *pTVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  array<wchar_t_const_*,2> *paVar6;
  FMetadataSerializer local_48;
  
  pTVar1 = this->Desc;
  if ((pTVar1->TraceGpuSpecId == 0) &&
     (bVar4 = GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
    pwVar2 = (wchar_t *)pTVar1->_padding_;
    pwVar3 = (wchar_t *)pTVar1->_padding_;
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_48);
    for (paVar6 = &pTVar1->FieldNames; paVar6 != (array<wchar_t_const_*,2> *)&pTVar1->TraceGpuSpecId
        ; paVar6 = (array<wchar_t_const_*,2> *)(paVar6->_Elems + 1)) {
      GPUProfiler::FMetadataSerializer::AppendValue(&local_48,paVar6->_Elems[0]);
    }
    uVar5 = GPUProfiler::FGpuProfilerTrace::InternalBreadcrumbSpec(pwVar3,pwVar2,&local_48.CborData)
    ;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_48);
    pTVar1->TraceGpuSpecId = uVar5;
  }
  uVar5 = pTVar1->TraceGpuSpecId;
  if (uVar5 != 0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_48);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_48,this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_48,(longlong)(int)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_48.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_48);
  }
  return;
}

// TraceEndGPU @ 148db2570

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,std::tuple<wchar_t_const_(&)[13],unsigned___int64>_>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 148db2590

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,std::tuple<wchar_t_const_(&)[13],unsigned___int64>,std::tuple<wchar_t_const_(&)[17],int>_>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

