// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146e7a730

UClass * __cdecl UAISenseConfig_Touch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Touch",
               &Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Touch,0x50,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Touch>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Touch>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton;
}

// UAISenseConfig_Touch @ 146e80b00

UAISenseConfig_Touch * __thiscall
UAISenseConfig_Touch::UAISenseConfig_Touch(UAISenseConfig_Touch *this,FVTableHelper *param_1)

{
  FAISenseAffiliationFilter *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar1->bDetectEnemies = 1;
  pFVar1->bDetectFriendlies = 1;
  pFVar1->bDetectNeutrals = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAISenseConfig_Touch__6B_;
  return this;
}

// ~UAISenseConfig_Touch @ 146e81d10

void __thiscall UAISenseConfig_Touch::~UAISenseConfig_Touch(UAISenseConfig_Touch *this)

{
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146e8f020

UClass * __cdecl UAISenseConfig_Touch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Touch",
               &Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Touch,0x50,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Touch>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Touch>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Touch.InnerSingleton;
}

// StaticRegisterNativesUAISenseConfig_Touch @ 146ea0160

void __cdecl UAISenseConfig_Touch::StaticRegisterNativesUAISenseConfig_Touch(void)

{
  return;
}

// UAISenseConfig_Touch @ 146f94250

UAISenseConfig_Touch * __thiscall
UAISenseConfig_Touch::UAISenseConfig_Touch(UAISenseConfig_Touch *this,FObjectInitializer *param_1)

{
  FAISenseAffiliationFilter *pFVar1;
  FColor FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  FVar2 = FColor::White;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FVar2.field0_0x0;
  pFVar1->bDetectEnemies = 1;
  pFVar1->bDetectFriendlies = 1;
  pFVar1->bDetectNeutrals = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UAISenseConfig_Touch__6B_;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FColor::Cyan.field0_0x0;
  return this;
}

// GetSenseImplementation @ 146fb4e80

TSubclassOf<UAISense> __thiscall
UAISenseConfig_Touch::GetSenseImplementation(UAISenseConfig_Touch *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_UAISense_Touch_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UAISense>)in_RDX.field0_0x0;
}

