// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472cc130

UClass * __cdecl UMaterialExpressionSceneDepth::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneDepth",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneDepth,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneDepth>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneDepth>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.InnerSingleton;
}

// UMaterialExpressionSceneDepth @ 1472d2710

UMaterialExpressionSceneDepth * __thiscall
UMaterialExpressionSceneDepth::UMaterialExpressionSceneDepth
          (UMaterialExpressionSceneDepth *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneDepth__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Coordinates_DEPRECATED).OutputIndex = 0;
  (this->Coordinates_DEPRECATED).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates_DEPRECATED).InputName.Number = 0;
  (this->Coordinates_DEPRECATED).MaskR = 0;
  (this->Coordinates_DEPRECATED).MaskG = 0;
  (this->Coordinates_DEPRECATED).MaskB = 0;
  (this->Coordinates_DEPRECATED).MaskA = 0;
  (this->Coordinates_DEPRECATED).Expression = (UMaterialExpression *)0x0;
  (this->ConstInput).field0_0x0._s_0.X = 0.0;
  (this->ConstInput).field0_0x0._s_0.Y = 0.0;
  return this;
}

// ~UMaterialExpressionSceneDepth @ 1472d4430

void __thiscall
UMaterialExpressionSceneDepth::~UMaterialExpressionSceneDepth(UMaterialExpressionSceneDepth *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneDepth__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6930

UClass * __cdecl UMaterialExpressionSceneDepth::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSceneDepth",
               &Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSceneDepth,0x118,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSceneDepth>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSceneDepth>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSceneDepth.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSceneDepth @ 1472d8870

void __cdecl UMaterialExpressionSceneDepth::StaticRegisterNativesUMaterialExpressionSceneDepth(void)

{
  return;
}

// UMaterialExpressionSceneDepth @ 148afe590

UMaterialExpressionSceneDepth * __thiscall
UMaterialExpressionSceneDepth::UMaterialExpressionSceneDepth
          (UMaterialExpressionSceneDepth *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSceneDepth__6B_;
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
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Coordinates_DEPRECATED).OutputIndex = 0;
  (this->Coordinates_DEPRECATED).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Coordinates_DEPRECATED).InputName.Number = 0;
  (this->Coordinates_DEPRECATED).MaskR = 0;
  (this->Coordinates_DEPRECATED).MaskG = 0;
  (this->Coordinates_DEPRECATED).MaskB = 0;
  (this->Coordinates_DEPRECATED).MaskA = 0;
  (this->Coordinates_DEPRECATED).Expression = (UMaterialExpression *)0x0;
  (this->ConstInput).field0_0x0._s_0.X = 0.0;
  (this->ConstInput).field0_0x0._s_0.Y = 0.0;
  return this;
}

// PostLoad @ 148b03190

void __thiscall UMaterialExpressionSceneDepth::PostLoad(UMaterialExpressionSceneDepth *this)

{
  undefined8 uVar1;
  int iVar2;
  FNameEntryId FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FPackageFileVersion FVar7;
  
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  FVar7 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar7 < 0xe7) {
    iVar2 = (this->Coordinates_DEPRECATED).OutputIndex;
    FVar3.Value = (this->Coordinates_DEPRECATED).InputName.ComparisonIndex.Value;
    (this->InputMode).Value = '\0';
    uVar1 = *(undefined8 *)&(this->Coordinates_DEPRECATED).InputName.Number;
    iVar4 = (this->Coordinates_DEPRECATED).MaskR;
    iVar5 = (this->Coordinates_DEPRECATED).MaskG;
    (this->Input).Expression = (this->Coordinates_DEPRECATED).Expression;
    (this->Input).OutputIndex = iVar2;
    (this->Input).InputName.ComparisonIndex = (FNameEntryId)FVar3.Value;
    iVar2 = (this->Coordinates_DEPRECATED).MaskB;
    iVar6 = (this->Coordinates_DEPRECATED).MaskA;
    *(undefined8 *)&(this->Input).InputName.Number = uVar1;
    (this->Input).MaskR = iVar4;
    (this->Input).MaskG = iVar5;
    (this->Input).MaskB = iVar2;
    (this->Input).MaskA = iVar6;
  }
  return;
}

