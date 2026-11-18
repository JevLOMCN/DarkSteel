// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_const_&,FString_&> @ 1492c9420

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_const_&,FString_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<9,FString> *param_2,FString *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,FString>_> *pTVar4;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__08VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>,FName_&&> @ 1492c95c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>,FName_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<27,FName>_const_*,std::tuple<FName_&&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<27,FName> *pTVar1;
  longlong *plVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<27,FName> *)0x0) {
    return (FRHIBreadcrumbNode *)0x0;
  }
  plVar2 = (longlong *)param_1->_padding_;
  pFVar7 = FMemStackBase::Alloc(&this->Inner,0x58,8);
  pFVar7->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar3 = FRHIBreadcrumbNode::Sentinel;
  pFVar7->ListLink = (FRHIBreadcrumbNode *)0x0;
  pFVar7->Parent = pFVar3;
  (pFVar7->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar7->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar7->TraceCpuSpecId = 0;
  pFVar7->TraceCpuMetadataId = 0;
  pFVar7->Allocator = this;
  pFVar7->Data = (FRHIBreadcrumbData *)pTVar1;
  aVar5 = FRHIBreadcrumbNode::NextID;
  LOCK();
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  UNLOCK();
  pFVar7->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar7->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar7->ID = (uint)aVar5 | 0x80000000;
  pFVar7[1]._padding_ = *plVar2;
  pFVar7->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BL_VFName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar7[1].Parent = (FRHIBreadcrumbNode *)pTVar1;
  if (pTVar1->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar4) {
      lpCriticalSection = &pTVar1->Cs;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pTVar1->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar5 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)
                           ((TStaticArray<FRHIBreadcrumbNode_*,2,4294967295> *)&pTVar1->_padding_)->
                           Elements[0],(char *)pTVar1->_padding_,*(uint *)&pTVar1->_padding_);
        LOCK();
        pTVar1->TraceCpuSpecId = aVar5;
        UNLOCK();
        UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)pTVar1->TraceCpuSpecId,
                   (wchar_t *)
                   ((TStaticArray<FRHIBreadcrumbNode_*,2,4294967295> *)&pTVar1->_padding_)->Elements
                   [0],(wchar_t *)pTVar1->_padding_,&local_28.CborData);
        UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  aVar5 = pTVar1->TraceCpuSpecId;
  pFVar7->TraceCpuSpecId = (uint)aVar5;
  if (aVar5 != (atomic<unsigned_int>)0x0) {
    UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(FName *)(pFVar7 + 1));
    uVar6 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_28.CborData);
    pFVar7->TraceCpuMetadataId = uVar6;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar7;
}

