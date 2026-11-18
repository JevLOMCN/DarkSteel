// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e6abe40

UClass * __cdecl UMaterialExpressionMaterialXFractal3D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXFractal3D",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXFractal3D,0x1a8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXFractal3D>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXFractal3D>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.InnerSingleton;
}

// UMaterialExpressionMaterialXFractal3D @ 14e6b6650

UMaterialExpressionMaterialXFractal3D * __thiscall
UMaterialExpressionMaterialXFractal3D::UMaterialExpressionMaterialXFractal3D
          (UMaterialExpressionMaterialXFractal3D *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->ConstAmplitude = 1.0;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXFractal3D__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  (this->Amplitude).OutputIndex = 0;
  (this->Amplitude).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Amplitude).InputName.Number = 0;
  (this->Amplitude).MaskR = 0;
  (this->Amplitude).MaskG = 0;
  (this->Amplitude).MaskB = 0;
  (this->Amplitude).MaskA = 0;
  (this->Amplitude).Expression = (UMaterialExpression *)0x0;
  (this->Octaves).OutputIndex = 0;
  (this->Octaves).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Octaves).InputName.Number = 0;
  (this->Octaves).MaskR = 0;
  (this->Octaves).MaskG = 0;
  (this->Octaves).MaskB = 0;
  (this->Octaves).MaskA = 0;
  (this->Octaves).Expression = (UMaterialExpression *)0x0;
  (this->Lacunarity).OutputIndex = 0;
  (this->Lacunarity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Lacunarity).InputName.Number = 0;
  (this->Lacunarity).MaskR = 0;
  (this->Lacunarity).MaskG = 0;
  (this->Lacunarity).MaskB = 0;
  (this->Lacunarity).MaskA = 0;
  (this->Lacunarity).Expression = (UMaterialExpression *)0x0;
  (this->Diminish).OutputIndex = 0;
  (this->Diminish).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Diminish).InputName.Number = 0;
  (this->Diminish).MaskR = 0;
  (this->Diminish).MaskG = 0;
  (this->Diminish).MaskB = 0;
  (this->Diminish).MaskA = 0;
  (this->Diminish).Expression = (UMaterialExpression *)0x0;
  this->bTurbulence_DEPRECATED = false;
  this->ConstOctaves = 3;
  this->ConstLacunarity = 2.0;
  this->ConstDiminish = 0.5;
  this->Scale_DEPRECATED = 1.0;
  this->Levels_DEPRECATED = 6;
  this->OutputMin_DEPRECATED = 0.0;
  this->OutputMax_DEPRECATED = 1.0;
  return this;
}

// UMaterialExpressionMaterialXFractal3D @ 14e6b6780

UMaterialExpressionMaterialXFractal3D * __thiscall
UMaterialExpressionMaterialXFractal3D::UMaterialExpressionMaterialXFractal3D
          (UMaterialExpressionMaterialXFractal3D *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  uVar3 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXFractal3D__6B_;
  (this->Position).OutputIndex = 0;
  (this->Position).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Position).InputName.Number = 0;
  (this->Position).MaskR = 0;
  (this->Position).MaskG = 0;
  (this->Position).MaskB = 0;
  (this->Position).MaskA = 0;
  (this->Position).Expression = (UMaterialExpression *)0x0;
  (this->Amplitude).OutputIndex = 0;
  (this->Amplitude).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Amplitude).InputName.Number = 0;
  (this->Amplitude).MaskR = 0;
  (this->Amplitude).MaskG = 0;
  (this->Amplitude).MaskB = 0;
  (this->Amplitude).MaskA = 0;
  (this->Amplitude).Expression = (UMaterialExpression *)0x0;
  (this->Octaves).OutputIndex = 0;
  (this->Octaves).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Octaves).InputName.Number = 0;
  (this->Octaves).MaskR = 0;
  (this->Octaves).MaskG = 0;
  (this->Octaves).MaskB = 0;
  (this->Octaves).MaskA = 0;
  (this->Octaves).Expression = (UMaterialExpression *)0x0;
  (this->Lacunarity).OutputIndex = 0;
  (this->Lacunarity).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Lacunarity).InputName.Number = 0;
  (this->Lacunarity).MaskR = 0;
  (this->Lacunarity).MaskG = 0;
  (this->Lacunarity).MaskB = 0;
  (this->Lacunarity).MaskA = 0;
  (this->Lacunarity).Expression = (UMaterialExpression *)0x0;
  (this->Diminish).OutputIndex = 0;
  (this->Diminish).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Diminish).InputName.Number = 0;
  (this->Diminish).MaskR = 0;
  (this->Diminish).MaskG = 0;
  (this->Diminish).MaskB = 0;
  (this->Diminish).MaskA = 0;
  (this->Diminish).Expression = (UMaterialExpression *)0x0;
  this->bTurbulence_DEPRECATED = false;
  pvVar2 = ThreadLocalStoragePointer;
  this->ConstAmplitude = 1.0;
  this->ConstOctaves = 3;
  this->ConstLacunarity = 2.0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  this->ConstDiminish = 0.5;
  this->Scale_DEPRECATED = 1.0;
  this->Levels_DEPRECATED = 6;
  this->OutputMin_DEPRECATED = 0.0;
  this->OutputMax_DEPRECATED = 1.0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&::ConstructorStatics.NAME_MaterialX,L"MaterialExpressionMaterialXFractal3D",
                 L"MaterialX",L"MaterialX");
      atexit(`UMaterialExpressionMaterialXFractal3D::UMaterialExpressionMaterialXFractal3D'::__l2::
             _dynamic_atexit_destructor_for__ConstructorStatics__);
      _Init_thread_footer(&::_TSS0);
      return this;
    }
  }
  return this;
}

// ~UMaterialExpressionMaterialXFractal3D @ 14e6b9ce0

void __thiscall
UMaterialExpressionMaterialXFractal3D::~UMaterialExpressionMaterialXFractal3D
          (UMaterialExpressionMaterialXFractal3D *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionMaterialXFractal3D__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14e6c5640

UClass * __cdecl UMaterialExpressionMaterialXFractal3D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"MaterialExpressionMaterialXFractal3D",
               &Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionMaterialXFractal3D,0x1a8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionMaterialXFractal3D>,
               InternalVTableHelperCtorCaller<UMaterialExpressionMaterialXFractal3D>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionMaterialXFractal3D.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionMaterialXFractal3D @ 14e6d23b0

void __cdecl
UMaterialExpressionMaterialXFractal3D::StaticRegisterNativesUMaterialExpressionMaterialXFractal3D
          (void)

{
  return;
}

