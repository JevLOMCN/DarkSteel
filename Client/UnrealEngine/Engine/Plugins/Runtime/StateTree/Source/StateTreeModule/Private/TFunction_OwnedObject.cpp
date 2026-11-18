// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 14

// CloneToEmptyStorage @ 14d4b7cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::EnterState'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::EnterState'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d4b7d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::Tick'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::Tick'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d4ba8e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::EnterState'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d4ba8e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d4ba8f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::Tick'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d4ba8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d4bd390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::EnterState'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d4bd3a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UStateTreeTaskBlueprintBase::Tick'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// ~TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0> @ 14d52ce00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFStructProperty__PEAE1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0> @ 14d52ce20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXPEAE_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 14d52db00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEBVFStructProperty__PEAE1_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FStructProperty_ptr_uchar_ptr_uchar_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d52db20

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AXPEAE_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_uchar_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d52ea50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d52ea55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14d52ea60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d52ea65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 14d52f990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FStructProperty_const_&,unsigned_char_*,unsigned_char_*),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14d52f9a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_char_*),0,0> *this)

{
  return &this->Obj;
}

