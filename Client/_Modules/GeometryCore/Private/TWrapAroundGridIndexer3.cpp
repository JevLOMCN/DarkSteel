// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ToGrid @ 1435c86f0

FVector3i * __thiscall
UE::Geometry::TWrapAroundGridIndexer3<double>::ToGrid
          (TWrapAroundGridIndexer3<double> *this,FVector3i *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = __real_41f0000000000000;
  dVar2 = FGenericPlatformMath::Fmod
                    ((param_1->field0_0x0)._s_0.Z / this->CellSize,__real_41f0000000000000);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + dVar1;
  }
  dVar3 = FGenericPlatformMath::Fmod((param_1->field0_0x0)._s_0.Y / this->CellSize,dVar1);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar1;
  }
  dVar4 = FGenericPlatformMath::Fmod((param_1->field0_0x0)._s_0.X / this->CellSize,dVar1);
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (int)(longlong)dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (int)(longlong)dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (int)(longlong)dVar2;
  return __return_storage_ptr__;
}

