// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 25

// ~TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0> @ 1494c50a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 1494cac90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFShaderParametersMetadataBuilder__PEB_W_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FShaderParametersMetadataBuilder_ptr_wchar_t_ptr **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1494cacb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1494cacf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::AbortWork'::__l5::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 1494cad30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::FlushWork'::__l5::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 1494cad70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1494cadb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1494cadf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::__l55::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 1494cae30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>,1,0>::
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

// Destroy @ 1494cc2b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>::
Destroy(TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001494cc2b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1494cc2c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1494cc2f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::AbortWork'::__l5::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001494cc2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1494cc300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::FlushWork'::__l5::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1494cc330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001494cc335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1494cc340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001494cc345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1494cc350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::__l55::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001494cc355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1494cc360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001494cc365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1494cf170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>::
GetAddress(TFunction_OwnedObject<void_(__cdecl*)(FShaderParametersMetadataBuilder_&,wchar_t_const_*),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 1494cf180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphInstance::EnqueueWork'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1494cf190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::AbortWork'::__l5::<lambda_1>,1,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1494cf1a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ComputeFramework::FlushWork'::__l5::<lambda_1>,1,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1494cf1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UComputeGraph::ReleaseRenderProxy'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1494cf1c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::ReleaseShaderMap'::__l5::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1494cf1d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeKernelResource::CacheShaders'::__l55::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1494cf1e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FComputeGraphTaskWorker::SubmitWork'::__l2::<lambda_4>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

