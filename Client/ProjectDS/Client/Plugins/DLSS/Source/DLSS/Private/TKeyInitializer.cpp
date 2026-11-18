// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 1

// operator<unsigned_int,FInstancedPropertyBag>_TTuple<unsigned_int,FInstancedPropertyBag> @ 14de1fae0

TTuple<unsigned_int,FInstancedPropertyBag> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,FInstancedPropertyBag>_TTuple<unsigned_int,FInstancedPropertyBag>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,FInstancedPropertyBag> *__return_storage_ptr__)

{
  undefined8 uVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  undefined8 uStack_10;
  
  local_18.DebugPtr = (UScriptStruct *)0x0;
  uStack_10 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_18.ObjectPtr);
  uVar1 = uStack_10;
  *(uint *)__return_storage_ptr__ = *this->Key;
  *(TObjectPtr<UScriptStruct_const_>_u_0 *)&__return_storage_ptr__->field_0x8 =
       (UScriptStruct *)local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar1;
  local_18.DebugPtr = (UScriptStruct *)0x0;
  uStack_10 = 0;
  FInstancedStruct::Reset((FInstancedStruct *)&local_18.ObjectPtr);
  return __return_storage_ptr__;
}

