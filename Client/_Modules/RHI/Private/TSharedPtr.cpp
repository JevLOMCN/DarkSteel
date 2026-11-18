// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// operator-> @ 145c4b700

IAsyncReadFileHandle * __thiscall
TSharedPtr<IAsyncReadFileHandle,1>::operator->(TSharedPtr<IAsyncReadFileHandle,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAsyncReadFileHandle *pIVar3;
  
  if (this->Object != (IAsyncReadFileHandle *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAsyncReadFileHandle *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// ~TSharedPtr<FPipelineStateAsync::FCompletionState,1> @ 145c8a0b0

void __thiscall
TSharedPtr<FPipelineStateAsync::FCompletionState,1>::
~TSharedPtr<FPipelineStateAsync::FCompletionState,1>
          (TSharedPtr<FPipelineStateAsync::FCompletionState,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator-> @ 145c8bdd0

FCompletionState * __thiscall
TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
          (TSharedPtr<FPipelineStateAsync::FCompletionState,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCompletionState *pFVar3;
  
  if (this->Object != (FCompletionState *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCompletionState *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

