// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147298150

UClass * __cdecl UMaterialExpressionConstant3Vector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstant3Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstant3Vector,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstant3Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstant3Vector>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.InnerSingleton;
}

// UMaterialExpressionConstant3Vector @ 14729c860

UMaterialExpressionConstant3Vector * __thiscall
UMaterialExpressionConstant3Vector::UMaterialExpressionConstant3Vector
          (UMaterialExpressionConstant3Vector *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant3Vector__6B_;
  return this;
}

// ~UMaterialExpressionConstant3Vector @ 14729d930

void __thiscall
UMaterialExpressionConstant3Vector::~UMaterialExpressionConstant3Vector
          (UMaterialExpressionConstant3Vector *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant3Vector__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a04d0

UClass * __cdecl UMaterialExpressionConstant3Vector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstant3Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstant3Vector,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstant3Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstant3Vector>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstant3Vector.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionConstant3Vector @ 1472a1d20

void __cdecl
UMaterialExpressionConstant3Vector::StaticRegisterNativesUMaterialExpressionConstant3Vector(void)

{
  return;
}

// UMaterialExpressionConstant3Vector @ 148afb130

UMaterialExpressionConstant3Vector * __thiscall
UMaterialExpressionConstant3Vector::UMaterialExpressionConstant3Vector
          (UMaterialExpressionConstant3Vector *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant3Vector__6B_;
  return this;
}

