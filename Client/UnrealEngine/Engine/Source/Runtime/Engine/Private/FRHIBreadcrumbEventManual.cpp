// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>,FName_const_&> @ 147d5e130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIBreadcrumbEventManual * __thiscall
FRHIBreadcrumbEventManual::
FRHIBreadcrumbEventManual<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>,FName_const_&>
          (FRHIBreadcrumbEventManual *this,FRHIComputeCommandList *param_1,
          tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>_const_*,std::tuple<FName_const_&>_>
          *param_2)

{
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar1;
  byte bVar2;
  FRHIBreadcrumbNode *pFVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  FRHIBreadcrumbAllocator *this_00;
  FRHIBreadcrumbNode *pFVar7;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar8;
  FRHIBreadcrumbEventManual *pFVar9;
  FRHIBreadcrumbAllocator *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_18;
  
  this_00 = FRHIComputeCommandList::GetBreadcrumbAllocator(param_1);
  pFVar7 = FRHIBreadcrumbAllocator::
           AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23,FName>,FName_const_&>
                     (this_00,param_2);
  (this->Node).Node = pFVar7;
  (this->Node).AllocatorRef.Object = (FRHIBreadcrumbAllocator *)0x0;
  pTVar1 = &(this->Node).AllocatorRef;
  (this->Node).AllocatorRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((pFVar7 != (FRHIBreadcrumbNode *)0x0) && (pFVar7 != FRHIBreadcrumbNode::Sentinel)) {
    pTVar8 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                       ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)pFVar7->Allocator,&local_18);
    local_20.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_28 = pTVar8->Object;
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
                (&(this->Node).AllocatorRef.SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  bVar2 = param_1->field_0x6a;
  if ((bVar2 != 0) && ((bVar2 & bVar2 - 1) != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRHIBreadcrumbEventManual *)(*pcVar4)();
      return pFVar9;
    }
  }
  this->Pipeline = param_1->field_0x6a;
  DVar6 = GetCurrentThreadId();
  this->ThreadId = DVar6;
  if (this->Pipeline == None) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline != ERHIPipeline::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0xef,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRHIBreadcrumbEventManual *)(*pcVar4)();
      return pFVar9;
    }
  }
  pFVar7 = (this->Node).Node;
  pFVar3 = *(FRHIBreadcrumbNode **)&param_1->field_0x2f8;
  if ((pFVar7->Parent != (FRHIBreadcrumbNode *)0x0) &&
     (pFVar7->Parent != FRHIBreadcrumbNode::Sentinel)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x282,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRHIBreadcrumbEventManual *)(*pcVar4)();
      return pFVar9;
    }
  }
  pFVar7->Parent = pFVar3;
  if ((pFVar3 != (FRHIBreadcrumbNode *)0x0) && (pFVar3 != FRHIBreadcrumbNode::Sentinel)) {
    if (pFVar3->Allocator != pFVar7->Allocator) {
      FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar7->Allocator->Parents,pFVar3->Allocator);
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbCPU(param_1,(this->Node).Node,true);
  bVar2 = param_1->field_0x6a;
  if ((bVar2 != 0) && ((bVar2 & bVar2 - 1) != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FRHIBreadcrumbEventManual *)(*pcVar4)();
      return pFVar9;
    }
  }
  FRHIComputeCommandList::BeginBreadcrumbGPU(param_1,(this->Node).Node,param_1->field_0x6a);
  return this;
}

