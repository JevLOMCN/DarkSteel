// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGCompute
// Functions: 15

// CloneToEmptyStorage @ 1494b6490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1494b64d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1494b6510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 1494b6550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 1494b6590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1>
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

// Destroy @ 1494b6840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1494b6870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1494b68a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::<lambda_1>,1,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1494b68d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1494b6900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 1494b7aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1494b7ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1494b7ac0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1494b7ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 1494b7ae0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

