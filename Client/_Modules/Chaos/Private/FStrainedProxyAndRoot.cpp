// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// operator== @ 143e00090

bool __thiscall
Chaos::FStrainedProxyAndRoot::operator==(FStrainedProxyAndRoot *this,FStrainedProxyAndRoot *param_1)

{
  if ((this->Proxy == param_1->Proxy) && (this->ParticleHandle == param_1->ParticleHandle)) {
    return true;
  }
  return false;
}

// CastToGeometryCollectionProxy @ 143e149f0

FGeometryCollectionPhysicsProxy * __thiscall
Chaos::FStrainedProxyAndRoot::CastToGeometryCollectionProxy(FStrainedProxyAndRoot *this)

{
  FGeometryCollectionPhysicsProxy *pFVar1;
  FGeometryCollectionPhysicsProxy *pFVar2;
  
  pFVar1 = this->Proxy;
  pFVar2 = (FGeometryCollectionPhysicsProxy *)0x0;
  if ((pFVar1 != (FGeometryCollectionPhysicsProxy *)0x0) && (*(int *)&pFVar1->field_0x1c == 2)) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// IsPartialDestruction @ 143e34c80

bool __thiscall Chaos::FStrainedProxyAndRoot::IsPartialDestruction(FStrainedProxyAndRoot *this)

{
  return this->bPartialDestruction;
}

