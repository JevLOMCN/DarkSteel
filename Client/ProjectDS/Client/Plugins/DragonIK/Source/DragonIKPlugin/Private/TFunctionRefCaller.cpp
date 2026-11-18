// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 9

// Call @ 14d336e10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::Physanim_Safe_Exit_Ragdoll'::__l5::<lambda_1>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  FBodyInstance::SetInstanceSimulatePhysics
            (*param_2,*(int *)((longlong)param_1 + 8) <= (int)(*param_2)->InstanceBoneIndex,false,
             false);
  return;
}

// Call @ 14d336e40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::PerformActiveRagdoll'::__l8::<lambda_1>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  (*param_2)->PhysicsBlendWeight = 1.0;
  return;
}

// Call @ 14d336e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::ReleaseAllHandles'::__l8::<lambda_1>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  (*param_2)->PhysicsBlendWeight = 1.0;
  return;
}

// Call @ 14d336e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l8::<lambda_1>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UDragonIKPhysicsComponent::UpdateBodyBlends'::__l8::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14d336e90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::ModifyAllHandleTransforms'::__l47::<lambda_1>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UDragonIKPhysicsComponent::ModifyAllHandleTransforms'::__l47::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14d336ea0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l52::<lambda_2>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UDragonIKPhysicsComponent::UpdateBodyBlends'::__l52::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14d336eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l57::<lambda_3>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UDragonIKPhysicsComponent::UpdateBodyBlends'::__l57::<lambda_3>::operator()(param_1,*param_2);
  return;
}

// Call @ 14d336ec0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l59::<lambda_4>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UDragonIKPhysicsComponent::UpdateBodyBlends'::__l59::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 14d336ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDragonIKPhysicsComponent::UpdateBodyBlends'::__l67::<lambda_5>,void,FBodyInstance_*>
::Call(void *param_1,FBodyInstance **param_2)

{
  `UDragonIKPhysicsComponent::UpdateBodyBlends'::__l67::<lambda_5>::operator()(param_1,*param_2);
  return;
}

