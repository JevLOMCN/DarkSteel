// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// RestorePreAnimatedValue @ 1467bdeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::FPreAnimatedConstraintTraits::RestorePreAnimatedValue
          (FKeyType *param_1,FPreAnimatedConstraint *param_2,FRestoreStateParams *param_3)

{
  UTickableConstraint *pUVar1;
  bool bVar2;
  UActorComponent *this;
  UObject *pUVar3;
  longlong lVar4;
  UWorld *pUVar5;
  FConstraintsManagerController *this_00;
  
  this = (UActorComponent *)FWeakObjectPtr::Get(&(param_2->SceneComponent).WeakPtr);
  if ((this != (UActorComponent *)0x0) &&
     (bVar2 = FWeakObjectPtr::IsValid(&(param_2->Section).WeakPtr), bVar2)) {
    pUVar3 = FWeakObjectPtr::Get(&(param_2->Section).WeakPtr);
    lVar4 = (**(code **)(*(longlong *)&pUVar3[6].field_0x20 + 0x18))(&pUVar3[6].field_0x20,param_2);
    if ((lVar4 != 0) &&
       (pUVar1 = *(UTickableConstraint **)(lVar4 + 0x120), pUVar1 != (UTickableConstraint *)0x0)) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pUVar1);
      }
      (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,param_2->bPreviouslyEnabled);
      pUVar1->bValid = false;
      if (param_2->bDeleteIt != false) {
        pUVar3 = FWeakObjectPtr::Get(&(param_2->Section).WeakPtr);
        if (pUVar3 != (UObject *)0x0) {
          *(undefined1 *)(pUVar3 + 8) = 1;
        }
        pUVar5 = this->WorldPrivate;
        if (pUVar5 == (UWorld *)0x0) {
          pUVar5 = UActorComponent::GetWorld_Uncached(this);
        }
        this_00 = FConstraintsManagerController::Get(pUVar5);
        FConstraintsManagerController::RemoveConstraint(this_00,pUVar1,true);
        if (pUVar3 != (UObject *)0x0) {
          *(undefined1 *)(pUVar3 + 8) = 0;
        }
      }
    }
  }
  return;
}

