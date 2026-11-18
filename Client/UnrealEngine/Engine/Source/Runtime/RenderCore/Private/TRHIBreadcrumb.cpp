// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 10

// GetTCHAR @ 145d406b0

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
           *this,FBuffer *param_1)

{
  return (wchar_t *)&this->_padding_;
}

// TraceBeginGPU @ 145d61490

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>
  *pTVar1;
  wchar_t *pwVar2;
  bool bVar3;
  uint uVar4;
  FMetadataSerializer local_28;
  
  pTVar1 = this->Desc;
  if (pTVar1->TraceGpuSpecId == 0) {
    bVar3 = GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar3) {
      pwVar2 = (wchar_t *)pTVar1->_padding_;
      GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
      uVar4 = GPUProfiler::FGpuProfilerTrace::InternalBreadcrumbSpec(pwVar2,L"",&local_28.CborData);
      GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
      pTVar1->TraceGpuSpecId = uVar4;
    }
  }
  uVar4 = pTVar1->TraceGpuSpecId;
  if (uVar4 != 0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar4,param_1,param_2,&local_28.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return;
}

// TraceEndGPU @ 145d61560

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_><FRDGEventName_const_&> @ 145d73c40

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_> * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_>::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_><FRDGEventName_const_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_>
           *this,FRHIBreadcrumbAllocator *param_1,TRHIBreadcrumbDesc<24,FRDGEventName> *param_2,
          FRDGEventName *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  longlong *_Dest;
  FMetadataSerializer local_48;
  FMetadataSerializer local_28;
  
  this->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  this->_padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = 0;
  LOCK();
  UNLOCK();
  uVar2 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = uVar2;
  if ((param_3->FormattedEventName).Data.ArrayNum < 2) {
    _Dest = (longlong *)param_3->EventFormat;
  }
  else {
    _Dest = &this->_padding_;
    wcsncpy((wchar_t *)_Dest,(wchar_t *)(param_3->FormattedEventName).Data.AllocatorInstance.Data,
            0x7f);
    *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  }
  this->_padding_ = (longlong)_Dest;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BI_VFRDGEventName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  this->Desc = param_2;
  if (param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar1 = GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar1) {
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
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)param_2->TraceCpuSpecId,(wchar_t *)param_2->_padding_,
                   (wchar_t *)param_2->_padding_,&local_28.CborData);
        GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  aVar3 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&this->_padding_ = aVar3;
  if (aVar3 != (atomic<unsigned_int>)0x0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_48);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_48,(wchar_t *)this->_padding_);
    uVar2 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_48.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_48);
  }
  return this;
}

// GetTCHAR @ 145dbbbc0

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>_> *this
          ,FBuffer *param_1)

{
  return (wchar_t *)this->_padding_;
}

// GetTCHAR @ 145dbbbd0

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_>
           *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 145dd3630

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>_> *this
          ,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<0,FRDGEventName> *pTVar1;
  wchar_t *pwVar2;
  bool bVar3;
  uint uVar4;
  FMetadataSerializer local_28;
  
  pTVar1 = this->Desc;
  if (pTVar1->TraceGpuSpecId == 0) {
    bVar3 = GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar3) {
      pwVar2 = (wchar_t *)pTVar1->_padding_;
      GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
      uVar4 = GPUProfiler::FGpuProfilerTrace::InternalBreadcrumbSpec(pwVar2,L"",&local_28.CborData);
      GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
      pTVar1->TraceGpuSpecId = uVar4;
    }
  }
  uVar4 = pTVar1->TraceGpuSpecId;
  if (uVar4 != 0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar4,param_1,param_2,&local_28.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return;
}

// TraceBeginGPU @ 145dd3700

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_>
           *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<24,FRDGEventName> *pTVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  uint uVar5;
  FMetadataSerializer local_38;
  
  pTVar1 = this->Desc;
  if (pTVar1->TraceGpuSpecId == 0) {
    bVar4 = GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar4) {
      pwVar2 = (wchar_t *)pTVar1->_padding_;
      pwVar3 = (wchar_t *)pTVar1->_padding_;
      GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      uVar5 = GPUProfiler::FGpuProfilerTrace::InternalBreadcrumbSpec
                        (pwVar3,pwVar2,&local_38.CborData);
      GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
      pTVar1->TraceGpuSpecId = uVar5;
    }
  }
  uVar5 = pTVar1->TraceGpuSpecId;
  if (uVar5 != 0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 145dd37d0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>_> *this
          ,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 145dd3800

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,FRDGEventName>_>
           *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

