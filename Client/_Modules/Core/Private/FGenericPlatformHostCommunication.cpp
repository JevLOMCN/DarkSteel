// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// Available @ 14162b010

bool __thiscall
FGenericPlatformHostCommunication::Available(FGenericPlatformHostCommunication *this)

{
  return false;
}

// CloseConnection @ 14162edd0

void __thiscall
FGenericPlatformHostCommunication::CloseConnection
          (FGenericPlatformHostCommunication *this,TSharedPtr<IPlatformHostSocket,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Initialize @ 141648b20

void __thiscall
FGenericPlatformHostCommunication::Initialize(FGenericPlatformHostCommunication *this)

{
  return;
}

// LaunchOnHost @ 14164ad00

bool __thiscall
FGenericPlatformHostCommunication::LaunchOnHost
          (FGenericPlatformHostCommunication *this,char *param_1,char *param_2)

{
  return false;
}

// OpenConnection @ 14164f640

TSharedPtr<IPlatformHostSocket,1> * __thiscall
FGenericPlatformHostCommunication::OpenConnection
          (FGenericPlatformHostCommunication *this,
          TSharedPtr<IPlatformHostSocket,1> *__return_storage_ptr__,uint param_1,FString *param_2,
          uint param_3,uint param_4)

{
  __return_storage_ptr__->Object = (IPlatformHostSocket *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Shutdown @ 141660440

void __thiscall FGenericPlatformHostCommunication::Shutdown(FGenericPlatformHostCommunication *this)

{
  return;
}

