// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147268150

UClass * __cdecl UDistributionVectorParticleParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorParticleParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorParticleParameter",
               &Z_Registration_Info_UClass_UDistributionVectorParticleParameter.InnerSingleton,
               StaticRegisterNativesUDistributionVectorParticleParameter,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVectorParticleParameter>,
               InternalVTableHelperCtorCaller<UDistributionVectorParticleParameter>,local_res8,
               UDistributionVectorParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorParticleParameter.InnerSingleton;
}

// UDistributionVectorParticleParameter @ 14726d0f0

UDistributionVectorParticleParameter * __thiscall
UDistributionVectorParticleParameter::UDistributionVectorParticleParameter
          (UDistributionVectorParticleParameter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistributionVectorParticleParameter @ 14726d790

void __thiscall
UDistributionVectorParticleParameter::~UDistributionVectorParticleParameter
          (UDistributionVectorParticleParameter *this)

{
  *(undefined ***)this = &UDistribution::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472700e0

UClass * __cdecl UDistributionVectorParticleParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionVectorParticleParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionVectorParticleParameter",
               &Z_Registration_Info_UClass_UDistributionVectorParticleParameter.InnerSingleton,
               StaticRegisterNativesUDistributionVectorParticleParameter,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistributionVectorParticleParameter>,
               InternalVTableHelperCtorCaller<UDistributionVectorParticleParameter>,local_res8,
               UDistributionVectorParameterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionVectorParticleParameter.InnerSingleton;
}

// StaticRegisterNativesUDistributionVectorParticleParameter @ 147270b10

void __cdecl
UDistributionVectorParticleParameter::StaticRegisterNativesUDistributionVectorParticleParameter
          (void)

{
  return;
}

// UDistributionVectorParticleParameter @ 14815b080

UDistributionVectorParticleParameter * __thiscall
UDistributionVectorParticleParameter::UDistributionVectorParticleParameter
          (UDistributionVectorParticleParameter *this,FObjectInitializer *param_1)

{
  UDistributionVectorParameterBase::UDistributionVectorParameterBase
            ((UDistributionVectorParameterBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveEdInterface__;
  return this;
}

// GetParamValue @ 14817b1f0

bool __thiscall
UDistributionVectorParticleParameter::GetParamValue
          (UDistributionVectorParticleParameter *this,UObject *param_1,FName param_2,
          TVector<double> *param_3)

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
                    /* WARNING: Could not recover jumptable at 0x00014817b24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)param_1 + 0xb80))
                        (param_1,*(undefined8 *)&this->field_0x58,param_3);
      return (bool)uVar2;
    }
  }
  return false;
}

