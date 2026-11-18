// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 5

// ~INavigationDataInterface @ 146d78b30

void __thiscall INavigationDataInterface::~INavigationDataInterface(INavigationDataInterface *this)

{
  *this = (INavigationDataInterface)&___7INavigationDataInterface__6B_;
  return;
}

// FindMoveAlongSurface @ 146d95af0

bool __thiscall
INavigationDataInterface::FindMoveAlongSurface
          (INavigationDataInterface *this,FNavLocation *param_1,TVector<double> *param_2,
          FNavLocation *param_3,TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,
          UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavigationDataInterface.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// IsNodeRefValid @ 146da50b0

bool __thiscall
INavigationDataInterface::IsNodeRefValid(INavigationDataInterface *this,ulong64 param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavigationDataInterface.h"
             ,0x2d,L"Pure virtual not implemented (%s)");
  return true;
}

// ProjectPoint @ 146dacff0

bool __thiscall
INavigationDataInterface::ProjectPoint
          (INavigationDataInterface *this,TVector<double> *param_1,FNavLocation *param_2,
          TVector<double> *param_3,TSharedPtr<FNavigationQueryFilter_const_,1> *param_4,
          UObject *param_5)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavigationDataInterface.h"
             ,0x27,L"Pure virtual not implemented (%s)");
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// _getUObject @ 146dc5720

UObject * __thiscall INavigationDataInterface::_getUObject(INavigationDataInterface *this)

{
  return (UObject *)0x0;
}

