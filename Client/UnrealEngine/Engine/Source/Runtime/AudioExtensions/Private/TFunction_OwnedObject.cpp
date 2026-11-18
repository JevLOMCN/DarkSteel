// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 14

// ~TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0> @ 144530510

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXAEAM_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0> @ 144530530

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXAEAMM_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 1445325a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AXAEAM_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_float_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1445325c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AXAEAMM_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_float_ptr_float **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1445325e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144532600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::`2'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 144532e20

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144532e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 144532e30

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144532e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 144532e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144532e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 144532e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::__l2::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144532e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144533a00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(float_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 144533a10

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(float_&,float),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 144533a20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ISoundfieldEndpoint::StartRunningCallback'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 144533a30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`IAudioEndpoint::StartRunningAsyncCallback'::__l2::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

