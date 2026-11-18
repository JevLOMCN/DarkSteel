// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cb250

UClass * __cdecl UMaterialExpressionSobol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSobol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSobol",
               &Z_Registration_Info_UClass_UMaterialExpressionSobol.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSobol,0x140,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSobol>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSobol>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSobol.InnerSingleton;
}

// UMaterialExpressionSobol @ 1472d34e0

UMaterialExpressionSobol * __thiscall
UMaterialExpressionSobol::UMaterialExpressionSobol
          (UMaterialExpressionSobol *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSobol__6B_;
  (this->Cell).OutputIndex = 0;
  (this->Cell).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Cell).InputName.Number = 0;
  (this->Cell).MaskR = 0;
  (this->Cell).MaskG = 0;
  (this->Cell).MaskB = 0;
  (this->Cell).MaskA = 0;
  (this->Cell).Expression = (UMaterialExpression *)0x0;
  (this->Index).OutputIndex = 0;
  (this->Index).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Index).InputName.Number = 0;
  (this->Index).MaskR = 0;
  (this->Index).MaskG = 0;
  (this->Index).MaskB = 0;
  (this->Index).MaskA = 0;
  (this->Index).Expression = (UMaterialExpression *)0x0;
  (this->Seed).OutputIndex = 0;
  (this->Seed).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Seed).InputName.Number = 0;
  (this->Seed).MaskR = 0;
  (this->Seed).MaskG = 0;
  (this->Seed).MaskB = 0;
  (this->Seed).MaskA = 0;
  (this->Seed).Expression = (UMaterialExpression *)0x0;
  this->ConstIndex = 0;
  (this->ConstSeed).field0_0x0._s_0.X = 0.0;
  (this->ConstSeed).field0_0x0._s_0.Y = 0.0;
  return this;
}

// UMaterialExpressionSobol @ 1472d3590

UMaterialExpressionSobol * __thiscall
UMaterialExpressionSobol::UMaterialExpressionSobol
          (UMaterialExpressionSobol *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSobol__6B_;
  (this->Cell).OutputIndex = 0;
  (this->Cell).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Cell).InputName.Number = 0;
  (this->Cell).MaskR = 0;
  (this->Cell).MaskG = 0;
  (this->Cell).MaskB = 0;
  (this->Cell).MaskA = 0;
  (this->Cell).Expression = (UMaterialExpression *)0x0;
  (this->Index).OutputIndex = 0;
  (this->Index).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Index).InputName.Number = 0;
  (this->Index).MaskR = 0;
  (this->Index).MaskG = 0;
  (this->Index).MaskB = 0;
  (this->Index).MaskA = 0;
  (this->Index).Expression = (UMaterialExpression *)0x0;
  (this->Seed).OutputIndex = 0;
  (this->Seed).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Seed).InputName.Number = 0;
  (this->Seed).MaskR = 0;
  (this->Seed).MaskG = 0;
  (this->Seed).MaskB = 0;
  (this->Seed).MaskA = 0;
  (this->Seed).Expression = (UMaterialExpression *)0x0;
  this->ConstIndex = 0;
  (this->ConstSeed).field0_0x0._s_0.X = 0.0;
  (this->ConstSeed).field0_0x0._s_0.Y = 0.0;
  return this;
}

// ~UMaterialExpressionSobol @ 1472d4720

void __thiscall UMaterialExpressionSobol::~UMaterialExpressionSobol(UMaterialExpressionSobol *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSobol__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d79b0

UClass * __cdecl UMaterialExpressionSobol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSobol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSobol",
               &Z_Registration_Info_UClass_UMaterialExpressionSobol.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSobol,0x140,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSobol>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSobol>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSobol.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSobol @ 1472d89d0

void __cdecl UMaterialExpressionSobol::StaticRegisterNativesUMaterialExpressionSobol(void)

{
  return;
}

