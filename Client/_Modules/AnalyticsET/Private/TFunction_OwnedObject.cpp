// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsET
// Functions: 10

// ~TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0> @ 143193a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NPEBIAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 143197540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_NPEBIAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_bool_uint_ptr_int_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143197560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::__l11::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 143197580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::`9'::<lambda_2>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// Destroy @ 143197fd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143197fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 143197fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::__l11::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143197fe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 143197ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14319d2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_const_*,int_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14319d2e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AnalyticsSessionUtils::ReleaseOrphanGroupsOwnership'::__l11::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14319d2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsSessionSummaryManager::AggregateSummaries'::__l9::<lambda_2>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

