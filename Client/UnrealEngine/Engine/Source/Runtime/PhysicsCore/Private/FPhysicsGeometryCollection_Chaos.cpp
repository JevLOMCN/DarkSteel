// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 11

// FPhysicsGeometryCollection_Chaos @ 1441a0390

FPhysicsGeometryCollection_Chaos * __thiscall
FPhysicsGeometryCollection_Chaos::FPhysicsGeometryCollection_Chaos
          (FPhysicsGeometryCollection_Chaos *this,FImplicitObject *param_1)

{
  this->Geom = param_1;
  return this;
}

// FPhysicsGeometryCollection_Chaos @ 1441a03a0

FPhysicsGeometryCollection_Chaos * __thiscall
FPhysicsGeometryCollection_Chaos::FPhysicsGeometryCollection_Chaos
          (FPhysicsGeometryCollection_Chaos *this,FPhysicsShapeReference_Chaos *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPhysicsGeometryCollection_Chaos *pFVar3;
  
  if (param_1->Shape == (FPerShapeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\ChaosEngineInterface.cpp"
                       ,0x3c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPhysicsGeometryCollection_Chaos *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->Geom = (param_1->Shape->Geometry).Reference;
  return this;
}

// FPhysicsGeometryCollection_Chaos @ 1441a0400

FPhysicsGeometryCollection_Chaos * __thiscall
FPhysicsGeometryCollection_Chaos::FPhysicsGeometryCollection_Chaos
          (FPhysicsGeometryCollection_Chaos *this,FPhysicsGeometryCollection_Chaos *param_1)

{
  this->Geom = param_1->Geom;
  return this;
}

// ~FPhysicsGeometryCollection_Chaos @ 1441a1a00

void __thiscall
FPhysicsGeometryCollection_Chaos::~FPhysicsGeometryCollection_Chaos
          (FPhysicsGeometryCollection_Chaos *this)

{
  return;
}

// GetBoxGeometry @ 1441ad6f0

TBox<double,3> * __thiscall
FPhysicsGeometryCollection_Chaos::GetBoxGeometry(FPhysicsGeometryCollection_Chaos *this)

{
  TBox<double,3> *pTVar1;
  
  pTVar1 = GetInnerGeometryChecked<Chaos::TBox<double,3>_>(this->Geom);
  return pTVar1;
}

// GetCapsuleGeometry @ 1441ad700

FCapsule * __thiscall
FPhysicsGeometryCollection_Chaos::GetCapsuleGeometry(FPhysicsGeometryCollection_Chaos *this)

{
  FCapsule *pFVar1;
  
  pFVar1 = GetInnerGeometryChecked<Chaos::FCapsule>(this->Geom);
  return pFVar1;
}

// GetConvexGeometry @ 1441adbf0

FConvex * __thiscall
FPhysicsGeometryCollection_Chaos::GetConvexGeometry(FPhysicsGeometryCollection_Chaos *this)

{
  FConvex *pFVar1;
  
  pFVar1 = GetInnerGeometryChecked<Chaos::FConvex>(this->Geom);
  return pFVar1;
}

// GetGeometry @ 1441ae1f0

FImplicitObject * __thiscall
FPhysicsGeometryCollection_Chaos::GetGeometry(FPhysicsGeometryCollection_Chaos *this)

{
  return this->Geom;
}

// GetSphereGeometry @ 1441b02f0

TSphere<double,3> * __thiscall
FPhysicsGeometryCollection_Chaos::GetSphereGeometry(FPhysicsGeometryCollection_Chaos *this)

{
  TSphere<double,3> *pTVar1;
  
  pTVar1 = GetInnerGeometryChecked<Chaos::TSphere<double,3>_>(this->Geom);
  return pTVar1;
}

// GetTriMeshGeometry @ 1441b0420

FTriangleMeshImplicitObject * __thiscall
FPhysicsGeometryCollection_Chaos::GetTriMeshGeometry(FPhysicsGeometryCollection_Chaos *this)

{
  FTriangleMeshImplicitObject *pFVar1;
  
  pFVar1 = GetInnerGeometryChecked<Chaos::FTriangleMeshImplicitObject>(this->Geom);
  return pFVar1;
}

// GetType @ 1441b0430

ECollisionShapeType __thiscall
FPhysicsGeometryCollection_Chaos::GetType(FPhysicsGeometryCollection_Chaos *this)

{
  ECollisionShapeType EVar1;
  
  EVar1 = ChaosInterface::GetImplicitType(this->Geom);
  return EVar1;
}

