// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 1

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,FString>_const_&,FString_const_&> @ 145fda620

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,FString>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,FString>_const_&,FString_const_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<19,FString> *param_2,FString *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,FString>_> *pTVar4;
  wchar_t *_Source;
  FMetadataSerializer local_38;
  
  pTVar4 = FMemStackBase::Alloc(&this->Inner,0x150,8);
  pTVar4->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pTVar4->_padding_ = (longlong)FRHIBreadcrumbNode::Sentinel;
  pTVar4->_padding_ = 0;
  pTVar4->_padding_ = 0;
  pTVar4->_padding_ = 0;
  pTVar4->_padding_ = (longlong)param_1;
  pTVar4->_padding_ = (longlong)param_2;
  pTVar4->_padding_ = 0;
  LOCK();
  UNLOCK();
  uVar2 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  *(undefined2 *)((longlong)&pTVar4->_padding_ + 4) = 0;
  *(uint *)&pTVar4->_padding_ = uVar2;
  if ((param_3->Data).ArrayNum == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  wcsncpy((wchar_t *)&pTVar4->_padding_,_Source,0x7f);
  *(undefined2 *)((longlong)&pTVar4->_padding_ + 6) = 0;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BD_VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pTVar4->Desc = param_2;
  if (param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar1 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar1) {
      lpCriticalSection = &param_2->Cs;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
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
        UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)param_2->TraceCpuSpecId,(wchar_t *)param_2->_padding_,
                   (wchar_t *)param_2->_padding_,&local_38.CborData);
        UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  aVar3 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&pTVar4->_padding_ = aVar3;
  if (aVar3 != (atomic<unsigned_int>)0x0) {
    UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)&pTVar4->_padding_);
    uVar2 = FCpuProfilerTrace::OutputMetadata((uint)pTVar4->_padding_,&local_38.CborData);
    *(uint *)((longlong)&pTVar4->_padding_ + 4) = uVar2;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
  }
  return pTVar4;
}

