// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 27

// ~TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> @ 1442689c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUClass__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0> @ 1442689e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVUClass___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 144270fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NPEBVUClass__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_UClass_ptr_UClass_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 144270ff0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NPEBVUClass___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_UClass_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 144276060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144276065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 144276070

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144276075. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// GetAddress @ 144279630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*,UClass_const_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 144279640

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(UClass_const_*),0,0> *this)

{
  return &this->Obj;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0> @ 1442af880

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXI_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 1442b7e30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AXI_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_uint **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1442b7e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1442b7e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__DoTask_FReplicationPollTask_Private_Net_UE__QEBAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1442b7e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1442b7eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1__DoTask_FReplicationPollTask_Private_Net_UE__QEBAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1442b7ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 1442bd950

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bd955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1442bd960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bd965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1442bd970

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bd975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1442bd980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bd985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1442bd990

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bd995. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1442bd9a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001442bd9a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1442c2140

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(unsigned_int),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1442c2150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UObjectReplicationBridge::PrintRelevantObjectsForConnections'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1442c2160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1442c2170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UObjectReplicationBridge::PrintReplicatedObjects'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1442c2180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPollTask::DoTask'::__l2::<lambda_2>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1442c2190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Net::Private::FReplicationPrioritization::UpdatePrioritiesForNewAndDeletedObjects'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

