// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// CloneToEmptyStorage @ 1444b84f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1444b8510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1444b8530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::__l10::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::`10'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 1444bba40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001444bba45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1444bba50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001444bba55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1444bba60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::__l10::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1444bf920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBPM'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1444bf930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetBeatDivision'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1444bf940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FEventQuantizer::SetQuantizationSettings'::__l10::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

