// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14727c190

UClass * __cdecl UForceFeedbackAttenuation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UForceFeedbackAttenuation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ForceFeedbackAttenuation",
               &Z_Registration_Info_UClass_UForceFeedbackAttenuation.InnerSingleton,
               StaticRegisterNativesUForceFeedbackAttenuation,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UForceFeedbackAttenuation>,
               InternalVTableHelperCtorCaller<UForceFeedbackAttenuation>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UForceFeedbackAttenuation.InnerSingleton;
}

// UForceFeedbackAttenuation @ 14727f7d0

UForceFeedbackAttenuation * __thiscall
UForceFeedbackAttenuation::UForceFeedbackAttenuation
          (UForceFeedbackAttenuation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UForceFeedbackAttenuation__6B_;
  FBaseAttenuationSettings::FBaseAttenuationSettings((FBaseAttenuationSettings *)&this->Attenuation)
  ;
  *(undefined ***)&this->Attenuation = &___7FForceFeedbackAttenuationSettings__6B_;
  return this;
}

// UForceFeedbackAttenuation @ 14727f820

UForceFeedbackAttenuation * __thiscall
UForceFeedbackAttenuation::UForceFeedbackAttenuation
          (UForceFeedbackAttenuation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UForceFeedbackAttenuation__6B_;
  FBaseAttenuationSettings::FBaseAttenuationSettings((FBaseAttenuationSettings *)&this->Attenuation)
  ;
  *(undefined ***)&this->Attenuation = &___7FForceFeedbackAttenuationSettings__6B_;
  return this;
}

// ~UForceFeedbackAttenuation @ 14727fd30

void __thiscall
UForceFeedbackAttenuation::~UForceFeedbackAttenuation(UForceFeedbackAttenuation *this)

{
  this->_padding_ = (longlong)&___7UForceFeedbackAttenuation__6B_;
  FBaseAttenuationSettings::~FBaseAttenuationSettings
            ((FBaseAttenuationSettings *)&this->Attenuation);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147280b80

UClass * __cdecl UForceFeedbackAttenuation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UForceFeedbackAttenuation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ForceFeedbackAttenuation",
               &Z_Registration_Info_UClass_UForceFeedbackAttenuation.InnerSingleton,
               StaticRegisterNativesUForceFeedbackAttenuation,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UForceFeedbackAttenuation>,
               InternalVTableHelperCtorCaller<UForceFeedbackAttenuation>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UForceFeedbackAttenuation.InnerSingleton;
}

// StaticRegisterNativesUForceFeedbackAttenuation @ 147281500

void __cdecl UForceFeedbackAttenuation::StaticRegisterNativesUForceFeedbackAttenuation(void)

{
  return;
}

