// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 2

// operator-> @ 146b01730

ISourceControlState * __thiscall
TSharedPtr<ISourceControlState,1>::operator->(TSharedPtr<ISourceControlState,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ISourceControlState *pIVar3;
  
  if (this->Object != (ISourceControlState *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISourceControlState *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 146b01780

SExpandableArea * __thiscall
TSharedPtr<SExpandableArea,1>::operator->(TSharedPtr<SExpandableArea,1> *this)

{
  code *pcVar1;
  bool bVar2;
  SExpandableArea *pSVar3;
  
  if (this->Object != (SExpandableArea *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pSVar3 = (SExpandableArea *)(*pcVar1)();
    return pSVar3;
  }
  return this->Object;
}

