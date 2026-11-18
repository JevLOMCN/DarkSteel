// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 9

// CloneToEmptyStorage @ 145ac4680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::<lambda_1>,1,0>
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

// CloneToEmptyStorage @ 145ac46c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>,1,0>::
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

// CloneToEmptyStorage @ 145ac4700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_3>,1,0>::
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

// Destroy @ 145ac70b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ac70b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145ac70c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ac70c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 145ac70d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_3>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000145ac70d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 145ac9340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread'::__l26::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145ac9350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 145ac9360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPreLoadScreenManager::EarlyPlayRenderFrameTick'::__l17::<lambda_3>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

