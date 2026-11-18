// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 8

// GetAddress @ 143123150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 143123160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamRegisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FStateStreamRegisterContext_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 143123180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143123185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 1431231d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 1431231e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamUnregisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FStateStreamUnregisterContext_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 143123200

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143123205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0> @ 143125900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamRegisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0> @ 143125920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamUnregisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

