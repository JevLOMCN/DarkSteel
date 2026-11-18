// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472de390

UClass * __cdecl UMaterialExpressionTime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTime",
               &Z_Registration_Info_UClass_UMaterialExpressionTime.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTime,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTime>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTime>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTime.InnerSingleton;
}

// UMaterialExpressionTime @ 1472e25f0

UMaterialExpressionTime * __thiscall
UMaterialExpressionTime::UMaterialExpressionTime
          (UMaterialExpressionTime *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->bOverride_Period = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTime__6B_;
  this->Period = 0.0;
  return this;
}

// UMaterialExpressionTime @ 1472e2630

UMaterialExpressionTime * __thiscall
UMaterialExpressionTime::UMaterialExpressionTime
          (UMaterialExpressionTime *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->bOverride_Period = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionTime__6B_;
  this->Period = 0.0;
  return this;
}

// ~UMaterialExpressionTime @ 1472e3660

void __thiscall UMaterialExpressionTime::~UMaterialExpressionTime(UMaterialExpressionTime *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTime__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e6360

UClass * __cdecl UMaterialExpressionTime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTime",
               &Z_Registration_Info_UClass_UMaterialExpressionTime.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTime,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTime>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTime>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTime.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTime @ 1472e7900

void __cdecl UMaterialExpressionTime::StaticRegisterNativesUMaterialExpressionTime(void)

{
  return;
}

