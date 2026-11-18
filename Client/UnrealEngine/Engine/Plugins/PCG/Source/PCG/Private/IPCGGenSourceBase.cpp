// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// ~IPCGGenSourceBase @ 149f34600

void __thiscall IPCGGenSourceBase::~IPCGGenSourceBase(IPCGGenSourceBase *this)

{
  *this = (IPCGGenSourceBase)&___7IPCGGenSourceBase__6B_;
  return;
}

// GetDirection @ 149f496b0

TOptional<UE::Math::TVector<double>_> * __thiscall
IPCGGenSourceBase::GetDirection
          (IPCGGenSourceBase *this,TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\RuntimeGen\\GenSources\\PCGGenSourceBase.h"
             ,0x22,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetPosition @ 149f4c9d0

TOptional<UE::Math::TVector<double>_> * __thiscall
IPCGGenSourceBase::GetPosition
          (IPCGGenSourceBase *this,TOptional<UE::Math::TVector<double>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\RuntimeGen\\GenSources\\PCGGenSourceBase.h"
             ,0x1f,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetViewFrustum @ 149f50260

TOptional<FConvexVolume> * __thiscall
IPCGGenSourceBase::GetViewFrustum
          (IPCGGenSourceBase *this,TOptional<FConvexVolume> *__return_storage_ptr__,bool param_1)

{
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// IsLocal @ 149f52680

bool __thiscall IPCGGenSourceBase::IsLocal(IPCGGenSourceBase *this)

{
  return true;
}

// Tick @ 149f64d40

void __thiscall IPCGGenSourceBase::Tick(IPCGGenSourceBase *this)

{
  return;
}

// _getUObject @ 149f6f5b0

UObject * __thiscall IPCGGenSourceBase::_getUObject(IPCGGenSourceBase *this)

{
  return (UObject *)0x0;
}

