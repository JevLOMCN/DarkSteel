// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~TPromise<bool> @ 14ddc9b40

void __thiscall TPromise<bool>::~TPromise<bool>(TPromise<bool> *this)

{
  TFutureState<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  pTVar1 = (this->State).Object;
  if ((pTVar1 != (TFutureState<bool> *)0x0) && (pTVar1->field_0x68 == '\0')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->State).SharedReferenceCount.ReferenceController);
  return;
}

