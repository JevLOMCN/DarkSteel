// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 3

// CloneToEmptyStorage @ 14a032630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)((longlong)this + 0x18);
  *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)((longlong)this + 0x1c);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)(puVar1 + 4),
             (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)((longlong)this + 0x20));
  return puVar1 + 1;
}

// Destroy @ 14a032be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14a033ba0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`AWN_PhasingVolume::PlayCurveByTimer'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

