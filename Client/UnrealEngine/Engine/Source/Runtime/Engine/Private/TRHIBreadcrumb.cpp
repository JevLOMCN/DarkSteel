// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 37

// GetTCHAR @ 147350be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>_> *this,
          FBuffer *param_1)

{
  TRHIBreadcrumbDesc<28,FName> *pTVar1;
  undefined1 auStack_138 [32];
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = this->Desc;
  ::FName::ToStringInternal((FName *)&this->_padding_,local_118,0x80);
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 14735a4e0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<28,FName> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(FName *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 14735a5a0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_><wchar_t_const_(&)[1],int_&,int_&,int_&,int_&,FDebugName_&,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,bool_&,unsigned_int_&> @ 147c1c870

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
* __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_><wchar_t_const_(&)[1],int_&,int_&,int_&,int_&,FDebugName_&,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&,bool_&,unsigned_int_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>
          *param_2,wchar_t (*param_3) [1],int *param_4,int *param_5,int *param_6,int *param_7,
          FDebugName *param_8,int *param_9,uint *param_10,uint *param_11,uint *param_12,
          uint *param_13,bool *param_14,uint *param_15)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  FMetadataSerializer local_28;
  
  this->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  this->_padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  aVar2 = FRHIBreadcrumbNode::NextID;
  LOCK();
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  UNLOCK();
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)aVar2 | 0x80000000;
  *(uint *)&this->_padding_ = *param_15;
  *(bool *)((longlong)&this->_padding_ + 4) = *param_14;
  *(uint *)&this->_padding_ = *param_13;
  *(uint *)((longlong)&this->_padding_ + 4) = *param_12;
  *(uint *)&this->_padding_ = *param_11;
  *(uint *)((longlong)&this->_padding_ + 4) = *param_10;
  *(int *)&this->_padding_ = *param_9;
  *(FName *)((longlong)&this->_padding_ + 4) = param_8->Name;
  *(uint *)((longlong)&this->_padding_ + 4) = param_8->Number;
  *(int *)&this->_padding_ = *param_7;
  *(int *)((longlong)&this->_padding_ + 4) = *param_6;
  *(int *)&this->_padding_ = *param_5;
  *(int *)((longlong)&this->_padding_ + 4) = *param_4;
  this->_padding_ = (longlong)param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0FM___BY00_WHHHHVFDebugName__HIIII_NI_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
        aVar2 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)param_2->_padding_,(char *)param_2->_padding_,
                           (uint)param_2->_padding_);
        LOCK();
        param_2->TraceCpuSpecId = aVar2;
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
  aVar2 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&this->_padding_ = aVar2;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>
    ::SerializeValues(param_2,&local_28,
                      (tuple<UE::RHI::Breadcrumbs::Private::TValue<wchar_t_[1]>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<FDebugName>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<bool>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>_>
                       *)&this->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar3;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_><wchar_t_const_(&)[1],FDebugName_&,int_&,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&> @ 147c1ca70

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
* __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_><wchar_t_const_(&)[1],FDebugName_&,int_&,int_&,unsigned_int_&,unsigned_int_&,unsigned_int_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>
          *param_2,wchar_t (*param_3) [1],FDebugName *param_4,int *param_5,int *param_6,
          uint *param_7,uint *param_8,uint *param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  FMetadataSerializer local_28;
  
  this->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  this->_padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  aVar2 = FRHIBreadcrumbNode::NextID;
  LOCK();
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  UNLOCK();
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)aVar2 | 0x80000000;
  *(uint *)&this->_padding_ = *param_9;
  *(uint *)((longlong)&this->_padding_ + 4) = *param_8;
  *(uint *)&this->_padding_ = *param_7;
  *(int *)((longlong)&this->_padding_ + 4) = *param_6;
  *(int *)&this->_padding_ = *param_5;
  *(FName *)((longlong)&this->_padding_ + 4) = param_4->Name;
  *(uint *)((longlong)&this->_padding_ + 4) = param_4->Number;
  this->_padding_ = (longlong)param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0FP___BY00_WVFDebugName__HHIII_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
        aVar2 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)param_2->_padding_,(char *)param_2->_padding_,
                           (uint)param_2->_padding_);
        LOCK();
        param_2->TraceCpuSpecId = aVar2;
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
  aVar2 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&this->_padding_ = aVar2;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(FDebugName *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(ulonglong)(uint)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(ulonglong)*(uint *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(ulonglong)(uint)this->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar3;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_><wchar_t_const_(&)[1],FDebugName_&,int_const_&,int_&,unsigned_int_&,unsigned_int_&,int_&,bool_const_&> @ 147c1cc70

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
* __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_><wchar_t_const_(&)[1],FDebugName_&,int_const_&,int_&,unsigned_int_&,unsigned_int_&,int_&,bool_const_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>
          *param_2,wchar_t (*param_3) [1],FDebugName *param_4,int *param_5,int *param_6,
          uint *param_7,uint *param_8,int *param_9,bool *param_10)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  FMetadataSerializer local_28;
  
  this->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  this->_padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  aVar2 = FRHIBreadcrumbNode::NextID;
  LOCK();
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  UNLOCK();
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)aVar2 | 0x80000000;
  *(bool *)&this->_padding_ = *param_10;
  *(int *)((longlong)&this->_padding_ + 4) = *param_9;
  *(uint *)&this->_padding_ = *param_8;
  *(uint *)((longlong)&this->_padding_ + 4) = *param_7;
  *(int *)&this->_padding_ = *param_6;
  *(int *)((longlong)&this->_padding_ + 4) = *param_5;
  this->_padding_ = (longlong)param_4->Name;
  *(uint *)&this->_padding_ = param_4->Number;
  this->_padding_ = (longlong)param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0GD___BY00_WVFDebugName__HHIIH_N_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
        aVar2 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)param_2->_padding_,(char *)param_2->_padding_,
                           (uint)param_2->_padding_);
        LOCK();
        param_2->TraceCpuSpecId = aVar2;
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
  aVar2 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&this->_padding_ = aVar2;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(FDebugName *)&this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(ulonglong)*(uint *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(ulonglong)(uint)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,SUB81(this->_padding_,0));
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar3;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// GetTCHAR @ 147c5c6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
           *this,FBuffer *param_1)

{
  TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>
  *pTVar1;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d0;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  uint local_198;
  undefined4 local_190;
  longlong *local_188;
  byte *local_180;
  longlong *local_178;
  undefined4 *local_170;
  longlong *local_168;
  undefined4 *local_160;
  longlong *local_158;
  wchar_t local_150 [128];
  longlong *local_50;
  undefined4 *local_48;
  longlong *local_40;
  undefined4 *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  pTVar1 = this->Desc;
  local_188 = &this->_padding_;
  local_180 = (byte *)((longlong)&this->_padding_ + 4);
  local_178 = &this->_padding_;
  local_170 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_168 = &this->_padding_;
  local_160 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_158 = &this->_padding_;
  FDebugName::ToStringInternal((FDebugName *)((longlong)&this->_padding_ + 4),local_150,0x80);
  local_50 = &this->_padding_;
  local_30 = this->_padding_;
  local_48 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_40 = &this->_padding_;
  local_38 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_190 = (undefined4)*local_188;
  local_198 = (uint)*local_180;
  local_1a0 = (undefined4)*local_178;
  local_1a8 = *local_170;
  local_1b0 = (undefined4)*local_168;
  local_1b8 = *local_160;
  local_1c0 = (undefined4)*local_158;
  local_1c8 = local_150;
  local_1d0 = (undefined4)*local_50;
  local_1d8 = *local_48;
  local_1e0 = (undefined4)*local_40;
  local_1e8 = *local_38;
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 147c5c860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
           *this,FBuffer *param_1)

{
  TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>
  *pTVar1;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  longlong *local_148;
  undefined4 *local_140;
  longlong *local_138;
  undefined4 *local_130;
  longlong *local_128;
  wchar_t local_120 [128];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  pTVar1 = this->Desc;
  local_148 = &this->_padding_;
  local_140 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_138 = &this->_padding_;
  local_130 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_128 = &this->_padding_;
  FDebugName::ToStringInternal((FDebugName *)((longlong)&this->_padding_ + 4),local_120,0x80);
  local_20 = this->_padding_;
  local_150 = (undefined4)*local_148;
  local_158 = *local_140;
  local_160 = (undefined4)*local_138;
  local_178 = local_120;
  local_168 = *local_130;
  local_170 = (undefined4)*local_128;
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 147c5c960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
           *this,FBuffer *param_1)

{
  TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool> *pTVar1;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  uint local_168;
  longlong *local_158;
  undefined4 *local_150;
  longlong *local_148;
  undefined4 *local_140;
  longlong *local_138;
  undefined4 *local_130;
  wchar_t local_128 [128];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pTVar1 = this->Desc;
  local_158 = &this->_padding_;
  local_150 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_148 = &this->_padding_;
  local_140 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_138 = &this->_padding_;
  local_130 = (undefined4 *)((longlong)&this->_padding_ + 4);
  FDebugName::ToStringInternal((FDebugName *)&this->_padding_,local_128,0x80);
  local_28 = this->_padding_;
  local_168 = (uint)(byte)*local_158;
  local_170 = *local_150;
  local_178 = (undefined4)*local_148;
  local_180 = *local_140;
  local_198 = local_128;
  local_188 = (undefined4)*local_138;
  local_190 = *local_130;
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 147c8a2b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>
  *pTVar1;
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
    TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>
    ::SerializeValues(this->Desc,&local_38,
                      (tuple<UE::RHI::Breadcrumbs::Private::TValue<wchar_t_[1]>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<FDebugName>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<bool>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>_>
                       *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 147c8a380

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>
  *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(FDebugName *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(ulonglong)(uint)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(ulonglong)*(uint *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(ulonglong)(uint)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 147c8a4a0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(FDebugName *)&this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(ulonglong)*(uint *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(ulonglong)(uint)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(longlong)*(int *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,SUB81(this->_padding_,0));
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 147c8a5d0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 147c8a600

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<95,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,unsigned_int>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 147c8a620

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<99,wchar_t_[1],FDebugName,int,int,unsigned_int,unsigned_int,int,bool>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// GetTCHAR @ 147d0f4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>_> *this,
          FBuffer *param_1)

{
  TRHIBreadcrumbDesc<10,FName> *pTVar1;
  undefined1 auStack_138 [32];
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = this->Desc;
  ::FName::ToStringInternal((FName *)&this->_padding_,local_118,0x80);
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 147d0f560

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>
           *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 147d0f5a0

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>
           *this,FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 147d33a10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<10,FName> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(FName *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 147d33ad0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>::
TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>
              *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<20,int,wchar_t_[1]> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 147d33ba0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>::
TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>
              *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<28,int,wchar_t_[1]> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 147d33c70

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 147d33c90

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>
           *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 147d33cb0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>
           *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// GetTCHAR @ 147da9c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_> *this,
          FBuffer *param_1)

{
  TRHIBreadcrumbDesc<23,FName> *pTVar1;
  undefined1 auStack_138 [32];
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = this->Desc;
  ::FName::ToStringInternal((FName *)&this->_padding_,local_118,0x80);
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 147da9cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_> *this,
          FBuffer *param_1)

{
  TRHIBreadcrumbDesc<31,FName> *pTVar1;
  undefined1 auStack_138 [32];
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = this->Desc;
  ::FName::ToStringInternal((FName *)&this->_padding_,local_118,0x80);
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 147dc5450

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<23,FName> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(FName *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 147dc5510

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<31,FName> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(FName *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 147dc55d0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 147dc55f0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_><wchar_t_const_(&)[1],FName_const_&,int_&,unsigned_int_&,unsigned_int_&> @ 1485e5810

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
* __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_><wchar_t_const_(&)[1],FName_const_&,int_&,unsigned_int_&,unsigned_int_&>
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
           *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int> *param_2,
          wchar_t (*param_3) [1],FName *param_4,int *param_5,uint *param_6,uint *param_7)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  atomic<unsigned_int> aVar2;
  uint uVar3;
  FMetadataSerializer local_28;
  
  this->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  this->_padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)param_2;
  aVar2 = FRHIBreadcrumbNode::NextID;
  LOCK();
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  UNLOCK();
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)aVar2 | 0x80000000;
  *(uint *)&this->_padding_ = *param_7;
  *(uint *)((longlong)&this->_padding_ + 4) = *param_6;
  *(int *)&this->_padding_ = *param_5;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_4;
  this->_padding_ = (longlong)param_3;
  this->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0DB___BY00_WVFName__HII_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
        aVar2 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)param_2->_padding_,(char *)param_2->_padding_,
                           (uint)param_2->_padding_);
        LOCK();
        param_2->TraceCpuSpecId = aVar2;
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
  aVar2 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&this->_padding_ = aVar2;
  if (aVar2 != (atomic<unsigned_int>)0x0) {
    GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(FName *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(ulonglong)*(uint *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(ulonglong)(uint)this->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)this->_padding_,&local_28.CborData);
    *(uint *)((longlong)&this->_padding_ + 4) = uVar3;
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return this;
}

// GetTCHAR @ 148650090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
           *this,FBuffer *param_1)

{
  TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int> *pTVar1;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  longlong *local_138;
  undefined4 *local_130;
  longlong *local_128;
  wchar_t local_120 [128];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  pTVar1 = this->Desc;
  local_138 = &this->_padding_;
  local_130 = (undefined4 *)((longlong)&this->_padding_ + 4);
  local_128 = &this->_padding_;
  ::FName::ToStringInternal((FName *)((longlong)&this->_padding_ + 4),local_120,0x80);
  local_20 = this->_padding_;
  local_140 = (undefined4)*local_138;
  local_158 = local_120;
  local_148 = *local_130;
  local_150 = (undefined4)*local_128;
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 148669880

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(FName *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(longlong)(int)this->_padding_);
    GPUProfiler::FMetadataSerializer::AppendValue
              (&local_38,(ulonglong)*(uint *)((longlong)&this->_padding_ + 4));
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(ulonglong)(uint)this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 148669980

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<49,wchar_t_[1],FName,int,unsigned_int,unsigned_int>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// GetTCHAR @ 1487a6460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>_> *this,
          FBuffer *param_1)

{
  TRHIBreadcrumbDesc<26,FName> *pTVar1;
  undefined1 auStack_138 [32];
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = this->Desc;
  ::FName::ToStringInternal((FName *)&this->_padding_,local_118,0x80);
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 1487ca090

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<26,FName> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(FName *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 1487ca150

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

