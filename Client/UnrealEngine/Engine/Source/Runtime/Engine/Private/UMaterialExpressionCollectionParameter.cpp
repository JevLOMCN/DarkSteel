// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147296ce0

UClass * __cdecl UMaterialExpressionCollectionParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCollectionParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCollectionParameter,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCollectionParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCollectionParameter>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.InnerSingleton;
}

// UMaterialExpressionCollectionParameter @ 14729c540

UMaterialExpressionCollectionParameter * __thiscall
UMaterialExpressionCollectionParameter::UMaterialExpressionCollectionParameter
          (UMaterialExpressionCollectionParameter *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->SortPriority = 0x20;
  (this->ParameterId).A = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionCollectionParameter__6B_;
  (this->Collection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  (this->ParameterId).B = 0;
  (this->ParameterId).C = 0;
  (this->ParameterId).D = 0;
  return this;
}

// ~UMaterialExpressionCollectionParameter @ 14729d810

void __thiscall
UMaterialExpressionCollectionParameter::~UMaterialExpressionCollectionParameter
          (UMaterialExpressionCollectionParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionCollectionParameter__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 14729ff90

UClass * __cdecl UMaterialExpressionCollectionParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionCollectionParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionCollectionParameter,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionCollectionParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionCollectionParameter>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionCollectionParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionCollectionParameter @ 1472a1cb0

void __cdecl
UMaterialExpressionCollectionParameter::StaticRegisterNativesUMaterialExpressionCollectionParameter
          (void)

{
  return;
}

// UMaterialExpressionCollectionParameter @ 148afadb0

UMaterialExpressionCollectionParameter * __thiscall
UMaterialExpressionCollectionParameter::UMaterialExpressionCollectionParameter
          (UMaterialExpressionCollectionParameter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SortPriority = 0x20;
  (this->ParameterId).A = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionCollectionParameter__6B_;
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
  (this->Collection).field0_0x0.DebugPtr = (UMaterialParameterCollection *)0x0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  (this->ParameterId).B = 0;
  (this->ParameterId).C = 0;
  (this->ParameterId).D = 0;
  return this;
}

// PostLoad @ 148b02e40

void __thiscall
UMaterialExpressionCollectionParameter::PostLoad(UMaterialExpressionCollectionParameter *this)

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

