// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// ~ISplineInterface @ 143569460

void __thiscall UE::Geometry::Spline::ISplineInterface::~ISplineInterface(ISplineInterface *this)

{
  return;
}

// Serialize @ 1435c1730

bool __thiscall
UE::Geometry::Spline::ISplineInterface::Serialize(ISplineInterface *this,FArchive *param_1)

{
  longlong *plVar1;
  uint local_res10 [2];
  uint local_res18 [2];
  
  local_res10[0] = 1;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_1->field_0x28 & 4) != 0) {
    local_res18[0] = (**(code **)((longlong)*this + 0x48))(this);
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,local_res18);
  return true;
}

