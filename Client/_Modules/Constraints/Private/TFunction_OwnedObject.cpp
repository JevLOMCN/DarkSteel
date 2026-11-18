// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 32

// ~TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0> @ 14649eff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0>::
~TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0>
          (TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AIPEBVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0> @ 14649f010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>::
~TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>
          (TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6APEAVUTransformableHandle__PEAVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1464a9740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AIPEBVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_uint_UObject_ptr_FName_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a9760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6APEAVUTransformableHandle__PEAVUObject__AEBVFName___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_UTransformableHandle_ptr_UObject_ptr_FName_ptr **)(param_1->InlineAllocation + 8)
       = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a9780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a97a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a97c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a97e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a9800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a9820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a9840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_3>,0,0>::
        _vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1464a9860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::`2'::<lambda_4>,0,0>::
        _vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1464ac7e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0>::Destroy
          (TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac7e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac7f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>::Destroy
          (TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac7f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1464ac870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001464ac875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1464b0f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<unsigned_int_(__cdecl*)(UObject_const_*,FName_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1464b0fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<UTransformableHandle_*_(__cdecl*)(UObject_*,FName_const_&),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 1464b0fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableLookAtConstraint::GetFunction'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1464b0fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1464b0fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableRotationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1464b0fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1464b0ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UTickableTranslationConstraint::GetFunction'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1464b1000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Anim::FAnimationEvaluator::RefreshBoneTransforms'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1464b1010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_3>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1464b1020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FTransformableRegistry::RegisterBaseObjects'::__l2::<lambda_4>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

