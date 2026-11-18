// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a6830

UClass * __cdecl UMaterialExpressionFloor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFloor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFloor",
               &Z_Registration_Info_UClass_UMaterialExpressionFloor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFloor,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFloor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFloor>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFloor.InnerSingleton;
}

// UMaterialExpressionFloor @ 1472ad230

UMaterialExpressionFloor * __thiscall
UMaterialExpressionFloor::UMaterialExpressionFloor
          (UMaterialExpressionFloor *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFloor__6B_;
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

// UMaterialExpressionFloor @ 1472ad280

UMaterialExpressionFloor * __thiscall
UMaterialExpressionFloor::UMaterialExpressionFloor
          (UMaterialExpressionFloor *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionFloor__6B_;
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

// ~UMaterialExpressionFloor @ 1472af790

void __thiscall UMaterialExpressionFloor::~UMaterialExpressionFloor(UMaterialExpressionFloor *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionFloor__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b25a0

UClass * __cdecl UMaterialExpressionFloor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionFloor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionFloor",
               &Z_Registration_Info_UClass_UMaterialExpressionFloor.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionFloor,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionFloor>,
               InternalVTableHelperCtorCaller<UMaterialExpressionFloor>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionFloor.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionFloor @ 1472b4560

void __cdecl UMaterialExpressionFloor::StaticRegisterNativesUMaterialExpressionFloor(void)

{
  return;
}

