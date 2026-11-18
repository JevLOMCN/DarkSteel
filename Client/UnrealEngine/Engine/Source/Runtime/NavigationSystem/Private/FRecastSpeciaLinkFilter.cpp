// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// initialize @ 146e2fcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRecastSpeciaLinkFilter::initialize(FRecastSpeciaLinkFilter *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get(&this->SearchOwner);
  this->CachedOwnerOb = pUVar1;
  return;
}

// isLinkAllowed @ 146e2fd10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FRecastSpeciaLinkFilter::isLinkAllowed(FRecastSpeciaLinkFilter *this,ulong64 param_1)

{
  char cVar1;
  INavLinkCustomInterface *pIVar2;
  
  if (this->NavSys != (UNavigationSystemV1 *)0x0) {
    pIVar2 = UNavigationSystemV1::GetCustomLink(this->NavSys,(FNavLinkId)param_1);
    if (pIVar2 != (INavLinkCustomInterface *)0x0) {
      cVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,this->CachedOwnerOb);
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}

