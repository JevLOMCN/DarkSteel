// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// CloneToEmptyStorage @ 14641f520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InterpolativeWeightFunction'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`InterpolativeWeightFunction'::`2'::<lambda_1>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// Destroy @ 146422e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InterpolativeWeightFunction'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 146447540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`InterpolativeWeightFunction'::__l2::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

