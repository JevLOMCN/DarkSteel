// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147494ee0

UClass * __cdecl UAnimNotify_PauseClothingSimulation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PauseClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PauseClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PauseClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_PauseClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton;
}

// UAnimNotify_PauseClothingSimulation @ 1474b3ff0

UAnimNotify_PauseClothingSimulation * __thiscall
UAnimNotify_PauseClothingSimulation::UAnimNotify_PauseClothingSimulation
          (UAnimNotify_PauseClothingSimulation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimNotify_PauseClothingSimulation__6B_;
  return this;
}

// UAnimNotify_PauseClothingSimulation @ 1474b4020

UAnimNotify_PauseClothingSimulation * __thiscall
UAnimNotify_PauseClothingSimulation::UAnimNotify_PauseClothingSimulation
          (UAnimNotify_PauseClothingSimulation *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UAnimNotify_PauseClothingSimulation__6B_;
  this->field_0x28 = 0;
  return this;
}

// ~UAnimNotify_PauseClothingSimulation @ 1474b5680

void __thiscall
UAnimNotify_PauseClothingSimulation::~UAnimNotify_PauseClothingSimulation
          (UAnimNotify_PauseClothingSimulation *this)

{
  *(undefined ***)this = &___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNotifyName_Implementation @ 1474dc3a0

FString * __thiscall
UAnimNotify_PauseClothingSimulation::GetNotifyName_Implementation
          (UAnimNotify_PauseClothingSimulation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Pause Clothing Sim");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dd490

UClass * __cdecl UAnimNotify_PauseClothingSimulation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PauseClothingSimulation",
               &Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PauseClothingSimulation,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PauseClothingSimulation>,
               InternalVTableHelperCtorCaller<UAnimNotify_PauseClothingSimulation>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.InnerSingleton;
}

// Notify @ 1474eda00

void __thiscall
UAnimNotify_PauseClothingSimulation::Notify
          (UAnimNotify_PauseClothingSimulation *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// Notify @ 1474eda10

void __thiscall
UAnimNotify_PauseClothingSimulation::Notify
          (UAnimNotify_PauseClothingSimulation *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  (**(code **)(*(longlong *)this + 0x2c8))();
  USkeletalMeshComponent::SuspendClothingSimulation(param_1);
  return;
}

// StaticRegisterNativesUAnimNotify_PauseClothingSimulation @ 1474fae60

void __cdecl
UAnimNotify_PauseClothingSimulation::StaticRegisterNativesUAnimNotify_PauseClothingSimulation(void)

{
  return;
}

