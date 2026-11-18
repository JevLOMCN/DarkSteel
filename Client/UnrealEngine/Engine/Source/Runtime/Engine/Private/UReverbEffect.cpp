// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1484a1ce0

UClass * __cdecl UReverbEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReverbEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReverbEffect",
               &Z_Registration_Info_UClass_UReverbEffect.InnerSingleton,
               StaticRegisterNativesUReverbEffect,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UReverbEffect>,InternalVTableHelperCtorCaller<UReverbEffect>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReverbEffect.InnerSingleton;
}

// UReverbEffect @ 1484bcda0

UReverbEffect * __thiscall UReverbEffect::UReverbEffect(UReverbEffect *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UReverbEffect__6B_;
  return this;
}

// UReverbEffect @ 1484bcdd0

UReverbEffect * __thiscall
UReverbEffect::UReverbEffect(UReverbEffect *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bBypassEarlyReflections = true;
  this->_padding_ = (longlong)&___7UReverbEffect__6B_;
  this->bBypassLateReflections = false;
  this->Density = 1.0;
  this->Diffusion = 1.0;
  this->Gain = 0.32;
  this->GainHF = 0.89;
  this->DecayTime = 1.49;
  this->DecayHFRatio = 0.83;
  this->ReflectionsGain = 0.05;
  this->ReflectionsDelay = 0.007;
  this->LateGain = 1.26;
  this->LateDelay = 0.011;
  this->AirAbsorptionGainHF = 0.994;
  return this;
}

// ~UReverbEffect @ 1484be200

void __thiscall UReverbEffect::~UReverbEffect(UReverbEffect *this)

{
  this->_padding_ = (longlong)&___7UReverbEffect__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1484d95a0

UClass * __cdecl UReverbEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReverbEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ReverbEffect",
               &Z_Registration_Info_UClass_UReverbEffect.InnerSingleton,
               StaticRegisterNativesUReverbEffect,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UReverbEffect>,InternalVTableHelperCtorCaller<UReverbEffect>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReverbEffect.InnerSingleton;
}

// StaticRegisterNativesUReverbEffect @ 1484fcfd0

void __cdecl UReverbEffect::StaticRegisterNativesUReverbEffect(void)

{
  return;
}

