// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147294a60

UClass * __cdecl UMaterialExpressionConvert::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConvert.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConvert",
               &Z_Registration_Info_UClass_UMaterialExpressionConvert.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConvert,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConvert>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConvert>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConvert.InnerSingleton;
}

// UMaterialExpressionConvert @ 14729c9b0

UMaterialExpressionConvert * __thiscall
UMaterialExpressionConvert::UMaterialExpressionConvert
          (UMaterialExpressionConvert *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionConvert__6B_;
  (this->ConvertInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvertInputs).ArrayNum = 0;
  (this->ConvertInputs).ArrayMax = 0;
  (this->ConvertOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvertOutputs).ArrayNum = 0;
  (this->ConvertOutputs).ArrayMax = 0;
  (this->ConvertMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvertMappings).ArrayNum = 0;
  (this->ConvertMappings).ArrayMax = 0;
  ::FString::FString(&this->NodeName,L"Convert");
  return this;
}

// ~UMaterialExpressionConvert @ 14729d9b0

void __thiscall
UMaterialExpressionConvert::~UMaterialExpressionConvert(UMaterialExpressionConvert *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionConvert__6B_;
  pFVar1 = (this->NodeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConvertMappings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConvertOutputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConvertInputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472a07d0

UClass * __cdecl UMaterialExpressionConvert::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionConvert.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionConvert",
               &Z_Registration_Info_UClass_UMaterialExpressionConvert.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionConvert,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionConvert>,
               InternalVTableHelperCtorCaller<UMaterialExpressionConvert>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionConvert.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionConvert @ 1472a1d60

void __cdecl UMaterialExpressionConvert::StaticRegisterNativesUMaterialExpressionConvert(void)

{
  return;
}

// UMaterialExpressionConvert @ 148afb300

UMaterialExpressionConvert * __thiscall
UMaterialExpressionConvert::UMaterialExpressionConvert
          (UMaterialExpressionConvert *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
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
  (this->ConvertInputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvertInputs).ArrayNum = 0;
  (this->ConvertInputs).ArrayMax = 0;
  (this->ConvertOutputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvertOutputs).ArrayNum = 0;
  (this->ConvertOutputs).ArrayMax = 0;
  (this->ConvertMappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConvertMappings).ArrayNum = 0;
  (this->ConvertMappings).ArrayMax = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionConvert__6B_;
  ::FString::FString(&this->NodeName,L"Convert");
  return this;
}

