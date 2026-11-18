// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 3

// CloneToEmptyStorage @ 14e2ae340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14e2ae840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e2ae845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14e2af360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnimSharingModule::CreateAnimationSharingManager'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

