// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 3

// StaticStruct @ 14d9b0bb0

UScriptStruct * __cdecl FInitialCharacterControls::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInitialCharacterControls.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FInitialCharacterControls.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInitialCharacterControls,(UObject *)pUVar1,
                         L"InitialCharacterControls");
  }
  return Z_Registration_Info_UScriptStruct_FInitialCharacterControls.OuterSingleton;
}

// FInitialCharacterControls @ 14d9beec0

FInitialCharacterControls * __thiscall
FInitialCharacterControls::FInitialCharacterControls(FInitialCharacterControls *this)

{
  undefined8 uVar1;
  
  (this->WorldSpaceControlData).bEnabled = true;
  (this->CharacterActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SkeletalMeshComponentName).ComparisonIndex = 0;
  (this->SkeletalMeshComponentName).Number = 0;
  (this->LimbSetupData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LimbSetupData).ArrayNum = 0;
  (this->LimbSetupData).ArrayMax = 0;
  (this->WorldSpaceControlData).LinearStrength = 0.0;
  (this->WorldSpaceControlData).MaxForce = 0.0;
  (this->WorldSpaceControlData).AngularStrength = 0.0;
  (this->WorldSpaceControlData).MaxTorque = 0.0;
  (this->WorldSpaceControlData).LinearDampingRatio = 1.0;
  (this->WorldSpaceControlData).LinearExtraDamping = 0.0;
  (this->WorldSpaceControlData).AngularDampingRatio = 1.0;
  (this->WorldSpaceControlData).AngularExtraDamping = 0.0;
  (this->WorldSpaceControlData).LinearTargetVelocityMultiplier = 1.0;
  (this->WorldSpaceControlData).AngularTargetVelocityMultiplier = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->WorldSpaceControlData).bUseCustomControlPoint = false;
  (this->WorldSpaceControlData).bUseSkeletalAnimation = true;
  (this->WorldSpaceControlData).bDisableCollision = false;
  (this->WorldSpaceControlData).bOnlyControlChildObject = false;
  (this->ParentSpaceControlData).LinearStrength = 0.0;
  (this->ParentSpaceControlData).MaxForce = 0.0;
  (this->ParentSpaceControlData).AngularStrength = 0.0;
  (this->ParentSpaceControlData).MaxTorque = 0.0;
  (this->ParentSpaceControlData).bEnabled = true;
  (this->ParentSpaceControlData).LinearDampingRatio = 1.0;
  (this->ParentSpaceControlData).LinearExtraDamping = 0.0;
  (this->ParentSpaceControlData).AngularDampingRatio = 1.0;
  (this->ParentSpaceControlData).AngularExtraDamping = 0.0;
  (this->ParentSpaceControlData).LinearTargetVelocityMultiplier = 1.0;
  (this->ParentSpaceControlData).AngularTargetVelocityMultiplier = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Y = (double)uVar1;
  (this->ParentSpaceControlData).CustomControlPoint.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ParentSpaceControlData).bUseCustomControlPoint = false;
  (this->ParentSpaceControlData).bUseSkeletalAnimation = true;
  (this->ParentSpaceControlData).bDisableCollision = false;
  (this->ParentSpaceControlData).bOnlyControlChildObject = false;
  (this->BodyModifierData).MovementType = Simulated;
  (this->BodyModifierData).CollisionType = '\x03';
  (this->BodyModifierData).KinematicTargetSpace = OffsetInBoneSpace;
  (this->BodyModifierData).GravityMultiplier = 1.0;
  (this->BodyModifierData).PhysicsBlendWeight = 1.0;
  (this->BodyModifierData).bUpdateKinematicFromSimulation = true;
  return this;
}

// ~FInitialCharacterControls @ 14d9c1320

void __thiscall
FInitialCharacterControls::~FInitialCharacterControls(FInitialCharacterControls *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->LimbSetupData).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

