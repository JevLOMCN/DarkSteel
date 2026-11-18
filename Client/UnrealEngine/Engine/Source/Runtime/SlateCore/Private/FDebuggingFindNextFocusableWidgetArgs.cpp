// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// ~FDebuggingFindNextFocusableWidgetArgs @ 1424ec670

void __thiscall
FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::~FDebuggingFindNextFocusableWidgetArgs
          (FDebuggingFindNextFocusableWidgetArgs *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult,int>
            ((FWidgetResult *)(this->IntermediateResults).AllocatorInstance.Data,
             (this->IntermediateResults).ArrayNum);
  pFVar1 = (this->IntermediateResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RuleWidget).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->NavigationReply).FocusDelegate);
  pvVar2 = *(void **)&(this->NavigationReply).FocusDelegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->NavigationReply).FocusDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationReply).FocusRecipient.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationReply).EventHandler.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StartingWidget).Widget.SharedReferenceCount.ReferenceController);
  return;
}

