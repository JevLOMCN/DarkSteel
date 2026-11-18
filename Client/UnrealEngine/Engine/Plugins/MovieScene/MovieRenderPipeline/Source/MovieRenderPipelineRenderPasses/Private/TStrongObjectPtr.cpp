// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// operator-> @ 14ddcc7d0

UMovieGraphEvaluatedConfig * __thiscall
TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
::operator->(TStrongObjectPtr<UMovieGraphEvaluatedConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
             *this)

{
  code *pcVar1;
  bool bVar2;
  UMovieGraphEvaluatedConfig *pUVar3;
  
  if (this->Object != (UObject *)0x0) {
    return (UMovieGraphEvaluatedConfig *)this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMovieGraphEvaluatedConfig *)(*pcVar1)();
    return pUVar3;
  }
  return (UMovieGraphEvaluatedConfig *)this->Object;
}

