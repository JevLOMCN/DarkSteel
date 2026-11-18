// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 2

// operator-> @ 14d7d1f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FActiveViewport * __thiscall
TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1>::operator->
          (TSharedPtr<MediaProfilePlaybackManager::FActiveViewport,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FActiveViewport *pFVar3;
  
  if (this->Object != (FActiveViewport *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FActiveViewport *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14d7d1fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FManagedViewport * __thiscall
TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1>::operator->
          (TSharedPtr<MediaProfilePlaybackManager::FManagedViewport,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FManagedViewport *pFVar3;
  
  if (this->Object != (FManagedViewport *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FManagedViewport *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

