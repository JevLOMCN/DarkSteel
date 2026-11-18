// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472911c0

UClass * __cdecl UMaterialExpressionExternalCodeBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionExternalCodeBase.InnerSingleton == (UClass *)0x0
     ) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionExternalCodeBase",
               &Z_Registration_Info_UClass_UMaterialExpressionExternalCodeBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionExternalCodeBase,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionExternalCodeBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionExternalCodeBase>,aFStackX_8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionExternalCodeBase.InnerSingleton;
}

// UMaterialExpressionExternalCodeBase @ 1472acdd0

UMaterialExpressionExternalCodeBase * __thiscall
UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
          (UMaterialExpressionExternalCodeBase *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionExternalCodeBase__6B_;
  (this->ExternalCodeIdentifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCodeIdentifiers).ArrayNum = 0;
  (this->ExternalCodeIdentifiers).ArrayMax = 0;
  return this;
}

// UMaterialExpressionExternalCodeBase @ 1472ace10

UMaterialExpressionExternalCodeBase * __thiscall
UMaterialExpressionExternalCodeBase::UMaterialExpressionExternalCodeBase
          (UMaterialExpressionExternalCodeBase *this,FObjectInitializer *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionExternalCodeBase__6B_;
  (this->ExternalCodeIdentifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalCodeIdentifiers).ArrayNum = 0;
  (this->ExternalCodeIdentifiers).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionExternalCodeBase @ 1472af670

void __thiscall
UMaterialExpressionExternalCodeBase::~UMaterialExpressionExternalCodeBase
          (UMaterialExpressionExternalCodeBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionExternalCodeBase__6B_;
  pFVar1 = (this->ExternalCodeIdentifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472b2120

UClass * __cdecl UMaterialExpressionExternalCodeBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionExternalCodeBase.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionExternalCodeBase",
               &Z_Registration_Info_UClass_UMaterialExpressionExternalCodeBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionExternalCodeBase,0xc0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config|CLASS_Abstract,CASTCLASS_None,
               L"MaterialExpressions",InternalConstructor<UMaterialExpressionExternalCodeBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionExternalCodeBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionExternalCodeBase.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionExternalCodeBase @ 1472b4500

void __cdecl
UMaterialExpressionExternalCodeBase::StaticRegisterNativesUMaterialExpressionExternalCodeBase(void)

{
  return;
}

