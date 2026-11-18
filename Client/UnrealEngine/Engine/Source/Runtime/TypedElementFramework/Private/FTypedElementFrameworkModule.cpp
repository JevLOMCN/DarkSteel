// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// StartupModule @ 142c88e00

void __thiscall FTypedElementFrameworkModule::StartupModule(FTypedElementFrameworkModule *this)

{
  UTypedElementRegistry *pUVar1;
  code *pcVar2;
  bool bVar3;
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar4;
  UObject *pUVar5;
  UTypedElementRegistry *this_00;
  
  pTVar4 = GetTypedElementRegistryInstance();
  if (pTVar4->Object != (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementRegistry.cpp"
                       ,0x34,L"Instance was already initialized!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar5 = GetTransientPackageAsObject();
  this_00 = NewObject<UTypedElementRegistry>(pUVar5);
  pUVar1 = (UTypedElementRegistry *)pTVar4->Object;
  if (this_00 == (UTypedElementRegistry *)0x0) {
    if (pUVar1 != (UTypedElementRegistry *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
      pTVar4->Object = (UObject *)0x0;
    }
  }
  else if (pUVar1 != this_00) {
    if (pUVar1 != (UTypedElementRegistry *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar1);
    }
    UObjectBase::AddRef((UObjectBase *)this_00);
    pTVar4->Object = (UObject *)this_00;
    return;
  }
  return;
}

// ShutdownModule @ 142c88ea0

void __thiscall FTypedElementFrameworkModule::ShutdownModule(FTypedElementFrameworkModule *this)

{
  TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  
  pTVar1 = GetTypedElementRegistryInstance();
  if (pTVar1->Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    pTVar1->Object = (UObject *)0x0;
  }
  return;
}

