// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 14726a290

UClass * __cdecl UDistribution::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistribution.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Distribution",
               &Z_Registration_Info_UClass_UDistribution.InnerSingleton,
               StaticRegisterNativesUDistribution,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistribution>,
               InternalVTableHelperCtorCaller<UDistribution>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistribution.InnerSingleton;
}

// UDistribution @ 14726cdc0

UDistribution * __thiscall UDistribution::UDistribution(UDistribution *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveEdInterface__;
  return this;
}

// ~UDistribution @ 14726d550

void __thiscall UDistribution::~UDistribution(UDistribution *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14726f7f0

UClass * __cdecl UDistribution::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistribution.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Distribution",
               &Z_Registration_Info_UClass_UDistribution.InnerSingleton,
               StaticRegisterNativesUDistribution,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDistribution>,
               InternalVTableHelperCtorCaller<UDistribution>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistribution.InnerSingleton;
}

// StaticRegisterNativesUDistribution @ 147270a50

void __cdecl UDistribution::StaticRegisterNativesUDistribution(void)

{
  return;
}

// UDistribution @ 147b3aa40

UDistribution * __thiscall
UDistribution::UDistribution(UDistribution *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FCurveEdInterface__;
  return this;
}

// IsPostLoadThreadSafe @ 147b782a0

bool __thiscall UDistribution::IsPostLoadThreadSafe(UDistribution *this)

{
  return true;
}

