// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 6

// Call @ 14d9cdd90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GetNamesInSet<FPhysicsBodyModifier>'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
::Call(void *param_1,FAnimNode_RigidBodyWithControl *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)&(param_2->NameRecords).BodyModifierSets,*(FName *)((longlong)param_1 + 8));
  if (pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (*(TArray<FName,TSizedDefaultAllocator<32>_> **)param_1,pTVar1);
    return;
  }
  return;
}

// Call @ 14d9cddd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`GetNamesInSet<FPhysicsControl>'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
::Call(void *param_1,FAnimNode_RigidBodyWithControl *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)&param_2->NameRecords,*(FName *)((longlong)param_1 + 8));
  if (pTVar1 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (*(TArray<FName,TSizedDefaultAllocator<32>_> **)param_1,pTVar1);
    return;
  }
  return;
}

// Call @ 14d9cde10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPhysicsControlComponent::CreateBodyModifiersFromSkeletalMeshBelow'::__l2::<lambda_1>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UPhysicsControlComponent::CreateBodyModifiersFromSkeletalMeshBelow'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14d9cde20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPhysicsControlComponent::CreateControlsFromSkeletalMeshAndConstraintProfileBelow'::__l2::<lambda_1>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UPhysicsControlComponent::CreateControlsFromSkeletalMeshAndConstraintProfileBelow'::__l2::
  <lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14d9cde30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPhysicsControlComponent::CreateControlsFromSkeletalMeshBelow'::__l2::<lambda_1>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UPhysicsControlComponent::CreateControlsFromSkeletalMeshBelow'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14d9cde40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UPhysicsControlBPLibrary::SetOverridePhysicsAsset'::__l2::<lambda_1>,void,FAnimNode_RigidBodyWithControl_&>
::Call(void *param_1,FAnimNode_RigidBodyWithControl *param_2)

{
  (param_2->OverridePhysicsAsset).field0_0x0 = *(TObjectPtr<UPhysicsAsset>_u_0 *)param_1;
  return;
}

