// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a7b80

UClass * __cdecl UMaterialExpressionHairAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionHairAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionHairAttributes,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionHairAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionHairAttributes>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.InnerSingleton;
}

// UMaterialExpressionHairAttributes @ 1472ad970

UMaterialExpressionHairAttributes * __thiscall
UMaterialExpressionHairAttributes::UMaterialExpressionHairAttributes
          (UMaterialExpressionHairAttributes *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->bUseTangentSpace = 1;
  this->_padding_ = (longlong)&___7UMaterialExpressionHairAttributes__6B_;
  return this;
}

// ~UMaterialExpressionHairAttributes @ 1472af990

void __thiscall
UMaterialExpressionHairAttributes::~UMaterialExpressionHairAttributes
          (UMaterialExpressionHairAttributes *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionHairAttributes__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2ea0

UClass * __cdecl UMaterialExpressionHairAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionHairAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionHairAttributes,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionHairAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionHairAttributes>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionHairAttributes.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionHairAttributes @ 1472b4620

void __cdecl
UMaterialExpressionHairAttributes::StaticRegisterNativesUMaterialExpressionHairAttributes(void)

{
  return;
}

// UMaterialExpressionHairAttributes @ 148afc770

UMaterialExpressionHairAttributes * __thiscall
UMaterialExpressionHairAttributes::UMaterialExpressionHairAttributes
          (UMaterialExpressionHairAttributes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bUseTangentSpace = 1;
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
  this->_padding_ = (longlong)&___7UMaterialExpressionHairAttributes__6B_;
  return this;
}

