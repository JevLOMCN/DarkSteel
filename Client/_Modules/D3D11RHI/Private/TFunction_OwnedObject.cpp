// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 21

// CloneToEmptyStorage @ 145974630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145974670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 145974690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateTextureInitializer'::__l24::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1459746d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateBufferInitializer'::__l30::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 145974710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,1,0>
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

// CloneToEmptyStorage @ 145974750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,1,0>
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

// CloneToEmptyStorage @ 145974790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer'::__l1::<lambda_27_>,1,0>
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

// Destroy @ 14597bd30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014597bd35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14597bd40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014597bd45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14597bd50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateTextureInitializer'::__l24::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14597bd80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateBufferInitializer'::__l30::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14597bdb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014597bdb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14597bdc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014597bdc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14597bdd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer'::__l1::<lambda_27_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014597bdd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145981470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11Viewport::FD3D11Viewport'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145981480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHIEndRenderPass'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145981490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateTextureInitializer'::__l24::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1459814a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FD3D11DynamicRHI::RHICreateBufferInitializer'::__l30::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1459814b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1459814c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1459814d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer'::__l1::<lambda_27_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

