// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146e7b470

UClass * __cdecl UAISenseConfig_Prediction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Prediction",
               &Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Prediction,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UAISenseConfig_Prediction>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Prediction>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton;
}

// UAISenseConfig_Prediction @ 146e80a40

UAISenseConfig_Prediction * __thiscall
UAISenseConfig_Prediction::UAISenseConfig_Prediction
          (UAISenseConfig_Prediction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UAISenseConfig_Prediction__6B_;
  return this;
}

// ~UAISenseConfig_Prediction @ 146e81c50

void __thiscall
UAISenseConfig_Prediction::~UAISenseConfig_Prediction(UAISenseConfig_Prediction *this)

{
  *(undefined ***)this = &___7UAISenseConfig__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146e8ede0

UClass * __cdecl UAISenseConfig_Prediction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Prediction",
               &Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Prediction,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UAISenseConfig_Prediction>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Prediction>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Prediction.InnerSingleton;
}

// StaticRegisterNativesUAISenseConfig_Prediction @ 146ea0130

void __cdecl UAISenseConfig_Prediction::StaticRegisterNativesUAISenseConfig_Prediction(void)

{
  return;
}

// UAISenseConfig_Prediction @ 146f94130

UAISenseConfig_Prediction * __thiscall
UAISenseConfig_Prediction::UAISenseConfig_Prediction
          (UAISenseConfig_Prediction *this,FObjectInitializer *param_1)

{
  FColor FVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAISenseConfig__6B_;
  FVar1 = FColor::White;
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 | 1;
  *(FColor_u_0 *)&this->field_0x28 = (FColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UAISenseConfig_Prediction__6B_;
  *(FColor_u_0 *)&this->field_0x28 = (FColor_u_0_s_0)FColorList::Grey.field0_0x0;
  return this;
}

// GetSenseImplementation @ 146fb4db0

TSubclassOf<UAISense> __thiscall
UAISenseConfig_Prediction::GetSenseImplementation(UAISenseConfig_Prediction *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = UAISense_Prediction::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UAISense>)in_RDX.field0_0x0;
}

