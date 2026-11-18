// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 1

// operator-> @ 14d09f5c0

FMovieSceneLiveLinkSource * __thiscall
TSharedPtr<FMovieSceneLiveLinkSource,1>::operator->(TSharedPtr<FMovieSceneLiveLinkSource,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneLiveLinkSource *pFVar3;
  
  if (this->Object != (FMovieSceneLiveLinkSource *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMovieSceneLiveLinkSource *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

