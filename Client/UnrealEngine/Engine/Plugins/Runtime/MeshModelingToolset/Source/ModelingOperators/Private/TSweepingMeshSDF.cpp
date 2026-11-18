// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// <lambda_invoker_cdecl> @ 14c940f50

bool __cdecl
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::<lambda_44_>::<lambda_invoker_cdecl>
          (void)

{
  return false;
}

// ~TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> @ 14c949370

void __thiscall
UE::Geometry::TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>::
~TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1>
          (TSweepingMeshSDF<UE::Geometry::FDynamicMesh3,1> *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->IntersectionsGrid).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClosestTriGrid).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Grid).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->CancelF != 0) {
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    plVar3 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c9493ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

