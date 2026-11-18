// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ee9c50

UClass * __cdecl UMaterialExpressionNoise::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNoise",
               &Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNoise,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNoise>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNoise>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton;
}

// UMaterialExpressionNoise @ 147ef1b40

UMaterialExpressionNoise * __thiscall
UMaterialExpressionNoise::UMaterialExpressionNoise
          (UMaterialExpressionNoise *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNoise__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  (this->FilterWidth).OutputIndex = 0;
  (this->FilterWidth).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FilterWidth).InputName.Number = 0;
  (this->FilterWidth).MaskR = 0;
  (this->FilterWidth).MaskG = 0;
  (this->FilterWidth).MaskB = 0;
  (this->FilterWidth).MaskA = 0;
  (this->FilterWidth).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionNoise @ 147ef1bc0

UMaterialExpressionNoise * __thiscall
UMaterialExpressionNoise::UMaterialExpressionNoise
          (UMaterialExpressionNoise *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionNoise__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  (this->FilterWidth).OutputIndex = 0;
  (this->FilterWidth).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->FilterWidth).InputName.Number = 0;
  (this->FilterWidth).MaskR = 0;
  (this->FilterWidth).MaskG = 0;
  (this->FilterWidth).MaskB = 0;
  (this->FilterWidth).MaskA = 0;
  (this->FilterWidth).Expression = (UMaterialExpression *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Utility,L"MaterialExpressionNoise",L"Utility",L"Utility"
                );
      atexit(`UMaterialExpressionNoise::UMaterialExpressionNoise'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->bTurbulence = 1;
  this->bTiling = 0;
  this->Scale = 1.0;
  this->Levels = 6;
  this->Quality = 1;
  this->OutputMin = -1.0;
  this->OutputMax = 1.0;
  this->LevelScale = 2.0;
  (this->NoiseFunction).Value = '\0';
  this->RepeatSize = 0x200;
  return this;
}

// ~UMaterialExpressionNoise @ 147ef28f0

void __thiscall UMaterialExpressionNoise::~UMaterialExpressionNoise(UMaterialExpressionNoise *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionNoise__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 147efd9e0

UClass * __cdecl UMaterialExpressionNoise::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNoise",
               &Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionNoise,0x130,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNoise>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNoise>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNoise.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionNoise @ 147f08570

void __cdecl UMaterialExpressionNoise::StaticRegisterNativesUMaterialExpressionNoise(void)

{
  return;
}

