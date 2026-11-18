// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// GetTCHAR @ 1492f2170

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_> *this,
          FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// GetTCHAR @ 1492f21b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>_> *this,
          FBuffer *param_1)

{
  TRHIBreadcrumbDesc<27,FName> *pTVar1;
  undefined1 auStack_138 [32];
  wchar_t local_118 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = this->Desc;
  ::FName::ToStringInternal((FName *)&this->_padding_,local_118,0x80);
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)pTVar1->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 14930aee0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<9,FString> *pTVar1;
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
    GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)&this->_padding_);
    GPUProfiler::FGpuProfilerTrace::BeginBreadcrumb(uVar5,param_1,param_2,&local_38.CborData);
    GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return;
}

// TraceBeginGPU @ 14930afb0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<27,FName> *pTVar1;
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

// TraceEndGPU @ 14930b070

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

// TraceEndGPU @ 14930b0a0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

