// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1474979c0

UClass * __cdecl UAnimNotify_ResetDynamics::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResetDynamics",
               &Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton,
               StaticRegisterNativesUAnimNotify_ResetDynamics,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimNotify_ResetDynamics>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResetDynamics>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton;
}

// UAnimNotify_ResetDynamics @ 1474b4220

UAnimNotify_ResetDynamics * __thiscall
UAnimNotify_ResetDynamics::UAnimNotify_ResetDynamics
          (UAnimNotify_ResetDynamics *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimNotify_ResetDynamics__6B_;
  return this;
}

// UAnimNotify_ResetDynamics @ 1474b4250

UAnimNotify_ResetDynamics * __thiscall
UAnimNotify_ResetDynamics::UAnimNotify_ResetDynamics(UAnimNotify_ResetDynamics *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UAnimNotify_ResetDynamics__6B_;
  this->field_0x28 = 0;
  return this;
}

// ~UAnimNotify_ResetDynamics @ 1474b5700

void __thiscall
UAnimNotify_ResetDynamics::~UAnimNotify_ResetDynamics(UAnimNotify_ResetDynamics *this)

{
  *(undefined ***)this = &___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNotifyName_Implementation @ 1474dc4a0

FString * __thiscall
UAnimNotify_ResetDynamics::GetNotifyName_Implementation
          (UAnimNotify_ResetDynamics *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Reset Dynamics");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dd790

UClass * __cdecl UAnimNotify_ResetDynamics::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResetDynamics",
               &Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton,
               StaticRegisterNativesUAnimNotify_ResetDynamics,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimNotify_ResetDynamics>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResetDynamics>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResetDynamics.InnerSingleton;
}

// Notify @ 1474edd90

void __thiscall
UAnimNotify_ResetDynamics::Notify
          (UAnimNotify_ResetDynamics *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// Notify @ 1474edda0

void __thiscall
UAnimNotify_ResetDynamics::Notify
          (UAnimNotify_ResetDynamics *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  (**(code **)(*(longlong *)this + 0x2c8))();
  USkeletalMeshComponent::ResetAnimInstanceDynamics(param_1,ResetPhysics);
  return;
}

// StaticRegisterNativesUAnimNotify_ResetDynamics @ 1474faea0

void __cdecl UAnimNotify_ResetDynamics::StaticRegisterNativesUAnimNotify_ResetDynamics(void)

{
  return;
}

