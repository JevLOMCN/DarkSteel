// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ccb50

UClass * __cdecl UMaterialExpressionStaticBoolParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticBoolParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStaticBoolParameter,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticBoolParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticBoolParameter>,local_res8,
               UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.InnerSingleton;
}

// UMaterialExpressionStaticBoolParameter @ 1472d3d10

UMaterialExpressionStaticBoolParameter * __thiscall
UMaterialExpressionStaticBoolParameter::UMaterialExpressionStaticBoolParameter
          (UMaterialExpressionStaticBoolParameter *this,FVTableHelper *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticBoolParameter__6B_;
  return this;
}

// ~UMaterialExpressionStaticBoolParameter @ 1472d4880

void __thiscall
UMaterialExpressionStaticBoolParameter::~UMaterialExpressionStaticBoolParameter
          (UMaterialExpressionStaticBoolParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticBoolParameter__6B_;
  UMaterialExpressionParameter::~UMaterialExpressionParameter((UMaterialExpressionParameter *)this);
  return;
}

// GetPrivateStaticClass @ 1472d81f0

UClass * __cdecl UMaterialExpressionStaticBoolParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticBoolParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStaticBoolParameter,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticBoolParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticBoolParameter>,local_res8,
               UMaterialExpressionParameter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticBoolParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionStaticBoolParameter @ 1472d8a80

void __cdecl
UMaterialExpressionStaticBoolParameter::StaticRegisterNativesUMaterialExpressionStaticBoolParameter
          (void)

{
  return;
}

// UMaterialExpressionStaticBoolParameter @ 148afedc0

UMaterialExpressionStaticBoolParameter * __thiscall
UMaterialExpressionStaticBoolParameter::UMaterialExpressionStaticBoolParameter
          (UMaterialExpressionStaticBoolParameter *this,FObjectInitializer *param_1)

{
  UMaterialExpressionParameter::UMaterialExpressionParameter
            ((UMaterialExpressionParameter *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticBoolParameter__6B_;
  return this;
}

