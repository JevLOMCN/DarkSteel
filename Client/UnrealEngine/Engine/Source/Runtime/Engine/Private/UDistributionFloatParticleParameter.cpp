// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472662e0

UClass * __cdecl UDistributionFloatParticleParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatParticleParameter.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatParticleParameter",
               &Z_Registration_Info_UClass_UDistributionFloatParticleParameter.InnerSingleton,
               StaticRegisterNativesUDistributionFloatParticleParameter,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionFloatParticleParameter>,
               InternalVTableHelperCtorCaller<UDistributionFloatParticleParameter>,local_res8,
               UDistributionFloatParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatParticleParameter.InnerSingleton;
}

// UDistributionFloatParticleParameter @ 14726cf10

UDistributionFloatParticleParameter * __thiscall
UDistributionFloatParticleParameter::UDistributionFloatParticleParameter
          (UDistributionFloatParticleParameter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistributionFloatParticleParameter @ 14726d630

void __thiscall
UDistributionFloatParticleParameter::~UDistributionFloatParticleParameter
          (UDistributionFloatParticleParameter *this)

{
  *(undefined ***)this = &UDistribution::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726fba0

UClass * __cdecl UDistributionFloatParticleParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatParticleParameter.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatParticleParameter",
               &Z_Registration_Info_UClass_UDistributionFloatParticleParameter.InnerSingleton,
               StaticRegisterNativesUDistributionFloatParticleParameter,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionFloatParticleParameter>,
               InternalVTableHelperCtorCaller<UDistributionFloatParticleParameter>,local_res8,
               UDistributionFloatParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatParticleParameter.InnerSingleton;
}

// StaticRegisterNativesUDistributionFloatParticleParameter @ 147270aa0

void __cdecl
UDistributionFloatParticleParameter::StaticRegisterNativesUDistributionFloatParticleParameter(void)

{
  return;
}

// UDistributionFloatParticleParameter @ 14815b040

UDistributionFloatParticleParameter * __thiscall
UDistributionFloatParticleParameter::UDistributionFloatParticleParameter
          (UDistributionFloatParticleParameter *this,FObjectInitializer *param_1)

{
  UDistributionFloatParameterBase::UDistributionFloatParameterBase
            ((UDistributionFloatParameterBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveEdInterface__;
  return this;
}

// GetParamValue @ 14817b170

bool __thiscall
UDistributionFloatParticleParameter::GetParamValue
          (UDistributionFloatParticleParameter *this,UObject *param_1,FName param_2,float *param_3)

{
  int iVar1;
  undefined1 uVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = UParticleSystemComponent::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x00014817b1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)param_1 + 0xb70))
                        (param_1,*(undefined8 *)&this->field_0x40,param_3);
      return (bool)uVar2;
    }
  }
  return false;
}

