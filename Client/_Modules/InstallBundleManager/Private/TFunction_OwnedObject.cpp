// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 9

// CloneToEmptyStorage @ 148bc6b30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 148bc6b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 148bc6bb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>,1,1>::
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

// Destroy @ 148bc75f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148bc7620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 148bc7650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 148bc9b70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148bc9b80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>,1,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148bc9b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

