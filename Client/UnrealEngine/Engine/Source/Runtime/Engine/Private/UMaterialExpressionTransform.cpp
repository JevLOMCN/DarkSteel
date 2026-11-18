// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472de540

UClass * __cdecl UMaterialExpressionTransform::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTransform",
               &Z_Registration_Info_UClass_UMaterialExpressionTransform.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTransform,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTransform>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTransform>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTransform.InnerSingleton;
}

// UMaterialExpressionTransform @ 1472e2670

UMaterialExpressionTransform * __thiscall
UMaterialExpressionTransform::UMaterialExpressionTransform
          (UMaterialExpressionTransform *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTransform__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->TransformSourceType = '\0';
  this->TransformType = '\x02';
  return this;
}

// UMaterialExpressionTransform @ 1472e26d0

UMaterialExpressionTransform * __thiscall
UMaterialExpressionTransform::UMaterialExpressionTransform
          (UMaterialExpressionTransform *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTransform__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->TransformSourceType = '\0';
  this->TransformType = '\x02';
  return this;
}

// ~UMaterialExpressionTransform @ 1472e3680

void __thiscall
UMaterialExpressionTransform::~UMaterialExpressionTransform(UMaterialExpressionTransform *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTransform__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6420

UClass * __cdecl UMaterialExpressionTransform::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTransform",
               &Z_Registration_Info_UClass_UMaterialExpressionTransform.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTransform,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTransform>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTransform>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTransform.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTransform @ 1472e7910

void __cdecl UMaterialExpressionTransform::StaticRegisterNativesUMaterialExpressionTransform(void)

{
  return;
}

