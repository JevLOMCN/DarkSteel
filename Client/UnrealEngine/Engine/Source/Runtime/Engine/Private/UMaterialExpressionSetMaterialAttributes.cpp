// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472ccc10

UClass * __cdecl UMaterialExpressionSetMaterialAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSetMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSetMaterialAttributes,0xd0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSetMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSetMaterialAttributes>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.InnerSingleton;
}

// UMaterialExpressionSetMaterialAttributes @ 1472d28e0

UMaterialExpressionSetMaterialAttributes * __thiscall
UMaterialExpressionSetMaterialAttributes::UMaterialExpressionSetMaterialAttributes
          (UMaterialExpressionSetMaterialAttributes *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSetMaterialAttributes__6B_;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->AttributeSetTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeSetTypes).ArrayNum = 0;
  (this->AttributeSetTypes).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionSetMaterialAttributes @ 1472d44d0

void __thiscall
UMaterialExpressionSetMaterialAttributes::~UMaterialExpressionSetMaterialAttributes
          (UMaterialExpressionSetMaterialAttributes *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionSetMaterialAttributes__6B_;
  pFVar1 = (this->AttributeSetTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472d6cf0

UClass * __cdecl UMaterialExpressionSetMaterialAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionSetMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionSetMaterialAttributes,0xd0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionSetMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionSetMaterialAttributes>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionSetMaterialAttributes.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionSetMaterialAttributes @ 1472d88c0

void __cdecl
UMaterialExpressionSetMaterialAttributes::
StaticRegisterNativesUMaterialExpressionSetMaterialAttributes(void)

{
  return;
}

// UMaterialExpressionSetMaterialAttributes @ 148afe7f0

UMaterialExpressionSetMaterialAttributes * __thiscall
UMaterialExpressionSetMaterialAttributes::UMaterialExpressionSetMaterialAttributes
          (UMaterialExpressionSetMaterialAttributes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionSetMaterialAttributes__6B_;
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
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->AttributeSetTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeSetTypes).ArrayNum = 0;
  (this->AttributeSetTypes).ArrayMax = 0;
  return this;
}

