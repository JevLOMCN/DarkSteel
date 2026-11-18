// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 6

// CloneToEmptyStorage @ 14632e3b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UFieldSystemComponent::ClearFieldCommands'::__l17::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14632e3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UFieldSystemComponent::DispatchFieldCommand'::__l13::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,1,1>
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

// Destroy @ 14632e860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UFieldSystemComponent::ClearFieldCommands'::__l17::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14632e890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UFieldSystemComponent::DispatchFieldCommand'::__l13::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14632ee10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UFieldSystemComponent::ClearFieldCommands'::__l17::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14632ee20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UFieldSystemComponent::DispatchFieldCommand'::__l13::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

