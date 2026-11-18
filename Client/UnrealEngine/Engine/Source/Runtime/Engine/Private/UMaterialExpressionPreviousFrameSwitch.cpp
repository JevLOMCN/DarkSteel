// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ba6a0

UClass * __cdecl UMaterialExpressionPreviousFrameSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPreviousFrameSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPreviousFrameSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPreviousFrameSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.InnerSingleton;
}

// UMaterialExpressionPreviousFrameSwitch @ 1472c14f0

UMaterialExpressionPreviousFrameSwitch * __thiscall
UMaterialExpressionPreviousFrameSwitch::UMaterialExpressionPreviousFrameSwitch
          (UMaterialExpressionPreviousFrameSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPreviousFrameSwitch__6B_;
  (this->CurrentFrame).OutputIndex = 0;
  (this->CurrentFrame).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CurrentFrame).InputName.Number = 0;
  (this->CurrentFrame).MaskR = 0;
  (this->CurrentFrame).MaskG = 0;
  (this->CurrentFrame).MaskB = 0;
  (this->CurrentFrame).MaskA = 0;
  (this->CurrentFrame).Expression = (UMaterialExpression *)0x0;
  (this->PreviousFrame).OutputIndex = 0;
  (this->PreviousFrame).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PreviousFrame).InputName.Number = 0;
  (this->PreviousFrame).MaskR = 0;
  (this->PreviousFrame).MaskG = 0;
  (this->PreviousFrame).MaskB = 0;
  (this->PreviousFrame).MaskA = 0;
  (this->PreviousFrame).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionPreviousFrameSwitch @ 1472c1560

UMaterialExpressionPreviousFrameSwitch * __thiscall
UMaterialExpressionPreviousFrameSwitch::UMaterialExpressionPreviousFrameSwitch
          (UMaterialExpressionPreviousFrameSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPreviousFrameSwitch__6B_;
  (this->CurrentFrame).OutputIndex = 0;
  (this->CurrentFrame).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CurrentFrame).InputName.Number = 0;
  (this->CurrentFrame).MaskR = 0;
  (this->CurrentFrame).MaskG = 0;
  (this->CurrentFrame).MaskB = 0;
  (this->CurrentFrame).MaskA = 0;
  (this->CurrentFrame).Expression = (UMaterialExpression *)0x0;
  (this->PreviousFrame).OutputIndex = 0;
  (this->PreviousFrame).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PreviousFrame).InputName.Number = 0;
  (this->PreviousFrame).MaskR = 0;
  (this->PreviousFrame).MaskG = 0;
  (this->PreviousFrame).MaskB = 0;
  (this->PreviousFrame).MaskA = 0;
  (this->PreviousFrame).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionPreviousFrameSwitch @ 1472c2650

void __thiscall
UMaterialExpressionPreviousFrameSwitch::~UMaterialExpressionPreviousFrameSwitch
          (UMaterialExpressionPreviousFrameSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionPreviousFrameSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6a30

UClass * __cdecl UMaterialExpressionPreviousFrameSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPreviousFrameSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPreviousFrameSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPreviousFrameSwitch>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPreviousFrameSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch @ 1472c7750

void __cdecl
UMaterialExpressionPreviousFrameSwitch::StaticRegisterNativesUMaterialExpressionPreviousFrameSwitch
          (void)

{
  return;
}

