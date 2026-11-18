// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 10

// ~TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0> @ 14de21d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::
~TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NPEBVISceneViewExtension__AEBUFSceneViewExtensionContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14de24e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NPEBVISceneViewExtension__AEBUFSceneViewExtensionContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_ISceneViewExtension_ptr_FSceneViewExtensionContext_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14de24e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14de24eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// Destroy @ 14de25b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::Destroy(TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014de25b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14de25b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014de25b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14de25b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14de26860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14de26870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l21::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14de26880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDLSSTemporalUpscalerModularFeature::PostConfigureViewFamily'::__l25::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

