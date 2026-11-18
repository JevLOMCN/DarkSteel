// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a6200

UClass * __cdecl UMaterialExpressionFloatToUInt::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFloatToUInt",
               &Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFloatToUInt,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFloatToUInt>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFloatToUInt>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.InnerSingleton;
}

// UMaterialExpressionFloatToUInt @ 1472ad170

UMaterialExpressionFloatToUInt * __thiscall
UMaterialExpressionFloatToUInt::UMaterialExpressionFloatToUInt
          (UMaterialExpressionFloatToUInt *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFloatToUInt__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->Mode = Truncate;
  return this;
}

// UMaterialExpressionFloatToUInt @ 1472ad1d0

UMaterialExpressionFloatToUInt * __thiscall
UMaterialExpressionFloatToUInt::UMaterialExpressionFloatToUInt
          (UMaterialExpressionFloatToUInt *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFloatToUInt__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->Mode = Truncate;
  return this;
}

// ~UMaterialExpressionFloatToUInt @ 1472af770

void __thiscall
UMaterialExpressionFloatToUInt::~UMaterialExpressionFloatToUInt
          (UMaterialExpressionFloatToUInt *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionFloatToUInt__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b24e0

UClass * __cdecl UMaterialExpressionFloatToUInt::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFloatToUInt",
               &Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFloatToUInt,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFloatToUInt>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFloatToUInt>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFloatToUInt.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFloatToUInt @ 1472b4550

void __cdecl
UMaterialExpressionFloatToUInt::StaticRegisterNativesUMaterialExpressionFloatToUInt(void)

{
  return;
}

