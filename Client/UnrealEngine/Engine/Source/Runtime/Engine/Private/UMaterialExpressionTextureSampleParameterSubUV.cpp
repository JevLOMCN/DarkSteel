// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ddf80

UClass * __cdecl UMaterialExpressionTextureSampleParameterSubUV::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameterSubUV",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV,
               0x230,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameterSubUV>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameterSubUV>,
               local_res8,UMaterialExpressionTextureSampleParameter2D::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.InnerSingleton;
}

// UMaterialExpressionTextureSampleParameterSubUV @ 1472e24a0

UMaterialExpressionTextureSampleParameterSubUV * __thiscall
UMaterialExpressionTextureSampleParameterSubUV::UMaterialExpressionTextureSampleParameterSubUV
          (UMaterialExpressionTextureSampleParameterSubUV *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSample::UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x20;
  this->bBlend = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSampleParameterSubUV__6B_;
  return this;
}

// UMaterialExpressionTextureSampleParameterSubUV @ 1472e2500

UMaterialExpressionTextureSampleParameterSubUV * __thiscall
UMaterialExpressionTextureSampleParameterSubUV::UMaterialExpressionTextureSampleParameterSubUV
          (UMaterialExpressionTextureSampleParameterSubUV *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this,param_1);
  this->bBlend = 1;
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSampleParameterSubUV__6B_;
  return this;
}

// ~UMaterialExpressionTextureSampleParameterSubUV @ 1472e3600

void __thiscall
UMaterialExpressionTextureSampleParameterSubUV::~UMaterialExpressionTextureSampleParameterSubUV
          (UMaterialExpressionTextureSampleParameterSubUV *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTextureSampleParameter__6B_;
  UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample
            ((UMaterialExpressionTextureSample *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6120

UClass * __cdecl UMaterialExpressionTextureSampleParameterSubUV::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTextureSampleParameterSubUV",
               &Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV,
               0x230,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTextureSampleParameterSubUV>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTextureSampleParameterSubUV>,
               local_res8,UMaterialExpressionTextureSampleParameter2D::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTextureSampleParameterSubUV.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV @ 1472e78d0

void __cdecl
UMaterialExpressionTextureSampleParameterSubUV::
StaticRegisterNativesUMaterialExpressionTextureSampleParameterSubUV(void)

{
  return;
}

