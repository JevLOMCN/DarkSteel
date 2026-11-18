// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147297af0

UClass * __cdecl UMaterialExpressionConstant::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstant",
               &Z_Registration_Info_UClass_UMaterialExpressionConstant.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstant,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstant>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstant>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstant.InnerSingleton;
}

// UMaterialExpressionConstant @ 14729c8c0

UMaterialExpressionConstant * __thiscall
UMaterialExpressionConstant::UMaterialExpressionConstant
          (UMaterialExpressionConstant *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant__6B_;
  return this;
}

// ~UMaterialExpressionConstant @ 14729d970

void __thiscall
UMaterialExpressionConstant::~UMaterialExpressionConstant(UMaterialExpressionConstant *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0650

UClass * __cdecl UMaterialExpressionConstant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstant",
               &Z_Registration_Info_UClass_UMaterialExpressionConstant.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstant,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstant>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstant>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstant.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionConstant @ 1472a1d40

void __cdecl UMaterialExpressionConstant::StaticRegisterNativesUMaterialExpressionConstant(void)

{
  return;
}

// UMaterialExpressionConstant @ 148afb210

UMaterialExpressionConstant * __thiscall
UMaterialExpressionConstant::UMaterialExpressionConstant
          (UMaterialExpressionConstant *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant__6B_;
  return this;
}

