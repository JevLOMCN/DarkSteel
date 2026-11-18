// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 3

// CloneToEmptyStorage @ 14de755c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14de76e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014de76e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14de7a450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FStreamlineViewExtension::FStreamlineViewExtension'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

