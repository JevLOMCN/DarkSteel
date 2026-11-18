// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ToInternetAddr @ 14bb928d0

TSharedRef<FInternetAddr,1> * __thiscall
FIPv4Endpoint::ToInternetAddr
          (FIPv4Endpoint *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FInternetAddr,1> *pTVar3;
  
  if ((CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                         ,0x72,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedRef<FInternetAddr,1> *)(*pcVar1)();
    return pTVar3;
  }
  (**(code **)(CachedSocketSubsystem->_padding_ + 0x90))
            (CachedSocketSubsystem,__return_storage_ptr__);
  (**(code **)((longlong)*__return_storage_ptr__->Object + 0x18))
            (__return_storage_ptr__->Object,(this->Address).field0_0x0.Value);
  (**(code **)((longlong)*__return_storage_ptr__->Object + 0x28))
            (__return_storage_ptr__->Object,this->Port);
  return __return_storage_ptr__;
}

