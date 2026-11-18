// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 3

// GetTCHAR @ 14d7ae530

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>_>::GetTCHAR
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>_> *this,
          FBuffer *param_1)

{
  TCString<wchar_t>::SnprintfImpl(param_1->Data,0x80,(wchar_t *)this->Desc->_padding_);
  return param_1->Data;
}

// TraceBeginGPU @ 14d7c13b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>_>::TraceBeginGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>_> *this,
          uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<28,int> *pTVar1;
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

// TraceEndGPU @ 14d7c1470

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>_>::TraceEndGPU
          (TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>_> *this,
          uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

