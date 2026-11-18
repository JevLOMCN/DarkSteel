// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 1

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_> @ 14eb02080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FRHICommandListImmediate *pFVar1;
  TRHIBreadcrumbDesc<36> *pTVar2;
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
    if (pTVar12->Object != (FRHIBreadcrumbAllocator *)0x0) goto LAB_14eb021a7;
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
    if (*(longlong *)pTVar12 != 0) goto LAB_14eb021a7;
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
LAB_14eb021a7:
  pTVar2 = (param_2->_Myfirst)._Val;
  pFVar3 = pTVar12->Object;
  if (pTVar2 == (TRHIBreadcrumbDesc<36> *)0x0) {
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
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0CE___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
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

