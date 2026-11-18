// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 6

// CloneToEmptyStorage @ 14e8074e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14e807500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_5>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::`2'::<lambda_5>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14e80edb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_4>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e80edb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e80edc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_5>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e80edc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14e813ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e813ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFractureEngineClustering::ConvexityBasedCluster'::__l2::<lambda_5>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

