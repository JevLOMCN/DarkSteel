// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// operator<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName> @ 142c89440

TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName> * __thiscall
TPairInitializer<UScriptStruct_const_*_&&,FName_&>::
operator<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>
          (TPairInitializer<UScriptStruct_const_*_&&,FName_&> *this,
          TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName> *__return_storage_ptr__)

{
  FName *pFVar1;
  UScriptStruct *pUVar2;
  uint uVar3;
  UScriptStruct *local_res8;
  
  pFVar1 = this->Value;
  pUVar2 = *this->Key;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)__return_storage_ptr__,(FObjectPtr)&local_res8);
  uVar3 = pFVar1->Number;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar3;
  return __return_storage_ptr__;
}

