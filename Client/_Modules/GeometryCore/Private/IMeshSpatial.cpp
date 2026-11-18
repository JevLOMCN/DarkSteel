// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 3

// ~IMeshSpatial @ 14336a7c0

void __thiscall UE::Geometry::IMeshSpatial::~IMeshSpatial(IMeshSpatial *this)

{
  return;
}

// FindNearestHitTriangle @ 14339fcb0

int __thiscall
UE::Geometry::IMeshSpatial::FindNearestHitTriangle
          (IMeshSpatial *this,TRay<double> *param_1,FQueryOptions *param_2)

{
  int local_res8 [6];
  undefined1 local_res20 [8];
  
  (**(code **)((longlong)*this + 0x38))(this,param_1,local_res20,local_res8,param_2);
  return local_res8[0];
}

// FindNearestHitTriangle @ 14339fce0

bool __thiscall
UE::Geometry::IMeshSpatial::FindNearestHitTriangle
          (IMeshSpatial *this,TRay<double> *param_1,double *param_2,int *param_3,
          FQueryOptions *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)((longlong)*this + 0x30))();
  return (bool)uVar1;
}

