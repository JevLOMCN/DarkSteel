// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146e78580

UClass * __cdecl UAIResource_Movement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResource_Movement",
               &Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton,
               StaticRegisterNativesUAIResource_Movement,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAIResource_Movement>,
               InternalVTableHelperCtorCaller<UAIResource_Movement>,local_res8,
               UGameplayTaskResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton;
}

// UAIResource_Movement @ 146e808c0

UAIResource_Movement * __thiscall
UAIResource_Movement::UAIResource_Movement(UAIResource_Movement *this,FVTableHelper *param_1)

{
  UGameplayTaskResource::UGameplayTaskResource((UGameplayTaskResource *)this,param_1);
  *(undefined ***)this = &___7UAIResource_Movement__6B_;
  return this;
}

// UAIResource_Movement @ 146e808f0

UAIResource_Movement * __thiscall
UAIResource_Movement::UAIResource_Movement(UAIResource_Movement *this,FObjectInitializer *param_1)

{
  UGameplayTaskResource::UGameplayTaskResource((UGameplayTaskResource *)this,param_1);
  *(undefined ***)this = &___7UAIResource_Movement__6B_;
  return this;
}

// ~UAIResource_Movement @ 146e81b50

void __thiscall UAIResource_Movement::~UAIResource_Movement(UAIResource_Movement *this)

{
  *(undefined ***)this = &___7UAIResource_Movement__6B_;
  UGameplayTaskResource::~UGameplayTaskResource((UGameplayTaskResource *)this);
  return;
}

// GenerateDebugDescription @ 146e8d2f0

FString * __thiscall
UAIResource_Movement::GenerateDebugDescription
          (UAIResource_Movement *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Move");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146e8ea30

UClass * __cdecl UAIResource_Movement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AIResource_Movement",
               &Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton,
               StaticRegisterNativesUAIResource_Movement,0x38,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAIResource_Movement>,
               InternalVTableHelperCtorCaller<UAIResource_Movement>,local_res8,
               UGameplayTaskResource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAIResource_Movement.InnerSingleton;
}

// StaticRegisterNativesUAIResource_Movement @ 146ea00e0

void __cdecl UAIResource_Movement::StaticRegisterNativesUAIResource_Movement(void)

{
  return;
}

