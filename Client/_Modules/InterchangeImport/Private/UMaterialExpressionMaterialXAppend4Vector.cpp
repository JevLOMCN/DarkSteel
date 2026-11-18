// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6aae20

UClass * __cdecl UMaterialExpressionMaterialXAppend4Vector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXAppend4Vector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXAppend4Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXAppend4Vector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXAppend4Vector,0x150,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXAppend4Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXAppend4Vector>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXAppend4Vector.InnerSingleton;
}

// UMaterialExpressionMaterialXAppend4Vector @ 14e6b5b90

UMaterialExpressionMaterialXAppend4Vector * __thiscall
UMaterialExpressionMaterialXAppend4Vector::UMaterialExpressionMaterialXAppend4Vector
          (UMaterialExpressionMaterialXAppend4Vector *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXAppend4Vector__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  (this->C).OutputIndex = 0;
  (this->C).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->C).InputName.Number = 0;
  (this->C).MaskR = 0;
  (this->C).MaskG = 0;
  (this->C).MaskB = 0;
  (this->C).MaskA = 0;
  (this->C).Expression = (UMaterialExpression *)0x0;
  (this->D).OutputIndex = 0;
  (this->D).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->D).InputName.Number = 0;
  (this->D).MaskR = 0;
  (this->D).MaskG = 0;
  (this->D).MaskB = 0;
  (this->D).MaskA = 0;
  (this->D).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionMaterialXAppend4Vector @ 14e6b5c50

UMaterialExpressionMaterialXAppend4Vector * __thiscall
UMaterialExpressionMaterialXAppend4Vector::UMaterialExpressionMaterialXAppend4Vector
          (UMaterialExpressionMaterialXAppend4Vector *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXAppend4Vector__6B_;
  (this->A).OutputIndex = 0;
  (this->A).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->A).InputName.Number = 0;
  (this->A).MaskR = 0;
  (this->A).MaskG = 0;
  (this->A).MaskB = 0;
  (this->A).MaskA = 0;
  (this->A).Expression = (UMaterialExpression *)0x0;
  (this->B).OutputIndex = 0;
  (this->B).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->B).InputName.Number = 0;
  (this->B).MaskR = 0;
  (this->B).MaskG = 0;
  (this->B).MaskB = 0;
  (this->B).MaskA = 0;
  (this->B).Expression = (UMaterialExpression *)0x0;
  (this->C).OutputIndex = 0;
  (this->C).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->C).InputName.Number = 0;
  (this->C).MaskR = 0;
  (this->C).MaskG = 0;
  (this->C).MaskB = 0;
  (this->C).MaskA = 0;
  (this->C).Expression = (UMaterialExpression *)0x0;
  (this->D).OutputIndex = 0;
  (this->D).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->D).InputName.Number = 0;
  (this->D).MaskR = 0;
  (this->D).MaskG = 0;
  (this->D).MaskB = 0;
  (this->D).MaskA = 0;
  (this->D).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXAppend4Vector",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXAppend4Vector::UMaterialExpressionMaterialXAppend4Vector'
             ::__l2::_dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXAppend4Vector @ 14e6b9c20

void __thiscall
UMaterialExpressionMaterialXAppend4Vector::~UMaterialExpressionMaterialXAppend4Vector
          (UMaterialExpressionMaterialXAppend4Vector *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXAppend4Vector__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c51c0

UClass * __cdecl UMaterialExpressionMaterialXAppend4Vector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXAppend4Vector.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXAppend4Vector",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXAppend4Vector.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXAppend4Vector,0x150,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXAppend4Vector>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXAppend4Vector>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXAppend4Vector.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXAppend4Vector @ 14e6d2350

void __cdecl
UMaterialExpressionMaterialXAppend4Vector::
StaticRegisterNativesUMaterialExpressionMaterialXAppend4Vector(void)

{
  return;
}

