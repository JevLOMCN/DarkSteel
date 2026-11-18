// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 1494120b0

UClass * __cdecl UNiagaraStatelessModule_CurlNoiseForce::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CurlNoiseForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_CurlNoiseForce,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_CurlNoiseForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CurlNoiseForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton;
}

// UNiagaraStatelessModule_CurlNoiseForce @ 149429020

UNiagaraStatelessModule_CurlNoiseForce * __thiscall
UNiagaraStatelessModule_CurlNoiseForce::UNiagaraStatelessModule_CurlNoiseForce
          (UNiagaraStatelessModule_CurlNoiseForce *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->NoiseStrength = 10.0;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CurlNoiseForce__6B_;
  this->NoiseFrequency = 50.0;
  return this;
}

// UNiagaraStatelessModule_CurlNoiseForce @ 149429060

UNiagaraStatelessModule_CurlNoiseForce * __thiscall
UNiagaraStatelessModule_CurlNoiseForce::UNiagaraStatelessModule_CurlNoiseForce
          (UNiagaraStatelessModule_CurlNoiseForce *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->NoiseStrength = 10.0;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CurlNoiseForce__6B_;
  this->NoiseFrequency = 50.0;
  return this;
}

// ~UNiagaraStatelessModule_CurlNoiseForce @ 14942c770

void __thiscall
UNiagaraStatelessModule_CurlNoiseForce::~UNiagaraStatelessModule_CurlNoiseForce
          (UNiagaraStatelessModule_CurlNoiseForce *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_CurlNoiseForce__6B_;
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 1494321d0

void __thiscall
UNiagaraStatelessModule_CurlNoiseForce::BuildEmitterData
          (UNiagaraStatelessModule_CurlNoiseForce *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  bool bVar1;
  FPhysicsBuildData *pFVar2;
  
  bVar1 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar1) {
    pFVar2 = FNiagaraStatelessEmitterDataBuildContext::
             GetTransientBuildData<NiagaraStateless::FPhysicsBuildData>(param_1);
    pFVar2->bNoiseEnabled = true;
    pFVar2->NoiseStrength = this->NoiseStrength;
    pFVar2->NoiseFrequency = this->NoiseFrequency;
  }
  return;
}

// GetPrivateStaticClass @ 14944b6b0

UClass * __cdecl UNiagaraStatelessModule_CurlNoiseForce::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_CurlNoiseForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_CurlNoiseForce,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_CurlNoiseForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_CurlNoiseForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_CurlNoiseForce.InnerSingleton;
}

// StaticRegisterNativesUNiagaraStatelessModule_CurlNoiseForce @ 149469c20

void __cdecl
UNiagaraStatelessModule_CurlNoiseForce::StaticRegisterNativesUNiagaraStatelessModule_CurlNoiseForce
          (void)

{
  return;
}

