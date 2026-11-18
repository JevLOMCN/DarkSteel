// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147297eb0

UClass * __cdecl UMaterialExpressionConstant2Vector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstant2Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstant2Vector,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstant2Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstant2Vector>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.InnerSingleton;
}

// UMaterialExpressionConstant2Vector @ 14729c830

UMaterialExpressionConstant2Vector * __thiscall
UMaterialExpressionConstant2Vector::UMaterialExpressionConstant2Vector
          (UMaterialExpressionConstant2Vector *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant2Vector__6B_;
  return this;
}

// ~UMaterialExpressionConstant2Vector @ 14729d910

void __thiscall
UMaterialExpressionConstant2Vector::~UMaterialExpressionConstant2Vector
          (UMaterialExpressionConstant2Vector *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant2Vector__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0410

UClass * __cdecl UMaterialExpressionConstant2Vector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConstant2Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConstant2Vector,0xb8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConstant2Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConstant2Vector>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConstant2Vector.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionConstant2Vector @ 1472a1d10

void __cdecl
UMaterialExpressionConstant2Vector::StaticRegisterNativesUMaterialExpressionConstant2Vector(void)

{
  return;
}

// UMaterialExpressionConstant2Vector @ 148afb0c0

UMaterialExpressionConstant2Vector * __thiscall
UMaterialExpressionConstant2Vector::UMaterialExpressionConstant2Vector
          (UMaterialExpressionConstant2Vector *this,FObjectInitializer *param_1)

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
  this->_padding_ = (longlong)&___7UMaterialExpressionConstant2Vector__6B_;
  return this;
}

