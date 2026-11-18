// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147296e20

UClass * __cdecl UMaterialExpressionCollectionTransform::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCollectionTransform.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCollectionTransform",
               &Z_Registration_Info_UClass_UMaterialExpressionCollectionTransform.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCollectionTransform,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCollectionTransform>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCollectionTransform>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCollectionTransform.InnerSingleton;
}

// UMaterialExpressionCollectionTransform @ 14729c5b0

UMaterialExpressionCollectionTransform * __thiscall
UMaterialExpressionCollectionTransform::UMaterialExpressionCollectionTransform
          (UMaterialExpressionCollectionTransform *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionCollectionTransform__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Collection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ParameterId).A = 0;
  (this->ParameterId).B = 0;
  (this->ParameterId).C = 0;
  (this->ParameterId).D = 0;
  return this;
}

// ~UMaterialExpressionCollectionTransform @ 14729d830

void __thiscall
UMaterialExpressionCollectionTransform::~UMaterialExpressionCollectionTransform
          (UMaterialExpressionCollectionTransform *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionCollectionTransform__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a0050

UClass * __cdecl UMaterialExpressionCollectionTransform::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCollectionTransform.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCollectionTransform",
               &Z_Registration_Info_UClass_UMaterialExpressionCollectionTransform.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCollectionTransform,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCollectionTransform>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCollectionTransform>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCollectionTransform.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCollectionTransform @ 1472a1cc0

void __cdecl
UMaterialExpressionCollectionTransform::StaticRegisterNativesUMaterialExpressionCollectionTransform
          (void)

{
  return;
}

// UMaterialExpressionCollectionTransform @ 148afae60

UMaterialExpressionCollectionTransform * __thiscall
UMaterialExpressionCollectionTransform::UMaterialExpressionCollectionTransform
          (UMaterialExpressionCollectionTransform *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionCollectionTransform__6B_;
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
  (this->Collection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ParameterId).A = 0;
  (this->ParameterId).B = 0;
  (this->ParameterId).C = 0;
  (this->ParameterId).D = 0;
  return this;
}

// PostLoad @ 148b02e90

void __thiscall
UMaterialExpressionCollectionTransform::PostLoad(UMaterialExpressionCollectionTransform *this)

{
  UMaterialParameterCollection *this_00;
  FName FVar1;
  FGuid local_res8 [2];
  
  this_00 = (this->Collection).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialParameterCollection *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    FVar1 = UMaterialParameterCollection::GetParameterName
                      ((this->Collection).field0_0x0.DebugPtr,local_res8);
    this->ParameterName = *(FName *)FVar1;
  }
  UMaterialExpression::PostLoad((UMaterialExpression *)this);
  return;
}

