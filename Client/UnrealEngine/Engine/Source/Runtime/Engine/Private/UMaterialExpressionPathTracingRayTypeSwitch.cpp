// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472b87e0

UClass * __cdecl UMaterialExpressionPathTracingRayTypeSwitch::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPathTracingRayTypeSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionPathTracingRayTypeSwitch,
               0x178,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPathTracingRayTypeSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPathTracingRayTypeSwitch>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.InnerSingleton;
}

// UMaterialExpressionPathTracingRayTypeSwitch @ 1472c0e50

UMaterialExpressionPathTracingRayTypeSwitch * __thiscall
UMaterialExpressionPathTracingRayTypeSwitch::UMaterialExpressionPathTracingRayTypeSwitch
          (UMaterialExpressionPathTracingRayTypeSwitch *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPathTracingRayTypeSwitch__6B_;
  (this->Main).OutputIndex = 0;
  (this->Main).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Main).InputName.Number = 0;
  (this->Main).MaskR = 0;
  (this->Main).MaskG = 0;
  (this->Main).MaskB = 0;
  (this->Main).MaskA = 0;
  (this->Main).Expression = (UMaterialExpression *)0x0;
  (this->Shadow).OutputIndex = 0;
  (this->Shadow).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Shadow).InputName.Number = 0;
  (this->Shadow).MaskR = 0;
  (this->Shadow).MaskG = 0;
  (this->Shadow).MaskB = 0;
  (this->Shadow).MaskA = 0;
  (this->Shadow).Expression = (UMaterialExpression *)0x0;
  (this->IndirectDiffuse).OutputIndex = 0;
  (this->IndirectDiffuse).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IndirectDiffuse).InputName.Number = 0;
  (this->IndirectDiffuse).MaskR = 0;
  (this->IndirectDiffuse).MaskG = 0;
  (this->IndirectDiffuse).MaskB = 0;
  (this->IndirectDiffuse).MaskA = 0;
  (this->IndirectDiffuse).Expression = (UMaterialExpression *)0x0;
  (this->IndirectSpecular).OutputIndex = 0;
  (this->IndirectSpecular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IndirectSpecular).InputName.Number = 0;
  (this->IndirectSpecular).MaskR = 0;
  (this->IndirectSpecular).MaskG = 0;
  (this->IndirectSpecular).MaskB = 0;
  (this->IndirectSpecular).MaskA = 0;
  (this->IndirectSpecular).Expression = (UMaterialExpression *)0x0;
  (this->IndirectVolume).OutputIndex = 0;
  (this->IndirectVolume).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IndirectVolume).InputName.Number = 0;
  (this->IndirectVolume).MaskR = 0;
  (this->IndirectVolume).MaskG = 0;
  (this->IndirectVolume).MaskB = 0;
  (this->IndirectVolume).MaskA = 0;
  (this->IndirectVolume).Expression = (UMaterialExpression *)0x0;
  return this;
}

// UMaterialExpressionPathTracingRayTypeSwitch @ 1472c0f30

UMaterialExpressionPathTracingRayTypeSwitch * __thiscall
UMaterialExpressionPathTracingRayTypeSwitch::UMaterialExpressionPathTracingRayTypeSwitch
          (UMaterialExpressionPathTracingRayTypeSwitch *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPathTracingRayTypeSwitch__6B_;
  (this->Main).OutputIndex = 0;
  (this->Main).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Main).InputName.Number = 0;
  (this->Main).MaskR = 0;
  (this->Main).MaskG = 0;
  (this->Main).MaskB = 0;
  (this->Main).MaskA = 0;
  (this->Main).Expression = (UMaterialExpression *)0x0;
  (this->Shadow).OutputIndex = 0;
  (this->Shadow).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Shadow).InputName.Number = 0;
  (this->Shadow).MaskR = 0;
  (this->Shadow).MaskG = 0;
  (this->Shadow).MaskB = 0;
  (this->Shadow).MaskA = 0;
  (this->Shadow).Expression = (UMaterialExpression *)0x0;
  (this->IndirectDiffuse).OutputIndex = 0;
  (this->IndirectDiffuse).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IndirectDiffuse).InputName.Number = 0;
  (this->IndirectDiffuse).MaskR = 0;
  (this->IndirectDiffuse).MaskG = 0;
  (this->IndirectDiffuse).MaskB = 0;
  (this->IndirectDiffuse).MaskA = 0;
  (this->IndirectDiffuse).Expression = (UMaterialExpression *)0x0;
  (this->IndirectSpecular).OutputIndex = 0;
  (this->IndirectSpecular).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IndirectSpecular).InputName.Number = 0;
  (this->IndirectSpecular).MaskR = 0;
  (this->IndirectSpecular).MaskG = 0;
  (this->IndirectSpecular).MaskB = 0;
  (this->IndirectSpecular).MaskA = 0;
  (this->IndirectSpecular).Expression = (UMaterialExpression *)0x0;
  (this->IndirectVolume).OutputIndex = 0;
  (this->IndirectVolume).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->IndirectVolume).InputName.Number = 0;
  (this->IndirectVolume).MaskR = 0;
  (this->IndirectVolume).MaskG = 0;
  (this->IndirectVolume).MaskB = 0;
  (this->IndirectVolume).MaskA = 0;
  (this->IndirectVolume).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionPathTracingRayTypeSwitch @ 1472c2470

void __thiscall
UMaterialExpressionPathTracingRayTypeSwitch::~UMaterialExpressionPathTracingRayTypeSwitch
          (UMaterialExpressionPathTracingRayTypeSwitch *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionPathTracingRayTypeSwitch__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c5fb0

UClass * __cdecl UMaterialExpressionPathTracingRayTypeSwitch::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPathTracingRayTypeSwitch",
               &Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionPathTracingRayTypeSwitch,
               0x178,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPathTracingRayTypeSwitch>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPathTracingRayTypeSwitch>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPathTracingRayTypeSwitch.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionPathTracingRayTypeSwitch @ 1472c7670

void __cdecl
UMaterialExpressionPathTracingRayTypeSwitch::
StaticRegisterNativesUMaterialExpressionPathTracingRayTypeSwitch(void)

{
  return;
}

