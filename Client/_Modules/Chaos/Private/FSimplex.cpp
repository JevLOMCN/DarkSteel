// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FSimplex @ 14388bd30

FSimplex * __thiscall Chaos::FSimplex::FSimplex(FSimplex *this,initializer_list<int> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FSimplex *pFVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = (int)((longlong)param_1->_Last - (longlong)param_1->_First >> 2);
  this->NumVerts = iVar7;
  if ((4 < iVar7) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumVerts <= 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Simplex.h"
                         ,0x5d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSimplex *)(*pcVar2)();
    return pFVar4;
  }
  piVar1 = param_1->_Last;
  iVar7 = 0;
  pFVar4 = this;
  for (piVar6 = param_1->_First; piVar6 != piVar1; piVar6 = piVar6 + 1) {
    pFVar4 = (FSimplex *)pFVar4->Idxs;
    *(int *)pFVar4 = *piVar6;
    iVar7 = iVar7 + 1;
  }
  lVar5 = (longlong)iVar7;
  if (lVar5 < 4) {
    memset(this->Idxs + lVar5,0,(4 - lVar5) * 4);
  }
  return this;
}

