// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147297bb0

UClass * __cdecl UMaterialExpressionBindlessSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBindlessSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBindlessSwitch,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBindlessSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBindlessSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.InnerSingleton;
}

// UMaterialExpressionBindlessSwitch @ 14729bcf0

UMaterialExpressionBindlessSwitch * __thiscall
UMaterialExpressionBindlessSwitch::UMaterialExpressionBindlessSwitch
          (UMaterialExpressionBindlessSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBindlessSwitch__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Bindless).OutputIndex = 0;
  (this->Bindless).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Bindless).InputName.Number = 0;
  (this->Bindless).MaskR = 0;
  (this->Bindless).MaskG = 0;
  (this->Bindless).MaskB = 0;
  (this->Bindless).MaskA = 0;
  (this->Bindless).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionBindlessSwitch @ 14729bd60

UMaterialExpressionBindlessSwitch * __thiscall
UMaterialExpressionBindlessSwitch::UMaterialExpressionBindlessSwitch
          (UMaterialExpressionBindlessSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionBindlessSwitch__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Bindless).OutputIndex = 0;
  (this->Bindless).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Bindless).InputName.Number = 0;
  (this->Bindless).MaskR = 0;
  (this->Bindless).MaskG = 0;
  (this->Bindless).MaskB = 0;
  (this->Bindless).MaskA = 0;
  (this->Bindless).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionBindlessSwitch @ 14729d650

void __thiscall
UMaterialExpressionBindlessSwitch::~UMaterialExpressionBindlessSwitch
          (UMaterialExpressionBindlessSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionBindlessSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729f510

UClass * __cdecl UMaterialExpressionBindlessSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionBindlessSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionBindlessSwitch,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionBindlessSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionBindlessSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionBindlessSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionBindlessSwitch @ 1472a1bd0

void __cdecl
UMaterialExpressionBindlessSwitch::StaticRegisterNativesUMaterialExpressionBindlessSwitch(void)

{
  return;
}

