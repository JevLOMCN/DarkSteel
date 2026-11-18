// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147294190

UClass * __cdecl UMaterialExpressionConstant4Vector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstant4Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstant4Vector,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstant4Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstant4Vector>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.InnerSingleton;
}

// UMaterialExpressionConstant4Vector @ 14729c890

UMaterialExpressionConstant4Vector * __thiscall
UMaterialExpressionConstant4Vector::UMaterialExpressionConstant4Vector
          (UMaterialExpressionConstant4Vector *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant4Vector__6B_;
  return this;
}

// ~UMaterialExpressionConstant4Vector @ 14729d950

void __thiscall
UMaterialExpressionConstant4Vector::~UMaterialExpressionConstant4Vector
          (UMaterialExpressionConstant4Vector *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant4Vector__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0590

UClass * __cdecl UMaterialExpressionConstant4Vector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstant4Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstant4Vector,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstant4Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstant4Vector>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstant4Vector.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionConstant4Vector @ 1472a1d30

void __cdecl
UMaterialExpressionConstant4Vector::StaticRegisterNativesUMaterialExpressionConstant4Vector(void)

{
  return;
}

// UMaterialExpressionConstant4Vector @ 148afb1a0

UMaterialExpressionConstant4Vector * __thiscall
UMaterialExpressionConstant4Vector::UMaterialExpressionConstant4Vector
          (UMaterialExpressionConstant4Vector *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant4Vector__6B_;
  return this;
}

