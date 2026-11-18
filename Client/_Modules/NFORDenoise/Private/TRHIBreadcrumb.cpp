// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 12

// GetTCHAR @ 14e9f96c0

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>
           *this,FBuffer *param_1)

{
  return (wchar_t *)&this->_padding_;
}

// GetTCHAR @ 14e9f96d0

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>_> *this,
          FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 14e9f9710

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_> *this,
          FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 14e9f9750

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>_> *this,
          FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 14e9fec30

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>
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

// TraceBeginGPU @ 14e9fed00

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<21,int> *pTVar1;
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
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 14e9fedc0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<30,int,int> *pTVar1;
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
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 14e9fee90

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<41,float> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(double)*(float *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceEndGPU @ 14e9fef60

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[27],wchar_t_const_*_const_&>_>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 14e9fef90

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 14e9fefb0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 14e9fefd0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

