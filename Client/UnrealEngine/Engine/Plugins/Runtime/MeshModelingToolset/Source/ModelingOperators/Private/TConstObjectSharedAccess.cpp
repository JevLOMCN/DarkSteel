// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// AccessSharedObject @ 14c95c020

bool __thiscall
UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::AccessSharedObject
          (TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3> *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&this->ObjectLock);
  if ((this->ObjectRawPtr == (FDynamicMesh3 *)0x0) &&
     ((this->ObjectSharedPtr).Object == (FDynamicMesh3 *)0x0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ObjectLock);
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&this->EmptyObject);
    return false;
  }
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->ObjectLock);
  return true;
}

