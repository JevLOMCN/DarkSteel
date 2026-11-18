// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 4

// ~TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0> @ 148ba00e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVFProperty__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 148ba2e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NPEBVFProperty__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_FProperty_ptr_FProperty_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 148ba6780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148ba6785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 148ba83e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0> *this)

{
  return &this->Obj;
}

