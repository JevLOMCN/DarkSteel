// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// ~FPendingWidgetRegistration @ 14a7b1690

void __thiscall
UCommonUIActionRouterBase::FPendingWidgetRegistration::~FPendingWidgetRegistration
          (FPendingWidgetRegistration *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FInputPreprocessorRegistration,int>
            ((FInputPreprocessorRegistration *)(this->InputPreProcessors).AllocatorInstance.Data,
             (this->InputPreProcessors).ArrayNum);
  pFVar1 = (this->InputPreProcessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UCommonUIActionRouterBase::FPendingWidgetRegistration::FPreprocessorRegistration,int>
            ((FPreprocessorRegistration *)(this->Preprocessors).AllocatorInstance.Data,
             (this->Preprocessors).ArrayNum);
  pFVar1 = (this->Preprocessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FUIActionBindingHandle,int>
            ((FUIActionBindingHandle *)(this->ActionBindings).AllocatorInstance.Data,
             (this->ActionBindings).ArrayNum);
  pFVar1 = (this->ActionBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

