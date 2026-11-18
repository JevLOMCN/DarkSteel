// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 4

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_><double_const_&,double_const_&,double_const_&,double_const_&,double_const_&,double_const_&> @ 14de1f450

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
* __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_><double_const_&,double_const_&,double_const_&,double_const_&,double_const_&,double_const_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<100,double,double,double,double,double,double> *param_2,double *param_3
          ,double *param_4,double *param_5,double *param_6,double *param_7,double *param_8)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
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
  this->_padding_ = (longlong)*param_8;
  this->_padding_ = (longlong)*param_7;
  this->_padding_ = (longlong)*param_6;
  this->_padding_ = (longlong)*param_5;
  this->_padding_ = (longlong)*param_4;
  this->_padding_ = (longlong)*param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0GE_NNNNNN_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(double)this->_padding_);
    uVar2 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// GetTCHAR @ 14de27950

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
           *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 14de29f80

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<100,double,double,double,double,double,double> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(double)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(double)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 14de2a090

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<100,double,double,double,double,double,double>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

