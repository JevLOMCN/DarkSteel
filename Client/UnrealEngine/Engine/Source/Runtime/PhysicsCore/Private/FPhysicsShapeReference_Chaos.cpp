// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// GetGeometry @ 1441ae210

FImplicitObject * __thiscall
FPhysicsShapeReference_Chaos::GetGeometry(FPhysicsShapeReference_Chaos *this)

{
  code *pcVar1;
  bool bVar2;
  FImplicitObject *pFVar3;
  
  if (this->Shape != (FPerShapeData *)0x0) {
    return (this->Shape->Geometry).Reference;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                     ,0x3c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FImplicitObject *)(*pcVar1)();
    return pFVar3;
  }
  return (this->Shape->Geometry).Reference;
}

