// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 1

// Get @ 14a6966d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IAnimationBudgetAllocator * __cdecl IAnimationBudgetAllocator::Get(UWorld *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  IAnimationBudgetAllocator *pIVar4;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(local_res10,"AnimationBudgetAllocator");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  pIVar4 = (IAnimationBudgetAllocator *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,param_1);
  return pIVar4;
}

