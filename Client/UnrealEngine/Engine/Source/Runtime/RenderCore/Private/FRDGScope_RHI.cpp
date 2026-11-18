// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_> @ 145cfdb80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_const_*,std::tuple<std::tuple<UE::RHI::Breadcrumbs::Private::FRDGFormatTag_&,wchar_t_const_(&)[20],wchar_t_const_*_&&,wchar_t_const_*_&&>_>_>
          *param_2)

{
  FTaggedMemory **lpCriticalSection;
  FRHICommandListImmediate *pFVar1;
  FRHIBreadcrumbAllocator *pFVar2;
  FRHIBreadcrumbAllocator *pFVar3;
  FRHIBreadcrumbNode *pFVar4;
  code *pcVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  uint uVar8;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar9;
  FRDGScope_RHI *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar12;
  FRHIBreadcrumbAllocator *local_88;
  FSharedReferencer<1> local_80;
  FRHIBreadcrumbAllocator *local_78;
  FSharedReferencer<1> local_70;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_68;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_58;
  FMetadataSerializer local_48;
  
  if ((param_1->ScopeState).bImmediate == false) {
    pTVar12 = &param_1->LocalBreadcrumbAllocator;
    if (pTVar12->Object != (FRHIBreadcrumbAllocator *)0x0) goto LAB_145cfdca9;
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
      pTVar12->Object = local_78;
      local_78 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->LocalBreadcrumbAllocator).SharedReferenceCount,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    local_68.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
  }
  else {
    pFVar1 = param_1->RHICmdList;
    pTVar12 = (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&pFVar1->field_0x190;
    if (*(longlong *)pTVar12 != 0) goto LAB_145cfdca9;
    pTVar9 = MakeShared<FRHIBreadcrumbAllocator,1>(&local_68);
    local_80.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_88 = pTVar9->Object;
    if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar12 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_88) {
      *(FRHIBreadcrumbAllocator **)pTVar12 = local_88;
      local_88 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar1->field_0x198,&local_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (pTVar12->Object == (FRHIBreadcrumbAllocator *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FRDGScope_RHI *)(*pcVar5)();
      return pFVar10;
    }
  }
LAB_145cfdca9:
  pFVar2 = (FRHIBreadcrumbAllocator *)(param_2->_Myfirst)._Val;
  pFVar3 = pTVar12->Object;
  if (pFVar2 == (FRHIBreadcrumbAllocator *)0x0) {
    this->Node = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar11 = FMemStackBase::Alloc(&pFVar3->Inner,0x150,8);
    pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar11->Allocator = pFVar3;
    pFVar11->Data = (FRHIBreadcrumbData *)pFVar2;
    pFVar11->TraceCpuSpecId = 0;
    aVar6 = FRHIBreadcrumbNode::NextID;
    pFVar11->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar11->ID = (uint)aVar6 | 0x80000000;
    TCString<wchar_t>::SnprintfImpl((wchar_t *)(pFVar11 + 1),0x80,(wchar_t *)param_2->_padding_);
    pFVar11[4].Allocator = pFVar2;
    pFVar11->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_V__tuple_AEAUFRDGFormatTag_Private_Breadcrumbs_RHI_UE__AEAY0BE___CB_W__QEAPEB_W__QEAPEB_W_std___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    if (*(int *)&(pFVar2->Parents).field_0x1c == 0) {
      bVar7 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar7) {
        lpCriticalSection = &(pFVar2->Inner).TopChunk;
        if (lpCriticalSection == (FTaggedMemory **)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (*(int *)&(pFVar2->Parents).field_0x1c == 0) {
          uVar8 = FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)(pFVar2->Inner).End,(char *)pFVar2->_padding_,
                             (uint)pFVar2->_padding_);
          LOCK();
          *(uint *)&(pFVar2->Parents).field_0x1c = uVar8;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
    }
    uVar8 = *(uint *)&(pFVar2->Parents).field_0x1c;
    pFVar11->TraceCpuSpecId = uVar8;
    if (uVar8 != 0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_48);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue(&local_48,(wchar_t *)(pFVar11 + 1));
      uVar8 = FCpuProfilerTrace::OutputMetadata(pFVar11->TraceCpuSpecId,&local_48.CborData);
      pFVar11->TraceCpuMetadataId = uVar8;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_48);
    }
    this->Node = pFVar11;
    if (pFVar11 != (FRHIBreadcrumbNode *)0x0) {
      pFVar4 = *param_1->CurrentBreadcrumbRef;
      if ((pFVar11->Parent != (FRHIBreadcrumbNode *)0x0) &&
         (pFVar11->Parent != FRHIBreadcrumbNode::Sentinel)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                           ,0x282,L"");
        if (bVar7) {
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
  }
  return this;
}

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>,FRDGEventName_const_&> @ 145d741e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::
FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>,FRDGEventName_const_&>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0,FRDGEventName>_const_*,std::tuple<FRDGEventName_const_&>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TRHIBreadcrumbDesc<0,FRDGEventName> *pTVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  FRHIBreadcrumbAllocator *pFVar6;
  FRHIBreadcrumbNode *pFVar7;
  FRHIBreadcrumbNode **_Dest;
  FMetadataSerializer local_38;
  
  pFVar6 = FRDGScopeState::GetBreadcrumbAllocator(param_1);
  pTVar1 = (param_2->_Myfirst)._Val;
  if (pTVar1 == (TRHIBreadcrumbDesc<0,FRDGEventName> *)0x0) {
    pFVar7 = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    plVar2 = (longlong *)param_2->_padding_;
    pFVar7 = FMemStackBase::Alloc(&pFVar6->Inner,0x158,8);
    pFVar7->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar7->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar7->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar7->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar7->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar7->Allocator = pFVar6;
    pFVar7->Data = (FRHIBreadcrumbData *)pTVar1;
    pFVar7->TraceCpuSpecId = 0;
    pFVar7->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar4 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar7->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar7->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar7->ID = uVar4;
    if ((int)plVar2[2] < 2) {
      _Dest = (FRHIBreadcrumbNode **)*plVar2;
    }
    else {
      _Dest = &pFVar7[1].Parent;
      wcsncpy((wchar_t *)_Dest,(wchar_t *)plVar2[1],0x7f);
      *(undefined2 *)((longlong)&pFVar7[4].Allocator + 6) = 0;
    }
    pFVar7[1]._padding_ = (longlong)_Dest;
    pFVar7->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A_VFRDGEventName___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar7[4].Data = (FRHIBreadcrumbData *)pTVar1;
    if ((pTVar1->TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
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
    aVar5 = pTVar1->TraceCpuSpecId;
    pFVar7->TraceCpuSpecId = (uint)aVar5;
    if (aVar5 != (atomic<unsigned_int>)0x0) {
      UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_38);
      UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
                (&local_38,(wchar_t *)pFVar7[1]._padding_);
      uVar4 = FCpuProfilerTrace::OutputMetadata(pFVar7->TraceCpuSpecId,&local_38.CborData);
      pFVar7->TraceCpuMetadataId = uVar4;
      UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_38);
    }
  }
  FRDGScope_RHI(this,param_1,pFVar7);
  return this;
}

