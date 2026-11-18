// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// ~TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0> @ 1424ec230

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0>::
~TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0>
          (TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 1425048b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AMAEBVFSlateRect___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_float_FSlateRect_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1425048d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// Destroy @ 142507400

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0>::
Destroy(TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142507405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 142507410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14250bae0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0>::
GetAddress(TFunction_OwnedObject<float_(__cdecl*)(FSlateRect_const_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14250baf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNavigationMethodProximity::FindBestWidgetInCell'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

