// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 6

// CloneToEmptyStorage @ 14311cd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 14311cd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_2>,1,0>
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

// Destroy @ 14311d360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014311d365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14311d370

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014311d375. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14311dc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14311dca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

