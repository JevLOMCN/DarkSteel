// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>,FName_&&> @ 14733a540

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>,FName_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,FName>_const_*,std::tuple<FName_&&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<28,FName> *pTVar1;
  longlong *plVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<28,FName> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BM_VFName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_const_&,int_&,wchar_t_const_(&)[1]> @ 147caeeb0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_const_&,int_&,wchar_t_const_(&)[1]>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<20,int,wchar_t_[1]> *param_2,int *param_3,wchar_t (*param_4) [1])

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int,wchar_t_[1]>_> *pTVar5;
  FMetadataSerializer local_28;
  
  pTVar5 = FMemStackBase::Alloc(&this->Inner,0x60,8);
  pTVar5->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar1 = FRHIBreadcrumbNode::Sentinel;
  pTVar5->_padding_ = 0;
  pTVar5->_padding_ = (longlong)pFVar1;
  pTVar5->_padding_ = 0;
  pTVar5->_padding_ = 0;
  pTVar5->_padding_ = 0;
  pTVar5->_padding_ = (longlong)param_1;
  pTVar5->_padding_ = (longlong)param_2;
  LOCK();
  UNLOCK();
  uVar3 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  *(undefined2 *)((longlong)&pTVar5->_padding_ + 4) = 0;
  *(uint *)&pTVar5->_padding_ = uVar3;
  pTVar5->_padding_ = (longlong)param_4;
  *(int *)&pTVar5->_padding_ = *param_3;
  pTVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BE_H__BY00_W_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pTVar5->Desc = param_2;
  if (param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar2 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar2) {
      lpCriticalSection = &param_2->Cs;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar4 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)param_2->_padding_,(char *)param_2->_padding_,
                           (uint)param_2->_padding_);
        LOCK();
        param_2->TraceCpuSpecId = aVar4;
        UNLOCK();
        UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)param_2->TraceCpuSpecId,(wchar_t *)param_2->_padding_,
                   (wchar_t *)param_2->_padding_,&local_28.CborData);
        UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  aVar4 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&pTVar5->_padding_ = aVar4;
  if (aVar4 != (atomic<unsigned_int>)0x0) {
    UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)(int)pTVar5->_padding_);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)pTVar5->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)pTVar5->_padding_,&local_28.CborData);
    *(uint *)((longlong)&pTVar5->_padding_ + 4) = uVar3;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pTVar5;
}

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_const_&,int_&,wchar_t_const_(&)[1]> @ 147caf040

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_const_&,int_&,wchar_t_const_(&)[1]>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<28,int,wchar_t_[1]> *param_2,int *param_3,wchar_t (*param_4) [1])

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<28,int,wchar_t_[1]>_> *pTVar5;
  FMetadataSerializer local_28;
  
  pTVar5 = FMemStackBase::Alloc(&this->Inner,0x60,8);
  pTVar5->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar1 = FRHIBreadcrumbNode::Sentinel;
  pTVar5->_padding_ = 0;
  pTVar5->_padding_ = (longlong)pFVar1;
  pTVar5->_padding_ = 0;
  pTVar5->_padding_ = 0;
  pTVar5->_padding_ = 0;
  pTVar5->_padding_ = (longlong)param_1;
  pTVar5->_padding_ = (longlong)param_2;
  LOCK();
  UNLOCK();
  uVar3 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  *(undefined2 *)((longlong)&pTVar5->_padding_ + 4) = 0;
  *(uint *)&pTVar5->_padding_ = uVar3;
  pTVar5->_padding_ = (longlong)param_4;
  *(int *)&pTVar5->_padding_ = *param_3;
  pTVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BM_H__BY00_W_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pTVar5->Desc = param_2;
  if (param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar2 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar2) {
      lpCriticalSection = &param_2->Cs;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (param_2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar4 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)param_2->_padding_,(char *)param_2->_padding_,
                           (uint)param_2->_padding_);
        LOCK();
        param_2->TraceCpuSpecId = aVar4;
        UNLOCK();
        UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)param_2->TraceCpuSpecId,(wchar_t *)param_2->_padding_,
                   (wchar_t *)param_2->_padding_,&local_28.CborData);
        UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  aVar4 = param_2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&pTVar5->_padding_ = aVar4;
  if (aVar4 != (atomic<unsigned_int>)0x0) {
    UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)(int)pTVar5->_padding_);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)pTVar5->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)pTVar5->_padding_,&local_28.CborData);
    *(uint *)((longlong)&pTVar5->_padding_ + 4) = uVar3;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pTVar5;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>,FName_const_&> @ 147caf1d0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>,FName_const_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,FName>_const_*,std::tuple<FName_const_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<10,FName> *pTVar1;
  longlong *plVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<10,FName> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__09VFName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>,FName_const_&> @ 147d60270

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>,FName_const_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_const_*,std::tuple<FName_const_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<23,FName> *pTVar1;
  longlong *plVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<23,FName> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BH_VFName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>,FName> @ 147d60400

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>,FName>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,FName>_const_*,std::tuple<FName>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<31,FName> *pTVar1;
  FRHIBreadcrumbNode *pFVar2;
  bool bVar3;
  atomic<unsigned_int> aVar4;
  uint uVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<31,FName> *)0x0) {
    return (FRHIBreadcrumbNode *)0x0;
  }
  pFVar6 = FMemStackBase::Alloc(&this->Inner,0x58,8);
  pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar2 = FRHIBreadcrumbNode::Sentinel;
  pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
  pFVar6->Parent = pFVar2;
  (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar6->TraceCpuSpecId = 0;
  pFVar6->TraceCpuMetadataId = 0;
  pFVar6->Allocator = this;
  pFVar6->Data = (FRHIBreadcrumbData *)pTVar1;
  aVar4 = FRHIBreadcrumbNode::NextID;
  LOCK();
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  UNLOCK();
  pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar6->ID = (uint)aVar4 | 0x80000000;
  pFVar6[1]._padding_ = param_1->_padding_;
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BP_VFName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar6[1].Parent = (FRHIBreadcrumbNode *)pTVar1;
  if (pTVar1->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar3) {
      lpCriticalSection = &pTVar1->Cs;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pTVar1->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar4 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)
                           ((TStaticArray<FRHIBreadcrumbNode_*,2,4294967295> *)&pTVar1->_padding_)->
                           Elements[0],(char *)pTVar1->_padding_,*(uint *)&pTVar1->_padding_);
        LOCK();
        pTVar1->TraceCpuSpecId = aVar4;
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
  aVar4 = pTVar1->TraceCpuSpecId;
  pFVar6->TraceCpuSpecId = (uint)aVar4;
  if (aVar4 != (atomic<unsigned_int>)0x0) {
    UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(FName *)(pFVar6 + 1));
    uVar5 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_28.CborData);
    pFVar6->TraceCpuMetadataId = uVar5;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar6;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>,FName_&&> @ 148769400

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>,FName_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26,FName>_const_*,std::tuple<FName_&&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<26,FName> *pTVar1;
  longlong *plVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<26,FName> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BK_VFName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

