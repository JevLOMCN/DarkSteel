// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 3

// CloneToEmptyStorage @ 14e93d360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSphereCoveringToMeshDataflowNode::Evaluate'::__l7::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FSphereCoveringToMeshDataflowNode::Evaluate'::`7'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 14e945960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSphereCoveringToMeshDataflowNode::Evaluate'::__l7::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14e951fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSphereCoveringToMeshDataflowNode::Evaluate'::__l7::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

