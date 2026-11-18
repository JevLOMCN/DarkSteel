// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472bb060

UClass * __cdecl UMaterialExpressionReflectionCapturePassSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionReflectionCapturePassSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionReflectionCapturePassSwitch,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionReflectionCapturePassSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionReflectionCapturePassSwitch>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.InnerSingleton;
}

// UMaterialExpressionReflectionCapturePassSwitch @ 1472c18e0

UMaterialExpressionReflectionCapturePassSwitch * __thiscall
UMaterialExpressionReflectionCapturePassSwitch::UMaterialExpressionReflectionCapturePassSwitch
          (UMaterialExpressionReflectionCapturePassSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionReflectionCapturePassSwitch__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Reflection).OutputIndex = 0;
  (this->Reflection).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Reflection).InputName.Number = 0;
  (this->Reflection).MaskR = 0;
  (this->Reflection).MaskG = 0;
  (this->Reflection).MaskB = 0;
  (this->Reflection).MaskA = 0;
  (this->Reflection).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionReflectionCapturePassSwitch @ 1472c1950

UMaterialExpressionReflectionCapturePassSwitch * __thiscall
UMaterialExpressionReflectionCapturePassSwitch::UMaterialExpressionReflectionCapturePassSwitch
          (UMaterialExpressionReflectionCapturePassSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionReflectionCapturePassSwitch__6B_;
  (this->Default).OutputIndex = 0;
  (this->Default).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Default).InputName.Number = 0;
  (this->Default).MaskR = 0;
  (this->Default).MaskG = 0;
  (this->Default).MaskB = 0;
  (this->Default).MaskA = 0;
  (this->Default).Expression = (UMaterialExpression *)0x0;
  (this->Reflection).OutputIndex = 0;
  (this->Reflection).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Reflection).InputName.Number = 0;
  (this->Reflection).MaskR = 0;
  (this->Reflection).MaskG = 0;
  (this->Reflection).MaskB = 0;
  (this->Reflection).MaskA = 0;
  (this->Reflection).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionReflectionCapturePassSwitch @ 1472c26d0

void __thiscall
UMaterialExpressionReflectionCapturePassSwitch::~UMaterialExpressionReflectionCapturePassSwitch
          (UMaterialExpressionReflectionCapturePassSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionReflectionCapturePassSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6d30

UClass * __cdecl UMaterialExpressionReflectionCapturePassSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionReflectionCapturePassSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionReflectionCapturePassSwitch,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionReflectionCapturePassSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionReflectionCapturePassSwitch>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionReflectionCapturePassSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionReflectionCapturePassSwitch @ 1472c7790

void __cdecl
UMaterialExpressionReflectionCapturePassSwitch::
StaticRegisterNativesUMaterialExpressionReflectionCapturePassSwitch(void)

{
  return;
}

