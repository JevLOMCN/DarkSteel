// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 49

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_const_&,int_&,int_&> @ 144704f20

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_const_&,int_&,int_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<31,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BP_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,unsigned_int,unsigned_int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,unsigned_int,unsigned_int>_const_&,unsigned_int_&,unsigned_int_const_&> @ 1447050b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,unsigned_int,unsigned_int>_> *
__thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,unsigned_int,unsigned_int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,unsigned_int,unsigned_int>_const_&,unsigned_int_&,unsigned_int_const_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<33,unsigned_int,unsigned_int> *param_2,uint *param_3,uint *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,unsigned_int,unsigned_int>_>
  *pTVar5;
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
  *(uint *)&pTVar5->_padding_ = *param_4;
  *(uint *)((longlong)&pTVar5->_padding_ + 4) = *param_3;
  pTVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CB_II_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(ulonglong)*(uint *)((longlong)&pTVar5->_padding_ + 4));
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(ulonglong)(uint)pTVar5->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)pTVar5->_padding_,&local_28.CborData);
    *(uint *)((longlong)&pTVar5->_padding_ + 4) = uVar3;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pTVar5;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&> @ 144706750

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<7,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<7,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__06H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22,int>,int_&> @ 1447068d0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<22,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<22,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BG_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// ~FRHIBreadcrumbAllocator @ 14472f190

void __thiscall FRHIBreadcrumbAllocator::~FRHIBreadcrumbAllocator(FRHIBreadcrumbAllocator *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar7;
  
  pTVar7 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)&(this->Parents).field_0x20;
  if (pTVar7 == (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
    pTVar7 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)&this->Parents;
  }
  DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
            (pTVar7,*(int *)&(this->Parents).field_0x28);
  pvVar3 = *(void **)&(this->Parents).field_0x20;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  if ((GIsCriticalError == false) && ((this->Inner).NumMarks != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->Inner,(FTaggedMemory *)0x0);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,unsigned_int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,unsigned_int,int>_const_&,unsigned_int_&,int_&> @ 1447e7c80

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,unsigned_int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,unsigned_int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,unsigned_int,int>_const_&,unsigned_int_&,int_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<31,unsigned_int,int> *param_2,uint *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,unsigned_int,int>_> *pTVar5;
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
  *(uint *)((longlong)&pTVar5->_padding_ + 4) = *param_3;
  pTVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BP_IH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(ulonglong)*(uint *)((longlong)&pTVar5->_padding_ + 4));
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
              (&local_28,(longlong)(int)pTVar5->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)pTVar5->_padding_,&local_28.CborData);
    *(uint *)((longlong)&pTVar5->_padding_ + 4) = uVar3;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pTVar5;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>,unsigned_int_&> @ 1447e8150

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>,unsigned_int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>_const_*,std::tuple<unsigned_int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<7,unsigned_int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<7,unsigned_int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__06I_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(ulonglong)(uint)pFVar7[1]._padding_);
    uVar5 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_28.CborData);
    pFVar7->TraceCpuMetadataId = uVar5;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar7;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>,int_&> @ 1447e82d0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>_const_*,std::tuple<int_&>_>
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,int>,int_&> @ 14484c420

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<24,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<24,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<24,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BI_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,float>,float_&> @ 1448dd140

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,float>,float_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,float>_const_*,std::tuple<float_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<9,float> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<9,float> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__08M_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,unsigned_int>,unsigned_int_&> @ 1448dd2c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,unsigned_int>,unsigned_int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,unsigned_int>_const_*,std::tuple<unsigned_int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<20,unsigned_int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<20,unsigned_int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BE_I_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(ulonglong)(uint)pFVar7[1]._padding_);
    uVar5 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_28.CborData);
    pFVar7->TraceCpuMetadataId = uVar5;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar7;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<37,unsigned_int>,unsigned_int_&&> @ 1448dd440

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<37,unsigned_int>,unsigned_int_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<37,unsigned_int>_const_*,std::tuple<unsigned_int_&&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<37,unsigned_int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<37,unsigned_int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CF_I_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(ulonglong)(uint)pFVar7[1]._padding_);
    uVar5 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_28.CborData);
    pFVar7->TraceCpuMetadataId = uVar5;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar7;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>,int_const_&> @ 1448dd5c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>,int_const_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>_const_*,std::tuple<int_const_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<42,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<42,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CK_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13,unsigned_int>,unsigned_int_&> @ 1448dd740

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13,unsigned_int>,unsigned_int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13,unsigned_int>_const_*,std::tuple<unsigned_int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<13,unsigned_int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<13,unsigned_int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0N_I_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(ulonglong)(uint)pFVar7[1]._padding_);
    uVar5 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_28.CborData);
    pFVar7->TraceCpuMetadataId = uVar5;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar7;
}

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11,int,int>_const_&,int_&,int_&> @ 144aee6d0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11,int,int>_const_&,int_&,int_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<11,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<11,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0L_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<35,int>,int_&&> @ 144aef7b0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<35,int>,int_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<35,int>_const_*,std::tuple<int_&&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<35,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<35,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CD_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29,int>,int_&> @ 144ca3150

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<29,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<29,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BN_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<48,int,float>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<48,int,float>_const_&,int_&,float_&> @ 144d2eaf0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<48,int,float>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<48,int,float>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<48,int,float>_const_&,int_&,float_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<48,int,float> *param_2,int *param_3,float *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<48,int,float>_> *pTVar5;
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
  *(float *)&pTVar5->_padding_ = *param_4;
  *(int *)((longlong)&pTVar5->_padding_ + 4) = *param_3;
  pTVar5->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0DA_HM_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(double)*(float *)&pTVar5->_padding_);
    uVar3 = FCpuProfilerTrace::OutputMetadata((uint)pTVar5->_padding_,&local_28.CborData);
    *(uint *)((longlong)&pTVar5->_padding_ + 4) = uVar3;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pTVar5;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>,int_&&> @ 144d30060

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>,int_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20,int>_const_*,std::tuple<int_&&>_>
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,int>,int_&> @ 144e65290

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<9,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<9,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<9,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__08H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_const_&,int_&,int_&> @ 144edd940

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_const_&,int_&,int_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<34,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CC_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_&,FString_const_&> @ 145029050

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_&,FString_const_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<3,FString> *param_2,FString *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> *pTVar4;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__02VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,FString>_const_&,FString_const_&> @ 1450291f0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,FString>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,FString>_const_&,FString_const_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<12,FString> *param_2,FString *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,FString>_> *pTVar4;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0M_VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13,int>,int_&&> @ 145029390

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13,int>,int_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<13,int>_const_*,std::tuple<int_&&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<13,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<13,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0N_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_const_&,int_const_&,int_const_&> @ 1450a4300

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_const_&,int_const_&,int_const_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<31,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BP_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int>,int_&> @ 1450a47f0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<19,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<19,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BD_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FName>,FName_&> @ 1450a4970

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FName>,FName_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<21,FName>_const_*,std::tuple<FName_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<21,FName> *pTVar1;
  longlong *plVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<21,FName> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BF_VFName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int>_const_&,int_const_&,int_const_&> @ 145190800

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int>_const_&,int_const_&,int_const_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<42,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CK_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,int,int>_const_&,int_&,int_&> @ 145190990

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,int,int>_const_&,int_&,int_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<12,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<12,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0M_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40,float>,float_&> @ 145190f10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40,float>,float_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40,float>_const_*,std::tuple<float_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<40,float> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<40,float> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CI_M_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_const_&> @ 1451fb610

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_>
* __thiscall
`FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>'
::__l2::<lambda_1>::
operator()<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_const_&>
          (void *this,
          tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>
  *pTVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  uint uVar6;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_>
  *pTVar7;
  FMetadataSerializer local_28;
  
  lVar1 = *(longlong *)this;
  pTVar2 = (TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[72],int_const_&,int_&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>
            *)**(longlong **)((longlong)this + 8);
  pTVar7 = FMemStackBase::Alloc((FMemStackBase *)(lVar1 + 0x10),0x150,8);
  pTVar7->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar3 = FRHIBreadcrumbNode::Sentinel;
  pTVar7->_padding_ = 0;
  pTVar7->_padding_ = (longlong)pFVar3;
  pTVar7->_padding_ = 0;
  pTVar7->_padding_ = 0;
  pTVar7->_padding_ = 0;
  pTVar7->_padding_ = lVar1;
  pTVar7->_padding_ = (longlong)pTVar2;
  aVar5 = FRHIBreadcrumbNode::NextID;
  LOCK();
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  UNLOCK();
  *(undefined2 *)((longlong)&pTVar7->_padding_ + 4) = 0;
  *(uint *)&pTVar7->_padding_ = (uint)aVar5 | 0x80000000;
  TCString<wchar_t>::SnprintfImpl((wchar_t *)&pTVar7->_padding_,0x80,(wchar_t *)param_1->_padding_);
  pTVar7->Desc = pTVar2;
  pTVar7->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0EI___CB_WAEBHAEAH__QEAPEB_W__QEAPEB_W__QEAPEB_W__QEAPEB_W__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
    bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
    if (bVar4) {
      lpCriticalSection = &pTVar2->Cs;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar5 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                           (uint)pTVar2->_padding_);
        LOCK();
        pTVar2->TraceCpuSpecId = aVar5;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  aVar5 = pTVar2->TraceCpuSpecId;
  *(atomic<unsigned_int> *)&pTVar7->_padding_ = aVar5;
  if (aVar5 != (atomic<unsigned_int>)0x0) {
    UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
    UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_28,(wchar_t *)&pTVar7->_padding_);
    uVar6 = FCpuProfilerTrace::OutputMetadata((uint)pTVar7->_padding_,&local_28.CborData);
    *(uint *)((longlong)&pTVar7->_padding_ + 4) = uVar6;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pTVar7;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,unsigned_int>,unsigned_int_&> @ 145206850

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,unsigned_int>,unsigned_int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,unsigned_int>_const_*,std::tuple<unsigned_int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<32,unsigned_int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<32,unsigned_int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CA_I_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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
              (&local_28,(ulonglong)(uint)pFVar7[1]._padding_);
    uVar5 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_28.CborData);
    pFVar7->TraceCpuMetadataId = uVar5;
    UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
  }
  return pFVar7;
}

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int,int>_const_&,int_&,int_&> @ 14528d580

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int,int>_const_&,int_&,int_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<19,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<19,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BD_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,int,int>_const_&,int_&,int_&> @ 14528d710

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,int,int>_const_&,int_&,int_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<32,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<32,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CA_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_const_&,int_const_&,int_const_&> @ 1453d00f0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_const_&,int_const_&,int_const_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<34,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<34,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CC_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36,int,int>_const_&,int_const_&,int_const_&> @ 1453d0280

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36,int,int>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36,int,int>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36,int,int>_const_&,int_const_&,int_const_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<36,int,int> *param_2,int *param_3,int *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbNode *pFVar1;
  bool bVar2;
  uint uVar3;
  atomic<unsigned_int> aVar4;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36,int,int>_> *pTVar5;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CE_HH_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16,int>,int_&> @ 1453d05d0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<16,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<16,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<16,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BA_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,int>,int_&> @ 1453d0750

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<33,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<33,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<33,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CB_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15,int>,int_&> @ 1453d08d0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<15,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<15,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<15,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0P_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_&,FString_&> @ 14546e960

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_const_&,FString_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<3,FString> *param_2,FString *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>_> *pTVar4;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__02VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_const_&,FString_&> @ 14546eb00

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_> * __thiscall
FRHIBreadcrumbAllocator::
Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_const_&,FString_&>
          (FRHIBreadcrumbAllocator *this,FRHIBreadcrumbAllocator *param_1,
          TRHIBreadcrumbDesc<17,FString> *param_2,FString *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  uint uVar2;
  atomic<unsigned_int> aVar3;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_> *pTVar4;
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BB_VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_> @ 14546efb0

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> *param_1
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<0> *pTVar1;
  FRHIBreadcrumbNode *pFVar2;
  bool bVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  FRHIBreadcrumbNode *pFVar6;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<0> *)0x0) {
    return (FRHIBreadcrumbNode *)0x0;
  }
  pFVar6 = FMemStackBase::Alloc(&this->Inner,0x50,8);
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
  LOCK();
  UNLOCK();
  uVar4 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar6->ID = uVar4;
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar6[1]._padding_ = (longlong)pTVar1;
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
        aVar5 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)pTVar1->_padding_,(char *)pTVar1->_padding_,
                           (uint)pTVar1->_padding_);
        LOCK();
        pTVar1->TraceCpuSpecId = aVar5;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  pFVar6->TraceCpuSpecId = (uint)pTVar1->TraceCpuSpecId;
  return pFVar6;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,enum_ESceneCaptureSource>,enum_ESceneCaptureSource_&> @ 14546f0c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,enum_ESceneCaptureSource>,enum_ESceneCaptureSource_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<31,ESceneCaptureSource>_const_*,std::tuple<ESceneCaptureSource_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<31,ESceneCaptureSource> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<31,ESceneCaptureSource> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BP_W4ESceneCaptureSource___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18,int>,int_&> @ 1454c8b90

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<18,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<18,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<18,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BC_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8,int>,int_&> @ 1455654c0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<8,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<8,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<8,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__07H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_> @ 145565640

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<22> *pTVar1;
  FRHIBreadcrumbNode *pFVar2;
  bool bVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<22> *)0x0) {
    return (FRHIBreadcrumbNode *)0x0;
  }
  pFVar6 = FMemStackBase::Alloc(&this->Inner,0x50,8);
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
  LOCK();
  UNLOCK();
  uVar4 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar6->ID = uVar4;
  pFVar6->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BG___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar6[1]._padding_ = (longlong)pTVar1;
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
        aVar5 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)pTVar1->_padding_,(char *)pTVar1->_padding_,
                           (uint)pTVar1->_padding_);
        LOCK();
        pTVar1->TraceCpuSpecId = aVar5;
        UNLOCK();
        UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_28);
        FCpuProfilerTrace::OutputEventMetadataSpec
                  ((uint)pTVar1->TraceCpuSpecId,(wchar_t *)pTVar1->_padding_,
                   (wchar_t *)pTVar1->_padding_,&local_28.CborData);
        UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_28);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  pFVar6->TraceCpuSpecId = (uint)pTVar1->TraceCpuSpecId;
  return pFVar6;
}

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40,int>,int_&&> @ 14565b5d0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40,int>,int_&&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<40,int>_const_*,std::tuple<int_&&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<40,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<40,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CI_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,int>,int_&> @ 14573fdd0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<10,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<10,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<10,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__09H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

// AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>,int_&> @ 14573ff50

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRHIBreadcrumbNode * __thiscall
FRHIBreadcrumbAllocator::
AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>,int_&>
          (FRHIBreadcrumbAllocator *this,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<42,int>_const_*,std::tuple<int_&>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<42,int> *pTVar1;
  undefined4 *puVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbNode *pFVar7;
  FMetadataSerializer local_28;
  
  pTVar1 = (param_1->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<42,int> *)0x0) {
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
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CK_H_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

