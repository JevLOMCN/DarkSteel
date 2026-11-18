// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147287f10

UClass * __cdecl UMaterialExpressionAntialiasedTextureMask::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAntialiasedTextureMask",
               &Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask,0x230,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAntialiasedTextureMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAntialiasedTextureMask>,local_res8,
               UMaterialExpressionTextureSampleParameter2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.InnerSingleton;
}

// UMaterialExpressionAntialiasedTextureMask @ 14728c1d0

UMaterialExpressionAntialiasedTextureMask * __thiscall
UMaterialExpressionAntialiasedTextureMask::UMaterialExpressionAntialiasedTextureMask
          (UMaterialExpressionAntialiasedTextureMask *this,FVTableHelper *param_1)

{
  UMaterialExpressionTextureSampleParameter2D::UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this,param_1);
  this->Threshold = 0.5;
  this->_padding_ = (longlong)&___7UMaterialExpressionAntialiasedTextureMask__6B_;
  (this->Channel).Value = '\x03';
  return this;
}

// ~UMaterialExpressionAntialiasedTextureMask @ 14728d670

void __thiscall
UMaterialExpressionAntialiasedTextureMask::~UMaterialExpressionAntialiasedTextureMask
          (UMaterialExpressionAntialiasedTextureMask *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionAntialiasedTextureMask__6B_;
  UMaterialExpressionTextureSampleParameter2D::~UMaterialExpressionTextureSampleParameter2D
            ((UMaterialExpressionTextureSampleParameter2D *)this);
  return;
}

// GetPrivateStaticClass @ 147290250

UClass * __cdecl UMaterialExpressionAntialiasedTextureMask::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionAntialiasedTextureMask",
               &Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask,0x230,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionAntialiasedTextureMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionAntialiasedTextureMask>,local_res8,
               UMaterialExpressionTextureSampleParameter2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask @ 1472913f0

void __cdecl
UMaterialExpressionAntialiasedTextureMask::
StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask(void)

{
  return;
}

// UMaterialExpressionAntialiasedTextureMask @ 148afa8c0

UMaterialExpressionAntialiasedTextureMask * __thiscall
UMaterialExpressionAntialiasedTextureMask::UMaterialExpressionAntialiasedTextureMask
          (UMaterialExpressionAntialiasedTextureMask *this,FObjectInitializer *param_1)

{
  UMaterialExpressionTextureSampleParameter::UMaterialExpressionTextureSampleParameter
            ((UMaterialExpressionTextureSampleParameter *)this,param_1);
  this->Threshold = 0.5;
  this->_padding_ = (longlong)&___7UMaterialExpressionAntialiasedTextureMask__6B_;
  (this->Channel).Value = '\x03';
  this->_padding_ = 0;
  return this;
}

