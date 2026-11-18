// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 76

// StaticClass @ 14dc89ab0

UClass * __cdecl UMovieGraphValueContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphValueContainer",
               &Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton,
               StaticRegisterNativesUMovieGraphValueContainer,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphValueContainer>,
               InternalVTableHelperCtorCaller<UMovieGraphValueContainer>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton;
}

// UMovieGraphValueContainer @ 14dd6abc0

UMovieGraphValueContainer * __thiscall
UMovieGraphValueContainer::UMovieGraphValueContainer
          (UMovieGraphValueContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphValueContainer__6B_;
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  FInstancedStruct::FInstancedStruct(&(this->Value).Value);
  return this;
}

// UMovieGraphValueContainer @ 14dd6ac00

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

UMovieGraphValueContainer * __thiscall
UMovieGraphValueContainer::UMovieGraphValueContainer(UMovieGraphValueContainer *this)

{
  int iVar1;
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMovieGraphValueContainer__6B_;
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  FInstancedStruct::FInstancedStruct(&(this->Value).Value);
  this->PropertyName = PropertyBagDefaultPropertyName;
  if ((this->_padding_ & 0x10) == 0) {
    iVar1 = FInstancedPropertyBag::GetNumPropertiesInBag(&this->Value);
    if (iVar1 == 0) {
      FInstancedPropertyBag::AddProperty(&this->Value,this->PropertyName,Double,(UObject *)0x0,true)
      ;
    }
  }
  return this;
}

// ~UMovieGraphValueContainer @ 14dd6be90

void __thiscall
UMovieGraphValueContainer::~UMovieGraphValueContainer(UMovieGraphValueContainer *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphValueContainer__6B_;
  FInstancedStruct::Reset(&(this->Value).Value);
  UObject::~UObject((UObject *)this);
  return;
}

// GetArrayRef @ 14dd860c0

TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> * __thiscall
UMovieGraphValueContainer::GetArrayRef
          (UMovieGraphValueContainer *this,
          TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *__return_storage_ptr__)

{
  FInstancedPropertyBag::GetMutableArrayRef(&this->Value,__return_storage_ptr__,this->PropertyName);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dd8ba40

UClass * __cdecl UMovieGraphValueContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphValueContainer",
               &Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton,
               StaticRegisterNativesUMovieGraphValueContainer,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieGraphValueContainer>,
               InternalVTableHelperCtorCaller<UMovieGraphValueContainer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphValueContainer.InnerSingleton;
}

// GetPropertyName @ 14dd8c5f0

FName __thiscall UMovieGraphValueContainer::GetPropertyName(UMovieGraphValueContainer *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->PropertyName;
  return in_RDX;
}

// GetValueBool @ 14dd8d8f0

bool __thiscall
UMovieGraphValueContainer::GetValueBool(UMovieGraphValueContainer *this,bool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  bool local_res8;
  byte local_res9;
  
  FInstancedPropertyBag::GetValueBool(&this->Value,(FName)&local_res8);
  uVar4 = (ulonglong)local_res9;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) != '\0') {
    if (local_res9 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (2 < local_res9) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_res9])(&local_res8);
    *param_1 = local_res8;
    return true;
  }
  return false;
}

// GetValueByte @ 14dd8da10

bool __thiscall
UMovieGraphValueContainer::GetValueByte(UMovieGraphValueContainer *this,uchar *param_1)

{
  bool bVar1;
  TValueOrError<unsigned_char,EPropertyBagResult> local_res8 [16];
  
  FInstancedPropertyBag::GetValueByte(&this->Value,(FName)local_res8);
  bVar1 = UE::MovieGraph::Private::GetOptionalValue<unsigned_char>(local_res8,param_1);
  return bVar1;
}

// GetValueClass @ 14dd8da50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueClass(UMovieGraphValueContainer *this,UClass **param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  TValueOrError<UClass_*,EPropertyBagResult> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  FInstancedPropertyBag::GetValueClass(&this->Value,&local_38,this->PropertyName);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_38.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
    *param_1 = (UClass *)local_38.Variant._padding_;
    bVar2 = true;
  }
  return bVar2;
}

// GetValueContainerType @ 14dd8db70

EMovieGraphContainerType __thiscall
UMovieGraphValueContainer::GetValueContainerType(UMovieGraphValueContainer *this)

{
  FPropertyBagPropertyDesc *pFVar1;
  
  pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,this->PropertyName);
  if ((pFVar1 != (FPropertyBagPropertyDesc *)0x0) &&
     ((pFVar1->ContainerTypes).NumContainers != '\0')) {
    return (pFVar1->ContainerTypes).Types.Elements[0];
  }
  return None;
}

// GetValueDouble @ 14dd8dbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueDouble(UMovieGraphValueContainer *this,double *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  TValueOrError<double,EPropertyBagResult> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  FInstancedPropertyBag::GetValueDouble(&this->Value,&local_38,this->PropertyName);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_38.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
    *param_1 = (double)local_38.Variant._padding_;
    bVar2 = true;
  }
  return bVar2;
}

// GetValueEnum @ 14dd8dce0

bool __thiscall
UMovieGraphValueContainer::GetValueEnum
          (UMovieGraphValueContainer *this,uchar *param_1,UEnum *param_2)

{
  bool bVar1;
  TValueOrError<unsigned_char,EPropertyBagResult> local_res8 [16];
  
  FInstancedPropertyBag::GetValueEnum(&this->Value,(FName)local_res8,(UEnum *)this->PropertyName);
  bVar1 = UE::MovieGraph::Private::GetOptionalValue<unsigned_char>(local_res8,param_1);
  return bVar1;
}

// GetValueFloat @ 14dd8dd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueFloat(UMovieGraphValueContainer *this,float *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  float local_28;
  byte local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  FInstancedPropertyBag::GetValueFloat(&this->Value,(FName)&local_28);
  uVar4 = (ulonglong)local_24;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_24 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (2 < local_24) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_24])(&local_28);
    *param_1 = local_28;
    bVar2 = true;
  }
  return bVar2;
}

// GetValueInt32 @ 14dd8de50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueInt32(UMovieGraphValueContainer *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  int local_28;
  byte local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_48;
  FInstancedPropertyBag::GetValueInt32(&this->Value,(FName)&local_28);
  uVar4 = (ulonglong)local_24;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_24 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (2 < local_24) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_24])(&local_28);
    *param_1 = local_28;
    bVar2 = true;
  }
  return bVar2;
}

// GetValueInt64 @ 14dd8df70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueInt64(UMovieGraphValueContainer *this,long64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  TValueOrError<__int64,EPropertyBagResult> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  FInstancedPropertyBag::GetValueInt64(&this->Value,&local_38,this->PropertyName);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_38.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<__int64,TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
    *param_1 = local_38.Variant._padding_;
    bVar2 = true;
  }
  return bVar2;
}

// GetValueName @ 14dd8e090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueName(UMovieGraphValueContainer *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  FName local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_58;
  FInstancedPropertyBag::GetValueName
            (&this->Value,(TValueOrError<FName,EPropertyBagResult> *)&local_38,this->PropertyName);
  uVar4 = (ulonglong)local_30;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_30 != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (2 < local_30) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_30])(&local_38);
    *param_1 = local_38;
    bVar2 = true;
  }
  return bVar2;
}

// GetValueObject @ 14dd8e1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueObject
          (UMovieGraphValueContainer *this,UObject *param_1,UClass *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  TValueOrError<UObject_*,EPropertyBagResult> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  FInstancedPropertyBag::GetValueObject(&this->Value,&local_28,this->PropertyName,param_2);
  uVar4 = (ulonglong)local_28.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_28.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (2 < local_28.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28.Variant.TypeIndex])(&local_28);
    bVar2 = true;
  }
  return bVar2;
}

// GetValueSerializedString @ 14dd8e2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UMovieGraphValueContainer::GetValueSerializedString
          (UMovieGraphValueContainer *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  undefined1 auStack_48 [32];
  TValueOrError<FString,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  FInstancedPropertyBag::GetValueSerializedString(&this->Value,&local_28,this->PropertyName);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  UE::MovieGraph::Private::GetOptionalValue<FString>(&local_28,__return_storage_ptr__);
  if (2 < local_28.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.Variant.TypeIndex])(&local_28);
  return __return_storage_ptr__;
}

// GetValueString @ 14dd8e360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueString(UMovieGraphValueContainer *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 auStack_48 [32];
  TValueOrError<FString,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  FInstancedPropertyBag::GetValueString(&this->Value,&local_28,this->PropertyName);
  bVar2 = UE::MovieGraph::Private::GetOptionalValue<FString>(&local_28,param_1);
  if (2 < local_28.Variant.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.Variant.TypeIndex])(&local_28);
  return bVar2;
}

// GetValueStruct @ 14dd8e410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueStruct
          (UMovieGraphValueContainer *this,FStructView *param_1,UScriptStruct *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  UScriptStruct *local_48;
  uchar *puStack_40;
  TValueOrError<FStructView,EPropertyBagResult> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  FInstancedPropertyBag::GetValueStruct(&this->Value,&local_38,this->PropertyName,param_2);
  uVar4 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4 + 4) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_38.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_48 = (UScriptStruct *)local_38.Variant._padding_;
    puStack_40 = (uchar *)local_38.Variant._padding_;
    if (2 < local_38.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStructView,TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
    bVar2 = true;
    param_1->ScriptStruct = local_48;
    param_1->StructMemory = puStack_40;
  }
  return bVar2;
}

// GetValueText @ 14dd8e530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UMovieGraphValueContainer::GetValueText(UMovieGraphValueContainer *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  FText local_38;
  TValueOrError<FText,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  FInstancedPropertyBag::GetValueText(&this->Value,&local_28,this->PropertyName);
  uVar5 = (ulonglong)local_28.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar2 = false;
  }
  else {
    if (local_28.Variant.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FText::FText(&local_38,(FText *)&local_28);
    if (2 < local_28.Variant.TypeIndex) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_28.Variant.TypeIndex])(&local_28);
    local_28.Variant.TypeIndex = 2;
    FText::operator=(param_1,&local_38);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    bVar2 = true;
  }
  uVar5 = (ulonglong)local_28.Variant.TypeIndex;
  if (2 < local_28.Variant.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<TValueOrError<FText,enum_EPropertyBagResult>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_28);
  }
  return bVar2;
}

// GetValueType @ 14dd8e6c0

EMovieGraphValueType __thiscall
UMovieGraphValueContainer::GetValueType(UMovieGraphValueContainer *this)

{
  FPropertyBagPropertyDesc *pFVar1;
  
  pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,this->PropertyName);
  if (pFVar1 != (FPropertyBagPropertyDesc *)0x0) {
    return pFVar1->ValueType;
  }
  return None;
}

// GetValueTypeObject @ 14dd8e6f0

UObject * __thiscall UMovieGraphValueContainer::GetValueTypeObject(UMovieGraphValueContainer *this)

{
  FPropertyBagPropertyDesc *pFVar1;
  
  pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,this->PropertyName);
  if (pFVar1 != (FPropertyBagPropertyDesc *)0x0) {
    return (pFVar1->ValueTypeObject).field0_0x0.DebugPtr;
  }
  return (UObject *)0x0;
}

// SetFromDesc @ 14dda2360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
UMovieGraphValueContainer::SetFromDesc
          (UMovieGraphValueContainer *this,FPropertyBagPropertyDesc *param_1,FString *param_2)

{
  uchar uVar1;
  EPropertyBagPropertyType EVar2;
  undefined2 uVar3;
  FName FVar4;
  UObject *pUVar5;
  TObjectPtr<UObject_const_>_u_0 TVar6;
  undefined1 auStack_f8 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  EPropertyBagPropertyType local_68;
  undefined2 local_67;
  uchar local_65;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  if (param_1 != (FPropertyBagPropertyDesc *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
    FVar4 = param_1->Name;
    uVar3 = *(undefined2 *)(param_1->ContainerTypes).Types.Elements;
    uVar1 = (param_1->ContainerTypes).NumContainers;
    EVar2 = param_1->ValueType;
    local_c0 = 0;
    uStack_b8 = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (pUVar5 = (param_1->ValueTypeObject).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    TVar6 = (TObjectPtr<UObject_const_>_u_0)(param_1->ValueTypeObject).field0_0x0.DebugPtr;
    this->PropertyName = param_1->Name;
    FInstancedStruct::Reset(&(this->Value).Value);
    local_88 = TVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar6.DebugPtr);
    }
    local_d8.ArrayNum = 1;
    local_d8.DataPtr = (FPropertyBagPropertyDesc *)&local_88;
    local_80 = local_c0;
    uStack_78 = uStack_b8;
    local_60 = 1;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_70 = FVar4;
    local_68 = EVar2;
    local_67 = uVar3;
    local_65 = uVar1;
    FInstancedPropertyBag::AddProperties(&this->Value,&local_d8,true);
    FInstancedPropertyBag::SetValueSerializedString(&this->Value,this->PropertyName,param_2);
  }
  return;
}

// SetPropertyName @ 14dda31f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieGraphValueContainer::SetPropertyName(UMovieGraphValueContainer *this,FName *param_1)

{
  EPropertyBagPropertyType EVar1;
  uchar uVar2;
  undefined2 uVar3;
  TObjectPtr<UObject_const_>_u_0 TVar4;
  ulong64 uVar5;
  FName FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FPropertyBagPropertyDesc *pFVar9;
  UPropertyBag *pUVar10;
  undefined1 auStack_c8 [32];
  int local_a8;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_98;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  EPropertyBagPropertyType local_68;
  undefined2 local_67;
  uchar local_65;
  ulong64 local_60;
  FProperty *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar9 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,this->PropertyName);
  if ((pFVar9 != (FPropertyBagPropertyDesc *)0x0) && (pFVar9->Name != *param_1)) {
    this->PropertyName = *param_1;
    TVar4 = (TObjectPtr<UObject_const_>_u_0)(pFVar9->ValueTypeObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar4.DebugPtr);
    }
    local_98.DataPtr = (FPropertyBagPropertyDesc *)pFVar9->CachedProperty;
    local_a8 = pFVar9->CachedIndex;
    EVar1 = pFVar9->ValueType;
    uVar3 = *(undefined2 *)(pFVar9->ContainerTypes).Types.Elements;
    uVar2 = (pFVar9->ContainerTypes).NumContainers;
    uVar5 = pFVar9->PropertyFlags;
    uVar7._0_4_ = (pFVar9->ID).A;
    uVar7._4_4_ = (pFVar9->ID).B;
    uVar8._0_4_ = (pFVar9->ID).C;
    uVar8._4_4_ = (pFVar9->ID).D;
    FVar6 = *param_1;
    local_88 = TVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar4.DebugPtr);
    }
    local_98.ArrayNum = 1;
    local_58 = (FProperty *)local_98.DataPtr;
    local_98.DataPtr = (FPropertyBagPropertyDesc *)&local_88;
    local_80 = uVar7;
    uStack_78 = uVar8;
    local_70 = FVar6;
    local_68 = EVar1;
    local_67 = uVar3;
    local_65 = uVar2;
    local_60 = uVar5;
    local_50 = local_a8;
    pUVar10 = UPropertyBag::GetOrCreateFromDescs(&local_98,(wchar_t *)0x0);
    FInstancedPropertyBag::MigrateToNewBagStruct(&this->Value,pUVar10);
  }
  return;
}

// SetValueBool @ 14dda4d40

bool __thiscall
UMovieGraphValueContainer::SetValueBool(UMovieGraphValueContainer *this,bool param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueBool(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueByte @ 14dda4d70

bool __thiscall
UMovieGraphValueContainer::SetValueByte(UMovieGraphValueContainer *this,uchar param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueByte(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueClass @ 14dda4da0

bool __thiscall
UMovieGraphValueContainer::SetValueClass(UMovieGraphValueContainer *this,UClass *param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueClass(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueContainerType @ 14dda4dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieGraphValueContainer::SetValueContainerType
          (UMovieGraphValueContainer *this,EMovieGraphContainerType param_1)

{
  EPropertyBagPropertyType EVar1;
  TObjectPtr<UObject_const_>_u_0 TVar2;
  FName FVar3;
  ulong64 uVar4;
  FProperty *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FPropertyBagPropertyDesc *pFVar8;
  UPropertyBag *pUVar9;
  undefined1 auStack_c8 [32];
  ushort local_a8;
  int local_a4;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_98;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  EPropertyBagPropertyType local_68;
  ushort local_67;
  undefined1 local_65;
  ulong64 local_60;
  FProperty *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar8 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,this->PropertyName);
  if (pFVar8 != (FPropertyBagPropertyDesc *)0x0) {
    TVar2 = (TObjectPtr<UObject_const_>_u_0)(pFVar8->ValueTypeObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar2.DebugPtr);
    }
    local_a4 = pFVar8->CachedIndex;
    uVar6._0_4_ = (pFVar8->ID).A;
    uVar6._4_4_ = (pFVar8->ID).B;
    uVar7._0_4_ = (pFVar8->ID).C;
    uVar7._4_4_ = (pFVar8->ID).D;
    FVar3 = pFVar8->Name;
    EVar1 = pFVar8->ValueType;
    uVar4 = pFVar8->PropertyFlags;
    pFVar5 = pFVar8->CachedProperty;
    local_a8 = 0;
    if (param_1 != None) {
      local_a8 = (ushort)param_1;
    }
    local_88 = TVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar2.DebugPtr);
    }
    local_98.ArrayNum = 1;
    local_67 = local_a8;
    local_98.DataPtr = (FPropertyBagPropertyDesc *)&local_88;
    local_80 = uVar6;
    uStack_78 = uVar7;
    local_70 = FVar3;
    local_68 = EVar1;
    local_65 = param_1 != None;
    local_60 = uVar4;
    local_58 = pFVar5;
    local_50 = local_a4;
    pUVar9 = UPropertyBag::GetOrCreateFromDescs(&local_98,(wchar_t *)0x0);
    FInstancedPropertyBag::MigrateToNewBagStruct(&this->Value,pUVar9);
  }
  return;
}

// SetValueDouble @ 14dda4f60

bool __thiscall
UMovieGraphValueContainer::SetValueDouble(UMovieGraphValueContainer *this,double param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueDouble(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueEnum @ 14dda4f90

bool __thiscall
UMovieGraphValueContainer::SetValueEnum
          (UMovieGraphValueContainer *this,uchar param_1,UEnum *param_2)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueEnum(&this->Value,this->PropertyName,param_1,param_2);
  return EVar1 == Success;
}

// SetValueFloat @ 14dda4fc0

bool __thiscall
UMovieGraphValueContainer::SetValueFloat(UMovieGraphValueContainer *this,float param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueFloat(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueInt32 @ 14dda4ff0

bool __thiscall
UMovieGraphValueContainer::SetValueInt32(UMovieGraphValueContainer *this,int param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueInt32(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueInt64 @ 14dda5020

bool __thiscall
UMovieGraphValueContainer::SetValueInt64(UMovieGraphValueContainer *this,long64 param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueInt64(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueName @ 14dda5050

bool __thiscall
UMovieGraphValueContainer::SetValueName(UMovieGraphValueContainer *this,FName param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueName(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueObject @ 14dda5080

bool __thiscall
UMovieGraphValueContainer::SetValueObject(UMovieGraphValueContainer *this,UObject *param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueObject(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueSerializedString @ 14dda50b0

bool __thiscall
UMovieGraphValueContainer::SetValueSerializedString
          (UMovieGraphValueContainer *this,FString *param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueSerializedString(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueString @ 14dda50e0

bool __thiscall
UMovieGraphValueContainer::SetValueString(UMovieGraphValueContainer *this,FString *param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueString(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueStruct @ 14dda5110

bool __thiscall
UMovieGraphValueContainer::SetValueStruct(UMovieGraphValueContainer *this,FConstStructView *param_1)

{
  EPropertyBagResult EVar1;
  FConstStructView local_18;
  
  local_18.ScriptStruct = param_1->ScriptStruct;
  local_18.StructMemory = param_1->StructMemory;
  EVar1 = FInstancedPropertyBag::SetValueStruct(&this->Value,this->PropertyName,&local_18);
  return EVar1 == Success;
}

// SetValueText @ 14dda5150

bool __thiscall
UMovieGraphValueContainer::SetValueText(UMovieGraphValueContainer *this,FText *param_1)

{
  EPropertyBagResult EVar1;
  
  EVar1 = FInstancedPropertyBag::SetValueText(&this->Value,this->PropertyName,param_1);
  return EVar1 == Success;
}

// SetValueType @ 14dda5180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
UMovieGraphValueContainer::SetValueType
          (UMovieGraphValueContainer *this,EMovieGraphValueType param_1,UObject *param_2)

{
  FInstancedPropertyBag *this_00;
  uchar uVar1;
  undefined2 uVar2;
  FName FVar3;
  FPropertyBagPropertyDesc *pFVar4;
  undefined1 auStack_f8 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  EMovieGraphValueType local_68;
  undefined2 local_67;
  uchar local_65;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  this_00 = &this->Value;
  pFVar4 = FInstancedPropertyBag::FindPropertyDescByName(this_00,this->PropertyName);
  if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
    FVar3 = pFVar4->Name;
    uVar2 = *(undefined2 *)(pFVar4->ContainerTypes).Types.Elements;
    uVar1 = (pFVar4->ContainerTypes).NumContainers;
    local_c0 = 0;
    uStack_b8 = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FInstancedStruct::Reset(&this_00->Value);
    local_88.DebugPtr = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_d8.ArrayNum = 1;
    local_d8.DataPtr = (FPropertyBagPropertyDesc *)&local_88;
    local_80 = local_c0;
    uStack_78 = uStack_b8;
    local_60 = 1;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_70 = FVar3;
    local_68 = param_1;
    local_67 = uVar2;
    local_65 = uVar1;
    FInstancedPropertyBag::AddProperties(this_00,&local_d8,true);
  }
  return;
}

// SetValueTypeObject @ 14dda52f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieGraphValueContainer::SetValueTypeObject(UMovieGraphValueContainer *this,UObject *param_1)

{
  EPropertyBagPropertyType EVar1;
  uchar uVar2;
  undefined2 uVar3;
  int iVar4;
  UObject *pUVar5;
  FName FVar6;
  ulong64 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FPropertyBagPropertyDesc *pFVar10;
  UPropertyBag *pUVar11;
  undefined1 auStack_c8 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_a8;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  FName local_80;
  EPropertyBagPropertyType local_78;
  undefined2 local_77;
  uchar local_75;
  ulong64 local_70;
  FProperty *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pFVar10 = FInstancedPropertyBag::FindPropertyDescByName(&this->Value,this->PropertyName);
  if (pFVar10 != (FPropertyBagPropertyDesc *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 = (pFVar10->ValueTypeObject).field0_0x0.DebugPtr, pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_a8.DataPtr = (FPropertyBagPropertyDesc *)pFVar10->CachedProperty;
    FVar6 = pFVar10->Name;
    EVar1 = pFVar10->ValueType;
    uVar3 = *(undefined2 *)(pFVar10->ContainerTypes).Types.Elements;
    uVar2 = (pFVar10->ContainerTypes).NumContainers;
    uVar7 = pFVar10->PropertyFlags;
    uVar8._0_4_ = (pFVar10->ID).A;
    uVar8._4_4_ = (pFVar10->ID).B;
    uVar9._0_4_ = (pFVar10->ID).C;
    uVar9._4_4_ = (pFVar10->ID).D;
    iVar4 = pFVar10->CachedIndex;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_98.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_a8.ArrayNum = 1;
    local_68 = (FProperty *)local_a8.DataPtr;
    local_a8.DataPtr = (FPropertyBagPropertyDesc *)&local_98;
    local_90 = uVar8;
    uStack_88 = uVar9;
    local_80 = FVar6;
    local_78 = EVar1;
    local_77 = uVar3;
    local_75 = uVar2;
    local_70 = uVar7;
    local_60 = iVar4;
    pUVar11 = UPropertyBag::GetOrCreateFromDescs(&local_a8,(wchar_t *)0x0);
    FInstancedPropertyBag::MigrateToNewBagStruct(&this->Value,pUVar11);
  }
  return;
}

// StaticRegisterNativesUMovieGraphValueContainer @ 14dda6600

void __cdecl UMovieGraphValueContainer::StaticRegisterNativesUMovieGraphValueContainer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x20;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphValueContainer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValueBool @ 14ddabf20

void __cdecl
UMovieGraphValueContainer::execGetValueBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  uchar local_res10;
  byte local_res11;
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar5 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedPropertyBag::GetValueBool
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,(FName)&local_res10);
  uVar4 = (ulonglong)local_res11;
  if (2 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) != '\0') {
    if (local_res11 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (2 < local_res11) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_res11])(&local_res10);
    *puVar5 = local_res10;
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetValueByte @ 14ddac0a0

void __cdecl
UMovieGraphValueContainer::execGetValueByte(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  TValueOrError<unsigned_char,EPropertyBagResult> local_res10 [4];
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedPropertyBag::GetValueByte
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,(FName)local_res10);
  bVar2 = UE::MovieGraph::Private::GetOptionalValue<unsigned_char>(local_res10,puVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetValueClass @ 14ddac160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  TValueOrError<UClass_*,EPropertyBagResult> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  plVar7 = &local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  FInstancedPropertyBag::GetValueClass
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,&local_40,FVar2);
  uVar6 = (ulonglong)local_40.Variant.TypeIndex;
  if (2 < uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6) == '\0') {
    uVar5 = 0;
  }
  else {
    if (local_40.Variant.TypeIndex != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (2 < local_40.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Variant.TypeIndex])(&local_40);
    uVar5 = 1;
    *plVar7 = local_40.Variant._padding_;
  }
  *(undefined1 *)param_3 = uVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*plVar7 != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*plVar7);
  }
  return;
}

// execGetValueContainerType @ 14ddac300

void __cdecl
UMovieGraphValueContainer::execGetValueContainerType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar1.Number = *(uint *)&param_1[1].field_0x4;
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName
                     ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar1);
  if (pFVar2 == (FPropertyBagPropertyDesc *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if ((pFVar2->ContainerTypes).NumContainers != '\0') {
    *(EPropertyBagContainerType *)param_3 = (pFVar2->ContainerTypes).Types.Elements[0];
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetValueDouble @ 14ddac360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueDouble(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  TValueOrError<double,EPropertyBagResult> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  plVar6 = &local_58;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar6 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  FInstancedPropertyBag::GetValueDouble
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,&local_50,FVar2);
  uVar5 = (ulonglong)local_50.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (local_50.Variant.TypeIndex != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (2 < local_50.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50.Variant.TypeIndex])(&local_50);
    *plVar6 = local_50.Variant._padding_;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueEnum @ 14ddac500

void __cdecl
UMovieGraphValueContainer::execGetValueEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  uchar *puVar3;
  uchar local_res8 [8];
  TValueOrError<unsigned_char,EPropertyBagResult> local_res10 [4];
  undefined8 local_res18 [2];
  
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  puVar3 = local_res8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedPropertyBag::GetValueEnum
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,(FName)local_res10,
             *(UEnum **)(param_1 + 1));
  bVar2 = UE::MovieGraph::Private::GetOptionalValue<unsigned_char>(local_res10,puVar3);
  *(bool *)param_3 = bVar2;
  return;
}

// execGetValueFloat @ 14ddac600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uchar *puVar5;
  undefined1 auStack_78 [32];
  uchar local_58 [4];
  undefined4 local_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar5 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedPropertyBag::GetValueFloat
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,(FName)&local_54);
  uVar4 = (ulonglong)local_50;
  if (2 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (local_50 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (2 < local_50) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_50])(&local_54);
    *(undefined4 *)puVar5 = local_54;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueInt32 @ 14ddac7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueInt32(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uchar *puVar5;
  undefined1 auStack_68 [32];
  uchar local_48 [4];
  undefined4 local_44;
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar5 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FInstancedPropertyBag::GetValueInt32
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,(FName)&local_44);
  uVar4 = (ulonglong)local_40;
  if (2 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (local_40 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (2 < local_40) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40])(&local_44);
    *(undefined4 *)puVar5 = local_44;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueInt64 @ 14ddac930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueInt64(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  TValueOrError<__int64,EPropertyBagResult> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  plVar6 = &local_48;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar6 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  FInstancedPropertyBag::GetValueInt64
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,&local_40,FVar2);
  uVar5 = (ulonglong)local_40.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (local_40.Variant.TypeIndex != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (2 < local_40.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<__int64,TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Variant.TypeIndex])(&local_40);
    *plVar6 = local_40.Variant._padding_;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueName @ 14ddacac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  uchar *puVar6;
  undefined1 auStack_68 [32];
  uchar local_48 [8];
  TValueOrError<FName,EPropertyBagResult> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar6 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  FInstancedPropertyBag::GetValueName
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,&local_40,FVar2);
  uVar5 = (ulonglong)local_40.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (local_40.Variant.TypeIndex != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (2 < local_40.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_40.Variant.TypeIndex])(&local_40);
    puVar6[0] = local_40.Variant._0_1_;
    puVar6[1] = local_40.Variant._1_1_;
    puVar6[2] = local_40.Variant._2_1_;
    puVar6[3] = local_40.Variant._3_1_;
    puVar6[4] = local_40.Variant._4_1_;
    puVar6[5] = local_40.Variant._5_1_;
    puVar6[6] = local_40.Variant._6_1_;
    puVar6[7] = local_40.Variant._7_1_;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueObject @ 14ddacc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  UClass *local_48;
  undefined8 local_40;
  TValueOrError<UObject_*,EPropertyBagResult> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  FInstancedPropertyBag::GetValueObject
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,&local_38,FVar2,local_48);
  uVar5 = (ulonglong)local_38.Variant.TypeIndex;
  if (2 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    *(undefined1 *)param_3 = 0;
  }
  else {
    if (local_38.Variant.TypeIndex != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (2 < local_38.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetValueSerializedString @ 14ddace00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueSerializedString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_68 [32];
  FString local_48;
  TValueOrError<FString,EPropertyBagResult> local_38;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar1.Number = *(uint *)&param_1[1].field_0x4;
  FInstancedPropertyBag::GetValueSerializedString
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,&local_38,FVar1);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  UE::MovieGraph::Private::GetOptionalValue<FString>(&local_38,&local_48);
  if ((2 < local_38.Variant.TypeIndex) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38);
  FVar4.Data = local_48.Data.AllocatorInstance.Data;
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    FVar4.Data = (FScriptContainerElement *)0x0;
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return;
}

// execGetValueString @ 14ddacf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  undefined1 auStack_78 [32];
  FString local_58;
  TValueOrError<FString,EPropertyBagResult> local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar6 = &local_58;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar6 = (FString *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  FInstancedPropertyBag::GetValueString
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,&local_48,FVar2);
  bVar4 = UE::MovieGraph::Private::GetOptionalValue<FString>(&local_48,pFVar6);
  if (2 < local_48.Variant.TypeIndex) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48);
  *(bool *)param_3 = bVar4;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetValueText @ 14ddad030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execGetValueText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  FText *this;
  undefined1 auStack_88 [32];
  FText local_68;
  FText local_58;
  TValueOrError<FText,EPropertyBagResult> local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  FText::FText(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = &local_68;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  FInstancedPropertyBag::GetValueText
            ((FInstancedPropertyBag *)&param_1[1].field_0x8,&local_48,FVar2);
  uVar6 = (ulonglong)local_48.Variant.TypeIndex;
  if (2 < uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6) == '\0') {
    uVar5 = 0;
  }
  else {
    if (local_48.Variant.TypeIndex != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FText::FText(&local_58,(FText *)&local_48);
    if (2 < local_48.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48);
    local_48.Variant.TypeIndex = 2;
    FText::operator=(this,&local_58);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    uVar5 = 1;
  }
  uVar6 = (ulonglong)local_48.Variant.TypeIndex;
  if (2 < local_48.Variant.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] !=
      UE::Core::Private::TDestructorCaller<TValueOrError<FText,enum_EPropertyBagResult>::FEmptyType>
      ::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_48);
  }
  *(undefined1 *)param_3 = uVar5;
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return;
}

// execGetValueType @ 14ddad240

void __cdecl
UMovieGraphValueContainer::execGetValueType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar1.Number = *(uint *)&param_1[1].field_0x4;
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName
                     ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar1);
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    *(EPropertyBagPropertyType *)param_3 = pFVar2->ValueType;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetValueTypeObject @ 14ddad290

void __cdecl
UMovieGraphValueContainer::execGetValueTypeObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar1.Number = *(uint *)&param_1[1].field_0x4;
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName
                     ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar1);
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    *(TObjectPtr<UObject_const_>_u_0 *)param_3 = (pFVar2->ValueTypeObject).field0_0x0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetValueBool @ 14ddaea40

void __cdecl
UMovieGraphValueContainer::execSetValueBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueBool
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8[0] != 0);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueByte @ 14ddaeaf0

void __cdecl
UMovieGraphValueContainer::execSetValueByte(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  uchar local_res8 [8];
  
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueByte
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8[0]);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueClass @ 14ddaeb90

void __cdecl
UMovieGraphValueContainer::execSetValueClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  UClass *local_res8;
  
  local_res8 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueClass
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueContainerType @ 14ddaec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execSetValueContainerType(UObject *param_1,FFrame *param_2,void *param_3)

{
  EPropertyBagPropertyType EVar1;
  TObjectPtr<UObject_const_>_u_0 TVar2;
  FName FVar3;
  ulong64 uVar4;
  FProperty *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  FPropertyBagPropertyDesc *pFVar9;
  UPropertyBag *pUVar10;
  undefined1 auStack_d8 [32];
  byte local_b8 [4];
  ushort local_b4;
  int local_b0;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_a8;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  FName local_80;
  EPropertyBagPropertyType local_78;
  ushort local_77;
  undefined1 local_75;
  ulong64 local_70;
  FProperty *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  bVar8 = local_b8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar3.Number = *(uint *)&param_1[1].field_0x4;
  pFVar9 = FInstancedPropertyBag::FindPropertyDescByName
                     ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar3);
  if (pFVar9 != (FPropertyBagPropertyDesc *)0x0) {
    TVar2 = (TObjectPtr<UObject_const_>_u_0)(pFVar9->ValueTypeObject).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar2.DebugPtr);
    }
    local_b0 = pFVar9->CachedIndex;
    uVar6._0_4_ = (pFVar9->ID).A;
    uVar6._4_4_ = (pFVar9->ID).B;
    uVar7._0_4_ = (pFVar9->ID).C;
    uVar7._4_4_ = (pFVar9->ID).D;
    FVar3 = pFVar9->Name;
    EVar1 = pFVar9->ValueType;
    uVar4 = pFVar9->PropertyFlags;
    pFVar5 = pFVar9->CachedProperty;
    local_b4 = 0;
    if (bVar8 != 0) {
      local_b4 = (ushort)bVar8;
    }
    local_98 = TVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar2.DebugPtr);
    }
    local_a8.ArrayNum = 1;
    local_77 = local_b4;
    local_a8.DataPtr = (FPropertyBagPropertyDesc *)&local_98;
    local_90 = uVar6;
    uStack_88 = uVar7;
    local_80 = FVar3;
    local_78 = EVar1;
    local_75 = bVar8 != 0;
    local_70 = uVar4;
    local_68 = pFVar5;
    local_60 = local_b0;
    pUVar10 = UPropertyBag::GetOrCreateFromDescs(&local_a8,(wchar_t *)0x0);
    FInstancedPropertyBag::MigrateToNewBagStruct
              ((FInstancedPropertyBag *)&param_1[1].field_0x8,pUVar10);
  }
  return;
}

// execSetValueDouble @ 14ddaee20

void __cdecl
UMovieGraphValueContainer::execSetValueDouble(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  double local_res8;
  
  local_res8 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueDouble
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueEnum @ 14ddaeec0

void __cdecl
UMovieGraphValueContainer::execSetValueEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  uchar local_res8 [8];
  UEnum *local_res10;
  
  local_res8[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueEnum
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8[0],local_res10)
  ;
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueFloat @ 14ddaefa0

void __cdecl
UMovieGraphValueContainer::execSetValueFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueFloat
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8[0]);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueInt32 @ 14ddaf040

void __cdecl
UMovieGraphValueContainer::execSetValueInt32(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueInt32
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8[0]);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueInt64 @ 14ddaf0f0

void __cdecl
UMovieGraphValueContainer::execSetValueInt64(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  long64 local_res8;
  
  local_res8 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueInt64
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueName @ 14ddaf1a0

void __cdecl
UMovieGraphValueContainer::execSetValueName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueName
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueObject @ 14ddaf250

void __cdecl
UMovieGraphValueContainer::execSetValueObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueObject
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,local_res8);
  *(bool *)param_3 = EVar3 == Success;
  return;
}

// execSetValueSerializedString @ 14ddaf300

void __cdecl
UMovieGraphValueContainer::execSetValueSerializedString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueSerializedString
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,&local_18);
  *(bool *)param_3 = EVar3 == Success;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetValueString @ 14ddaf3c0

void __cdecl
UMovieGraphValueContainer::execSetValueString(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueString
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,&local_18);
  *(bool *)param_3 = EVar3 == Success;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetValueText @ 14ddaf480

void __cdecl
UMovieGraphValueContainer::execSetValueText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  FText *pFVar4;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar4 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar4 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar2.Number = *(uint *)&param_1[1].field_0x4;
  EVar3 = FInstancedPropertyBag::SetValueText
                    ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar2,pFVar4);
  *(bool *)param_3 = EVar3 == Success;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetValueType @ 14ddaf550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __cdecl
UMovieGraphValueContainer::execSetValueType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  uchar uVar1;
  undefined2 uVar2;
  FProperty *pFVar3;
  FName FVar4;
  EPropertyBagPropertyType EVar5;
  UObject *pUVar6;
  FPropertyBagPropertyDesc *pFVar7;
  undefined1 auStack_108 [32];
  EPropertyBagPropertyType local_e8 [8];
  UObject *local_e0;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  EPropertyBagPropertyType local_68;
  undefined2 local_67;
  uchar local_65;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_e0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  pUVar6 = local_e0;
  EVar5 = local_e8[0];
  this = &param_1[1].field_0x8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar4.Number = *(uint *)&param_1[1].field_0x4;
  pFVar7 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,FVar4);
  if (pFVar7 != (FPropertyBagPropertyDesc *)0x0) {
    FVar4 = pFVar7->Name;
    uVar2 = *(undefined2 *)(pFVar7->ContainerTypes).Types.Elements;
    uVar1 = (pFVar7->ContainerTypes).NumContainers;
    local_c0 = 0;
    uStack_b8 = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FInstancedStruct::Reset((FInstancedStruct *)this);
    local_88.DebugPtr = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_d8.ArrayNum = 1;
    local_d8.DataPtr = (FPropertyBagPropertyDesc *)&local_88;
    local_80 = local_c0;
    uStack_78 = uStack_b8;
    local_68 = EVar5;
    local_60 = 1;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_70 = FVar4;
    local_67 = uVar2;
    local_65 = uVar1;
    FInstancedPropertyBag::AddProperties((FInstancedPropertyBag *)this,&local_d8,true);
  }
  return;
}

// execSetValueTypeObject @ 14ddaf710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UMovieGraphValueContainer::execSetValueTypeObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  EPropertyBagPropertyType EVar1;
  uchar uVar2;
  undefined2 uVar3;
  int iVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  FName FVar7;
  ulong64 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  UObject *pUVar11;
  FPropertyBagPropertyDesc *pFVar12;
  UPropertyBag *pUVar13;
  undefined1 auStack_d8 [32];
  UObject *local_b8 [2];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_a8;
  TObjectPtr<UObject_const_>_u_0 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  FName local_80;
  EPropertyBagPropertyType local_78;
  undefined2 local_77;
  uchar local_75;
  ulong64 local_70;
  FProperty *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  pUVar11 = local_b8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar7.ComparisonIndex.Value = *(uint *)&param_1[1].field_0x0;
  FVar7.Number = *(uint *)&param_1[1].field_0x4;
  pFVar12 = FInstancedPropertyBag::FindPropertyDescByName
                      ((FInstancedPropertyBag *)&param_1[1].field_0x8,FVar7);
  if (pFVar12 != (FPropertyBagPropertyDesc *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 = (pFVar12->ValueTypeObject).field0_0x0.DebugPtr, pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_a8.DataPtr = (FPropertyBagPropertyDesc *)pFVar12->CachedProperty;
    FVar7 = pFVar12->Name;
    EVar1 = pFVar12->ValueType;
    uVar3 = *(undefined2 *)(pFVar12->ContainerTypes).Types.Elements;
    uVar2 = (pFVar12->ContainerTypes).NumContainers;
    uVar8 = pFVar12->PropertyFlags;
    uVar9._0_4_ = (pFVar12->ID).A;
    uVar9._4_4_ = (pFVar12->ID).B;
    uVar10._0_4_ = (pFVar12->ID).C;
    uVar10._4_4_ = (pFVar12->ID).D;
    iVar4 = pFVar12->CachedIndex;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    local_98.DebugPtr = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    local_a8.ArrayNum = 1;
    local_68 = (FProperty *)local_a8.DataPtr;
    local_a8.DataPtr = (FPropertyBagPropertyDesc *)&local_98;
    local_90 = uVar9;
    uStack_88 = uVar10;
    local_80 = FVar7;
    local_78 = EVar1;
    local_77 = uVar3;
    local_75 = uVar2;
    local_70 = uVar8;
    local_60 = iVar4;
    pUVar13 = UPropertyBag::GetOrCreateFromDescs(&local_a8,(wchar_t *)0x0);
    FInstancedPropertyBag::MigrateToNewBagStruct
              ((FInstancedPropertyBag *)&param_1[1].field_0x8,pUVar13);
  }
  return;
}

