// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 9

// GetAddress @ 1443432e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 1443432f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__StartupModule_FUniversalObjectLocatorModule_UniversalObjectLocator_UE__UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 144343310

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000144343315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// CloneToEmptyStorage @ 1443470d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 144347110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,1,0>
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

// Destroy @ 1443472c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1443472f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001443472f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 144347db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 144347dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

