// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 9

// StaticClass @ 14d67c220

UClass * __cdecl USphericalLensModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphericalLensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"SphericalLensModel",
               &Z_Registration_Info_UClass_USphericalLensModel.InnerSingleton,
               StaticRegisterNativesUSphericalLensModel,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USphericalLensModel>,
               InternalVTableHelperCtorCaller<USphericalLensModel>,local_res8,
               ULensModel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphericalLensModel.InnerSingleton;
}

// USphericalLensModel @ 14d6ab660

USphericalLensModel * __thiscall
USphericalLensModel::USphericalLensModel(USphericalLensModel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USphericalLensModel__6B_;
  return this;
}

// USphericalLensModel @ 14d6ab690

USphericalLensModel * __thiscall
USphericalLensModel::USphericalLensModel(USphericalLensModel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USphericalLensModel__6B_;
  return this;
}

// ~USphericalLensModel @ 14d6ad1a0

void __thiscall USphericalLensModel::~USphericalLensModel(USphericalLensModel *this)

{
  *(undefined ***)this = &___7ULensModel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetModelName @ 14d6d5b00

FName __thiscall USphericalLensModel::GetModelName(USphericalLensModel *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Spherical Lens Model");
  return in_RDX;
}

// GetParameterStruct @ 14d6d6d40

UScriptStruct * __thiscall USphericalLensModel::GetParameterStruct(USphericalLensModel *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSphericalDistortionParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FSphericalDistortionParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSphericalDistortionParameters,(UObject *)pUVar1,
                         L"SphericalDistortionParameters");
  }
  return Z_Registration_Info_UScriptStruct_FSphericalDistortionParameters.OuterSingleton;
}

// GetPrivateStaticClass @ 14d6d88d0

UClass * __cdecl USphericalLensModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphericalLensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"SphericalLensModel",
               &Z_Registration_Info_UClass_USphericalLensModel.InnerSingleton,
               StaticRegisterNativesUSphericalLensModel,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USphericalLensModel>,
               InternalVTableHelperCtorCaller<USphericalLensModel>,local_res8,
               ULensModel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphericalLensModel.InnerSingleton;
}

// GetShortModelName @ 14d6d8e40

FName __thiscall USphericalLensModel::GetShortModelName(USphericalLensModel *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Spherical");
  return in_RDX;
}

// StaticRegisterNativesUSphericalLensModel @ 14d6f0260

void __cdecl USphericalLensModel::StaticRegisterNativesUSphericalLensModel(void)

{
  return;
}

