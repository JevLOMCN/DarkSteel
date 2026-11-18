// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147296660

UClass * __cdecl UMaterialExpressionClearCoatNormalCustomOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionClearCoatNormalCustomOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionClearCoatNormalCustomOutput,
               0xd8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionClearCoatNormalCustomOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionClearCoatNormalCustomOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.InnerSingleton;
}

// UMaterialExpressionClearCoatNormalCustomOutput @ 14729c4c0

UMaterialExpressionClearCoatNormalCustomOutput * __thiscall
UMaterialExpressionClearCoatNormalCustomOutput::UMaterialExpressionClearCoatNormalCustomOutput
          (UMaterialExpressionClearCoatNormalCustomOutput *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionClearCoatNormalCustomOutput__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

// ~UMaterialExpressionClearCoatNormalCustomOutput @ 14729d7d0

void __thiscall
UMaterialExpressionClearCoatNormalCustomOutput::~UMaterialExpressionClearCoatNormalCustomOutput
          (UMaterialExpressionClearCoatNormalCustomOutput *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionCustomOutput__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetFunctionName @ 14729f470

FString * __thiscall
UMaterialExpressionClearCoatNormalCustomOutput::GetFunctionName
          (UMaterialExpressionClearCoatNormalCustomOutput *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ClearCoatBottomNormal");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14729fe10

UClass * __cdecl UMaterialExpressionClearCoatNormalCustomOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionClearCoatNormalCustomOutput",
               &Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.
                InnerSingleton,StaticRegisterNativesUMaterialExpressionClearCoatNormalCustomOutput,
               0xd8,8,CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,
               L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionClearCoatNormalCustomOutput>,
               InternalVTableHelperCtorCaller<UMaterialExpressionClearCoatNormalCustomOutput>,
               local_res8,UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionClearCoatNormalCustomOutput.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionClearCoatNormalCustomOutput @ 1472a1c90

void __cdecl
UMaterialExpressionClearCoatNormalCustomOutput::
StaticRegisterNativesUMaterialExpressionClearCoatNormalCustomOutput(void)

{
  return;
}

// UMaterialExpressionClearCoatNormalCustomOutput @ 148afad30

UMaterialExpressionClearCoatNormalCustomOutput * __thiscall
UMaterialExpressionClearCoatNormalCustomOutput::UMaterialExpressionClearCoatNormalCustomOutput
          (UMaterialExpressionClearCoatNormalCustomOutput *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionClearCoatNormalCustomOutput__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  return this;
}

