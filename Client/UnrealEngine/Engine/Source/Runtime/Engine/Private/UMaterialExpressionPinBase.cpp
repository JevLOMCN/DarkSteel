// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472b9510

UClass * __cdecl UMaterialExpressionPinBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPinBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPinBase",
               &Z_Registration_Info_UClass_UMaterialExpressionPinBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPinBase,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPinBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPinBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPinBase.InnerSingleton;
}

// UMaterialExpressionPinBase @ 1472c1210

UMaterialExpressionPinBase * __thiscall
UMaterialExpressionPinBase::UMaterialExpressionPinBase
          (UMaterialExpressionPinBase *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPinBase__6B_;
  (this->ReroutePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReroutePins).ArrayNum = 0;
  (this->ReroutePins).ArrayMax = 0;
  return this;
}

// ~UMaterialExpressionPinBase @ 1472c2510

void __thiscall
UMaterialExpressionPinBase::~UMaterialExpressionPinBase(UMaterialExpressionPinBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMaterialExpressionPinBase__6B_;
  pFVar1 = (this->ReroutePins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c6370

UClass * __cdecl UMaterialExpressionPinBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionPinBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionPinBase",
               &Z_Registration_Info_UClass_UMaterialExpressionPinBase.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionPinBase,200,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionPinBase>,
               InternalVTableHelperCtorCaller<UMaterialExpressionPinBase>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionPinBase.InnerSingleton;
}

// IsAllowedIn @ 1472c7400

bool __thiscall
UMaterialExpressionPinBase::IsAllowedIn(UMaterialExpressionPinBase *this,UObject *param_1)

{
  return false;
}

// StaticRegisterNativesUMaterialExpressionPinBase @ 1472c76c0

void __cdecl UMaterialExpressionPinBase::StaticRegisterNativesUMaterialExpressionPinBase(void)

{
  return;
}

// UMaterialExpressionPinBase @ 148afda70

UMaterialExpressionPinBase * __thiscall
UMaterialExpressionPinBase::UMaterialExpressionPinBase
          (UMaterialExpressionPinBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionPinBase__6B_;
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
  (this->ReroutePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReroutePins).ArrayNum = 0;
  (this->ReroutePins).ArrayMax = 0;
  return this;
}

