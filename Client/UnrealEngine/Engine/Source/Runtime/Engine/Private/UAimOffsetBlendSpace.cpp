// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1473c8b90

UClass * __cdecl UAimOffsetBlendSpace::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AimOffsetBlendSpace",
               &Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton,
               StaticRegisterNativesUAimOffsetBlendSpace,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAimOffsetBlendSpace>,
               InternalVTableHelperCtorCaller<UAimOffsetBlendSpace>,local_res8,
               UBlendSpace::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton;
}

// UAimOffsetBlendSpace @ 1473d7be0

UAimOffsetBlendSpace * __thiscall
UAimOffsetBlendSpace::UAimOffsetBlendSpace(UAimOffsetBlendSpace *this,FVTableHelper *param_1)

{
  UBlendSpace::UBlendSpace((UBlendSpace *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined ***)&this->field_0x80 = &___7UAimOffsetBlendSpace__6B_;
  return this;
}

// UAimOffsetBlendSpace @ 1473d7c30

UAimOffsetBlendSpace * __thiscall
UAimOffsetBlendSpace::UAimOffsetBlendSpace(UAimOffsetBlendSpace *this,FObjectInitializer *param_1)

{
  UBlendSpace::UBlendSpace((UBlendSpace *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined ***)&this->field_0x80 = &___7UAimOffsetBlendSpace__6B_;
  return this;
}

// ~UAimOffsetBlendSpace @ 1473daf90

void __thiscall UAimOffsetBlendSpace::~UAimOffsetBlendSpace(UAimOffsetBlendSpace *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined ***)&this->field_0x80 = &___7UAimOffsetBlendSpace__6B_;
  UBlendSpace::~UBlendSpace((UBlendSpace *)this);
  return;
}

// GetPrivateStaticClass @ 147403520

UClass * __cdecl UAimOffsetBlendSpace::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AimOffsetBlendSpace",
               &Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton,
               StaticRegisterNativesUAimOffsetBlendSpace,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAimOffsetBlendSpace>,
               InternalVTableHelperCtorCaller<UAimOffsetBlendSpace>,local_res8,
               UBlendSpace::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAimOffsetBlendSpace.InnerSingleton;
}

// IsValidAdditive @ 147408190

bool __thiscall UAimOffsetBlendSpace::IsValidAdditive(UAimOffsetBlendSpace *this)

{
  bool bVar1;
  
  bVar1 = UBlendSpace::ContainsMatchingSamples((UBlendSpace *)this,AAT_RotationOffsetMeshSpace);
  return bVar1;
}

// IsValidAdditiveType @ 1474081e0

bool __thiscall
UAimOffsetBlendSpace::IsValidAdditiveType(UAimOffsetBlendSpace *this,EAdditiveAnimationType param_1)

{
  return param_1 == AAT_RotationOffsetMeshSpace;
}

// StaticRegisterNativesUAimOffsetBlendSpace @ 147419b60

void __cdecl UAimOffsetBlendSpace::StaticRegisterNativesUAimOffsetBlendSpace(void)

{
  return;
}

