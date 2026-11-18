// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 15

// CloneToEmptyStorage @ 14e417300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<unsigned___int64>::Run'::__l2::<lambda_1>,1,0>::
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

// CloneToEmptyStorage @ 14e417340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<unsigned___int64>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14e417380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l29::<lambda_2>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14e4173c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14e417400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l29::<lambda_2>,1,0>
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

// Destroy @ 14e42af90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<unsigned___int64>::Run'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e42af95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e42afa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<unsigned___int64>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e42afd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l29::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14e42b000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e42b005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14e42b010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l29::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e42b015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14e4385e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TAsyncRunnable<unsigned___int64>::Run'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e4385f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`TAsyncRunnable<unsigned___int64>::Run'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14e438600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l29::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14e438610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14e438620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Interchange::FInterchangeTaskSystem::Tick'::__l2::<lambda_2>::operator()'::__l29::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

