// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 10

// GetAddress @ 148d24a30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0> *this)

{
  return &this->Obj;
}

// CloneToEmptyStorage @ 148d24a40

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AX_NAEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_bool_FString_ptr **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// Destroy @ 148d24a60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d24a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0> @ 148d24f60

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(bool,FString_const_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6AX_NAEBVFString___Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// CloneToEmptyStorage @ 148d25c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::`47'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d25ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 148d265f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d265f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148d26600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 148d27280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWindowsVideoRecordingSystem::FinalizeRecording'::__l47::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148d27290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FHighlightRecorder::SaveHighlight'::__l66::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

