// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472cb350

UClass * __cdecl UMaterialExpressionSamplePhysicsVectorField::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSamplePhysicsVectorField",
               &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSamplePhysicsVectorField,0xe0
               ,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSamplePhysicsVectorField>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSamplePhysicsVectorField>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.InnerSingleton;
}

// UMaterialExpressionSamplePhysicsVectorField @ 1472d24c0

UMaterialExpressionSamplePhysicsVectorField * __thiscall
UMaterialExpressionSamplePhysicsVectorField::UMaterialExpressionSamplePhysicsVectorField
          (UMaterialExpressionSamplePhysicsVectorField *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSamplePhysicsVectorField__6B_;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// UMaterialExpressionSamplePhysicsVectorField @ 1472d2520

UMaterialExpressionSamplePhysicsVectorField * __thiscall
UMaterialExpressionSamplePhysicsVectorField::UMaterialExpressionSamplePhysicsVectorField
          (UMaterialExpressionSamplePhysicsVectorField *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSamplePhysicsVectorField__6B_;
  (this->WorldPosition).OutputIndex = 0;
  (this->WorldPosition).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->WorldPosition).InputName.Number = 0;
  (this->WorldPosition).MaskR = 0;
  (this->WorldPosition).MaskG = 0;
  (this->WorldPosition).MaskB = 0;
  (this->WorldPosition).MaskA = 0;
  (this->WorldPosition).Expression = (UMaterialExpression *)0x0;
  this->WorldPositionOriginType = Absolute;
  return this;
}

// ~UMaterialExpressionSamplePhysicsVectorField @ 1472d4390

void __thiscall
UMaterialExpressionSamplePhysicsVectorField::~UMaterialExpressionSamplePhysicsVectorField
          (UMaterialExpressionSamplePhysicsVectorField *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionSamplePhysicsVectorField__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6630

UClass * __cdecl UMaterialExpressionSamplePhysicsVectorField::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSamplePhysicsVectorField",
               &Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionSamplePhysicsVectorField,0xe0
               ,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSamplePhysicsVectorField>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSamplePhysicsVectorField>,
               local_res8,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSamplePhysicsVectorField.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSamplePhysicsVectorField @ 1472d8830

void __cdecl
UMaterialExpressionSamplePhysicsVectorField::
StaticRegisterNativesUMaterialExpressionSamplePhysicsVectorField(void)

{
  return;
}

