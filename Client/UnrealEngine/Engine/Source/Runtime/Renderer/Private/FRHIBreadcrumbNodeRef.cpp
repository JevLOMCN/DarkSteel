// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRHIBreadcrumbNodeRef @ 145477900

FRHIBreadcrumbNodeRef * __thiscall
FRHIBreadcrumbNodeRef::FRHIBreadcrumbNodeRef
          (FRHIBreadcrumbNodeRef *this,FRHIBreadcrumbNode *param_1)

{
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar1;
  FRHIBreadcrumbAllocator *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_18;
  
  (this->AllocatorRef).Object = (FRHIBreadcrumbAllocator *)0x0;
  (this->AllocatorRef).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->Node = param_1;
  if ((param_1 != (FRHIBreadcrumbNode *)0x0) && (param_1 != FRHIBreadcrumbNode::Sentinel)) {
    pTVar1 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                       ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)param_1->Allocator,&local_18);
    local_20.ReferenceController = (pTVar1->SharedReferenceCount).ReferenceController;
    local_28 = pTVar1->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->AllocatorRef != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_28) {
      (this->AllocatorRef).Object = local_28;
      local_28 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AllocatorRef).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return this;
}

