// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetBreadcrumbAllocator @ 14475c180

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHIBreadcrumbAllocator * __thiscall FRDGScopeState::GetBreadcrumbAllocator(FRDGScopeState *this)

{
  FRHICommandListImmediate *pFVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar6;
  FRHIBreadcrumbAllocator *local_48;
  FSharedReferencer<1> local_40;
  FRHIBreadcrumbAllocator *local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_28;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_18;
  
  if ((this->ScopeState).bImmediate == false) {
    pTVar6 = &this->LocalBreadcrumbAllocator;
    if (pTVar6->Object != (FRHIBreadcrumbAllocator *)0x0) goto LAB_14475c296;
    pTVar4 = MakeShared<FRHIBreadcrumbAllocator,1>(&local_18);
    local_30.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_38 = pTVar4->Object;
    if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar6 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_38) {
      pTVar6->Object = local_38;
      local_38 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LocalBreadcrumbAllocator).SharedReferenceCount,&local_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.ReferenceController);
    local_28.SharedReferenceCount.ReferenceController =
         local_18.SharedReferenceCount.ReferenceController;
  }
  else {
    pFVar1 = this->RHICmdList;
    pTVar6 = (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&pFVar1->field_0x190;
    if (*(longlong *)pTVar6 != 0) goto LAB_14475c296;
    pTVar4 = MakeShared<FRHIBreadcrumbAllocator,1>(&local_28);
    local_40.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_48 = pTVar4->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar6 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_48) {
      *(FRHIBreadcrumbAllocator **)pTVar6 = local_48;
      local_48 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar1->field_0x198,&local_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar6->Object == (FRHIBreadcrumbAllocator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRHIBreadcrumbAllocator *)(*pcVar2)();
      return pFVar5;
    }
  }
LAB_14475c296:
  return pTVar6->Object;
}

// ShouldAllocScope<FRDGScope_RHI> @ 1447f1fc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FRDGScopeState::ShouldAllocScope<FRDGScope_RHI>
          (FRDGScopeState *this,TOptional<TRDGEventScopeGuard<FRDGScope_RHI>_> *param_1,
          ERDGScopeFlags param_2)

{
  ERDGScopeMode EVar1;
  
  EVar1 = (this->ScopeState).ScopeMode;
  if (EVar1 == Disabled) {
    if ((param_2 & AlwaysEnable) == None) {
      return false;
    }
  }
  else if (EVar1 == TopLevelOnly) {
    return (bool)(~(byte)((this->ScopeState).Mask >> 2) & 1);
  }
  return true;
}

