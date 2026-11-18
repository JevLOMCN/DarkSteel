// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 9

// StaticClass @ 14d67b1c0

UClass * __cdecl UBrownConradyUDLensModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrownConradyUDLensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"BrownConradyUDLensModel",
               &Z_Registration_Info_UClass_UBrownConradyUDLensModel.InnerSingleton,
               StaticRegisterNativesUBrownConradyUDLensModel,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBrownConradyUDLensModel>,
               InternalVTableHelperCtorCaller<UBrownConradyUDLensModel>,local_res8,
               ULensModel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrownConradyUDLensModel.InnerSingleton;
}

// UBrownConradyUDLensModel @ 14d6a9c60

UBrownConradyUDLensModel * __thiscall
UBrownConradyUDLensModel::UBrownConradyUDLensModel
          (UBrownConradyUDLensModel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBrownConradyUDLensModel__6B_;
  return this;
}

// UBrownConradyUDLensModel @ 14d6a9c90

UBrownConradyUDLensModel * __thiscall
UBrownConradyUDLensModel::UBrownConradyUDLensModel
          (UBrownConradyUDLensModel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBrownConradyUDLensModel__6B_;
  return this;
}

// ~UBrownConradyUDLensModel @ 14d6acb10

void __thiscall UBrownConradyUDLensModel::~UBrownConradyUDLensModel(UBrownConradyUDLensModel *this)

{
  *(undefined ***)this = &___7ULensModel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetModelName @ 14d6d5a80

FName __thiscall UBrownConradyUDLensModel::GetModelName(UBrownConradyUDLensModel *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Brown-Conrady U-D");
  return in_RDX;
}

// GetParameterStruct @ 14d6d6cd0

UScriptStruct * __thiscall
UBrownConradyUDLensModel::GetParameterStruct(UBrownConradyUDLensModel *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBrownConradyUDDistortionParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CameraCalibrationCore();
    Z_Registration_Info_UScriptStruct_FBrownConradyUDDistortionParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBrownConradyUDDistortionParameters,
                         (UObject *)pUVar1,L"BrownConradyUDDistortionParameters");
  }
  return Z_Registration_Info_UScriptStruct_FBrownConradyUDDistortionParameters.OuterSingleton;
}

// GetPrivateStaticClass @ 14d6d7ec0

UClass * __cdecl UBrownConradyUDLensModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrownConradyUDLensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"BrownConradyUDLensModel",
               &Z_Registration_Info_UClass_UBrownConradyUDLensModel.InnerSingleton,
               StaticRegisterNativesUBrownConradyUDLensModel,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBrownConradyUDLensModel>,
               InternalVTableHelperCtorCaller<UBrownConradyUDLensModel>,local_res8,
               ULensModel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrownConradyUDLensModel.InnerSingleton;
}

// GetShortModelName @ 14d6d8dc0

FName __thiscall UBrownConradyUDLensModel::GetShortModelName(UBrownConradyUDLensModel *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Brown-Conrady U-D");
  return in_RDX;
}

// StaticRegisterNativesUBrownConradyUDLensModel @ 14d6f00c0

void __cdecl UBrownConradyUDLensModel::StaticRegisterNativesUBrownConradyUDLensModel(void)

{
  return;
}

