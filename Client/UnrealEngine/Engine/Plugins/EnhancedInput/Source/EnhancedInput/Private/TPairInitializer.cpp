// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 1

// operator<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>_TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue> @ 14a6bc240

TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue> * __thiscall
TPairInitializer<UInputAction_const_*_&,FInputActionValue_&>::
operator<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>_TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>
          (TPairInitializer<UInputAction_const_*_&,FInputActionValue_&> *this,
          TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>
          *__return_storage_ptr__)

{
  FInputActionValue *pFVar1;
  UInputAction *pUVar2;
  double dVar3;
  EInputActionValueType EVar4;
  undefined7 uVar5;
  UInputAction *local_res8;
  
  pFVar1 = this->Value;
  pUVar2 = *this->Key;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  dVar3 = (pFVar1->Value).field0_0x0._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x8 = (pFVar1->Value).field0_0x0._s_0.X;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar3;
  EVar4 = pFVar1->ValueType;
  uVar5 = *(undefined7 *)&pFVar1->field_0x19;
  *(double *)&__return_storage_ptr__->field_0x18 = (pFVar1->Value).field0_0x0._s_0.Z;
  __return_storage_ptr__->field_0x20 = EVar4;
  *(undefined7 *)&__return_storage_ptr__->field_0x21 = uVar5;
  return __return_storage_ptr__;
}

