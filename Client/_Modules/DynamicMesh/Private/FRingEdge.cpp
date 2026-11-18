// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator[] @ 14c7b81a0

int __thiscall
SelectiveTessellateLocals::FConcentricRingsTessellationPattern::FRingEdge::operator[]
          (FRingEdge *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (((param_1 < 0) || (this->VertNum <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < VertNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                         ,0x1eb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (param_1 == 0) {
    return this->V1;
  }
  iVar3 = this->VertNum;
  if (param_1 != iVar3 + -1) {
    uVar5 = param_1 - 1;
    if (this->bReverse != false) {
      uVar5 = ~uVar5 + (this->Inner).ArrayNum;
    }
    if ((((int)uVar5 < 0) || (iVar3 <= (int)uVar5)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActualIndex >= 0 && ActualIndex < VertNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SelectiveTessellate.cpp"
                           ,0x1f9,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    piVar4 = TArrayView<int,int>::operator[](&this->Inner,uVar5);
    return *piVar4;
  }
  return this->V2;
}

