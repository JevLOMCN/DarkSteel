// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlatformCryptoContext
// Functions: 6

// `dynamic_initializer_for_'ModuleRegistrantPlatformCryptoContext'' @ 1414451d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantPlatformCryptoContext__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PlatformCryptoContext";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PlatformCryptoContext",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<IPlatformCryptoContext>::InitializeModule);
  return;
}

// StartupModule @ 14ea16860

void __thiscall IPlatformCryptoContext::StartupModule(IPlatformCryptoContext *this)

{
  return;
}

// ShutdownModule @ 14ea16870

void __thiscall IPlatformCryptoContext::ShutdownModule(IPlatformCryptoContext *this)

{
  return;
}

// `scalar_deleting_destructor' @ 14ea16880

void * __thiscall
IPlatformCryptoContext::_scalar_deleting_destructor_(IPlatformCryptoContext *this,uint param_1)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  void *pvVar4;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserData).SharedReferenceCount.ReferenceController);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->UserDataLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->UserDataLock);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// InitializeModule @ 14ea16920

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<IPlatformCryptoContext>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x20);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7IPlatformCryptoContext__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

// IMPLEMENT_MODULE_PlatformCryptoContext @ 14ea16960

void __cdecl IMPLEMENT_MODULE_PlatformCryptoContext(void)

{
  return;
}

