// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator-> @ 14640ddd0

FSkelMeshRefPoseOverride * __thiscall
TSharedPtr<FSkelMeshRefPoseOverride,1>::operator->(TSharedPtr<FSkelMeshRefPoseOverride,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSkelMeshRefPoseOverride *pFVar3;
  
  if (this->Object != (FSkelMeshRefPoseOverride *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSkelMeshRefPoseOverride *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

