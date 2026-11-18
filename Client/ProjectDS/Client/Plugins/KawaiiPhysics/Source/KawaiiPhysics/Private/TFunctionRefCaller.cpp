// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 19

// Call @ 14de42930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetAllowWorldCollision'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  **(undefined1 **)param_1 = param_2->bAllowWorldCollision;
  return;
}

// Call @ 14de42950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetDummyBoneLength'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  **(float **)param_1 = param_2->DummyBoneLength;
  return;
}

// Call @ 14de42970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetEnableWind'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  **(undefined1 **)param_1 = param_2->bEnableWind;
  return;
}

// Call @ 14de42990

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetGravity'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = *(double **)param_1;
  dVar2 = (param_2->Gravity).field0_0x0._s_0.Y;
  *pdVar1 = (param_2->Gravity).field0_0x0._s_0.X;
  pdVar1[1] = dVar2;
  pdVar1[2] = (param_2->Gravity).field0_0x0._s_0.Z;
  return;
}

// Call @ 14de429c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetNeedWarmUp'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  **(undefined1 **)param_1 = param_2->bNeedWarmUp;
  return;
}

// Call @ 14de429e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetPhysicsSettings'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = *(undefined8 *)&(param_2->PhysicsSettings).WorldDampingRotation;
  *puVar1 = *(undefined8 *)&param_2->PhysicsSettings;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined8 *)&(param_2->PhysicsSettings).Radius;
  return;
}

// Call @ 14de42a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetTeleportDistanceThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  **(float **)param_1 = param_2->TeleportDistanceThreshold;
  return;
}

// Call @ 14de42a30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetTeleportRotationThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  **(float **)param_1 = param_2->TeleportRotationThreshold;
  return;
}

// Call @ 14de42a50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::GetWindScale'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  **(float **)param_1 = param_2->WindScale;
  return;
}

// Call @ 14de42a70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::ResetDynamics'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014de42a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2->_padding_ + 0x58))(param_2,2);
  return;
}

// Call @ 14de42a90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetAllowWorldCollision'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  param_2->bAllowWorldCollision = *(bool *)param_1;
  return;
}

// Call @ 14de42aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetDummyBoneLength'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  param_2->DummyBoneLength = *(float *)param_1;
  return;
}

// Call @ 14de42ab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetEnableWind'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  param_2->bEnableWind = *(bool *)param_1;
  return;
}

// Call @ 14de42ac0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetGravity'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)((longlong)param_1 + 8);
  (param_2->Gravity).field0_0x0._s_0.X = *(double *)param_1;
  (param_2->Gravity).field0_0x0._s_0.Y = dVar1;
  (param_2->Gravity).field0_0x0._s_0.Z = *(double *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 14de42ae0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetNeedWarmUp'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  param_2->bNeedWarmUp = *(bool *)param_1;
  return;
}

// Call @ 14de42af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetPhysicsSettings'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 8);
  (param_2->PhysicsSettings).Damping = (float)(int)uVar1;
  (param_2->PhysicsSettings).WorldDampingLocation = (float)(int)((ulonglong)uVar1 >> 0x20);
  (param_2->PhysicsSettings).WorldDampingRotation = (float)(int)uVar2;
  (param_2->PhysicsSettings).Stiffness = (float)(int)((ulonglong)uVar2 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x10);
  (param_2->PhysicsSettings).Radius = (float)(int)uVar1;
  (param_2->PhysicsSettings).LimitAngle = (float)(int)((ulonglong)uVar1 >> 0x20);
  return;
}

// Call @ 14de42b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetTeleportDistanceThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  param_2->TeleportDistanceThreshold = *(float *)param_1;
  return;
}

// Call @ 14de42b20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetTeleportRotationThreshold'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  param_2->TeleportRotationThreshold = *(float *)param_1;
  return;
}

// Call @ 14de42b30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UKawaiiPhysicsLibrary::SetWindScale'::__l2::<lambda_1>,void,FAnimNode_KawaiiPhysics_&>
::Call(void *param_1,FAnimNode_KawaiiPhysics *param_2)

{
  param_2->WindScale = *(float *)param_1;
  return;
}

