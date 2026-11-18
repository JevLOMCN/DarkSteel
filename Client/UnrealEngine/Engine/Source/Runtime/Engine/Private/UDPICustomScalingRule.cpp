// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b2c530

UClass * __cdecl UDPICustomScalingRule::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDPICustomScalingRule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DPICustomScalingRule",
               &Z_Registration_Info_UClass_UDPICustomScalingRule.InnerSingleton,
               StaticRegisterNativesUDPICustomScalingRule,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDPICustomScalingRule>,
               InternalVTableHelperCtorCaller<UDPICustomScalingRule>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDPICustomScalingRule.InnerSingleton;
}

// UDPICustomScalingRule @ 147b3a9e0

UDPICustomScalingRule * __thiscall
UDPICustomScalingRule::UDPICustomScalingRule(UDPICustomScalingRule *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDPICustomScalingRule__6B_;
  return this;
}

// UDPICustomScalingRule @ 147b3aa10

UDPICustomScalingRule * __thiscall
UDPICustomScalingRule::UDPICustomScalingRule
          (UDPICustomScalingRule *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDPICustomScalingRule__6B_;
  return this;
}

// ~UDPICustomScalingRule @ 147b3d5c0

void __thiscall UDPICustomScalingRule::~UDPICustomScalingRule(UDPICustomScalingRule *this)

{
  *(undefined ***)this = &___7UDPICustomScalingRule__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDPIScaleBasedOnSize @ 147b648c0

float __thiscall
UDPICustomScalingRule::GetDPIScaleBasedOnSize(UDPICustomScalingRule *this,TIntPoint<int> param_1)

{
  return __real_3f800000;
}

// GetPrivateStaticClass @ 147b6bb80

UClass * __cdecl UDPICustomScalingRule::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDPICustomScalingRule.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DPICustomScalingRule",
               &Z_Registration_Info_UClass_UDPICustomScalingRule.InnerSingleton,
               StaticRegisterNativesUDPICustomScalingRule,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDPICustomScalingRule>,
               InternalVTableHelperCtorCaller<UDPICustomScalingRule>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDPICustomScalingRule.InnerSingleton;
}

// StaticRegisterNativesUDPICustomScalingRule @ 147b8ebc0

void __cdecl UDPICustomScalingRule::StaticRegisterNativesUDPICustomScalingRule(void)

{
  return;
}

