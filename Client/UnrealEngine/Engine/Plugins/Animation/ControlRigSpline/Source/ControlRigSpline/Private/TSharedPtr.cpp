// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 1

// operator-> @ 14dec29d0

FControlRigSplineImpl * __thiscall
TSharedPtr<FControlRigSplineImpl,1>::operator->(TSharedPtr<FControlRigSplineImpl,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FControlRigSplineImpl *pFVar3;
  
  if (this->Object != (FControlRigSplineImpl *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FControlRigSplineImpl *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

