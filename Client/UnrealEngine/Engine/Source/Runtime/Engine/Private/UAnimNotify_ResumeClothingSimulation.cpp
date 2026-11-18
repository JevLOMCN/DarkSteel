// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1474981e0

UClass * __cdecl UAnimNotify_ResumeClothingSimulation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResumeClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton,
               StaticRegisterNativesUAnimNotify_ResumeClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_ResumeClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResumeClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton;
}

// UAnimNotify_ResumeClothingSimulation @ 1474b4290

UAnimNotify_ResumeClothingSimulation * __thiscall
UAnimNotify_ResumeClothingSimulation::UAnimNotify_ResumeClothingSimulation
          (UAnimNotify_ResumeClothingSimulation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimNotify_ResumeClothingSimulation__6B_;
  return this;
}

// UAnimNotify_ResumeClothingSimulation @ 1474b42c0

UAnimNotify_ResumeClothingSimulation * __thiscall
UAnimNotify_ResumeClothingSimulation::UAnimNotify_ResumeClothingSimulation
          (UAnimNotify_ResumeClothingSimulation *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UAnimNotify_ResumeClothingSimulation__6B_;
  this->field_0x28 = 0;
  return this;
}

// ~UAnimNotify_ResumeClothingSimulation @ 1474b5720

void __thiscall
UAnimNotify_ResumeClothingSimulation::~UAnimNotify_ResumeClothingSimulation
          (UAnimNotify_ResumeClothingSimulation *this)

{
  *(undefined ***)this = &___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNotifyName_Implementation @ 1474dc4d0

FString * __thiscall
UAnimNotify_ResumeClothingSimulation::GetNotifyName_Implementation
          (UAnimNotify_ResumeClothingSimulation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Resume Clothing Sim");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dd850

UClass * __cdecl UAnimNotify_ResumeClothingSimulation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_ResumeClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton,
               StaticRegisterNativesUAnimNotify_ResumeClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_ResumeClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_ResumeClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_ResumeClothingSimulation.InnerSingleton;
}

// Notify @ 1474eddd0

void __thiscall
UAnimNotify_ResumeClothingSimulation::Notify
          (UAnimNotify_ResumeClothingSimulation *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// Notify @ 1474edde0

void __thiscall
UAnimNotify_ResumeClothingSimulation::Notify
          (UAnimNotify_ResumeClothingSimulation *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  (**(code **)(*(longlong *)this + 0x2c8))();
  USkeletalMeshComponent::ResumeClothingSimulation(param_1);
  return;
}

// StaticRegisterNativesUAnimNotify_ResumeClothingSimulation @ 1474faeb0

void __cdecl
UAnimNotify_ResumeClothingSimulation::StaticRegisterNativesUAnimNotify_ResumeClothingSimulation
          (void)

{
  return;
}

