// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 6

// CloneToEmptyStorage @ 142bd7240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142bd7270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::`54'::<lambda_3>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142bed870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bed875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142bed880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142bed885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 142bfa990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142bfa9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SMessageLogMessageListRow::CreateMessage'::__l54::<lambda_3>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

