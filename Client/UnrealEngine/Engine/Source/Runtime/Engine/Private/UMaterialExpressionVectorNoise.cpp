// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dc050

UClass * __cdecl UMaterialExpressionVectorNoise::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVectorNoise",
               &Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVectorNoise,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVectorNoise>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVectorNoise>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.InnerSingleton;
}

// UMaterialExpressionVectorNoise @ 1472e2ab0

UMaterialExpressionVectorNoise * __thiscall
UMaterialExpressionVectorNoise::UMaterialExpressionVectorNoise
          (UMaterialExpressionVectorNoise *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionVectorNoise__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// ~UMaterialExpressionVectorNoise @ 1472e3740

void __thiscall
UMaterialExpressionVectorNoise::~UMaterialExpressionVectorNoise
          (UMaterialExpressionVectorNoise *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionVectorNoise__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e68a0

UClass * __cdecl UMaterialExpressionVectorNoise::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVectorNoise",
               &Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVectorNoise,0xe8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVectorNoise>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVectorNoise>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVectorNoise @ 1472e7970

void __cdecl
UMaterialExpressionVectorNoise::StaticRegisterNativesUMaterialExpressionVectorNoise(void)

{
  return;
}

// UMaterialExpressionVectorNoise @ 147ef1df0

UMaterialExpressionVectorNoise * __thiscall
UMaterialExpressionVectorNoise::UMaterialExpressionVectorNoise
          (UMaterialExpressionVectorNoise *this,FObjectInitializer *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionVectorNoise__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_Utility,L"MaterialExpressionNoise",L"Utility",L"Utility"
                );
      atexit(`UMaterialExpressionVectorNoise::UMaterialExpressionVectorNoise'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->bTiling = 0;
  this->Quality = 1;
  (this->NoiseFunction).Value = '\0';
  this->TileSize = 300;
  return this;
}

