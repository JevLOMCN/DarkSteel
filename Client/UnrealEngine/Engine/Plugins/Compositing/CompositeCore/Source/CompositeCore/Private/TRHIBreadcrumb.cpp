// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 3

// GetTCHAR @ 14ea7fd80

wchar_t * __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>_>
::GetTCHAR(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>_>
           *this,FBuffer *param_1)

{
  return (wchar_t *)&this->_padding_;
}

// TraceBeginGPU @ 14ea835f0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>_>
::TraceBeginGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>_>
                *this,uint param_1,ulong64 param_2)

{
  TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>
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

// TraceEndGPU @ 14ea836c0

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>_>
::TraceEndGPU(TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[31],wchar_t_const_*_const_&,int_&&,int_&&>_>_>
              *this,uint param_1,ulong64 param_2)

{
  if (this->Desc->TraceGpuSpecId != 0) {
    GPUProfiler::FGpuProfilerTrace::EndBreadcrumb(param_1,param_2);
    return;
  }
  return;
}

