// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 16

// ~TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0> @ 14d769690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::
~TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
          (TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AU__TOptional__N__PEBVISceneViewExtension__AEBUFSceneViewExtensionContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14d76e120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
           *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AU__TOptional__N__PEBVISceneViewExtension__AEBUFSceneViewExtensionContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TOptional<bool>_ISceneViewExtension_ptr_FSceneViewExtensionContext_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14d76e140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14d76e180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14d76e1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14d76e200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>,1,1>::
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

// Destroy @ 14d76f050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::Destroy(TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d76f055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14d76f060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d76f065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d76f070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d76f0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d76f0a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14d76f0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14d7708a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
::GetAddress(TFunction_OwnedObject<TOptional<bool>_(__cdecl*)(ISceneViewExtension_const_*,FSceneViewExtensionContext_const_&),0,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14d7708b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::CacheShaders'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d7708c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIODisplayExtension::SetupView'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d7708d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIOTransformResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d7708e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenColorIORendering::ApplyColorTransform'::__l2::<lambda_6>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

