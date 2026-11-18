// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 9

// CloneToEmptyStorage @ 1446c5b50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer'::__l1::<lambda_5_>,1,0>
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

// CloneToEmptyStorage @ 1446c5b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_6_>,1,0>
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

// CloneToEmptyStorage @ 1446c5bd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,1,0>
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

// Destroy @ 1446c5cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer'::__l1::<lambda_5_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001446c5cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1446c5d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_6_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001446c5d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1446c5d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001446c5d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 1446c5d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer'::__l1::<lambda_5_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1446c5d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_6_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 1446c5d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

