// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147297f70

UClass * __cdecl UMaterialExpressionBlackBody::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBlackBody.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBlackBody",
               &Z_Registration_Info_UClass_UMaterialExpressionBlackBody.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBlackBody,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBlackBody>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBlackBody>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBlackBody.InnerSingleton;
}

// UMaterialExpressionBlackBody @ 14729bdd0

UMaterialExpressionBlackBody * __thiscall
UMaterialExpressionBlackBody::UMaterialExpressionBlackBody
          (UMaterialExpressionBlackBody *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBlackBody__6B_;
  (this->Temp).OutputIndex = 0;
  (this->Temp).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Temp).InputName.Number = 0;
  (this->Temp).MaskR = 0;
  (this->Temp).MaskG = 0;
  (this->Temp).MaskB = 0;
  (this->Temp).MaskA = 0;
  (this->Temp).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionBlackBody @ 14729be20

UMaterialExpressionBlackBody * __thiscall
UMaterialExpressionBlackBody::UMaterialExpressionBlackBody
          (UMaterialExpressionBlackBody *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBlackBody__6B_;
  (this->Temp).OutputIndex = 0;
  (this->Temp).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Temp).InputName.Number = 0;
  (this->Temp).MaskR = 0;
  (this->Temp).MaskG = 0;
  (this->Temp).MaskB = 0;
  (this->Temp).MaskA = 0;
  (this->Temp).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionBlackBody @ 14729d670

void __thiscall
UMaterialExpressionBlackBody::~UMaterialExpressionBlackBody(UMaterialExpressionBlackBody *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBlackBody__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729f5d0

UClass * __cdecl UMaterialExpressionBlackBody::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBlackBody.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBlackBody",
               &Z_Registration_Info_UClass_UMaterialExpressionBlackBody.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBlackBody,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBlackBody>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBlackBody>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBlackBody.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionBlackBody @ 1472a1be0

void __cdecl UMaterialExpressionBlackBody::StaticRegisterNativesUMaterialExpressionBlackBody(void)

{
  return;
}

