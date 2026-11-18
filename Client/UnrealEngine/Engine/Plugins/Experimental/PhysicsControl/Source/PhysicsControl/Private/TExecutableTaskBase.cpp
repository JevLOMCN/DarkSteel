// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 1

// ExecuteTask @ 14d9daff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::__l196::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  FAnimNode_RigidBodyWithControl::RunPhysicsSimulation
            (*(FAnimNode_RigidBodyWithControl **)((longlong)this + 0xd8),
             *(float *)((longlong)this + 0xe0),(TVector<double> *)((longlong)this + 0xe8));
  return;
}

