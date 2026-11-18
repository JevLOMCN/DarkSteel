// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cc940

UClass * __cdecl UMaterialExpressionStaticBool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticBool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticBool",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticBool.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStaticBool,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticBool>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticBool>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticBool.InnerSingleton;
}

// UMaterialExpressionStaticBool @ 1472d3ce0

UMaterialExpressionStaticBool * __thiscall
UMaterialExpressionStaticBool::UMaterialExpressionStaticBool
          (UMaterialExpressionStaticBool *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticBool__6B_;
  return this;
}

// ~UMaterialExpressionStaticBool @ 1472d4860

void __thiscall
UMaterialExpressionStaticBool::~UMaterialExpressionStaticBool(UMaterialExpressionStaticBool *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticBool__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d8130

UClass * __cdecl UMaterialExpressionStaticBool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionStaticBool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionStaticBool",
               &Z_Registration_Info_UClass_UMaterialExpressionStaticBool.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionStaticBool,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionStaticBool>,
               InternalVTableHelperCtorCaller<UMaterialExpressionStaticBool>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionStaticBool.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionStaticBool @ 1472d8a70

void __cdecl UMaterialExpressionStaticBool::StaticRegisterNativesUMaterialExpressionStaticBool(void)

{
  return;
}

// UMaterialExpressionStaticBool @ 148afed50

UMaterialExpressionStaticBool * __thiscall
UMaterialExpressionStaticBool::UMaterialExpressionStaticBool
          (UMaterialExpressionStaticBool *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionStaticBool__6B_;
  return this;
}

