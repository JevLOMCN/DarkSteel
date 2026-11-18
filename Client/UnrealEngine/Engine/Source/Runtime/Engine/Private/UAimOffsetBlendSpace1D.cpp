// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 1473c90b0

UClass * __cdecl UAimOffsetBlendSpace1D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AimOffsetBlendSpace1D",
               &Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton,
               StaticRegisterNativesUAimOffsetBlendSpace1D,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAimOffsetBlendSpace1D>,
               InternalVTableHelperCtorCaller<UAimOffsetBlendSpace1D>,local_res8,
               UBlendSpace1D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton;
}

// UAimOffsetBlendSpace1D @ 1473d7b40

UAimOffsetBlendSpace1D * __thiscall
UAimOffsetBlendSpace1D::UAimOffsetBlendSpace1D(UAimOffsetBlendSpace1D *this,FVTableHelper *param_1)

{
  UBlendSpace1D::UBlendSpace1D((UBlendSpace1D *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined ***)&this->field_0x80 = &___7UAimOffsetBlendSpace1D__6B_;
  return this;
}

// UAimOffsetBlendSpace1D @ 1473d7b90

UAimOffsetBlendSpace1D * __thiscall
UAimOffsetBlendSpace1D::UAimOffsetBlendSpace1D
          (UAimOffsetBlendSpace1D *this,FObjectInitializer *param_1)

{
  UBlendSpace1D::UBlendSpace1D((UBlendSpace1D *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined ***)&this->field_0x80 = &___7UAimOffsetBlendSpace1D__6B_;
  return this;
}

// ~UAimOffsetBlendSpace1D @ 1473daf50

void __thiscall UAimOffsetBlendSpace1D::~UAimOffsetBlendSpace1D(UAimOffsetBlendSpace1D *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IInterface_PreviewMeshProvider__;
  *(undefined ***)&this->field_0x80 = &___7UAimOffsetBlendSpace1D__6B_;
  UBlendSpace1D::~UBlendSpace1D((UBlendSpace1D *)this);
  return;
}

// GetPrivateStaticClass @ 147403460

UClass * __cdecl UAimOffsetBlendSpace1D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AimOffsetBlendSpace1D",
               &Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton,
               StaticRegisterNativesUAimOffsetBlendSpace1D,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAimOffsetBlendSpace1D>,
               InternalVTableHelperCtorCaller<UAimOffsetBlendSpace1D>,local_res8,
               UBlendSpace1D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAimOffsetBlendSpace1D.InnerSingleton;
}

// IsValidAdditive @ 147408180

bool __thiscall UAimOffsetBlendSpace1D::IsValidAdditive(UAimOffsetBlendSpace1D *this)

{
  bool bVar1;
  
  bVar1 = UBlendSpace::ContainsMatchingSamples((UBlendSpace *)this,AAT_RotationOffsetMeshSpace);
  return bVar1;
}

// IsValidAdditiveType @ 1474081d0

bool __thiscall
UAimOffsetBlendSpace1D::IsValidAdditiveType
          (UAimOffsetBlendSpace1D *this,EAdditiveAnimationType param_1)

{
  return param_1 == AAT_RotationOffsetMeshSpace;
}

// StaticRegisterNativesUAimOffsetBlendSpace1D @ 147419b50

void __cdecl UAimOffsetBlendSpace1D::StaticRegisterNativesUAimOffsetBlendSpace1D(void)

{
  return;
}

