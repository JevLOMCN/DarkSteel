// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkAnimationCore
// Functions: 2

// operator*<FLiveLinkSubjectFrameData> @ 14cfc1df0

FLiveLinkSubjectFrameData * __thiscall
TSharedPtr<FLiveLinkSubjectFrameData,1>::operator*<FLiveLinkSubjectFrameData>
          (TSharedPtr<FLiveLinkSubjectFrameData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLiveLinkSubjectFrameData *pFVar3;
  
  if (this->Object != (FLiveLinkSubjectFrameData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLiveLinkSubjectFrameData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14cfc2bc0

FLiveLinkSubjectFrameData * __thiscall
TSharedPtr<FLiveLinkSubjectFrameData,1>::operator->(TSharedPtr<FLiveLinkSubjectFrameData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLiveLinkSubjectFrameData *pFVar3;
  
  if (this->Object != (FLiveLinkSubjectFrameData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLiveLinkSubjectFrameData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

