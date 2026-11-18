// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 14940a460

UClass * __cdecl UNiagaraStatelessModule_GravityForce::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_GravityForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_GravityForce,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_GravityForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_GravityForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton;
}

// UNiagaraStatelessModule_GravityForce @ 1494294c0

UNiagaraStatelessModule_GravityForce * __thiscall
UNiagaraStatelessModule_GravityForce::UNiagaraStatelessModule_GravityForce
          (UNiagaraStatelessModule_GravityForce *this,FVTableHelper *param_1)

{
  TVector<float>_u_0 local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  local_18._0_8_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_GravityForce__6B_;
  local_18._s_0.Z = -980.0;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->GravityDistribution,(TVector<float> *)&local_18._s_0);
  return this;
}

// UNiagaraStatelessModule_GravityForce @ 149429510

UNiagaraStatelessModule_GravityForce * __thiscall
UNiagaraStatelessModule_GravityForce::UNiagaraStatelessModule_GravityForce
          (UNiagaraStatelessModule_GravityForce *this)

{
  TVector<float>_u_0 local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  local_18._0_8_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_GravityForce__6B_;
  local_18._s_0.Z = -980.0;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->GravityDistribution,(TVector<float> *)&local_18._s_0);
  return this;
}

// ~UNiagaraStatelessModule_GravityForce @ 14942c8a0

void __thiscall
UNiagaraStatelessModule_GravityForce::~UNiagaraStatelessModule_GravityForce
          (UNiagaraStatelessModule_GravityForce *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_GravityForce__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->GravityDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149433280

void __thiscall
UNiagaraStatelessModule_GravityForce::BuildEmitterData
          (UNiagaraStatelessModule_GravityForce *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  undefined8 uVar1;
  float fVar2;
  bool bVar3;
  FPhysicsBuildData *pFVar4;
  float fVar5;
  undefined8 uVar6;
  
  bVar3 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar3) {
    uVar1 = *(undefined8 *)&(this->GravityDistribution).Min.field0_0x0;
    fVar2 = (this->GravityDistribution).Min.field0_0x0._s_0.Z;
    uVar6 = uVar1;
    fVar5 = fVar2;
    if ((char)(this->GravityDistribution)._padding_ != '\x03') {
      uVar6 = *(undefined8 *)&(this->GravityDistribution).Max.field0_0x0;
      fVar5 = (this->GravityDistribution).Max.field0_0x0._s_0.Z;
    }
    pFVar4 = FNiagaraStatelessEmitterDataBuildContext::
             GetTransientBuildData<NiagaraStateless::FPhysicsBuildData>(param_1);
    *(undefined8 *)&(pFVar4->GravityRange).Min.field0_0x0 = uVar1;
    *(undefined8 *)&(pFVar4->GravityRange).Max.field0_0x0 = uVar6;
    (pFVar4->GravityRange).Min.field0_0x0._s_0.Z = fVar2;
    (pFVar4->GravityRange).Max.field0_0x0._s_0.Z = fVar5;
  }
  return;
}

// GetPrivateStaticClass @ 14944b9b0

UClass * __cdecl UNiagaraStatelessModule_GravityForce::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_GravityForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_GravityForce,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_GravityForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_GravityForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_GravityForce.InnerSingleton;
}

// StaticRegisterNativesUNiagaraStatelessModule_GravityForce @ 149469c90

void __cdecl
UNiagaraStatelessModule_GravityForce::StaticRegisterNativesUNiagaraStatelessModule_GravityForce
          (void)

{
  return;
}

