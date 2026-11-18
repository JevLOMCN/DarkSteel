// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472960a0

UClass * __cdecl UMaterialExpressionDesaturation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDesaturation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDesaturation",
               &Z_Registration_Info_UClass_UMaterialExpressionDesaturation.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDesaturation,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDesaturation>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDesaturation>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDesaturation.InnerSingleton;
}

// UMaterialExpressionDesaturation @ 14729d140

UMaterialExpressionDesaturation * __thiscall
UMaterialExpressionDesaturation::UMaterialExpressionDesaturation
          (UMaterialExpressionDesaturation *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionDesaturation__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Fraction).OutputIndex = 0;
  (this->Fraction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Fraction).InputName.Number = 0;
  (this->Fraction).MaskR = 0;
  (this->Fraction).MaskG = 0;
  (this->Fraction).MaskB = 0;
  (this->Fraction).MaskA = 0;
  (this->Fraction).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionDesaturation @ 14729dcf0

void __thiscall
UMaterialExpressionDesaturation::~UMaterialExpressionDesaturation
          (UMaterialExpressionDesaturation *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionDesaturation__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a1550

UClass * __cdecl UMaterialExpressionDesaturation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionDesaturation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionDesaturation",
               &Z_Registration_Info_UClass_UMaterialExpressionDesaturation.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionDesaturation,0x110,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionDesaturation>,
               InternalVTableHelperCtorCaller<UMaterialExpressionDesaturation>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionDesaturation.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionDesaturation @ 1472a1eb0

void __cdecl
UMaterialExpressionDesaturation::StaticRegisterNativesUMaterialExpressionDesaturation(void)

{
  return;
}

// UMaterialExpressionDesaturation @ 148afbc20

UMaterialExpressionDesaturation * __thiscall
UMaterialExpressionDesaturation::UMaterialExpressionDesaturation
          (UMaterialExpressionDesaturation *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  int iVar4;
  FColorSpace *this_00;
  FLinearColor *pFVar5;
  IConsoleManager *pIVar6;
  ulonglong uVar7;
  FLinearColor local_18;
  
  UObject::UObject((UObject *)this,param_1);
  uVar7 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionDesaturation__6B_;
  pvVar3 = ThreadLocalStoragePointer;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar7 * 8);
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
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Fraction).OutputIndex = 0;
  (this->Fraction).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Fraction).InputName.Number = 0;
  (this->Fraction).MaskR = 0;
  (this->Fraction).MaskG = 0;
  (this->Fraction).MaskB = 0;
  (this->Fraction).MaskA = 0;
  (this->Fraction).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar6 = IConsoleManager::Get();
      ::CVar = (IConsoleVariable *)
               (**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"r.LegacyLuminanceFactors",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (::CVar != (IConsoleVariable *)0x0) {
    iVar4 = (**(code **)(*(longlong *)::CVar + 200))();
    if (iVar4 != 0) {
      (this->LuminanceFactors).field0_0x0._s_0.R = 0.3;
      (this->LuminanceFactors).field0_0x0._s_0.G = 0.59;
      *(undefined8 *)((longlong)&(this->LuminanceFactors).field0_0x0 + 8) = 0x3de147ae;
      return this;
    }
  }
  this_00 = UE::Color::FColorSpace::GetWorking();
  pFVar5 = UE::Color::FColorSpace::GetLuminanceFactors(this_00,&local_18);
  uVar2 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
  *(undefined8 *)&(this->LuminanceFactors).field0_0x0 = *(undefined8 *)&pFVar5->field0_0x0;
  *(undefined8 *)((longlong)&(this->LuminanceFactors).field0_0x0 + 8) = uVar2;
  return this;
}

