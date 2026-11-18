// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472a7980

UClass * __cdecl UMaterialExpressionGetMaterialAttributes::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionGetMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionGetMaterialAttributes,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionGetMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionGetMaterialAttributes>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.InnerSingleton;
}

// UMaterialExpressionGetMaterialAttributes @ 1472ad900

UMaterialExpressionGetMaterialAttributes * __thiscall
UMaterialExpressionGetMaterialAttributes::UMaterialExpressionGetMaterialAttributes
          (UMaterialExpressionGetMaterialAttributes *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionGetMaterialAttributes__6B_;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes).PropertyConnectedMask = 0;
  (this->AttributeGetTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeGetTypes).ArrayNum = 0;
  (this->AttributeGetTypes).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionGetMaterialAttributes @ 1472af950

void __thiscall
UMaterialExpressionGetMaterialAttributes::~UMaterialExpressionGetMaterialAttributes
          (UMaterialExpressionGetMaterialAttributes *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionGetMaterialAttributes__6B_;
  pFVar1 = (this->AttributeGetTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2de0

UClass * __cdecl UMaterialExpressionGetMaterialAttributes::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionGetMaterialAttributes",
               &Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionGetMaterialAttributes,0xf0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionGetMaterialAttributes>,
               InternalVTableHelperCtorCaller<UMaterialExpressionGetMaterialAttributes>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionGetMaterialAttributes.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionGetMaterialAttributes @ 1472b4610

void __cdecl
UMaterialExpressionGetMaterialAttributes::
StaticRegisterNativesUMaterialExpressionGetMaterialAttributes(void)

{
  return;
}

// UMaterialExpressionGetMaterialAttributes @ 148afc6c0

UMaterialExpressionGetMaterialAttributes * __thiscall
UMaterialExpressionGetMaterialAttributes::UMaterialExpressionGetMaterialAttributes
          (UMaterialExpressionGetMaterialAttributes *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionGetMaterialAttributes__6B_;
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
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes)._padding_ = 0;
  (this->MaterialAttributes).PropertyConnectedMask = 0;
  (this->AttributeGetTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeGetTypes).ArrayNum = 0;
  (this->AttributeGetTypes).ArrayMax = 0;
  return this;
}

