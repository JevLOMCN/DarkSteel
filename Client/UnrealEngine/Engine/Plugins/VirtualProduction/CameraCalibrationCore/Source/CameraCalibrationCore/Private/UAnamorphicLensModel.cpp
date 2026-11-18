// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 9

// StaticClass @ 14d678c60

UClass * __cdecl UAnamorphicLensModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnamorphicLensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"AnamorphicLensModel",
               &Z_Registration_Info_UClass_UAnamorphicLensModel.InnerSingleton,
               StaticRegisterNativesUAnamorphicLensModel,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnamorphicLensModel>,
               InternalVTableHelperCtorCaller<UAnamorphicLensModel>,local_res8,
               ULensModel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnamorphicLensModel.InnerSingleton;
}

// UAnamorphicLensModel @ 14d6a9a60

UAnamorphicLensModel * __thiscall
UAnamorphicLensModel::UAnamorphicLensModel(UAnamorphicLensModel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnamorphicLensModel__6B_;
  return this;
}

// UAnamorphicLensModel @ 14d6a9a90

UAnamorphicLensModel * __thiscall
UAnamorphicLensModel::UAnamorphicLensModel(UAnamorphicLensModel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnamorphicLensModel__6B_;
  return this;
}

// ~UAnamorphicLensModel @ 14d6aca30

void __thiscall UAnamorphicLensModel::~UAnamorphicLensModel(UAnamorphicLensModel *this)

{
  *(undefined ***)this = &___7ULensModel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetModelName @ 14d6d5a20

FName __thiscall UAnamorphicLensModel::GetModelName(UAnamorphicLensModel *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"3DE4 Anamorphic Standard Degree 4");
  return in_RDX;
}

// GetParameterStruct @ 14d6d6c50

UScriptStruct * __thiscall UAnamorphicLensModel::GetParameterStruct(UAnamorphicLensModel *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnamorphicDistortionParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FAnamorphicDistortionParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnamorphicDistortionParameters,(UObject *)pUVar1
                         ,L"AnamorphicDistortionParameters");
  }
  return Z_Registration_Info_UScriptStruct_FAnamorphicDistortionParameters.OuterSingleton;
}

// GetPrivateStaticClass @ 14d6d7bc0

UClass * __cdecl UAnamorphicLensModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnamorphicLensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"AnamorphicLensModel",
               &Z_Registration_Info_UClass_UAnamorphicLensModel.InnerSingleton,
               StaticRegisterNativesUAnamorphicLensModel,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnamorphicLensModel>,
               InternalVTableHelperCtorCaller<UAnamorphicLensModel>,local_res8,
               ULensModel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnamorphicLensModel.InnerSingleton;
}

// GetShortModelName @ 14d6d8d60

FName __thiscall UAnamorphicLensModel::GetShortModelName(UAnamorphicLensModel *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"3DE4 Anamorphic Standard Degree 4");
  return in_RDX;
}

// StaticRegisterNativesUAnamorphicLensModel @ 14d6f0080

void __cdecl UAnamorphicLensModel::StaticRegisterNativesUAnamorphicLensModel(void)

{
  return;
}

