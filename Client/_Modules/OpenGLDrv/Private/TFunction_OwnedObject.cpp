// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 18

// CloneToEmptyStorage @ 145bf6270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145bf62b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateWritableTextureInitializer'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
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

// CloneToEmptyStorage @ 145bf62f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FOpenGLViewport::Resize'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 145bf6330

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`TickProgramLRU'::__l8::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145bf6370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 145bf63b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FLockBufferInitializer::FLockBufferInitializer'::__l1::<lambda_25_>,1,0>
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

// Destroy @ 145bfac50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145bfac55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145bfac60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateWritableTextureInitializer'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145bfac90

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FOpenGLViewport::Resize'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 145bfacc0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`TickProgramLRU'::__l8::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145bfacc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145bfacd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145bfacd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145bface0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FLockBufferInitializer::FLockBufferInitializer'::__l1::<lambda_25_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145bface5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145c016c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLViewport::FOpenGLViewport'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145c016d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`CreateWritableTextureInitializer'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145c016e0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FOpenGLViewport::Resize'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145c016f0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`TickProgramLRU'::__l8::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145c01700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FOpenGLDynamicRHI::RHICreateTextureInitializer'::__l11::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145c01710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::RHICore::FLockBufferInitializer::FLockBufferInitializer'::__l1::<lambda_25_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

