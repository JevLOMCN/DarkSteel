// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b85e0

UClass * __cdecl UMaterialExpressionPathTracingQualitySwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPathTracingQualitySwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionPathTracingQualitySwitch,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPathTracingQualitySwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPathTracingQualitySwitch>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.InnerSingleton;
}

// UMaterialExpressionPathTracingQualitySwitch @ 1472c0d70

UMaterialExpressionPathTracingQualitySwitch * __thiscall
UMaterialExpressionPathTracingQualitySwitch::UMaterialExpressionPathTracingQualitySwitch
          (UMaterialExpressionPathTracingQualitySwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPathTracingQualitySwitch__6B_;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->PathTraced).OutputIndex = 0;
  (this->PathTraced).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PathTraced).InputName.Number = 0;
  (this->PathTraced).MaskR = 0;
  (this->PathTraced).MaskG = 0;
  (this->PathTraced).MaskB = 0;
  (this->PathTraced).MaskA = 0;
  (this->PathTraced).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionPathTracingQualitySwitch @ 1472c0de0

UMaterialExpressionPathTracingQualitySwitch * __thiscall
UMaterialExpressionPathTracingQualitySwitch::UMaterialExpressionPathTracingQualitySwitch
          (UMaterialExpressionPathTracingQualitySwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPathTracingQualitySwitch__6B_;
  (this->Normal).OutputIndex = 0;
  (this->Normal).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Normal).InputName.Number = 0;
  (this->Normal).MaskR = 0;
  (this->Normal).MaskG = 0;
  (this->Normal).MaskB = 0;
  (this->Normal).MaskA = 0;
  (this->Normal).Expression = (UMaterialExpression *)0x0;
  (this->PathTraced).OutputIndex = 0;
  (this->PathTraced).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PathTraced).InputName.Number = 0;
  (this->PathTraced).MaskR = 0;
  (this->PathTraced).MaskG = 0;
  (this->PathTraced).MaskB = 0;
  (this->PathTraced).MaskA = 0;
  (this->PathTraced).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionPathTracingQualitySwitch @ 1472c2450

void __thiscall
UMaterialExpressionPathTracingQualitySwitch::~UMaterialExpressionPathTracingQualitySwitch
          (UMaterialExpressionPathTracingQualitySwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionPathTracingQualitySwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5ef0

UClass * __cdecl UMaterialExpressionPathTracingQualitySwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPathTracingQualitySwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionPathTracingQualitySwitch,
               0x100,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPathTracingQualitySwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPathTracingQualitySwitch>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPathTracingQualitySwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPathTracingQualitySwitch @ 1472c7660

void __cdecl
UMaterialExpressionPathTracingQualitySwitch::
StaticRegisterNativesUMaterialExpressionPathTracingQualitySwitch(void)

{
  return;
}

