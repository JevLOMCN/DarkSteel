// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_> @ 148de9250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FRDGScope_RHI * __thiscall
FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_>
          (FRDGScope_RHI *this,FRDGScopeState *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<20>_const_*,std::tuple<>_>
          *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar1;
  TRHIBreadcrumbDesc<20> *pTVar2;
  FRHIBreadcrumbNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  FRHIBreadcrumbAllocator *pFVar8;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar9;
  FRHIBreadcrumbNode *pFVar10;
  FRDGScope_RHI *pFVar11;
  FRHIBreadcrumbAllocator *local_58;
  FSharedReferencer<1> local_50;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_48;
  FMetadataSerializer local_38;
  
  if ((param_1->ScopeState).bImmediate == false) {
    pTVar1 = &param_1->LocalBreadcrumbAllocator;
    if (pTVar1->Object == (FRHIBreadcrumbAllocator *)0x0) {
      pTVar9 = MakeShared<FRHIBreadcrumbAllocator,1>(&local_48);
      local_50.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
      local_58 = pTVar9->Object;
      if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_58) {
        pTVar1->Object = local_58;
        local_58 = (FRHIBreadcrumbAllocator *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_1->LocalBreadcrumbAllocator).SharedReferenceCount,&local_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if (pTVar1->Object == (FRHIBreadcrumbAllocator *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FRDGScope_RHI *)(*pcVar4)();
          return pFVar11;
        }
      }
    }
    pFVar8 = pTVar1->Object;
  }
  else {
    pFVar8 = FRHIComputeCommandList::GetBreadcrumbAllocator
                       ((FRHIComputeCommandList *)param_1->RHICmdList);
  }
  pTVar2 = (param_2->_Myfirst)._Val;
  if (pTVar2 == (TRHIBreadcrumbDesc<20> *)0x0) {
    this->Node = (FRHIBreadcrumbNode *)0x0;
  }
  else {
    pFVar10 = FMemStackBase::Alloc(&pFVar8->Inner,0x50,8);
    pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar10->Allocator = pFVar8;
    pFVar10->Data = (FRHIBreadcrumbData *)pTVar2;
    pFVar10->TraceCpuSpecId = 0;
    pFVar10->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar10->ID = uVar6;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0BE___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar10[1]._padding_ = (longlong)pTVar2;
    if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar5) {
        lpCriticalSection = &pTVar2->Cs;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (pTVar2->TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar7 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)pTVar2->_padding_,(char *)pTVar2->_padding_,
                             (uint)pTVar2->_padding_);
          LOCK();
          pTVar2->TraceCpuSpecId = aVar7;
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
    pFVar10->TraceCpuSpecId = (uint)pTVar2->TraceCpuSpecId;
    this->Node = pFVar10;
    pFVar3 = *param_1->CurrentBreadcrumbRef;
    if ((pFVar10->Parent != (FRHIBreadcrumbNode *)0x0) &&
       (pFVar10->Parent != FRHIBreadcrumbNode::Sentinel)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                         ,0x282,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FRDGScope_RHI *)(*pcVar4)();
        return pFVar11;
      }
    }
    pFVar10->Parent = pFVar3;
    if ((pFVar3 != (FRHIBreadcrumbNode *)0x0) && (pFVar3 != FRHIBreadcrumbNode::Sentinel)) {
      if (pFVar3->Allocator != pFVar10->Allocator) {
        FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar10->Allocator->Parents,pFVar3->Allocator);
      }
    }
    *param_1->CurrentBreadcrumbRef = pFVar10;
    if (pFVar10->TraceCpuSpecId != 0) {
      if (pFVar10->TraceCpuMetadataId == 0) {
        FCpuProfilerTrace::OutputBeginEvent(pFVar10->TraceCpuSpecId);
      }
      else {
        FCpuProfilerTrace::OutputBeginEventWithMetadata(pFVar10->TraceCpuMetadataId);
      }
    }
    if ((param_1->ScopeState).bImmediate == false) {
      FRHIBreadcrumbList::Append(&param_1->LocalBreadcrumbList,pFVar10);
    }
  }
  return this;
}

