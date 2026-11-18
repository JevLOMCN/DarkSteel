// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472db810

UClass * __cdecl UMaterialExpressionTruncateLWC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTruncateLWC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTruncateLWC",
               &Z_Registration_Info_UClass_UMaterialExpressionTruncateLWC.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTruncateLWC,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTruncateLWC>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTruncateLWC>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTruncateLWC.InnerSingleton;
}

// UMaterialExpressionTruncateLWC @ 1472e2950

UMaterialExpressionTruncateLWC * __thiscall
UMaterialExpressionTruncateLWC::UMaterialExpressionTruncateLWC
          (UMaterialExpressionTruncateLWC *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTruncateLWC__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionTruncateLWC @ 1472e29a0

UMaterialExpressionTruncateLWC * __thiscall
UMaterialExpressionTruncateLWC::UMaterialExpressionTruncateLWC
          (UMaterialExpressionTruncateLWC *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTruncateLWC__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionTruncateLWC @ 1472e36e0

void __thiscall
UMaterialExpressionTruncateLWC::~UMaterialExpressionTruncateLWC
          (UMaterialExpressionTruncateLWC *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTruncateLWC__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6660

UClass * __cdecl UMaterialExpressionTruncateLWC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTruncateLWC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTruncateLWC",
               &Z_Registration_Info_UClass_UMaterialExpressionTruncateLWC.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTruncateLWC,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTruncateLWC>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTruncateLWC>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTruncateLWC.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTruncateLWC @ 1472e7940

void __cdecl
UMaterialExpressionTruncateLWC::StaticRegisterNativesUMaterialExpressionTruncateLWC(void)

{
  return;
}

