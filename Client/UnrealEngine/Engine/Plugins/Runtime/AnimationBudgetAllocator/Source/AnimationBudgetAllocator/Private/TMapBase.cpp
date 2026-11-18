// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 1

// FindRef @ 14a696340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimationBudgetAllocator * __thiscall
TMapBase<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>_>
::FindRef(TMapBase<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>_>
          *this,TObjectPtr<UWorld_const_> param_1)

{
  UObject *pUVar1;
  TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*> *pTVar2;
  UObject *local_res8;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  pTVar2 = TSet<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,(TObjectPtr<UWorld_const_>)&local_res8);
  if (pTVar2 != (TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*> *)0x0) {
    return *(FAnimationBudgetAllocator **)&pTVar2->field_0x8;
  }
  return (FAnimationBudgetAllocator *)0x0;
}

