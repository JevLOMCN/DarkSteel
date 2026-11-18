// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cb5d0

UClass * __cdecl UMaterialExpressionSamplePhysicsIntegerField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSamplePhysicsIntegerField",
               &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSamplePhysicsIntegerField,
               0xe0,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSamplePhysicsIntegerField>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSamplePhysicsIntegerField>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.InnerSingleton;
}

// UMaterialExpressionSamplePhysicsIntegerField @ 1472d2340

UMaterialExpressionSamplePhysicsIntegerField * __thiscall
UMaterialExpressionSamplePhysicsIntegerField::UMaterialExpressionSamplePhysicsIntegerField
          (UMaterialExpressionSamplePhysicsIntegerField *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSamplePhysicsIntegerField__6B_;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  this->FieldTarget = '\0';
  return this;
}

// UMaterialExpressionSamplePhysicsIntegerField @ 1472d23a0

UMaterialExpressionSamplePhysicsIntegerField * __thiscall
UMaterialExpressionSamplePhysicsIntegerField::UMaterialExpressionSamplePhysicsIntegerField
          (UMaterialExpressionSamplePhysicsIntegerField *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSamplePhysicsIntegerField__6B_;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  this->FieldTarget = '\0';
  return this;
}

// ~UMaterialExpressionSamplePhysicsIntegerField @ 1472d4350

void __thiscall
UMaterialExpressionSamplePhysicsIntegerField::~UMaterialExpressionSamplePhysicsIntegerField
          (UMaterialExpressionSamplePhysicsIntegerField *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSamplePhysicsIntegerField__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d64b0

UClass * __cdecl UMaterialExpressionSamplePhysicsIntegerField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSamplePhysicsIntegerField",
               &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSamplePhysicsIntegerField,
               0xe0,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSamplePhysicsIntegerField>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSamplePhysicsIntegerField>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsIntegerField.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSamplePhysicsIntegerField @ 1472d8810

void __cdecl
UMaterialExpressionSamplePhysicsIntegerField::
StaticRegisterNativesUMaterialExpressionSamplePhysicsIntegerField(void)

{
  return;
}

