// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 13

// ~TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0> @ 1443c3ba0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXHPEAUFVertexInstanceID___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1443cbf80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXHPEAUFVertexInstanceID___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_int_FVertexInstanceID_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1443cbfa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`50'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 1443cc000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`54'::<lambda_2>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1443cc020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::`59'::<lambda_4>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// Destroy @ 1443d5a80

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001443d5a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1443d5a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1443d5ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001443d5ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1443d5ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1443d5f00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(int,FVertexInstanceID_*),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 1443d5f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l50::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1443d5f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l54::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1443d5f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshToMeshDescription::Convert_NoSharedInstances'::__l59::<lambda_4>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

