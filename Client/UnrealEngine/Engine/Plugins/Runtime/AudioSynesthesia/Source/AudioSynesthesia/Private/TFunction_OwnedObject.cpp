// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 3

// CloneToEmptyStorage @ 14d8201f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d820b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d820b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d821650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UOnsetNRTSettings::GetSettings'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

