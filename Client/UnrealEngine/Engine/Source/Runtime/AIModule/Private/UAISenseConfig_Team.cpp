// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146e7a560

UClass * __cdecl UAISenseConfig_Team::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Team",
               &Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Team,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UAISenseConfig_Team>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Team>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton;
}

// UAISenseConfig_Team @ 146e80ac0

UAISenseConfig_Team * __thiscall
UAISenseConfig_Team::UAISenseConfig_Team(UAISenseConfig_Team *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UAISenseConfig_Team__6B_;
  return this;
}

// ~UAISenseConfig_Team @ 146e81cd0

void __thiscall UAISenseConfig_Team::~UAISenseConfig_Team(UAISenseConfig_Team *this)

{
  *(undefined ***)this = &___7UAISenseConfig__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146e8ef60

UClass * __cdecl UAISenseConfig_Team::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Team",
               &Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Team,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UAISenseConfig_Team>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Team>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Team.InnerSingleton;
}

// GetSenseImplementation @ 146e8f9b0

TSubclassOf<UAISense> __thiscall
UAISenseConfig_Team::GetSenseImplementation(UAISenseConfig_Team *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UAISense_Team_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UAISense>)in_RDX.field0_0x0;
}

// StaticRegisterNativesUAISenseConfig_Team @ 146ea0150

void __cdecl UAISenseConfig_Team::StaticRegisterNativesUAISenseConfig_Team(void)

{
  return;
}

// UAISenseConfig_Team @ 146f941f0

UAISenseConfig_Team * __thiscall
UAISenseConfig_Team::UAISenseConfig_Team(UAISenseConfig_Team *this,FObjectInitializer *param_1)

{
  FColor FVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAISenseConfig__6B_;
  FVar1 = FColor::White;
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 | 1;
  *(FColor_u_0 *)&this->field_0x28 = (FColor_u_0_s_0)FVar1.field0_0x0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UAISenseConfig_Team__6B_;
  *(FColor_u_0 *)&this->field_0x28 = (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  return this;
}

