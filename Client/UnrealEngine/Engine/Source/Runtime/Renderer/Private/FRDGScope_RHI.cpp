// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 19

// FRDGScope_RHI @ 14472e1b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::FRDGScope_RHI
          (FRDGScope_RHI *this,FRDGScopeState *param_1,FRHIBreadcrumbNode *param_2)

{
  FRHIBreadcrumbNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRDGScope_RHI *pFVar4;
  
  this->Node = param_2;
  if (param_2 != (FRHIBreadcrumbNode *)0x0) {
    pFVar1 = *param_1->CurrentBreadcrumbRef;
    if ((param_2->Parent != (FRHIBreadcrumbNode *)0x0) &&
       (param_2->Parent != FRHIBreadcrumbNode::Sentinel)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                         ,0x282,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FRDGScope_RHI *)(*pcVar2)();
        return pFVar4;
      }
    }
    param_2->Parent = pFVar1;
    if ((pFVar1 != (FRHIBreadcrumbNode *)0x0) && (pFVar1 != FRHIBreadcrumbNode::Sentinel)) {
      if (pFVar1->Allocator != param_2->Allocator) {
        FRHIBreadcrumbAllocatorArray::AddUnique(&param_2->Allocator->Parents,pFVar1->Allocator);
      }
    }
    *param_1->CurrentBreadcrumbRef = param_2;
    if (param_2->TraceCpuSpecId != 0) {
      if (param_2->TraceCpuMetadataId == 0) {
        FCpuProfilerTrace::OutputBeginEvent(param_2->TraceCpuSpecId);
      }
      else {
        FCpuProfilerTrace::OutputBeginEventWithMetadata(param_2->TraceCpuMetadataId);
      }
    }
    if ((param_1->ScopeState).bImmediate == false) {
      FRHIBreadcrumbList::Append(&param_1->LocalBreadcrumbList,param_2);
    }
  }
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_> @ 1447e1a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],int_&,wchar_t_const_*_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BI___CB_WAEAH__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&,wchar_t_const_*_&&>_> @ 1447e1bf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&,wchar_t_const_*_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[14],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0O___CB_W__QEAPEB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[8],wchar_t_const_*_&&,int_&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[8],wchar_t_const_*_&&,int_&>_> @ 144a43d80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[8],wchar_t_const_*_&&,int_&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[8],wchar_t_const_*_&&,int_&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[8],wchar_t_const_*_&&,int_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[8],wchar_t_const_*_&&,int_&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY07__CB_W__QEAPEB_WAEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_> @ 144ae2cb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BI___CB_W__QEAPEB_W__QEAPEB_W__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[28],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[28],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_> @ 144ae2e60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[28],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[28],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[28],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[28],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BM___CB_W__QEAPEB_W__QEAPEB_W__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[32],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[32],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&,int_&&,int_&&>_> @ 144b7c300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[32],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[32],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[32],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[32],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0CA___CB_W__QEAPEB_W__QEAPEB_WAEAH__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>,unsigned_int_&> @ 144ed3c20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>,unsigned_int_&>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>_const_*,std::tuple<unsigned_int_&>_>
          *param_2)

{
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar1;
  FRHIBreadcrumbNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIBreadcrumbAllocator *this_00;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar5;
  FRHIBreadcrumbNode *pFVar6;
  FRDGScope_RHI *pFVar7;
  FRHIBreadcrumbAllocator *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_18;
  
  if ((param_1->ScopeState).bImmediate == false) {
    pTVar1 = &param_1->LocalBreadcrumbAllocator;
    if (pTVar1->Object == (FRHIBreadcrumbAllocator *)0x0) {
      pTVar5 = MakeShared<FRHIBreadcrumbAllocator,1>(&local_18);
      local_20.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
      local_28 = pTVar5->Object;
      if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_28) {
        pTVar1->Object = local_28;
        local_28 = (FRHIBreadcrumbAllocator *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_1->LocalBreadcrumbAllocator).SharedReferenceCount,&local_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      if (pTVar1->Object == (FRHIBreadcrumbAllocator *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FRDGScope_RHI *)(*pcVar3)();
          return pFVar7;
        }
      }
    }
    this_00 = pTVar1->Object;
  }
  else {
    this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator
                        ((FRHIComputeCommandList *)param_1->RHICmdList);
  }
  pFVar6 = FRHIBreadcrumbAllocator::
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<7,unsigned_int>,unsigned_int_&>
                     (this_00,param_2);
  this->Node = pFVar6;
  if (pFVar6 != (FRHIBreadcrumbNode *)0x0) {
    pFVar2 = *param_1->CurrentBreadcrumbRef;
    if ((pFVar6->Parent != (FRHIBreadcrumbNode *)0x0) &&
       (pFVar6->Parent != FRHIBreadcrumbNode::Sentinel)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                         ,0x282,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRDGScope_RHI *)(*pcVar3)();
        return pFVar7;
      }
    }
    pFVar6->Parent = pFVar2;
    if ((pFVar2 != (FRHIBreadcrumbNode *)0x0) && (pFVar2 != FRHIBreadcrumbNode::Sentinel)) {
      if (pFVar2->Allocator != pFVar6->Allocator) {
        FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar6->Allocator->Parents,pFVar2->Allocator);
      }
    }
    *param_1->CurrentBreadcrumbRef = pFVar6;
    if (pFVar6->TraceCpuSpecId != 0) {
      if (pFVar6->TraceCpuMetadataId == 0) {
        FCpuProfilerTrace::OutputBeginEvent(pFVar6->TraceCpuSpecId);
      }
      else {
        FCpuProfilerTrace::OutputBeginEventWithMetadata(pFVar6->TraceCpuMetadataId);
      }
    }
    if ((param_1->ScopeState).bImmediate == false) {
      FRHIBreadcrumbList::Append(&param_1->LocalBreadcrumbList,pFVar6);
    }
  }
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_> @ 145189e70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BN___CB_W__QEAPEB_W__QEAH__QEAH__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[38],int_&&,int_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[38],int_&&,int_&&,wchar_t_const_*_&&>_> @ 14518a020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[38],int_&&,int_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[38],int_&&,int_&&,wchar_t_const_*_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[38],int_&&,int_&&,wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[38],int_&&,int_&&,wchar_t_const_*_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0CG___CB_W__QEAH__QEAH__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[44],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[44],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_> @ 14518a1c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[44],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[44],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[44],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[44],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0CM___CB_W__QEAPEB_W__QEAH__QEAH__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[46],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[46],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_> @ 14518a370

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[46],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[46],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[46],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[46],wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0CO___CB_W__QEAPEB_W__QEAH__QEAH__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[68],int_&&,wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[68],int_&&,wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_> @ 145289280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[68],int_&&,wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[68],int_&&,wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[68],int_&&,wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[68],int_&&,wchar_t_const_*_&&,int_&&,int_&&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0EE___CB_W__QEAH__QEAPEB_W__QEAH__QEAH__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_> @ 1452f0ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[29],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BN___CB_W__QEAPEB_W__QEAPEB_W__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,wchar_t_const_*_&&>_> @ 145350350

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,wchar_t_const_*_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BA___CB_W__QEAPEB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_> @ 1453504f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[21],wchar_t_const_*_&&,wchar_t_const_*_&&,int_&&,int_&&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BF___CB_W__QEAPEB_W__QEAPEB_W__QEAH__QEAH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,int_const_&,int_const_&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,int_const_&,int_const_&>_> @ 14555f4e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,int_const_&,int_const_&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,int_const_&,int_const_&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,int_const_&,int_const_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[16],wchar_t_const_*_&&,int_const_&,int_const_&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BA___CB_W__QEAPEB_WAEBHAEBH_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,unsigned_int_&,unsigned_int_&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,unsigned_int_&,unsigned_int_&>_> @ 14555f680

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,unsigned_int_&,unsigned_int_&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,unsigned_int_&,unsigned_int_&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,unsigned_int_&,unsigned_int_&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[24],wchar_t_const_*_&&,unsigned_int_&,unsigned_int_&>_>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHIBreadcrumbAllocator *pFVar1;
  atomic<unsigned_int> aVar2;
  bool bVar3;
  uint uVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FMetadataSerializer local_38;
  
  pFVar5 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pFVar1 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  if (pFVar1 == (FRHIBreadcrumbAllocator *)0x0) {
    pFVar6 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar6 = FMemStackBase::Alloc(&pFVar5->Inner,0x150,8);
    pFVar6->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar6->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar6->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar6->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar6->Allocator = pFVar5;
    pFVar6->Data = (FRHIBreadcrumbData *)pFVar1;
    pFVar6->TraceCpuSpecId = 0;
    aVar2 = FRHIBreadcrumbNode::NextID;
    pFVar6->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar6->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar6->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar6->ID = (uint)aVar2 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar6 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar6[4].Allocator = pFVar1;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BI___CB_W__QEAPEB_WAEAIAEAI_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if ((*(int *)&(pFVar1->Parents).field_0x1c == 0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
      lpCriticalSection = (FWindowsRecursiveMutex *)&(pFVar1->Inner).TopChunk;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (*(int *)&(pFVar1->Parents).field_0x1c == 0) {
        uVar4 = FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)(pFVar1->Inner).End,(char *)pFVar1->_padding_,
                           (uint)pFVar1->_padding_);
        LOCK();
        *(uint *)&(pFVar1->Parents).field_0x1c = uVar4;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    uVar4 = *(uint *)&(pFVar1->Parents).field_0x1c;
    pFVar6->TraceCpuSpecId = uVar4;
    if (uVar4 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_38,(wchar_t *)(pFVar6 + 1));
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar6->TraceCpuSpecId,&local_38.CborData);
      pFVar6->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar6);
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_> @ 14592d9b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHICommandListImmediate *pFVar1;
  TRHIBreadcrumbDesc<17> *pTVar2;
  FRHIBreadcrumbAllocator *pFVar3;
  FRHIBreadcrumbNode *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar9;
  FRDGScope_RHI *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar12;
  FRHIBreadcrumbAllocator *local_78;
  FSharedReferencer<1> local_70;
  FRHIBreadcrumbAllocator *local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_58;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_48;
  FMetadataSerializer local_38;
  
  if ((param_1->ScopeState).bImmediate == false) {
    pTVar12 = &param_1->LocalBreadcrumbAllocator;
    if (pTVar12->Object != (FRHIBreadcrumbAllocator *)0x0) goto LAB_14592dad7;
    pTVar9 = MakeShared<FRHIBreadcrumbAllocator,1>(&local_48);
    local_60.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_68 = pTVar9->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar12 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_68) {
      pTVar12->Object = local_68;
      local_68 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->LocalBreadcrumbAllocator).SharedReferenceCount,&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    local_58.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
  }
  else {
    pFVar1 = param_1->RHICmdList;
    pTVar12 = (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&pFVar1->field_0x190;
    if (*(longlong *)pTVar12 != 0) goto LAB_14592dad7;
    pTVar9 = MakeShared<FRHIBreadcrumbAllocator,1>(&local_58);
    local_70.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_78 = pTVar9->Object;
    if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar12 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_78) {
      *(FRHIBreadcrumbAllocator **)pTVar12 = local_78;
      local_78 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar1->field_0x198,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (pTVar12->Object == (FRHIBreadcrumbAllocator *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FRDGScope_RHI *)(*pcVar5)();
      return pFVar10;
    }
  }
LAB_14592dad7:
  pTVar2 = (param_2->_Myfirst)._Val;
  pFVar3 = pTVar12->Object;
  if (pTVar2 == (TRHIBreadcrumbDesc<17> *)0x0) {
    this->Node = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar11 = FMemStackBase::Alloc(&pFVar3->Inner,0x50,8);
    pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar11->Allocator = pFVar3;
    pFVar11->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar11->TraceCpuSpecId = 0;
    pFVar11->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar11->ID = uVar7;
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BB___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar11[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar6) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar8 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar8;
          UNLOCK();
          UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
          FCpuProfilerTrace::OutputEventMetadataSpec
                    ((uint)pTVar2->TraceCpuSpecId,(wchar_t *)pTVar2->_padding_,
                     (wchar_t *)pTVar2->_padding_,&local_38.CborData);
          UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    pFVar11->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
    this->Node = pFVar11;
    pFVar4 = *param_1->CurrentBreadcrumbRef;
    if ((pFVar11->Parent != (FRHIBreadcrumbNode *)0x0) &&
       (pFVar11->Parent != FRHIBreadcrumbNode::Sentinel)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                         ,0x282,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FRDGScope_RHI *)(*pcVar5)();
        return pFVar10;
      }
    }
    pFVar11->Parent = pFVar4;
    if ((pFVar4 != (FRHIBreadcrumbNode *)0x0) && (pFVar4 != FRHIBreadcrumbNode::Sentinel)) {
      if (pFVar4->Allocator != pFVar11->Allocator) {
        FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar11->Allocator->Parents,pFVar4->Allocator);
      }
    }
    *param_1->CurrentBreadcrumbRef = pFVar11;
    if (pFVar11->TraceCpuSpecId != 0) {
      if (pFVar11->TraceCpuMetadataId == 0) {
        FCpuProfilerTrace::OutputBeginEvent(pFVar11->TraceCpuSpecId);
      }
      else {
        FCpuProfilerTrace::OutputBeginEventWithMetadata(pFVar11->TraceCpuMetadataId);
      }
    }
    if ((param_1->ScopeState).bImmediate == false) {
      FRHIBreadcrumbList::Append(&param_1->LocalBreadcrumbList,pFVar11);
    }
  }
  return this;
}

