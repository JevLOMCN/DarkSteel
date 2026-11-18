// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// CanRunParallelWork @ 14641efb0

bool __thiscall UAnimInstance::CanRunParallelWork(UAnimInstance *this)

{
  return true;
}

// OnUROPreInterpolation @ 14645f1a0

void __thiscall UAnimInstance::OnUROPreInterpolation(UAnimInstance *this)

{
  return;
}

// OnUROPreInterpolation_AnyThread @ 14645f1b0

void __thiscall
UAnimInstance::OnUROPreInterpolation_AnyThread
          (UAnimInstance *this,FAnimationEvaluationContext *param_1)

{
  return;
}

// OnUROSkipTickAnimation @ 14645f1c0

void __thiscall UAnimInstance::OnUROSkipTickAnimation(UAnimInstance *this)

{
  return;
}

// PreUpdateLinkedInstances @ 146461ea0

void __thiscall UAnimInstance::PreUpdateLinkedInstances(UAnimInstance *this,float param_1)

{
  return;
}

// StaticClass @ 14646e4a0

UClass * __cdecl UAnimInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimInstance.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimInstance",
               &Z_Registration_Info_UClass_UAnimInstance.InnerSingleton,
               StaticRegisterNativesUAnimInstance,0x430,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimInstance>,
               InternalVTableHelperCtorCaller<UAnimInstance>,aFStackX_8,UObject::StaticClass,
               USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimInstance.InnerSingleton;
}

