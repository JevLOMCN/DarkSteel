// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147296b60

UClass * __cdecl UMaterialExpressionDistanceFieldGradient::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDistanceFieldGradient",
               &Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDistanceFieldGradient,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDistanceFieldGradient>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDistanceFieldGradient>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.InnerSingleton;
}

// UMaterialExpressionDistanceFieldGradient @ 14729d4d0

UMaterialExpressionDistanceFieldGradient * __thiscall
UMaterialExpressionDistanceFieldGradient::UMaterialExpressionDistanceFieldGradient
          (UMaterialExpressionDistanceFieldGradient *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceFieldGradient__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// UMaterialExpressionDistanceFieldGradient @ 14729d530

UMaterialExpressionDistanceFieldGradient * __thiscall
UMaterialExpressionDistanceFieldGradient::UMaterialExpressionDistanceFieldGradient
          (UMaterialExpressionDistanceFieldGradient *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceFieldGradient__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// ~UMaterialExpressionDistanceFieldGradient @ 14729dd70

void __thiscall
UMaterialExpressionDistanceFieldGradient::~UMaterialExpressionDistanceFieldGradient
          (UMaterialExpressionDistanceFieldGradient *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDistanceFieldGradient__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1850

UClass * __cdecl UMaterialExpressionDistanceFieldGradient::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDistanceFieldGradient",
               &Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDistanceFieldGradient,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDistanceFieldGradient>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDistanceFieldGradient>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDistanceFieldGradient.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDistanceFieldGradient @ 1472a1ef0

void __cdecl
UMaterialExpressionDistanceFieldGradient::
StaticRegisterNativesUMaterialExpressionDistanceFieldGradient(void)

{
  return;
}

