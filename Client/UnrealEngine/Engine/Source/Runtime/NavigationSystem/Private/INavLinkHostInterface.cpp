// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// ~INavLinkHostInterface @ 146dda010

void __thiscall INavLinkHostInterface::~INavLinkHostInterface(INavLinkHostInterface *this)

{
  *this = (INavLinkHostInterface)&___7INavLinkHostInterface__6B_;
  return;
}

// GetNavigationLinksArray @ 146e0a5d0

bool __thiscall
INavLinkHostInterface::GetNavigationLinksArray
          (INavLinkHostInterface *this,TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// GetNavigationLinksClasses @ 146e0a690

bool __thiscall
INavLinkHostInterface::GetNavigationLinksClasses
          (INavLinkHostInterface *this,
          TArray<TSubclassOf<UNavLinkDefinition>,TSizedDefaultAllocator<32>_> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavLinkHostInterface.h"
             ,0x1b,L"Pure virtual not implemented (%s)");
  return false;
}

// _getUObject @ 146e2f9b0

UObject * __thiscall INavLinkHostInterface::_getUObject(INavLinkHostInterface *this)

{
  return (UObject *)0x0;
}

