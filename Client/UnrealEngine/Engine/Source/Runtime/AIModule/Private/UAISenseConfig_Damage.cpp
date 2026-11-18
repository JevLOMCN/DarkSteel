// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146f830d0

UClass * __cdecl UAISenseConfig_Damage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Damage",
               &Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Damage,0x50,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Damage>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Damage>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton;
}

// UAISenseConfig_Damage @ 146f94040

UAISenseConfig_Damage * __thiscall
UAISenseConfig_Damage::UAISenseConfig_Damage(UAISenseConfig_Damage *this,FVTableHelper *param_1)

{
  UAISenseConfig::UAISenseConfig((UAISenseConfig *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseConfig_Damage__6B_;
  (this->Implementation).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UAISenseConfig_Damage @ 146f94070

UAISenseConfig_Damage * __thiscall
UAISenseConfig_Damage::UAISenseConfig_Damage
          (UAISenseConfig_Damage *this,FObjectInitializer *param_1)

{
  FColor FVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseConfig__6B_;
  FVar1 = FColor::White;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FVar1.field0_0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Implementation).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&___7UAISenseConfig_Damage__6B_;
  *(FColor_u_0 *)&this->_padding_ = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  return this;
}

// ~UAISenseConfig_Damage @ 146f96ad0

void __thiscall UAISenseConfig_Damage::~UAISenseConfig_Damage(UAISenseConfig_Damage *this)

{
  this->_padding_ = (longlong)&___7UAISenseConfig_Damage__6B_;
  UAISenseConfig::~UAISenseConfig((UAISenseConfig *)this);
  return;
}

// GetPrivateStaticClass @ 146fb39c0

UClass * __cdecl UAISenseConfig_Damage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseConfig_Damage",
               &Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton,
               StaticRegisterNativesUAISenseConfig_Damage,0x50,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAISenseConfig_Damage>,
               InternalVTableHelperCtorCaller<UAISenseConfig_Damage>,local_res8,
               UAISenseConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseConfig_Damage.InnerSingleton;
}

// GetSenseImplementation @ 146fb4ce0

TSubclassOf<UAISense> __thiscall
UAISenseConfig_Damage::GetSenseImplementation(UAISenseConfig_Damage *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->Implementation).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<UAISense>)in_RDX.field0_0x0;
}

// StaticRegisterNativesUAISenseConfig_Damage @ 146fd3550

void __cdecl UAISenseConfig_Damage::StaticRegisterNativesUAISenseConfig_Damage(void)

{
  return;
}

