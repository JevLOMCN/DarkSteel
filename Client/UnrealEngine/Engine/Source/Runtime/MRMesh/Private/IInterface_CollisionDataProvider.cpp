// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 8

// ~IInterface_CollisionDataProvider @ 146c66d80

void __thiscall
IInterface_CollisionDataProvider::~IInterface_CollisionDataProvider
          (IInterface_CollisionDataProvider *this)

{
  *this = (IInterface_CollisionDataProvider)&___7IInterface_CollisionDataProvider__6B_;
  return;
}

// ContainsPhysicsTriMeshData @ 146c690c0

bool __thiscall
IInterface_CollisionDataProvider::ContainsPhysicsTriMeshData
          (IInterface_CollisionDataProvider *this,bool param_1)

{
  return false;
}

// GetMeshId @ 146c6ba20

void __thiscall
IInterface_CollisionDataProvider::GetMeshId(IInterface_CollisionDataProvider *this,FString *param_1)

{
  return;
}

// GetPhysicsTriMeshData @ 146c6ba70

bool __thiscall
IInterface_CollisionDataProvider::GetPhysicsTriMeshData
          (IInterface_CollisionDataProvider *this,FTriMeshCollisionData *param_1,bool param_2)

{
  return false;
}

// GetTriMeshSizeEstimates @ 146c6c170

bool __thiscall
IInterface_CollisionDataProvider::GetTriMeshSizeEstimates
          (IInterface_CollisionDataProvider *this,FTriMeshCollisionDataEstimates *param_1,
          bool param_2)

{
  return false;
}

// PollAsyncPhysicsTriMeshData @ 146c6c9a0

bool __thiscall
IInterface_CollisionDataProvider::PollAsyncPhysicsTriMeshData
          (IInterface_CollisionDataProvider *this,bool param_1)

{
  return true;
}

// WantsNegXTriMesh @ 146c73410

bool __thiscall
IInterface_CollisionDataProvider::WantsNegXTriMesh(IInterface_CollisionDataProvider *this)

{
  return false;
}

// _getUObject @ 146c73620

UObject * __thiscall
IInterface_CollisionDataProvider::_getUObject(IInterface_CollisionDataProvider *this)

{
  return (UObject *)0x0;
}

