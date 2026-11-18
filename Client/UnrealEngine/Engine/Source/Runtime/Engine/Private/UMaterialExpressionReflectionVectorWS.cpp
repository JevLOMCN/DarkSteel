// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bb360

UClass * __cdecl UMaterialExpressionReflectionVectorWS::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionReflectionVectorWS",
               &Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionReflectionVectorWS,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionReflectionVectorWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionReflectionVectorWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.InnerSingleton;
}

// UMaterialExpressionReflectionVectorWS @ 1472c19c0

UMaterialExpressionReflectionVectorWS * __thiscall
UMaterialExpressionReflectionVectorWS::UMaterialExpressionReflectionVectorWS
          (UMaterialExpressionReflectionVectorWS *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionReflectionVectorWS__6B_;
  (this->CustomWorldNormal).OutputIndex = 0;
  (this->CustomWorldNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CustomWorldNormal).InputName.Number = 0;
  (this->CustomWorldNormal).MaskR = 0;
  (this->CustomWorldNormal).MaskG = 0;
  (this->CustomWorldNormal).MaskB = 0;
  (this->CustomWorldNormal).MaskA = 0;
  (this->CustomWorldNormal).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionReflectionVectorWS @ 1472c1a10

UMaterialExpressionReflectionVectorWS * __thiscall
UMaterialExpressionReflectionVectorWS::UMaterialExpressionReflectionVectorWS
          (UMaterialExpressionReflectionVectorWS *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionReflectionVectorWS__6B_;
  (this->CustomWorldNormal).OutputIndex = 0;
  (this->CustomWorldNormal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CustomWorldNormal).InputName.Number = 0;
  (this->CustomWorldNormal).MaskR = 0;
  (this->CustomWorldNormal).MaskG = 0;
  (this->CustomWorldNormal).MaskB = 0;
  (this->CustomWorldNormal).MaskA = 0;
  (this->CustomWorldNormal).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionReflectionVectorWS @ 1472c26f0

void __thiscall
UMaterialExpressionReflectionVectorWS::~UMaterialExpressionReflectionVectorWS
          (UMaterialExpressionReflectionVectorWS *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionReflectionVectorWS__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6df0

UClass * __cdecl UMaterialExpressionReflectionVectorWS::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionReflectionVectorWS",
               &Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionReflectionVectorWS,0xe0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionReflectionVectorWS>,
               InternalVTableHelperCtorCaller<UMaterialExpressionReflectionVectorWS>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionReflectionVectorWS.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionReflectionVectorWS @ 1472c77a0

void __cdecl
UMaterialExpressionReflectionVectorWS::StaticRegisterNativesUMaterialExpressionReflectionVectorWS
          (void)

{
  return;
}

