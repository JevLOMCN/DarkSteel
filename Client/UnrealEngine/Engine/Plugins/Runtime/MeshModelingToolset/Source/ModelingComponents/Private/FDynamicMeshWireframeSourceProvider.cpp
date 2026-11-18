// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// AccessMesh @ 14ca77740

void __thiscall
FDynamicMeshWireframeSourceProvider::AccessMesh
          (FDynamicMeshWireframeSourceProvider *this,
          TFunctionRef<void___cdecl(IMeshWireframeSource_const_&)> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  TFunctionRef<void___cdecl(IMeshWireframeSource_const_&)> *local_res8;
  code *local_18;
  TFunctionRef<void___cdecl(IMeshWireframeSource_const_&)> **local_10;
  
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FDynamicMeshWireframeSourceProvider::AccessMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
             ::Call;
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)&this->MeshAccessFunction);
  plVar1 = *(longlong **)&(this->MeshAccessFunction).field_0x28;
  pcVar2 = *(code **)&this->MeshAccessFunction;
  plVar4 = (longlong *)&(this->MeshAccessFunction).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_18);
  return;
}

