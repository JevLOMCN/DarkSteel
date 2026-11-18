// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// SerializeValues @ 147c7f900

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall
UE::RHI::Breadcrumbs::Private::
TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>
::SerializeValues(TRHIBreadcrumbDesc<92,wchar_t_[1],int,int,int,int,FDebugName,int,unsigned_int,unsigned_int,unsigned_int,unsigned_int,bool,unsigned_int>
                  *this,FMetadataSerializer *param_1,
                 tuple<UE::RHI::Breadcrumbs::Private::TValue<wchar_t_[1]>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<FDebugName>,UE::RHI::Breadcrumbs::Private::TValue<int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>,UE::RHI::Breadcrumbs::Private::TValue<bool>,UE::RHI::Breadcrumbs::Private::TValue<unsigned_int>_>
                 *param_2)

{
  GPUProfiler::FMetadataSerializer::AppendValue(param_1,*(param_2->_Myfirst)._Val.Value);
  GPUProfiler::FMetadataSerializer::AppendValue
            (param_1,(longlong)*(int *)((longlong)&param_2->_padding_ + 4));
  GPUProfiler::FMetadataSerializer::AppendValue(param_1,(longlong)(int)param_2->_padding_);
  GPUProfiler::FMetadataSerializer::AppendValue
            (param_1,(longlong)*(int *)((longlong)&param_2->_padding_ + 4));
  GPUProfiler::FMetadataSerializer::AppendValue(param_1,(longlong)(int)param_2->_padding_);
  GPUProfiler::FMetadataSerializer::AppendValue
            (param_1,(FDebugName *)((longlong)&param_2->_padding_ + 4));
  GPUProfiler::FMetadataSerializer::AppendValue(param_1,(longlong)(int)param_2->_padding_);
  GPUProfiler::FMetadataSerializer::AppendValue
            (param_1,(ulonglong)*(uint *)((longlong)&param_2->_padding_ + 4));
  GPUProfiler::FMetadataSerializer::AppendValue(param_1,(ulonglong)(uint)param_2->_padding_);
  GPUProfiler::FMetadataSerializer::AppendValue
            (param_1,(ulonglong)*(uint *)((longlong)&param_2->_padding_ + 4));
  GPUProfiler::FMetadataSerializer::AppendValue(param_1,(ulonglong)(uint)param_2->_padding_);
  GPUProfiler::FMetadataSerializer::AppendValue
            (param_1,*(bool *)((longlong)&param_2->_padding_ + 4));
  GPUProfiler::FMetadataSerializer::AppendValue(param_1,(ulonglong)(uint)param_2->_padding_);
  return;
}

