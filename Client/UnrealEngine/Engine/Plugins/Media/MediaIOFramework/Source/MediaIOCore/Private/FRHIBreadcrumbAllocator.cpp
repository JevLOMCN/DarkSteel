// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>,int_&&> @ 14d7819b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>,int_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int>_const_*,std::tuple<int_&&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<28,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<28,int> *)0x0) {
    return (FRHIBreadcrumbNode *)0x0;
  }
  puVar2 = (undefined4 *)param_1->_padding_;
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
  LOCK();
  UNLOCK();
  uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar7->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar7->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar7->ID = uVar5;
  *(undefined4 *)&pFVar7[1]._padding_ = *puVar2;
  pFVar7->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BM_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
        aVar6 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)
                           ((TStaticArray<FRHIBreadcrumbNode_*,2,4294967295> *)&pTVar1->_padding_)->
                           Elements[0],(char *)pTVar1->_padding_,*(uint *)&pTVar1->_padding_);
        LOCK();
        pTVar1->TraceCpuSpecId = aVar6;
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
  aVar6 = pTVar1->TraceCpuSpecId;
  pFVar7->TraceCpuSpecId = (uint)aVar6;
  if (aVar6 != (atomic<unsigned_int>)0x0) {
    UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)(int)pFVar7[1]._padding_);
    uVar5 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_28.CborData);
    pFVar7->TraceCpuMetadataId = uVar5;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar7;
}

