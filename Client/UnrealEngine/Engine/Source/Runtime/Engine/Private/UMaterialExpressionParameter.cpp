// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetParameterExpressionId @ 14729f500

FGuid * __thiscall
UMaterialExpressionParameter::GetParameterExpressionId(UMaterialExpressionParameter *this)

{
  return &this->ExpressionGUID;
}

// IsAllowedIn @ 1472a19e0

bool __thiscall
UMaterialExpressionParameter::IsAllowedIn(UMaterialExpressionParameter *this,UObject *param_1)

{
  UClass *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = (UClass *)this->_padding_;
  pUVar2 = Z_Construct_UClass_UMaterialExpressionParameter_NoRegister();
  return pUVar1 != pUVar2;
}

// StaticClass @ 1472b4460

UClass * __cdecl UMaterialExpressionParameter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParameter.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParameter,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParameter>,aFStackX_8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParameter.InnerSingleton;
}

// UMaterialExpressionParameter @ 1472c0880

UMaterialExpressionParameter * __thiscall
UMaterialExpressionParameter::UMaterialExpressionParameter
          (UMaterialExpressionParameter *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->SortPriority = 0x20;
  this->_padding_ = (longlong)&___7UMaterialExpressionParameter__6B_;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  return this;
}

// ~UMaterialExpressionParameter @ 1472c2270

void __thiscall
UMaterialExpressionParameter::~UMaterialExpressionParameter(UMaterialExpressionParameter *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionParameter__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c53b0

UClass * __cdecl UMaterialExpressionParameter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionParameter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionParameter",
               &Z_Registration_Info_UClass_UMaterialExpressionParameter.InnerSingleton,
               StaticRegisterNativesUMaterialExpressionParameter,0xd8,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionParameter>,
               InternalVTableHelperCtorCaller<UMaterialExpressionParameter>,local_res8,
               UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionParameter.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionParameter @ 1472c7570

void __cdecl UMaterialExpressionParameter::StaticRegisterNativesUMaterialExpressionParameter(void)

{
  return;
}

// UMaterialExpressionParameter @ 148afd850

UMaterialExpressionParameter * __thiscall
UMaterialExpressionParameter::UMaterialExpressionParameter
          (UMaterialExpressionParameter *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->SortPriority = 0x20;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMaterialExpressionParameter__6B_;
  pvVar2 = ThreadLocalStoragePointer;
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
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  (this->ExpressionGUID).A = 0;
  (this->ExpressionGUID).B = 0;
  (this->ExpressionGUID).C = 0;
  (this->ExpressionGUID).D = 0;
  (this->Group).ComparisonIndex = 0;
  (this->Group).Number = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::ConstructorStatics.ParameterName = ParameterDefaultName;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  this->ParameterName = ::ConstructorStatics.ParameterName;
  return this;
}

