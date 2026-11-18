// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 12

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_><int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&> @ 14de6a160

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_> *
__thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_><int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<42,int,int,int,int,int,int> *param_2,int *param_3,int *param_4,
          int *param_5,int *param_6,int *param_7,int *param_8)

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
  *(int *)&this->_padding_ = *param_8;
  *(int *)((longlong)&this->_padding_ + 4) = *param_7;
  *(int *)&this->_padding_ = *param_6;
  *(int *)((longlong)&this->_padding_ + 4) = *param_5;
  *(int *)&this->_padding_ = *param_4;
  *(int *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CK_HHHHHH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    uVar2 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_><int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&> @ 14de6a330

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_> *
__thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_><int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<46,int,int,int,int,int,int> *param_2,int *param_3,int *param_4,
          int *param_5,int *param_6,int *param_7,int *param_8)

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
  *(int *)&this->_padding_ = *param_8;
  *(int *)((longlong)&this->_padding_ + 4) = *param_7;
  *(int *)&this->_padding_ = *param_6;
  *(int *)((longlong)&this->_padding_ + 4) = *param_5;
  *(int *)&this->_padding_ = *param_4;
  *(int *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CO_HHHHHH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    uVar2 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_><unsigned_int_const_&,int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&> @ 14de6a500

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
* __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_><unsigned_int_const_&,int_&,int_&,int_const_&,int_const_&,int_const_&,int_const_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int> *param_2,uint *param_3,
          int *param_4,int *param_5,int *param_6,int *param_7,int *param_8,int *param_9)

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
  *(int *)&this->_padding_ = *param_9;
  *(int *)((longlong)&this->_padding_ + 4) = *param_8;
  *(int *)&this->_padding_ = *param_7;
  *(int *)((longlong)&this->_padding_ + 4) = *param_6;
  *(int *)&this->_padding_ = *param_5;
  *(int *)((longlong)&this->_padding_ + 4) = *param_4;
  *(uint *)&this->_padding_ = *param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CM_IHHHHHH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(ulonglong)(uint)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    uVar2 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar2;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// GetTCHAR @ 14de7b960

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>::
GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>
         *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 14de7b9c0

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
           *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 14de7ba20

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>::
GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>
         *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 14de845c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>::
TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>
              *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<42,int,int,int,int,int,int> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 14de846d0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(ulonglong)(uint)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 14de847f0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>::
TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>
              *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<46,int,int,int,int,int,int> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 14de84900

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>::
TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int,int,int,int,int>_>
            *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 14de84920

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<44,unsigned_int,int,int,int,int,int,int>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 14de84940

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>::
TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<46,int,int,int,int,int,int>_>
            *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

