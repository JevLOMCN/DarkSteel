// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 9

// StaticClass @ 14d67bb00

UClass * __cdecl UBrownConradyDULensModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrownConradyDULensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"BrownConradyDULensModel",
               &Z_Registration_Info_UClass_UBrownConradyDULensModel.InnerSingleton,
               StaticRegisterNativesUBrownConradyDULensModel,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBrownConradyDULensModel>,
               InternalVTableHelperCtorCaller<UBrownConradyDULensModel>,local_res8,
               ULensModel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrownConradyDULensModel.InnerSingleton;
}

// UBrownConradyDULensModel @ 14d6a9b60

UBrownConradyDULensModel * __thiscall
UBrownConradyDULensModel::UBrownConradyDULensModel
          (UBrownConradyDULensModel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBrownConradyDULensModel__6B_;
  return this;
}

// UBrownConradyDULensModel @ 14d6a9b90

UBrownConradyDULensModel * __thiscall
UBrownConradyDULensModel::UBrownConradyDULensModel
          (UBrownConradyDULensModel *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UBrownConradyDULensModel__6B_;
  return this;
}

// ~UBrownConradyDULensModel @ 14d6acaa0

void __thiscall UBrownConradyDULensModel::~UBrownConradyDULensModel(UBrownConradyDULensModel *this)

{
  *(undefined ***)this = &___7ULensModel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetModelName @ 14d6d5a50

FName __thiscall UBrownConradyDULensModel::GetModelName(UBrownConradyDULensModel *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Brown-Conrady D-U");
  return in_RDX;
}

// GetParameterStruct @ 14d6d6c90

UScriptStruct * __thiscall
UBrownConradyDULensModel::GetParameterStruct(UBrownConradyDULensModel *this)

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

// GetPrivateStaticClass @ 14d6d7d40

UClass * __cdecl UBrownConradyDULensModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrownConradyDULensModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CameraCalibrationCore",L"BrownConradyDULensModel",
               &Z_Registration_Info_UClass_UBrownConradyDULensModel.InnerSingleton,
               StaticRegisterNativesUBrownConradyDULensModel,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBrownConradyDULensModel>,
               InternalVTableHelperCtorCaller<UBrownConradyDULensModel>,local_res8,
               ULensModel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrownConradyDULensModel.InnerSingleton;
}

// GetShortModelName @ 14d6d8d90

FName __thiscall UBrownConradyDULensModel::GetShortModelName(UBrownConradyDULensModel *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Brown-Conrady D-U");
  return in_RDX;
}

// StaticRegisterNativesUBrownConradyDULensModel @ 14d6f00a0

void __cdecl UBrownConradyDULensModel::StaticRegisterNativesUBrownConradyDULensModel(void)

{
  return;
}

