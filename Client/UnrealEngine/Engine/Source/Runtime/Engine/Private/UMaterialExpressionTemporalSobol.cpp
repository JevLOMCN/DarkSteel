// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472dbc20

UClass * __cdecl UMaterialExpressionTemporalSobol::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTemporalSobol",
               &Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTemporalSobol,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTemporalSobol>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTemporalSobol>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.InnerSingleton;
}

// UMaterialExpressionTemporalSobol @ 1472e1cd0

UMaterialExpressionTemporalSobol * __thiscall
UMaterialExpressionTemporalSobol::UMaterialExpressionTemporalSobol
          (UMaterialExpressionTemporalSobol *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTemporalSobol__6B_;
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

// UMaterialExpressionTemporalSobol @ 1472e1d60

UMaterialExpressionTemporalSobol * __thiscall
UMaterialExpressionTemporalSobol::UMaterialExpressionTemporalSobol
          (UMaterialExpressionTemporalSobol *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionTemporalSobol__6B_;
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

// ~UMaterialExpressionTemporalSobol @ 1472e33c0

void __thiscall
UMaterialExpressionTemporalSobol::~UMaterialExpressionTemporalSobol
          (UMaterialExpressionTemporalSobol *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionTemporalSobol__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472e55e0

UClass * __cdecl UMaterialExpressionTemporalSobol::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionTemporalSobol",
               &Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionTemporalSobol,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionTemporalSobol>,
               InternalVTableHelperCtorCaller<UMaterialExpressionTemporalSobol>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionTemporalSobol.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionTemporalSobol @ 1472e77e0

void __cdecl
UMaterialExpressionTemporalSobol::StaticRegisterNativesUMaterialExpressionTemporalSobol(void)

{
  return;
}

