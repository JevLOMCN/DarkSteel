// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472dc330

UClass * __cdecl UMaterialExpressionVertexInterpolator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVertexInterpolator",
               &Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVertexInterpolator,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVertexInterpolator>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVertexInterpolator>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.InnerSingleton;
}

// UMaterialExpressionVertexInterpolator @ 1472e2bb0

UMaterialExpressionVertexInterpolator * __thiscall
UMaterialExpressionVertexInterpolator::UMaterialExpressionVertexInterpolator
          (UMaterialExpressionVertexInterpolator *this,FVTableHelper *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionVertexInterpolator__6B_;
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

// ~UMaterialExpressionVertexInterpolator @ 1472e37f0

void __thiscall
UMaterialExpressionVertexInterpolator::~UMaterialExpressionVertexInterpolator
          (UMaterialExpressionVertexInterpolator *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionVertexInterpolator__6B_;
  UMaterialExpressionCustomOutput::~UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this);
  return;
}

// GetFunctionName @ 1472e5260

FString * __thiscall
UMaterialExpressionVertexInterpolator::GetFunctionName
          (UMaterialExpressionVertexInterpolator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"VertexInterpolator");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1472e6ae0

UClass * __cdecl UMaterialExpressionVertexInterpolator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionVertexInterpolator",
               &Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionVertexInterpolator,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionVertexInterpolator>,
               InternalVTableHelperCtorCaller<UMaterialExpressionVertexInterpolator>,local_res8,
               UMaterialExpressionCustomOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionVertexInterpolator.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionVertexInterpolator @ 1472e79a0

void __cdecl
UMaterialExpressionVertexInterpolator::StaticRegisterNativesUMaterialExpressionVertexInterpolator
          (void)

{
  return;
}

// UMaterialExpressionVertexInterpolator @ 148aff850

UMaterialExpressionVertexInterpolator * __thiscall
UMaterialExpressionVertexInterpolator::UMaterialExpressionVertexInterpolator
          (UMaterialExpressionVertexInterpolator *this,FObjectInitializer *param_1)

{
  UMaterialExpressionCustomOutput::UMaterialExpressionCustomOutput
            ((UMaterialExpressionCustomOutput *)this,param_1);
  this->InterpolatorIndex = -1;
  this->_padding_ = (longlong)&___7UMaterialExpressionVertexInterpolator__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  this->InterpolatedType = MCT_Unknown;
  this->InterpolatorOffset = -1;
  return this;
}

