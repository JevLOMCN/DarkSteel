// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// TRHIBreadcrumbDesc<5><> @ 1447e1230

TRHIBreadcrumbDesc<5> * __thiscall
UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<5>::TRHIBreadcrumbDesc<5><>
          (TRHIBreadcrumbDesc<5> *this,FRHIBreadcrumbData *param_1,TFormatString<5,0> param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
  *(int *)&this->_padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
  lVar4 = param_1->_padding_;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar2 = *(undefined4 *)&param_1->StaticName;
  uVar3 = *(undefined4 *)((longlong)&param_1->StaticName + 4);
  this->_padding_ = (longlong)param_2.FormatString;
  *(int *)&this->_padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
  *(undefined4 *)&this->_padding_ = uVar2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Cs,4000);
  (this->FieldNames)._Elems[0] = (wchar_t *)0x0;
  this->TraceGpuSpecId = 0;
  this->TraceCpuSpecId = (atomic<unsigned_int>)0x0;
  return this;
}

// TRHIBreadcrumbDesc<19><> @ 1447e1280

TRHIBreadcrumbDesc<19> * __thiscall
UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19>::TRHIBreadcrumbDesc<19><>
          (TRHIBreadcrumbDesc<19> *this,FRHIBreadcrumbData *param_1,TFormatString<19,0> param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  uVar2 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
  *(int *)&this->_padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar2;
  lVar4 = param_1->_padding_;
  uVar1 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar2 = *(undefined4 *)&param_1->StaticName;
  uVar3 = *(undefined4 *)((longlong)&param_1->StaticName + 4);
  this->_padding_ = (longlong)param_2.FormatString;
  *(int *)&this->_padding_ = (int)lVar4;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar1;
  *(undefined4 *)&this->_padding_ = uVar2;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar3;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->Cs,4000);
  (this->FieldNames)._Elems[0] = (wchar_t *)0x0;
  this->TraceGpuSpecId = 0;
  this->TraceCpuSpecId = (atomic<unsigned_int>)0x0;
  return this;
}

// GetTraceCpuSpec @ 144fc4d00

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

uint __thiscall
UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>::GetTraceCpuSpec
          (TRHIBreadcrumbDesc<3,FString> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  atomic<unsigned_int> aVar2;
  FMetadataSerializer local_28;
  
  if (this->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar1 = GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar1) {
      lpCriticalSection = &this->Cs;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (this->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar2 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)this->_padding_,(char *)this->_padding_,(uint)this->_padding_)
        ;
        LOCK();
        this->TraceCpuSpecId = aVar2;
        UNLOCK();
        GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)this->TraceCpuSpecId,(wchar_t *)this->_padding_,(wchar_t *)this->_padding_,
                   &local_28.CborData);
        GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return (uint)this->TraceCpuSpecId;
}

