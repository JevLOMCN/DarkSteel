// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 3

// GetAddress @ 143108860

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`RunAsyncGAIQuery'::__l26::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 143108870

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`RunAsyncGAIQuery'::__l26::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`RunAsyncGAIQuery'::`26'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 143108890

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`RunAsyncGAIQuery'::__l26::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143108895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

