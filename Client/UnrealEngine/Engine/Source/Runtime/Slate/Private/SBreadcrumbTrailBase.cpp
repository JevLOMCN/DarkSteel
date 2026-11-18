// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// ScrollToEnd @ 142a06840

void __thiscall SBreadcrumbTrailBase::ScrollToEnd(SBreadcrumbTrailBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->CrumbBox).Object == (SScrollBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SScrollBox::ScrollToEnd((this->CrumbBox).Object);
  return;
}

// ScrollToStart @ 142a06890

void __thiscall SBreadcrumbTrailBase::ScrollToStart(SBreadcrumbTrailBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->CrumbBox).Object == (SScrollBox *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SScrollBox::ScrollToStart((this->CrumbBox).Object);
  return;
}

