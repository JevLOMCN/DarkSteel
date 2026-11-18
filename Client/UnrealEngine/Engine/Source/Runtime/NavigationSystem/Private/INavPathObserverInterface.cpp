// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 5

// ~INavPathObserverInterface @ 146dda030

void __thiscall
INavPathObserverInterface::~INavPathObserverInterface(INavPathObserverInterface *this)

{
  *this = (INavPathObserverInterface)&___7INavPathObserverInterface__6B_;
  return;
}

// OnPathFailed @ 146e19930

void __thiscall
INavPathObserverInterface::OnPathFailed
          (INavPathObserverInterface *this,INavigationPathGenerator *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavPathObserverInterface.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  return;
}

// OnPathInvalid @ 146e19970

void __thiscall
INavPathObserverInterface::OnPathInvalid
          (INavPathObserverInterface *this,INavigationPathGenerator *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavPathObserverInterface.h"
             ,0x1e,L"Pure virtual not implemented (%s)");
  return;
}

// OnPathUpdated @ 146e199b0

void __thiscall
INavPathObserverInterface::OnPathUpdated
          (INavPathObserverInterface *this,INavigationPathGenerator *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavPathObserverInterface.h"
             ,0x19,L"Pure virtual not implemented (%s)");
  return;
}

// _getUObject @ 146e2f9c0

UObject * __thiscall INavPathObserverInterface::_getUObject(INavPathObserverInterface *this)

{
  return (UObject *)0x0;
}

