// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 4

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_const_&,int_const_&,int_&> @ 14e9cb2b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_const_&,int_const_&,int_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<30,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<30,int,int>_> *pTVar5;
  FMetadataSerializer local_28;
  
  pTVar5 = FMemStackBase::Alloc(&this->Inner,0x58,8);
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
  *(int *)&pTVar5->_padding_ = *param_4;
  *(int *)((longlong)&pTVar5->_padding_ + 4) = *param_3;
  pTVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BO_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(longlong)*(int *)((longlong)&pTVar5->_padding_ + 4));
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)(int)pTVar5->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)pTVar5->_padding_,&local_28.CborData);
    *(uint *)((longlong)&pTVar5->_padding_ + 4) = uVar3;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pTVar5;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>,int_const_&> @ 14e9cb7a0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>,int_const_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>_const_*,std::tuple<int_const_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<20,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<20,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BE_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>,int_const_&> @ 14e9cb920

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>,int_const_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,int>_const_*,std::tuple<int_const_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<21,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<21,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BF_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>,float_const_&> @ 14e9cbaa0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>,float_const_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<41,float>_const_*,std::tuple<float_const_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<41,float> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<41,float> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CJ_M_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(double)*(float *)&pFVar7[1]._padding_);
    uVar5 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_28.CborData);
    pFVar7->TraceCpuMetadataId = uVar5;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar7;
}

