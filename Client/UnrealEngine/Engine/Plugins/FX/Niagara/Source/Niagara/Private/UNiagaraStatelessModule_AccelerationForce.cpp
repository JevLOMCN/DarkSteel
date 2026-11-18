// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StaticClass @ 14940df10

UClass * __cdecl UNiagaraStatelessModule_AccelerationForce::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_AccelerationForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_AccelerationForce,0x78,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_AccelerationForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AccelerationForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton;
}

// UNiagaraStatelessModule_AccelerationForce @ 149428ce0

UNiagaraStatelessModule_AccelerationForce * __thiscall
UNiagaraStatelessModule_AccelerationForce::UNiagaraStatelessModule_AccelerationForce
          (UNiagaraStatelessModule_AccelerationForce *this,FVTableHelper *param_1)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AccelerationForce__6B_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->AccelerationDistribution,&UE::Math::TVector<float>::ZeroVector);
  this->CoordinateSpace = Local;
  return this;
}

// UNiagaraStatelessModule_AccelerationForce @ 149428d20

UNiagaraStatelessModule_AccelerationForce * __thiscall
UNiagaraStatelessModule_AccelerationForce::UNiagaraStatelessModule_AccelerationForce
          (UNiagaraStatelessModule_AccelerationForce *this)

{
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AccelerationForce__6B_;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->AccelerationDistribution,&UE::Math::TVector<float>::ZeroVector);
  this->CoordinateSpace = Local;
  return this;
}

// ~UNiagaraStatelessModule_AccelerationForce @ 14942c680

void __thiscall
UNiagaraStatelessModule_AccelerationForce::~UNiagaraStatelessModule_AccelerationForce
          (UNiagaraStatelessModule_AccelerationForce *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AccelerationForce__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->AccelerationDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149431a60

void __thiscall
UNiagaraStatelessModule_AccelerationForce::BuildEmitterData
          (UNiagaraStatelessModule_AccelerationForce *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  bool bVar6;
  FPhysicsBuildData *pFVar7;
  float fVar8;
  float local_24;
  float fStack_20;
  float local_18;
  float fStack_14;
  
  bVar6 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar6) {
    uVar3 = *(undefined8 *)&(this->AccelerationDistribution).Min.field0_0x0;
    fVar5 = (this->AccelerationDistribution).Min.field0_0x0._s_0.Z;
    fVar8 = fVar5;
    uVar4 = uVar3;
    if ((char)(this->AccelerationDistribution)._padding_ != '\x03') {
      fVar8 = (this->AccelerationDistribution).Max.field0_0x0._s_0.Z;
      uVar4 = *(undefined8 *)&(this->AccelerationDistribution).Max.field0_0x0;
    }
    pFVar7 = FNiagaraStatelessEmitterDataBuildContext::
             GetTransientBuildData<NiagaraStateless::FPhysicsBuildData>(param_1);
    local_24 = (float)uVar3;
    fStack_20 = (float)((ulonglong)uVar3 >> 0x20);
    fVar1 = (pFVar7->AccelerationRange).Min.field0_0x0._s_0.X;
    fVar2 = (pFVar7->AccelerationRange).Min.field0_0x0._s_0.Y;
    pFVar7->AccelerationCoordinateSpace = this->CoordinateSpace;
    (pFVar7->AccelerationRange).Min.field0_0x0._s_0.X = local_24 + fVar1;
    (pFVar7->AccelerationRange).Min.field0_0x0._s_0.Y = fStack_20 + fVar2;
    fStack_14 = (float)((ulonglong)uVar4 >> 0x20);
    (pFVar7->AccelerationRange).Min.field0_0x0._s_0.Z =
         fVar5 + (pFVar7->AccelerationRange).Min.field0_0x0._s_0.Z;
    local_18 = (float)uVar4;
    fVar5 = (pFVar7->AccelerationRange).Max.field0_0x0._s_0.Y;
    (pFVar7->AccelerationRange).Max.field0_0x0._s_0.X =
         local_18 + (pFVar7->AccelerationRange).Max.field0_0x0._s_0.X;
    fVar1 = (pFVar7->AccelerationRange).Max.field0_0x0._s_0.Z;
    (pFVar7->AccelerationRange).Max.field0_0x0._s_0.Y = fStack_14 + fVar5;
    (pFVar7->AccelerationRange).Max.field0_0x0._s_0.Z = fVar8 + fVar1;
  }
  return;
}

// GetPrivateStaticClass @ 14944b3b0

UClass * __cdecl UNiagaraStatelessModule_AccelerationForce::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_AccelerationForce",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_AccelerationForce,0x78,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UNiagaraStatelessModule_AccelerationForce>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AccelerationForce>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_AccelerationForce.InnerSingleton;
}

// StaticRegisterNativesUNiagaraStatelessModule_AccelerationForce @ 149469be0

void __cdecl
UNiagaraStatelessModule_AccelerationForce::
StaticRegisterNativesUNiagaraStatelessModule_AccelerationForce(void)

{
  return;
}

