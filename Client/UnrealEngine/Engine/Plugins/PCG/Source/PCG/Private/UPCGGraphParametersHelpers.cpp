// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 88

// StaticClass @ 149ce6a90

UClass * __cdecl UPCGGraphParametersHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphParametersHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphParametersHelpers",
               &Z_Registration_Info_UClass_UPCGGraphParametersHelpers.InnerSingleton,
               StaticRegisterNativesUPCGGraphParametersHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGGraphParametersHelpers>,
               InternalVTableHelperCtorCaller<UPCGGraphParametersHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphParametersHelpers.InnerSingleton;
}

// UPCGGraphParametersHelpers @ 149d342c0

UPCGGraphParametersHelpers * __thiscall
UPCGGraphParametersHelpers::UPCGGraphParametersHelpers
          (UPCGGraphParametersHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGGraphParametersHelpers__6B_;
  return this;
}

// UPCGGraphParametersHelpers @ 149d342f0

UPCGGraphParametersHelpers * __thiscall
UPCGGraphParametersHelpers::UPCGGraphParametersHelpers
          (UPCGGraphParametersHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGGraphParametersHelpers__6B_;
  return this;
}

// ~UPCGGraphParametersHelpers @ 149d34f90

void __thiscall
UPCGGraphParametersHelpers::~UPCGGraphParametersHelpers(UPCGGraphParametersHelpers *this)

{
  *(undefined ***)this = &___7UPCGGraphParametersHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetBoolParameter @ 149d4e9f0

bool __cdecl UPCGGraphParametersHelpers::GetBoolParameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FInstancedPropertyBag *this;
  ulonglong uVar4;
  EPropertyBagResult local_res8;
  byte local_res9;
  
  if (param_1 != (UPCGGraphInterface *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FInstancedPropertyBag::GetValueBool(this,(FName)&local_res8);
    uVar4 = (ulonglong)local_res9;
    if ((2 < local_res9) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,bool,TValueOrError<bool,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4) == '\0') {
      if ((local_res9 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      return (bool)local_res8;
    }
    if ((local_res9 != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    PCGGraphParametersHelpersPrivate::OnException(local_res8,param_2);
  }
  return false;
}

// GetByteParameter @ 149d4eb20

uchar __cdecl
UPCGGraphParametersHelpers::GetByteParameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  FInstancedPropertyBag *this;
  ulonglong uVar4;
  EPropertyBagResult EStackX_8;
  byte bStackX_9;
  
  if (param_1 != (UPCGGraphInterface *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FInstancedPropertyBag::GetValueByte(this,(FName)&EStackX_8);
    uVar4 = (ulonglong)bStackX_9;
    if ((2 < bStackX_9) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4) == '\0') {
      if ((bStackX_9 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      return EStackX_8;
    }
    if ((bStackX_9 != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    PCGGraphParametersHelpersPrivate::OnException(EStackX_8,param_2);
  }
  return '\0';
}

// GetClassParameter @ 149d4ed30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UClass * __cdecl
UPCGGraphParametersHelpers::GetClassParameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FInstancedPropertyBag *this;
  UClass *pUVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  TValueOrError<UClass_*,EPropertyBagResult> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != (UPCGGraphInterface *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UClass *)(*pcVar1)();
      return pUVar3;
    }
    FInstancedPropertyBag::GetValueClass(this,&local_28,param_2);
    uVar4 = local_28.Variant._8_8_ & 0xff;
    if ((2 < uVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UClass *)(*pcVar1)();
      return pUVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,UClass*___ptr64,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4) == '\0') {
      if ((local_28.Variant.TypeIndex != '\0') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UClass *)(*pcVar1)();
        return pUVar3;
      }
      return (UClass *)
             CONCAT71(local_28.Variant._padding_._1_7_,
                      (EPropertyBagResult)local_28.Variant._padding_);
    }
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UClass *)(*pcVar1)();
      return pUVar3;
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_28.Variant._padding_,param_2);
  }
  return (UClass *)0x0;
}

// GetDoubleParameter @ 149d4f300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __cdecl
UPCGGraphParametersHelpers::GetDoubleParameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FInstancedPropertyBag *this;
  ulonglong uVar3;
  double dVar4;
  undefined1 auStack_48 [32];
  TValueOrError<double,EPropertyBagResult> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != (UPCGGraphInterface *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
    FInstancedPropertyBag::GetValueDouble(this,&local_28,param_2);
    uVar3 = local_28.Variant._8_8_ & 0xff;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') {
      if ((local_28.Variant.TypeIndex != '\0') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        dVar4 = (double)(*pcVar1)();
        return dVar4;
      }
      return (double)CONCAT71(local_28.Variant._padding_._1_7_,
                              (EPropertyBagResult)local_28.Variant._padding_);
    }
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      dVar4 = (double)(*pcVar1)();
      return dVar4;
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_28.Variant._padding_,param_2);
  }
  return 0.0;
}

// GetEnumParameter @ 149d4fdb0

uchar __cdecl
UPCGGraphParametersHelpers::GetEnumParameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  FInstancedPropertyBag *this;
  ulonglong uVar4;
  EPropertyBagResult EStackX_8;
  byte bStackX_9;
  
  if (param_1 != (UPCGGraphInterface *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FInstancedPropertyBag::GetValueByte(this,(FName)&EStackX_8);
    uVar4 = (ulonglong)bStackX_9;
    if ((2 < bStackX_9) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4) == '\0') {
      if ((bStackX_9 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      return EStackX_8;
    }
    if ((bStackX_9 != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    PCGGraphParametersHelpersPrivate::OnException(EStackX_8,param_2);
  }
  return '\0';
}

// GetFloatParameter @ 149d4fe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __cdecl
UPCGGraphParametersHelpers::GetFloatParameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FInstancedPropertyBag *this;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_38 [32];
  float local_18;
  byte local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  if (param_1 != (UPCGGraphInterface *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    FInstancedPropertyBag::GetValueFloat(this,(FName)&local_18);
    uVar3 = (ulonglong)local_14;
    if ((2 < local_14) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,__int64,TValueOrError<__int64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3 + 4) == '\0') {
      if ((local_14 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        fVar4 = (float)(*pcVar1)();
        return fVar4;
      }
      return local_18;
    }
    if ((local_14 != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    PCGGraphParametersHelpersPrivate::OnException(local_18._0_1_,param_2);
  }
  return 0.0;
}

// GetInt32Parameter @ 149d50650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl UPCGGraphParametersHelpers::GetInt32Parameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInstancedPropertyBag *this;
  ulonglong uVar4;
  undefined1 auStack_38 [32];
  int local_18;
  byte local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_38;
  if (param_1 != (UPCGGraphInterface *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    FInstancedPropertyBag::GetValueInt32(this,(FName)&local_18);
    uVar4 = (ulonglong)local_14;
    if ((2 < local_14) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,bool,TValueOrError<bool,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4 + 4) == '\0') {
      if ((local_14 != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      return local_18;
    }
    if ((local_14 != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    PCGGraphParametersHelpersPrivate::OnException((EPropertyBagResult)local_18,param_2);
  }
  return 0;
}

// GetInt64Parameter @ 149d507a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long64 __cdecl
UPCGGraphParametersHelpers::GetInt64Parameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FInstancedPropertyBag *this;
  long64 lVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  TValueOrError<__int64,EPropertyBagResult> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != (UPCGGraphInterface *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
    FInstancedPropertyBag::GetValueInt64(this,&local_28,param_2);
    uVar4 = local_28.Variant._8_8_ & 0xff;
    if ((2 < uVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,__int64,TValueOrError<__int64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar4) == '\0') {
      if ((local_28.Variant.TypeIndex != '\0') &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        lVar3 = (*pcVar1)();
        return lVar3;
      }
      return CONCAT71(local_28.Variant._padding_._1_7_,
                      (EPropertyBagResult)local_28.Variant._padding_);
    }
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      lVar3 = (*pcVar1)();
      return lVar3;
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_28.Variant._padding_,param_2);
  }
  return 0;
}

// GetNameParameter @ 149d51780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __cdecl
UPCGGraphParametersHelpers::GetNameParameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FInstancedPropertyBag *this;
  FName FVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  FName in_R8;
  undefined1 auStack_48 [32];
  TValueOrError<FName,EPropertyBagResult> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_2 == (FName)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_2 + 0x2c0))(param_2);
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
    FInstancedPropertyBag::GetValueName(this,&local_28,in_R8);
    uVar5 = (ulonglong)local_28.Variant.TypeIndex;
    if ((2 < local_28.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      FVar3 = (FName)(*pcVar1)();
      return FVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) == '\0') {
      if ((local_28.Variant.TypeIndex != 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
      uVar4 = CONCAT71(local_28.Variant._1_7_,local_28.Variant._0_1_);
    }
    else {
      if ((local_28.Variant.TypeIndex != 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
      PCGGraphParametersHelpersPrivate::OnException(local_28.Variant._0_1_,in_R8);
      uVar4 = 0;
    }
    *(undefined8 *)param_1 = uVar4;
  }
  return (FName)param_1;
}

// GetObjectParameter @ 149d519e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __cdecl
UPCGGraphParametersHelpers::GetObjectParameter(UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FInstancedPropertyBag *this;
  UObject *pUVar3;
  UClass *pUVar4;
  char cVar5;
  EPropertyBagResult EVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  EPropertyBagResult EStack_38;
  undefined7 uStack_37;
  TValueOrError<UObject_*,EPropertyBagResult> TStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 == (UPCGGraphInterface *)0x0) {
    return (UObject *)0x0;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2c0))();
  if ((this == (FInstancedPropertyBag *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  FInstancedPropertyBag::GetValueObject(this,&TStack_28,param_2,pUVar4);
  uVar7 = (ulonglong)TStack_28.Variant.TypeIndex;
  if ((2 < uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    if ((TStack_28.Variant.TypeIndex != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  else {
    if ((TStack_28.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if (CONCAT71(TStack_28.Variant._padding_._1_7_,(EPropertyBagResult)TStack_28.Variant._padding_)
        == 0) {
      pUVar3 = (UObject *)0x0;
      bVar2 = false;
      EVar6 = Success;
      cVar5 = `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
              ::__l2::bIsSameType._4_1_;
      goto LAB_149d30ab4;
    }
    if ((TStack_28.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = (UObject *)
             CONCAT71(TStack_28.Variant._padding_._1_7_,
                      (EPropertyBagResult)TStack_28.Variant._padding_);
    if (pUVar3 != (UObject *)0x0) {
      bVar2 = false;
      EVar6 = (EPropertyBagResult)TStack_28.Variant._padding_;
      cVar5 = `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
              ::__l2::bIsSameType._4_1_;
      goto LAB_149d30ab4;
    }
    TStack_28.Variant._padding_._0_1_ = TypeMismatch;
  }
  bVar2 = true;
  pUVar3 = (UObject *)CONCAT71(uStack_37,(EPropertyBagResult)TStack_28.Variant._padding_);
  EVar6 = (EPropertyBagResult)TStack_28.Variant._padding_;
  cVar5 = `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType._5_1_;
  EStack_38 = (EPropertyBagResult)TStack_28.Variant._padding_;
LAB_149d30ab4:
  if (cVar5 == '\0') {
    if ((bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  else {
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    PCGGraphParametersHelpersPrivate::OnException(EVar6,param_2);
    pUVar3 = (UObject *)0x0;
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 149d54420

UClass * __cdecl UPCGGraphParametersHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGraphParametersHelpers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGraphParametersHelpers",
               &Z_Registration_Info_UClass_UPCGGraphParametersHelpers.InnerSingleton,
               StaticRegisterNativesUPCGGraphParametersHelpers,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGGraphParametersHelpers>,
               InternalVTableHelperCtorCaller<UPCGGraphParametersHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGraphParametersHelpers.InnerSingleton;
}

// GetQuaternionParameter @ 149d54d80

TQuat<double> * __cdecl
UPCGGraphParametersHelpers::GetQuaternionParameter
          (TQuat<double> *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  bool bVar6;
  TQuat<double> *pTVar7;
  double *pdVar8;
  char cVar9;
  TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> local_58;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28 [4];
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
    return __return_storage_ptr__;
  }
  UPCGGraphInterface::GetGraphParameter<UE::Math::TQuat<double>_*>(param_1,&local_58,param_2);
  cVar9 = local_58.Variant.TypeIndex;
  if (2 < (local_58.Variant._8_8_ & 0xff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TQuat<double> *)(*pcVar1)();
      return pTVar7;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TQuat<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TQuat<double>*___ptr64,TValueOrError<struct_UE::Math::TQuat<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TQuat<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_58.Variant._8_8_ & 0xff)) == '\0') {
    if (cVar9 != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TQuat<double> *)(*pcVar1)();
        return pTVar7;
      }
    }
    pdVar5 = (double *)
             CONCAT71(local_58.Variant._padding_._1_7_,
                      (EPropertyBagResult)local_58.Variant._padding_);
    if (pdVar5 == (double *)0x0) {
      pdVar8 = local_28;
      local_28[0] = 0.0;
      local_28[1] = 0.0;
      local_28[2] = 0.0;
      local_28[3] = 0.0;
    }
    else {
      if (cVar9 != '\0') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TQuat<double> *)(*pcVar1)();
          return pTVar7;
        }
      }
      pdVar8 = &local_48;
      local_48 = *pdVar5;
      dStack_40 = pdVar5[1];
      local_38 = pdVar5[2];
      dStack_30 = pdVar5[3];
    }
    dVar2 = pdVar8[1];
    dVar3 = pdVar8[2];
    dVar4 = pdVar8[3];
    __return_storage_ptr__->X = *pdVar8;
    __return_storage_ptr__->Y = dVar2;
    __return_storage_ptr__->Z = dVar3;
    __return_storage_ptr__->W = dVar4;
  }
  else {
    if (cVar9 != '\x01') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TQuat<double> *)(*pcVar1)();
        return pTVar7;
      }
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_58.Variant._padding_,param_2);
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
  }
  return __return_storage_ptr__;
}

// GetRotatorParameter @ 149d554b0

TRotator<double> * __cdecl
UPCGGraphParametersHelpers::GetRotatorParameter
          (TRotator<double> *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double *pdVar4;
  bool bVar5;
  TRotator<double> *pTVar6;
  double *pdVar7;
  char cVar8;
  TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> local_48;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20 [3];
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    __return_storage_ptr__->Pitch = 0.0;
    __return_storage_ptr__->Yaw = 0.0;
    __return_storage_ptr__->Roll = 0.0;
    return __return_storage_ptr__;
  }
  UPCGGraphInterface::GetGraphParameter<UE::Math::TRotator<double>_*>(param_1,&local_48,param_2);
  cVar8 = local_48.Variant.TypeIndex;
  if (2 < (local_48.Variant._8_8_ & 0xff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TRotator<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TRotator<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TRotator<double>*___ptr64,TValueOrError<struct_UE::Math::TRotator<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TRotator<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_48.Variant._8_8_ & 0xff)) == '\0') {
    if (cVar8 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TRotator<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    pdVar4 = (double *)
             CONCAT71(local_48.Variant._padding_._1_7_,
                      (EPropertyBagResult)local_48.Variant._padding_);
    if (pdVar4 == (double *)0x0) {
      local_20[2] = 0.0;
      pdVar7 = local_20;
      local_20[0] = 0.0;
      local_20[1] = 0.0;
    }
    else {
      if (cVar8 != '\0') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TRotator<double> *)(*pcVar2)();
          return pTVar6;
        }
      }
      pdVar7 = &local_38;
      local_38 = *pdVar4;
      dStack_30 = pdVar4[1];
      local_28 = pdVar4[2];
    }
    dVar3 = pdVar7[1];
    dVar1 = pdVar7[2];
    __return_storage_ptr__->Pitch = *pdVar7;
    __return_storage_ptr__->Yaw = dVar3;
    __return_storage_ptr__->Roll = dVar1;
  }
  else {
    if (cVar8 != '\x01') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TRotator<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_48.Variant._padding_,param_2);
    __return_storage_ptr__->Pitch = 0.0;
    __return_storage_ptr__->Yaw = 0.0;
    __return_storage_ptr__->Roll = 0.0;
  }
  return __return_storage_ptr__;
}

// GetSoftClassParameter @ 149d557e0

TSoftClassPtr<UObject> * __cdecl
UPCGGraphParametersHelpers::GetSoftClassParameter
          (TSoftClassPtr<UObject> *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  PCGGraphParametersHelpersPrivate::
  ValidateAndReturnResult<TSoftClassPtr<UObject>,TSoftClassPtr<UObject>_>
            (__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetSoftObjectParameter @ 149d55800

TSoftObjectPtr<UObject> * __cdecl
UPCGGraphParametersHelpers::GetSoftObjectParameter
          (TSoftObjectPtr<UObject> *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2
          )

{
  PCGGraphParametersHelpersPrivate::
  ValidateAndReturnResult<TSoftObjectPtr<UObject>,TSoftObjectPtr<UObject>_>
            (__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetSoftObjectPathParameter @ 149d55820

FSoftObjectPath * __cdecl
UPCGGraphParametersHelpers::GetSoftObjectPathParameter
          (FSoftObjectPath *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  PCGGraphParametersHelpersPrivate::ValidateAndReturnResult<FSoftObjectPath,FSoftObjectPath>
            (__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetStringParameter @ 149d55910

FString * __cdecl
UPCGGraphParametersHelpers::GetStringParameter
          (FString *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  PCGGraphParametersHelpersPrivate::ValidateAndReturnResult<FString,FString>
            (__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetTransformParameter @ 149d55b50

TTransform<double> * __cdecl
UPCGGraphParametersHelpers::GetTransformParameter
          (TTransform<double> *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  PCGGraphParametersHelpersPrivate::
  ValidateAndReturnResult<UE::Math::TTransform<double>,UE::Math::TTransform<double>_*>
            (__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetVector2DParameter @ 149d56100

TVector2<double> * __cdecl
UPCGGraphParametersHelpers::GetVector2DParameter
          (TVector2<double> *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    return __return_storage_ptr__;
  }
  UPCGGraphInterface::GetGraphParameter<UE::Math::TVector2<double>_*>(param_1,&local_38,param_2);
  cVar6 = local_38.Variant.TypeIndex;
  if (2 < (local_38.Variant._8_8_ & 0xff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TVector4<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TVector4<double>*___ptr64,TValueOrError<struct_UE::Math::TVector4<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TVector4<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_38.Variant._8_8_ & 0xff) + 4) == '\0') {
    if (cVar6 != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector2<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    puVar2 = (undefined8 *)
             CONCAT71(local_38.Variant._padding_._1_7_,
                      (EPropertyBagResult)local_38.Variant._padding_);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = &local_18;
      local_18 = 0;
      uStack_10 = 0;
    }
    else {
      if (cVar6 != '\0') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TVector2<double> *)(*pcVar1)();
          return pTVar4;
        }
      }
      puVar5 = &local_28;
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
    }
    uVar7 = *(undefined4 *)puVar5;
    uVar8 = *(undefined4 *)((longlong)puVar5 + 4);
    uVar9 = *(undefined4 *)(puVar5 + 1);
    uVar10 = *(undefined4 *)((longlong)puVar5 + 0xc);
  }
  else {
    if (cVar6 != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector2<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_38.Variant._padding_,param_2);
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar7;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar8;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar9;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar10;
  return __return_storage_ptr__;
}

// GetVector4Parameter @ 149d56280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector4<double> * __cdecl
UPCGGraphParametersHelpers::GetVector4Parameter
          (TVector4<double> *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  bool bVar6;
  TVector4<double> *pTVar7;
  double *pdVar8;
  char cVar9;
  TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> local_58;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28 [3];
  undefined8 uStack_10;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  UPCGGraphInterface::GetGraphParameter<UE::Math::TVector4<double>_*>(param_1,&local_58,param_2);
  cVar9 = local_58.Variant.TypeIndex;
  if (2 < (local_58.Variant._8_8_ & 0xff)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TVector4<double> *)(*pcVar1)();
      return pTVar7;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TVector4<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TVector4<double>*___ptr64,TValueOrError<struct_UE::Math::TVector4<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TVector4<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_58.Variant._8_8_ & 0xff)) == '\0') {
    if (cVar9 != '\0') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TVector4<double> *)(*pcVar1)();
        return pTVar7;
      }
    }
    pdVar5 = (double *)
             CONCAT71(local_58.Variant._padding_._1_7_,
                      (EPropertyBagResult)local_58.Variant._padding_);
    if (pdVar5 == (double *)0x0) {
      pdVar8 = local_28;
      local_28[2] = (double)___xmm_3ff00000000000000000000000000000;
      uStack_10 = _UNK_15061cbc8;
      local_28[0] = 0.0;
      local_28[1] = 0.0;
    }
    else {
      if (cVar9 != '\0') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TVector4<double> *)(*pcVar1)();
          return pTVar7;
        }
      }
      pdVar8 = &local_48;
      local_48 = *pdVar5;
      dStack_40 = pdVar5[1];
      local_38 = pdVar5[2];
      dStack_30 = pdVar5[3];
    }
    dVar2 = pdVar8[1];
    dVar3 = pdVar8[2];
    dVar4 = pdVar8[3];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar4;
  }
  else {
    if (cVar9 != '\x01') {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TVector4<double> *)(*pcVar1)();
        return pTVar7;
      }
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_58.Variant._padding_,param_2);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
  }
  return __return_storage_ptr__;
}

// GetVectorParameter @ 149d56450

TVector<double> * __cdecl
UPCGGraphParametersHelpers::GetVectorParameter
          (TVector<double> *__return_storage_ptr__,UPCGGraphInterface *param_1,FName param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double *pdVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  double *pdVar7;
  char cVar8;
  TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> local_48;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20 [3];
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  UPCGGraphInterface::GetGraphParameter<UE::Math::TVector<double>_*>(param_1,&local_48,param_2);
  cVar8 = local_48.Variant.TypeIndex;
  if (2 < (local_48.Variant._8_8_ & 0xff)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TVector<double> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult>::FWrapErrorType,TSoftClassPtr<UObject>,TValueOrError<class_TSoftClassPtr<class_UObject>,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_TSoftClassPtr<class_UObject>,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_48.Variant._8_8_ & 0xff) + 4) == '\0') {
    if (cVar8 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    pdVar4 = (double *)
             CONCAT71(local_48.Variant._padding_._1_7_,
                      (EPropertyBagResult)local_48.Variant._padding_);
    if (pdVar4 == (double *)0x0) {
      local_20[2] = 0.0;
      pdVar7 = local_20;
      local_20[0] = 0.0;
      local_20[1] = 0.0;
    }
    else {
      if (cVar8 != '\0') {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TVector<double> *)(*pcVar2)();
          return pTVar6;
        }
      }
      pdVar7 = &local_38;
      local_38 = *pdVar4;
      dStack_30 = pdVar4[1];
      local_28 = pdVar4[2];
    }
    dVar3 = pdVar7[1];
    dVar1 = pdVar7[2];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  else {
    if (cVar8 != '\x01') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_48.Variant._padding_,param_2);
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  return __return_storage_ptr__;
}

// IsOverridden @ 149d57d90

bool __cdecl UPCGGraphParametersHelpers::IsOverridden(UPCGGraphInterface *param_1,FName param_2)

{
  char cVar1;
  
  if (param_1 != (UPCGGraphInterface *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// SetBoolParameter @ 149d63040

void __cdecl
UPCGGraphParametersHelpers::SetBoolParameter(UPCGGraphInterface *param_1,FName param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueBool(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d630ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetByteParameter @ 149d63120

void __cdecl
UPCGGraphParametersHelpers::SetByteParameter
          (UPCGGraphInterface *param_1,FName param_2,uchar param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueByte(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d631ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetClassParameter @ 149d63200

void __cdecl
UPCGGraphParametersHelpers::SetClassParameter
          (UPCGGraphInterface *param_1,FName param_2,UClass *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueClass(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d632a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetDoubleParameter @ 149d632d0

void __cdecl
UPCGGraphParametersHelpers::SetDoubleParameter
          (UPCGGraphInterface *param_1,FName param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueDouble(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d63378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetEnumParameter @ 149d633a0

void __cdecl
UPCGGraphParametersHelpers::SetEnumParameter
          (UPCGGraphInterface *param_1,FName param_2,uchar param_3,UEnum *param_4)

{
  EPropertyBagResult EVar1;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  EVar1 = UPCGGraphInterface::SetGraphParameter(param_1,param_2,(ulonglong)param_3,param_4);
  if (EVar1 != Success) {
    PCGGraphParametersHelpersPrivate::OnException(EVar1,param_2);
    return;
  }
  return;
}

// SetFloatParameter @ 149d63480

void __cdecl
UPCGGraphParametersHelpers::SetFloatParameter
          (UPCGGraphInterface *param_1,FName param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueFloat(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d63528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetInt32Parameter @ 149d63570

void __cdecl
UPCGGraphParametersHelpers::SetInt32Parameter(UPCGGraphInterface *param_1,FName param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueInt32(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d63618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetInt64Parameter @ 149d63640

void __cdecl
UPCGGraphParametersHelpers::SetInt64Parameter
          (UPCGGraphInterface *param_1,FName param_2,long64 param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueInt64(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d636e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetNameParameter @ 149d637d0

void __cdecl
UPCGGraphParametersHelpers::SetNameParameter
          (UPCGGraphInterface *param_1,FName param_2,FName param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueName(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d63878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetObjectParameter @ 149d63ba0

void __cdecl
UPCGGraphParametersHelpers::SetObjectParameter
          (UPCGGraphInterface *param_1,FName param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueObject(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d63c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetQuaternionParameter @ 149d64250

void __cdecl
UPCGGraphParametersHelpers::SetQuaternionParameter
          (UPCGGraphInterface *param_1,FName param_2,TQuat<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  FConstStructView local_18;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.ScriptStruct = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar3 = FInstancedPropertyBag::SetValueStruct(this,param_2,&local_18);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d64309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetRotatorParameter @ 149d64330

void __cdecl
UPCGGraphParametersHelpers::SetRotatorParameter
          (UPCGGraphInterface *param_1,FName param_2,TRotator<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  FConstStructView local_18;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.ScriptStruct = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar3 = FInstancedPropertyBag::SetValueStruct(this,param_2,&local_18);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d643e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetSoftClassParameter @ 149d64480

void __cdecl
UPCGGraphParametersHelpers::SetSoftClassParameter
          (UPCGGraphInterface *param_1,FName param_2,TSoftClassPtr<UObject> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueSoftPath
                    (this,param_2,(FSoftObjectPath *)&(param_3->SoftObjectPtr).field_0x8);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d64529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetSoftObjectParameter @ 149d64550

void __cdecl
UPCGGraphParametersHelpers::SetSoftObjectParameter
          (UPCGGraphInterface *param_1,FName param_2,TSoftObjectPtr<UObject> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueSoftPath
                    (this,param_2,(FSoftObjectPath *)&(param_3->SoftObjectPtr).field_0x8);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d645f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetSoftObjectPathParameter @ 149d64620

void __cdecl
UPCGGraphParametersHelpers::SetSoftObjectPathParameter
          (UPCGGraphInterface *param_1,FName param_2,FSoftObjectPath *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EVar3 = FInstancedPropertyBag::SetValueSoftPath(this,param_2,param_3);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d646c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetStringParameter @ 149d64760

void __cdecl
UPCGGraphParametersHelpers::SetStringParameter
          (UPCGGraphInterface *param_1,FName param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EPropertyBagResult EVar4;
  FInstancedPropertyBag *this;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
    if (this == (FInstancedPropertyBag *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xd5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar4 = FInstancedPropertyBag::SetValueString(this,param_2,param_3);
    if (EVar4 == Success) {
      (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    }
    else {
      PCGGraphParametersHelpersPrivate::OnException(EVar4,param_2);
    }
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SetTransformParameter @ 149d64830

void __cdecl
UPCGGraphParametersHelpers::SetTransformParameter
          (UPCGGraphInterface *param_1,FName param_2,TTransform<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  FConstStructView local_18;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.ScriptStruct = TBaseStructure<UE::Math::TTransform<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar3 = FInstancedPropertyBag::SetValueStruct(this,param_2,&local_18);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d648e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetVector2DParameter @ 149d65400

void __cdecl
UPCGGraphParametersHelpers::SetVector2DParameter
          (UPCGGraphInterface *param_1,FName param_2,TVector2<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  FConstStructView local_18;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.ScriptStruct = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar3 = FInstancedPropertyBag::SetValueStruct(this,param_2,&local_18);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d654b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetVector4Parameter @ 149d654e0

void __cdecl
UPCGGraphParametersHelpers::SetVector4Parameter
          (UPCGGraphInterface *param_1,FName param_2,TVector4<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  FConstStructView local_18;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.ScriptStruct = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar3 = FInstancedPropertyBag::SetValueStruct(this,param_2,&local_18);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d65599. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// SetVectorParameter @ 149d655c0

void __cdecl
UPCGGraphParametersHelpers::SetVectorParameter
          (UPCGGraphInterface *param_1,FName param_2,TVector<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  FInstancedPropertyBag *this;
  FConstStructView local_18;
  
  if (param_1 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.ScriptStruct = TBaseStructure<UE::Math::TVector<double>_>::Get();
  local_18.StructMemory = (uchar *)param_3;
  EVar3 = FInstancedPropertyBag::SetValueStruct(this,param_2,&local_18);
  if (EVar3 == Success) {
                    /* WARNING: Could not recover jumptable at 0x000149d65679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,8,param_2);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar3,param_2);
  return;
}

// StaticRegisterNativesUPCGGraphParametersHelpers @ 149d66250

void __cdecl UPCGGraphParametersHelpers::StaticRegisterNativesUPCGGraphParametersHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x29;
  local_18.DataPtr = Z_Construct_UClass_UPCGGraphParametersHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBoolParameter @ 149d6a540

void __cdecl
UPCGGraphParametersHelpers::execGetBoolParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  ulonglong uVar5;
  EPropertyBagResult local_res10;
  byte local_res11;
  FName local_res18;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueBool(this,(FName)&local_res10);
    uVar5 = (ulonglong)local_res11;
    if ((2 < local_res11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,bool,TValueOrError<bool,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      if ((local_res11 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(EPropertyBagResult *)param_3 = local_res10;
      return;
    }
    if ((local_res11 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    PCGGraphParametersHelpersPrivate::OnException(local_res10,FVar3);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetByteParameter @ 149d6a700

void __cdecl
UPCGGraphParametersHelpers::execGetByteParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  ulonglong uVar5;
  EPropertyBagResult local_res10;
  byte local_res11;
  FName local_res18;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueByte(this,(FName)&local_res10);
    uVar5 = (ulonglong)local_res11;
    if ((2 < local_res11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      if ((local_res11 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(EPropertyBagResult *)param_3 = local_res10;
      return;
    }
    if ((local_res11 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    PCGGraphParametersHelpersPrivate::OnException(local_res10,FVar3);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetClassParameter @ 149d6a8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetClassParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  FName local_48;
  longlong *local_40;
  TValueOrError<UClass_*,EPropertyBagResult> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FVar3 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_40 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_40 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueClass(this,&local_38,FVar3);
    uVar5 = local_38.Variant._8_8_ & 0xff;
    if ((2 < uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,UClass*___ptr64,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      if ((local_38.Variant.TypeIndex != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(ulonglong *)param_3 =
           CONCAT71(local_38.Variant._padding_._1_7_,(EPropertyBagResult)local_38.Variant._padding_)
      ;
      return;
    }
    if ((local_38.Variant.TypeIndex != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_38.Variant._padding_,FVar3);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetDoubleParameter @ 149d6acc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetDoubleParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  FName local_38;
  longlong *local_30;
  TValueOrError<double,EPropertyBagResult> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FVar3 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_30 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_30 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueDouble(this,&local_28,FVar3);
    uVar5 = local_28.Variant._8_8_ & 0xff;
    if ((2 < uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      if ((local_28.Variant.TypeIndex != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = CONCAT71(local_28.Variant._padding_._1_7_,
                       (EPropertyBagResult)local_28.Variant._padding_);
      goto LAB_149d6ae82;
    }
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_28.Variant._padding_,FVar3);
  }
  uVar6 = 0;
LAB_149d6ae82:
  *(undefined8 *)param_3 = uVar6;
  return;
}

// execGetEnumParameter @ 149d6aeb0

void __cdecl
UPCGGraphParametersHelpers::execGetEnumParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  ulonglong uVar5;
  EPropertyBagResult local_res10;
  byte local_res11;
  FName local_res18;
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueByte(this,(FName)&local_res10);
    uVar5 = (ulonglong)local_res11;
    if ((2 < local_res11) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      if ((local_res11 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(EPropertyBagResult *)param_3 = local_res10;
      return;
    }
    if ((local_res11 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    PCGGraphParametersHelpersPrivate::OnException(local_res10,FVar3);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetFloatParameter @ 149d6b230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetFloatParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  FName local_28;
  longlong *local_20;
  undefined4 local_18;
  byte local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar3 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_20 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_20 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueFloat(this,(FName)&local_18);
    uVar5 = (ulonglong)local_14;
    if ((2 < local_14) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,__int64,TValueOrError<__int64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) == '\0') {
      if ((local_14 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_149d6b3f1;
    }
    if ((local_14 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    PCGGraphParametersHelpersPrivate::OnException((EPropertyBagResult)local_18,FVar3);
  }
  local_18 = 0;
LAB_149d6b3f1:
  *(undefined4 *)param_3 = local_18;
  return;
}

// execGetInt32Parameter @ 149d6b650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetInt32Parameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  FName local_38;
  longlong *local_30;
  undefined4 local_28;
  byte local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FVar3 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_30 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_30 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueInt32(this,(FName)&local_28);
    uVar5 = (ulonglong)local_24;
    if ((2 < local_24) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,bool,TValueOrError<bool,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) == '\0') {
      if ((local_24 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)param_3 = local_28;
      return;
    }
    if ((local_24 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    PCGGraphParametersHelpersPrivate::OnException((EPropertyBagResult)local_28,FVar3);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetInt64Parameter @ 149d6b830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetInt64Parameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  FName local_48;
  longlong *local_40;
  TValueOrError<__int64,EPropertyBagResult> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_40 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FVar3 = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_40 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_40 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueInt64(this,&local_38,FVar3);
    uVar5 = local_38.Variant._8_8_ & 0xff;
    if ((2 < uVar5) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,__int64,TValueOrError<__int64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      if ((local_38.Variant.TypeIndex != '\0') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(ulonglong *)param_3 =
           CONCAT71(local_38.Variant._padding_._1_7_,(EPropertyBagResult)local_38.Variant._padding_)
      ;
      return;
    }
    if ((local_38.Variant.TypeIndex != '\x01') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    PCGGraphParametersHelpersPrivate::OnException
              ((EPropertyBagResult)local_38.Variant._padding_,FVar3);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetNameParameter @ 149d6c240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetNameParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  FName local_40;
  longlong *local_38;
  TValueOrError<FName,EPropertyBagResult> local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  uVar5 = 0;
  local_38 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  FVar3 = local_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38 != (longlong *)0x0) {
    this = (FInstancedPropertyBag *)(**(code **)(*local_38 + 0x2c0))();
    if ((this == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FInstancedPropertyBag::GetValueName(this,&local_30,FVar3);
    uVar6 = (ulonglong)local_30.Variant.TypeIndex;
    if ((2 < local_30.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6 + 4) == '\0') {
      if ((local_30.Variant.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = CONCAT71(local_30.Variant._1_7_,local_30.Variant._0_1_);
    }
    else {
      if ((local_30.Variant.TypeIndex != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      PCGGraphParametersHelpersPrivate::OnException(local_30.Variant._0_1_,FVar3);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execGetObjectParameter @ 149d6c430

void __cdecl
UPCGGraphParametersHelpers::execGetObjectParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FName local_res10;
  UPCGGraphInterface *local_res18;
  
  local_res18 = (UPCGGraphInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = PCGGraphParametersHelpersPrivate::ValidateAndReturnResult<UObject_*,UObject_*>
                     (local_res18,local_res10);
  *(UObject **)param_3 = pUVar2;
  return;
}

// execGetQuaternionParameter @ 149d6c710

void __cdecl
UPCGGraphParametersHelpers::execGetQuaternionParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  FName FVar7;
  bool bVar8;
  char cVar9;
  FName local_res10;
  UPCGGraphInterface *local_res18 [2];
  TValueOrError<UE::Math::TQuat<double>_*,EPropertyBagResult> local_28;
  
  local_res18[0] = (UPCGGraphInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar7 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UPCGGraphInterface *)0x0) {
    UPCGGraphInterface::GetGraphParameter<UE::Math::TQuat<double>_*>
              (local_res18[0],&local_28,local_res10);
    cVar9 = local_28.Variant.TypeIndex;
    if (2 < (local_28.Variant._8_8_ & 0xff)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TQuat<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TQuat<double>*___ptr64,TValueOrError<struct_UE::Math::TQuat<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TQuat<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (local_28.Variant._8_8_ & 0xff)) == '\0') {
      if (cVar9 != '\0') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar6 = (undefined8 *)
               CONCAT71(local_28.Variant._padding_._1_7_,
                        (EPropertyBagResult)local_28.Variant._padding_);
      if (puVar6 != (undefined8 *)0x0) {
        if (cVar9 != '\0') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L"");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        *(undefined8 *)param_3 = *puVar6;
        *(undefined8 *)((longlong)param_3 + 8) = uVar3;
        *(undefined8 *)((longlong)param_3 + 0x10) = uVar4;
        *(undefined8 *)((longlong)param_3 + 0x18) = uVar5;
        return;
      }
    }
    else {
      if (cVar9 != '\x01') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      PCGGraphParametersHelpersPrivate::OnException
                ((EPropertyBagResult)local_28.Variant._padding_,FVar7);
    }
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  return;
}

// execGetRotatorParameter @ 149d6cfd0

void __cdecl
UPCGGraphParametersHelpers::execGetRotatorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  FName FVar6;
  bool bVar7;
  char cVar8;
  FName local_res10;
  UPCGGraphInterface *local_res18 [2];
  TValueOrError<UE::Math::TRotator<double>_*,EPropertyBagResult> local_58 [4];
  
  local_res18[0] = (UPCGGraphInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UPCGGraphInterface *)0x0) {
    UPCGGraphInterface::GetGraphParameter<UE::Math::TRotator<double>_*>
              (local_res18[0],local_58,local_res10);
    cVar8 = (char)local_58[0].Variant._8_8_;
    if ((2 < (local_58[0].Variant._8_8_ & 0xff)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TRotator<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TRotator<double>*___ptr64,TValueOrError<struct_UE::Math::TRotator<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TRotator<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (local_58[0].Variant._8_8_ & 0xff)) == '\0') {
      if ((cVar8 != '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar5 = (undefined8 *)
               CONCAT71(local_58[0].Variant._padding_._1_7_,
                        (EPropertyBagResult)local_58[0].Variant._padding_);
      if (puVar5 != (undefined8 *)0x0) {
        if ((cVar8 != '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar4 = puVar5[1];
        uVar1 = puVar5[2];
        *(undefined8 *)param_3 = *puVar5;
        *(undefined8 *)((longlong)param_3 + 8) = uVar4;
        *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
        return;
      }
    }
    else {
      if ((cVar8 != '\x01') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      PCGGraphParametersHelpersPrivate::OnException
                ((EPropertyBagResult)local_58[0].Variant._padding_,FVar6);
    }
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  return;
}

// execGetSoftClassParameter @ 149d6d410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetSoftClassParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *pFVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  FName local_98;
  longlong *local_90;
  TPersistentObjectPtr<FSoftObjectPath> local_88;
  undefined1 local_60 [40];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FVar3 = local_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_90 == (longlong *)0x0) {
    local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ObjectID.SubPathString.Data.ArrayNum = 0;
    local_88.ObjectID.SubPathString.Data.ArrayMax = 0;
    local_88.WeakPtr.ObjectIndex = 0;
    local_88.WeakPtr.ObjectSerialNumber = 0;
    local_88.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_88.ObjectID.AssetPath.AssetName.Number = 0;
    local_88.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_88.ObjectID.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_88.ObjectID.SubPathString,0);
  }
  else {
    pFVar5 = (FInstancedPropertyBag *)(**(code **)(*local_90 + 0x2c0))();
    if ((pFVar5 == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FPCGGraphParameterExtension::GetGraphParameter<TSoftClassPtr<UObject>_>
              ((TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult> *)local_60,pFVar5,FVar3);
    uVar6 = (ulonglong)local_38;
    if ((2 < uVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult>::FWrapErrorType,TSoftClassPtr<UObject>,TValueOrError<class_TSoftClassPtr<class_UObject>,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_TSoftClassPtr<class_UObject>,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6) == '\0') {
      if ((local_38 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_88.WeakPtr._1_7_ = local_60._1_7_;
      local_88.WeakPtr.ObjectIndex._0_1_ = local_60[0];
      FSoftObjectPath::FSoftObjectPath(&local_88.ObjectID,(FSoftObjectPath *)(local_60 + 8));
    }
    else {
      if ((local_38 != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      PCGGraphParametersHelpersPrivate::OnException(local_60[0],FVar3);
      local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ObjectID.SubPathString.Data.ArrayNum = 0;
      local_88.ObjectID.SubPathString.Data.ArrayMax = 0;
      local_88.WeakPtr.ObjectIndex = 0;
      local_88.WeakPtr.ObjectSerialNumber = 0;
      local_88.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_88.ObjectID.AssetPath.AssetName.Number = 0;
      local_88.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_88.ObjectID.AssetPath.PackageName.Number = 0;
      FUtf8String::Reset(&local_88.ObjectID.SubPathString,0);
    }
    if ((2 < local_38) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSoftClassPtr<UObject>,TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_TSoftClassPtr<class_UObject>,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38])(local_60);
  }
  TPersistentObjectPtr<FSoftObjectPath>::operator=(param_3,&local_88);
  if (local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSoftObjectParameter @ 149d6d6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetSoftObjectParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *pFVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  FName local_98;
  longlong *local_90;
  TPersistentObjectPtr<FSoftObjectPath> local_88;
  undefined1 local_60 [40];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FVar3 = local_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_90 == (longlong *)0x0) {
    local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ObjectID.SubPathString.Data.ArrayNum = 0;
    local_88.ObjectID.SubPathString.Data.ArrayMax = 0;
    local_88.WeakPtr.ObjectIndex = 0;
    local_88.WeakPtr.ObjectSerialNumber = 0;
    local_88.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_88.ObjectID.AssetPath.AssetName.Number = 0;
    local_88.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_88.ObjectID.AssetPath.PackageName.Number = 0;
    FUtf8String::Reset(&local_88.ObjectID.SubPathString,0);
  }
  else {
    pFVar5 = (FInstancedPropertyBag *)(**(code **)(*local_90 + 0x2c0))();
    if ((pFVar5 == (FInstancedPropertyBag *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                           ,0xc3,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FPCGGraphParameterExtension::GetGraphParameter<TSoftObjectPtr<UObject>_>
              ((TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult> *)local_60,pFVar5,FVar3);
    uVar6 = (ulonglong)local_38;
    if ((2 < uVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,UClass*___ptr64,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6 + 4) == '\0') {
      if ((local_38 != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_88.WeakPtr._1_7_ = local_60._1_7_;
      local_88.WeakPtr.ObjectIndex._0_1_ = local_60[0];
      FSoftObjectPath::FSoftObjectPath(&local_88.ObjectID,(FSoftObjectPath *)(local_60 + 8));
    }
    else {
      if ((local_38 != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      PCGGraphParametersHelpersPrivate::OnException(local_60[0],FVar3);
      local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ObjectID.SubPathString.Data.ArrayNum = 0;
      local_88.ObjectID.SubPathString.Data.ArrayMax = 0;
      local_88.WeakPtr.ObjectIndex = 0;
      local_88.WeakPtr.ObjectSerialNumber = 0;
      local_88.ObjectID.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_88.ObjectID.AssetPath.AssetName.Number = 0;
      local_88.ObjectID.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_88.ObjectID.AssetPath.PackageName.Number = 0;
      FUtf8String::Reset(&local_88.ObjectID.SubPathString,0);
    }
    if ((2 < local_38) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSoftObjectPtr<UObject>,TValueOrError<TSoftObjectPtr<UObject>,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_TSoftObjectPtr<class_UObject>,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_38])(local_60);
  }
  TPersistentObjectPtr<FSoftObjectPath>::operator=(param_3,&local_88);
  if (local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_88.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSoftObjectPathParameter @ 149d6d990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetSoftObjectPathParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  ForAnyElementType *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  FInstancedPropertyBag *this;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStackY_c8 [32];
  undefined8 local_88;
  longlong lStack_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  FName local_68;
  longlong *local_60;
  TValueOrError<FSoftObjectPath,EPropertyBagResult> local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_60 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FVar4 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_60 == (longlong *)0x0) {
    local_88 = 0;
    local_78.Data = (FScriptContainerElement *)0x0;
    lStack_80 = 0;
    local_70 = 0;
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*local_60 + 0x2c0))();
    if (this == (FInstancedPropertyBag *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FInstancedPropertyBag::GetValueSoftPath(this,&local_58,FVar4);
    uVar7 = (ulonglong)local_58.Variant.TypeIndex;
    if (2 < uVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar7 + 4) == '\0') {
      if (local_58.Variant.TypeIndex != 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_78.Data = (FScriptContainerElement *)0x0;
      iVar6 = (int)local_58.Variant._padding_;
      local_70 = CONCAT44(local_70._4_4_,iVar6);
      local_88 = CONCAT71(local_58.Variant._padding_._1_7_,
                          (EPropertyBagResult)local_58.Variant._padding_);
      lStack_80 = local_58.Variant._padding_;
      if (iVar6 == 0) {
        local_70 = local_58.Variant._padding_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar6,0,&local_78,iVar6,(int *)((longlong)&local_70 + 4));
        memcpy(local_78.Data,(void *)local_58.Variant._padding_,(longlong)iVar6);
      }
    }
    else {
      if (local_58.Variant.TypeIndex != 1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      PCGGraphParametersHelpersPrivate::OnException
                ((EPropertyBagResult)local_58.Variant._padding_,FVar4);
      local_88 = 0;
      lStack_80 = 0;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
    }
    if (2 < local_58.Variant.TypeIndex) {
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
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSoftObjectPath,TValueOrError<FSoftObjectPath,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FSoftObjectPath,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.Variant.TypeIndex])(&local_58);
  }
  pFVar1 = (ForAnyElementType *)((longlong)param_3 + 0x10);
  *(undefined8 *)param_3 = local_88;
  *(longlong *)((longlong)param_3 + 8) = lStack_80;
  if (pFVar1 != &local_78) {
    if (pFVar1->Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
    pFVar1->Data = local_78.Data;
    *(undefined4 *)((longlong)param_3 + 0x18) = (undefined4)local_70;
    local_78.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0x1c) = local_70._4_4_;
    local_70 = 0;
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// execGetStringParameter @ 149d6dcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execGetStringParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FInstancedPropertyBag *this;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStackY_a8 [32];
  ForAnyElementType local_68;
  undefined8 local_60;
  FName local_58;
  longlong *local_50;
  TValueOrError<FString,EPropertyBagResult> local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_50 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FVar3 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_50 == (longlong *)0x0) {
    local_60 = 0;
    local_68.Data = (FScriptContainerElement *)0x0;
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*local_50 + 0x2c0))();
    if (this == (FInstancedPropertyBag *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xc3,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FInstancedPropertyBag::GetValueString(this,&local_48,FVar3);
    uVar6 = (ulonglong)local_48.Variant.TypeIndex;
    if (2 < uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6) == '\0') {
      if (local_48.Variant.TypeIndex != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_68.Data = (FScriptContainerElement *)0x0;
      iVar5 = (int)local_48.Variant._padding_;
      local_60 = CONCAT44(local_60._4_4_,iVar5);
      if (iVar5 == 0) {
        local_60 = local_48.Variant._padding_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,&local_68,iVar5,(int *)((longlong)&local_60 + 4));
        memcpy(local_68.Data,
               (void *)CONCAT71(local_48.Variant._padding_._1_7_,
                                (EPropertyBagResult)local_48.Variant._padding_),(longlong)iVar5 * 2)
        ;
      }
    }
    else {
      if (local_48.Variant.TypeIndex != 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      PCGGraphParametersHelpersPrivate::OnException
                ((EPropertyBagResult)local_48.Variant._padding_,FVar3);
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = 0;
    }
    if (2 < local_48.Variant.TypeIndex) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.Variant.TypeIndex])(&local_48);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_60;
    local_68.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_60._4_4_;
    local_60 = 0;
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetTransformParameter @ 149d6e460

void __cdecl
UPCGGraphParametersHelpers::execGetTransformParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double *pdVar21;
  FName FVar22;
  bool bVar23;
  char cVar24;
  FName local_38;
  UPCGGraphInterface *local_30;
  TValueOrError<UE::Math::TTransform<double>_*,EPropertyBagResult> local_28;
  
  local_30 = (UPCGGraphInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FVar22 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_30 != (UPCGGraphInterface *)0x0) {
    UPCGGraphInterface::GetGraphParameter<UE::Math::TTransform<double>_*>
              (local_30,&local_28,local_38);
    cVar24 = local_28.Variant.TypeIndex;
    if (2 < (local_28.Variant._8_8_ & 0xff)) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L"");
      if (bVar23) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TRotator<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TRotator<double>*___ptr64,TValueOrError<struct_UE::Math::TRotator<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TRotator<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (local_28.Variant._8_8_ & 0xff) + 4) == '\0') {
      if (cVar24 != '\0') {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L"");
        if (bVar23) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pdVar21 = (double *)
                CONCAT71(local_28.Variant._padding_._1_7_,
                         (EPropertyBagResult)local_28.Variant._padding_);
      if (pdVar21 != (double *)0x0) {
        if (cVar24 != '\0') {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index == TypeIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                              ,0x97,L"");
          if (bVar23) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        dVar10 = *pdVar21;
        dVar11 = pdVar21[1];
        dVar13 = pdVar21[2];
        dVar14 = pdVar21[3];
        dVar16 = pdVar21[4];
        dVar17 = pdVar21[5];
        dVar19 = pdVar21[6];
        dVar20 = pdVar21[7];
        dVar7 = pdVar21[8];
        dVar8 = pdVar21[9];
        dVar4 = pdVar21[10];
        dVar5 = pdVar21[0xb];
        goto LAB_149d6e5de;
      }
    }
    else {
      if (cVar24 != '\x01') {
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L"");
        if (bVar23) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      PCGGraphParametersHelpersPrivate::OnException
                ((EPropertyBagResult)local_28.Variant._padding_,FVar22);
    }
  }
  dVar10 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dVar11 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  dVar13 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dVar14 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  dVar16 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dVar17 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  dVar19 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dVar20 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  dVar7 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dVar8 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  dVar4 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dVar5 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
LAB_149d6e5de:
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar9;
  auVar12._8_4_ = SUB84(dVar14,0);
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x10) = auVar12;
  auVar15._8_4_ = SUB84(dVar17,0);
  auVar15._0_8_ = dVar16;
  auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar15;
  auVar18._8_4_ = SUB84(dVar20,0);
  auVar18._0_8_ = dVar19;
  auVar18._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x30) = auVar18;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x40) = auVar6;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x50) = auVar3;
  return;
}

// execGetVector2DParameter @ 149d6e880

void __cdecl
UPCGGraphParametersHelpers::execGetVector2DParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FName FVar5;
  bool bVar6;
  char cVar7;
  FName local_res10;
  UPCGGraphInterface *local_res18 [2];
  TValueOrError<UE::Math::TVector2<double>_*,EPropertyBagResult> local_28;
  
  local_res18[0] = (UPCGGraphInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UPCGGraphInterface *)0x0) {
    UPCGGraphInterface::GetGraphParameter<UE::Math::TVector2<double>_*>
              (local_res18[0],&local_28,local_res10);
    cVar7 = local_28.Variant.TypeIndex;
    if (2 < (local_28.Variant._8_8_ & 0xff)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TVector4<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TVector4<double>*___ptr64,TValueOrError<struct_UE::Math::TVector4<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TVector4<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (local_28.Variant._8_8_ & 0xff) + 4) == '\0') {
      if (cVar7 != '\0') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar4 = (undefined8 *)
               CONCAT71(local_28.Variant._padding_._1_7_,
                        (EPropertyBagResult)local_28.Variant._padding_);
      if (puVar4 != (undefined8 *)0x0) {
        if (cVar7 != '\0') {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L"");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar3 = puVar4[1];
        *(undefined8 *)param_3 = *puVar4;
        *(undefined8 *)((longlong)param_3 + 8) = uVar3;
        return;
      }
    }
    else {
      if (cVar7 != '\x01') {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      PCGGraphParametersHelpersPrivate::OnException
                ((EPropertyBagResult)local_28.Variant._padding_,FVar5);
    }
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execGetVector4Parameter @ 149d6ea60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGGraphParametersHelpers::execGetVector4Parameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  FName FVar7;
  bool bVar8;
  char cVar9;
  FName local_res10;
  UPCGGraphInterface *local_res18 [2];
  TValueOrError<UE::Math::TVector4<double>_*,EPropertyBagResult> local_28;
  
  local_res18[0] = (UPCGGraphInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar7 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UPCGGraphInterface *)0x0) {
    UPCGGraphInterface::GetGraphParameter<UE::Math::TVector4<double>_*>
              (local_res18[0],&local_28,local_res10);
    cVar9 = local_28.Variant.TypeIndex;
    if (2 < (local_28.Variant._8_8_ & 0xff)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UE::Math::TVector4<double>*___ptr64,EPropertyBagResult>::FWrapErrorType,UE::Math::TVector4<double>*___ptr64,TValueOrError<struct_UE::Math::TVector4<double>*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_UE::Math::TVector4<double>*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (local_28.Variant._8_8_ & 0xff)) == '\0') {
      if (cVar9 != '\0') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      puVar6 = (undefined8 *)
               CONCAT71(local_28.Variant._padding_._1_7_,
                        (EPropertyBagResult)local_28.Variant._padding_);
      if (puVar6 != (undefined8 *)0x0) {
        if (cVar9 != '\0') {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L"");
          if (bVar8) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        *(undefined8 *)param_3 = *puVar6;
        *(undefined8 *)((longlong)param_3 + 8) = uVar3;
        *(undefined8 *)((longlong)param_3 + 0x10) = uVar4;
        *(undefined8 *)((longlong)param_3 + 0x18) = uVar5;
        return;
      }
    }
    else {
      if (cVar9 != '\x01') {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      PCGGraphParametersHelpersPrivate::OnException
                ((EPropertyBagResult)local_28.Variant._padding_,FVar7);
    }
  }
  uVar4 = _UNK_15061cbc8;
  uVar3 = ___xmm_3ff00000000000000000000000000000;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar4;
  return;
}

// execGetVectorParameter @ 149d6ec50

void __cdecl
UPCGGraphParametersHelpers::execGetVectorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  FName FVar6;
  bool bVar7;
  char cVar8;
  FName local_res10;
  UPCGGraphInterface *local_res18 [2];
  TValueOrError<UE::Math::TVector<double>_*,EPropertyBagResult> local_58 [4];
  
  local_res18[0] = (UPCGGraphInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UPCGGraphInterface *)0x0) {
    UPCGGraphInterface::GetGraphParameter<UE::Math::TVector<double>_*>
              (local_res18[0],local_58,local_res10);
    cVar8 = (char)local_58[0].Variant._8_8_;
    if ((2 < (local_58[0].Variant._8_8_ & 0xff)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TSoftClassPtr<UObject>,EPropertyBagResult>::FWrapErrorType,TSoftClassPtr<UObject>,TValueOrError<class_TSoftClassPtr<class_UObject>,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_TSoftClassPtr<class_UObject>,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (local_58[0].Variant._8_8_ & 0xff) + 4) == '\0') {
      if ((cVar8 != '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar5 = (undefined8 *)
               CONCAT71(local_58[0].Variant._padding_._1_7_,
                        (EPropertyBagResult)local_58[0].Variant._padding_);
      if (puVar5 != (undefined8 *)0x0) {
        if ((cVar8 != '\0') &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar4 = puVar5[1];
        uVar1 = puVar5[2];
        *(undefined8 *)param_3 = *puVar5;
        *(undefined8 *)((longlong)param_3 + 8) = uVar4;
        *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
        return;
      }
    }
    else {
      if ((cVar8 != '\x01') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      PCGGraphParametersHelpersPrivate::OnException
                ((EPropertyBagResult)local_58[0].Variant._padding_,FVar6);
    }
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  return;
}

// execIsOverridden @ 149d6ee80

void __cdecl
UPCGGraphParametersHelpers::execIsOverridden(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 local_res10;
  longlong *local_res18;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 != (longlong *)0x0) {
    cVar2 = (**(code **)(*local_res18 + 0x2d0))(local_res18,local_res10);
    if (cVar2 != '\0') {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetBoolParameter @ 149d6ffe0

void __cdecl
UPCGGraphParametersHelpers::execSetBoolParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  bool bVar7;
  int local_res10 [4];
  FName local_res20;
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar4 = local_28[0];
  FVar3 = local_res20;
  bVar7 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar6 = FInstancedPropertyBag::SetValueBool(this,FVar3,bVar7);
  if (EVar6 == Success) {
    (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
  return;
}

// execSetByteParameter @ 149d70180

void __cdecl
UPCGGraphParametersHelpers::execSetByteParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  uchar uVar3;
  FName FVar4;
  longlong *plVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  FInstancedPropertyBag *this;
  uchar local_res10 [16];
  FName local_res20;
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = '\0';
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar5 = local_28[0];
  FVar4 = local_res20;
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = FInstancedPropertyBag::SetValueByte(this,FVar4,uVar3);
  if (EVar7 == Success) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,8,FVar4);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar7,FVar4);
  return;
}

// execSetClassParameter @ 149d70310

void __cdecl
UPCGGraphParametersHelpers::execSetClassParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  UClass *pUVar4;
  longlong *plVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  FInstancedPropertyBag *this;
  FName local_res10 [2];
  UClass *local_res20;
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  plVar5 = local_28[0];
  pUVar4 = local_res20;
  FVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = FInstancedPropertyBag::SetValueClass(this,FVar3,pUVar4);
  if (EVar7 == Success) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar7,FVar3);
  return;
}

// execSetDoubleParameter @ 149d704a0

void __cdecl
UPCGGraphParametersHelpers::execSetDoubleParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  double dVar4;
  longlong *plVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  FInstancedPropertyBag *this;
  FName local_res10;
  double local_res20;
  longlong *local_28 [4];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  plVar5 = local_28[0];
  dVar4 = local_res20;
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = FInstancedPropertyBag::SetValueDouble(this,FVar3,dVar4);
  if (EVar7 == Success) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar7,FVar3);
  return;
}

// execSetEnumParameter @ 149d70660

void __cdecl
UPCGGraphParametersHelpers::execSetEnumParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  EPropertyBagResult EVar3;
  byte local_res10 [16];
  FName local_res20;
  UPCGGraphInterface *local_18;
  UEnum *local_10;
  
  local_18 = (UPCGGraphInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_10 = (UEnum *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10);
  }
  FVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18 == (UPCGGraphInterface *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  EVar3 = UPCGGraphInterface::SetGraphParameter
                    (local_18,local_res20,(ulonglong)local_res10[0],local_10);
  if (EVar3 != Success) {
    PCGGraphParametersHelpersPrivate::OnException(EVar3,FVar2);
  }
  return;
}

// execSetFloatParameter @ 149d70a50

void __cdecl
UPCGGraphParametersHelpers::execSetFloatParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  FName FVar4;
  longlong *plVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  FInstancedPropertyBag *this;
  float local_res10 [2];
  FName local_res20;
  longlong *local_28 [4];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar5 = local_28[0];
  FVar4 = local_res20;
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = FInstancedPropertyBag::SetValueFloat(this,FVar4,fVar3);
  if (EVar7 == Success) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,8,FVar4);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar7,FVar4);
  return;
}

// execSetInt32Parameter @ 149d70c00

void __cdecl
UPCGGraphParametersHelpers::execSetInt32Parameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  FName FVar4;
  longlong *plVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  FInstancedPropertyBag *this;
  int local_res10 [4];
  FName local_res20;
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar5 = local_28[0];
  FVar4 = local_res20;
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = FInstancedPropertyBag::SetValueInt32(this,FVar4,iVar3);
  if (EVar7 == Success) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,8,FVar4);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar7,FVar4);
  return;
}

// execSetInt64Parameter @ 149d70d90

void __cdecl
UPCGGraphParametersHelpers::execSetInt64Parameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  long64 lVar4;
  longlong *plVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  FInstancedPropertyBag *this;
  FName local_res10 [2];
  long64 local_res20;
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  plVar5 = local_28[0];
  lVar4 = local_res20;
  FVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = FInstancedPropertyBag::SetValueInt64(this,FVar3,lVar4);
  if (EVar7 == Success) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar7,FVar3);
  return;
}

// execSetNameParameter @ 149d711b0

void __cdecl
UPCGGraphParametersHelpers::execSetNameParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  longlong *plVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  FInstancedPropertyBag *this;
  FName local_res10 [2];
  FName local_res20;
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar5 = local_28[0];
  FVar4 = local_res20;
  FVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = FInstancedPropertyBag::SetValueName(this,FVar4,FVar3);
  if (EVar7 == Success) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,8,FVar4);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar7,FVar4);
  return;
}

// execSetObjectParameter @ 149d71340

void __cdecl
UPCGGraphParametersHelpers::execSetObjectParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  UObject *pUVar4;
  longlong *plVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  FInstancedPropertyBag *this;
  FName local_res10 [2];
  UObject *local_res20;
  longlong *local_28 [2];
  
  local_28[0] = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  plVar5 = local_28[0];
  pUVar4 = local_res20;
  FVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_28[0] == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_28[0] + 0x2e0))(local_28[0]);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EVar7 = FInstancedPropertyBag::SetValueObject(this,FVar3,pUVar4);
  if (EVar7 == Success) {
    (**(code **)(*plVar5 + 0x2d8))(plVar5,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar7,FVar3);
  return;
}

// execSetQuaternionParameter @ 149d714d0

void __cdecl
UPCGGraphParametersHelpers::execSetQuaternionParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  uchar *puVar7;
  FName local_res10 [2];
  longlong *local_res20;
  FConstStructView local_48;
  uchar local_38 [32];
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  puVar7 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48.ScriptStruct = TBaseStructure<UE::Math::TQuat<double>_>::Get();
  local_48.StructMemory = puVar7;
  EVar6 = FInstancedPropertyBag::SetValueStruct(this,FVar3,&local_48);
  if (EVar6 == Success) {
    (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
  return;
}

// execSetRotatorParameter @ 149d71690

void __cdecl
UPCGGraphParametersHelpers::execSetRotatorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  uchar *puVar7;
  FName local_res10 [2];
  longlong *local_res20;
  FConstStructView local_48;
  uchar local_38 [32];
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  puVar7 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48.ScriptStruct = TBaseStructure<UE::Math::TRotator<double>_>::Get();
  local_48.StructMemory = puVar7;
  EVar6 = FInstancedPropertyBag::SetValueStruct(this,FVar3,&local_48);
  if (EVar6 == Success) {
    (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
  return;
}

// execSetSoftClassParameter @ 149d71a30

void __cdecl
UPCGGraphParametersHelpers::execSetSoftClassParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  uchar *puVar7;
  FName local_res10 [2];
  longlong *local_res20;
  uchar local_48 [24];
  FUtf8String local_30;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  FUtf8String::Reset(&local_30,0);
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
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  puVar7 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
    if (this == (FInstancedPropertyBag *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar6 = FInstancedPropertyBag::SetValueSoftPath(this,FVar3,(FSoftObjectPath *)(puVar7 + 8));
    if (EVar6 == Success) {
      (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    }
    else {
      PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetSoftObjectParameter @ 149d71c10

void __cdecl
UPCGGraphParametersHelpers::execSetSoftObjectParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  uchar *puVar7;
  FName local_res10 [2];
  longlong *local_res20;
  uchar local_48 [24];
  FUtf8String local_30;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  FUtf8String::Reset(&local_30,0);
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
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  puVar7 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
    if (this == (FInstancedPropertyBag *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar6 = FInstancedPropertyBag::SetValueSoftPath(this,FVar3,(FSoftObjectPath *)(puVar7 + 8));
    if (EVar6 == Success) {
      (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    }
    else {
      PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
    }
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetSoftObjectPathParameter @ 149d71df0

void __cdecl
UPCGGraphParametersHelpers::execSetSoftObjectPathParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  FSoftObjectPath *pFVar7;
  FName local_res10 [2];
  longlong *local_res20;
  FSoftObjectPath local_38;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  pFVar7 = &local_38;
  if ((FSoftObjectPath *)param_2->MostRecentPropertyAddress != (FSoftObjectPath *)0x0) {
    pFVar7 = (FSoftObjectPath *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
    if (this == (FInstancedPropertyBag *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar6 = FInstancedPropertyBag::SetValueSoftPath(this,FVar3,pFVar7);
    if (EVar6 == Success) {
      (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    }
    else {
      PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
    }
  }
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetStringParameter @ 149d71fc0

void __cdecl
UPCGGraphParametersHelpers::execSetStringParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  void *_Src;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  longlong lVar7;
  FName local_res10 [2];
  longlong *local_res20;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_20;
  local_38.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_38,(int)local_20,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
    if (this == (FInstancedPropertyBag *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UserParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                         ,0xd5,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar6 = FInstancedPropertyBag::SetValueString(this,FVar3,&local_38);
    if (EVar6 == Success) {
      (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    }
    else {
      PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetTransformParameter @ 149d721b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGraphParametersHelpers::execSetTransformParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FName FVar13;
  longlong *plVar14;
  bool bVar15;
  EPropertyBagResult EVar16;
  FInstancedPropertyBag *this;
  double *pdVar17;
  undefined1 auStack_b8 [32];
  FName local_98;
  longlong *local_90;
  FConstStructView local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar11 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = (double)fVar7;
  dStack_60 = (double)fVar10;
  local_48 = (double)fVar8;
  dStack_40 = (double)fVar11;
  local_58._8_4_ = SUB84((double)fVar5,0);
  local_58._0_8_ = (double)fVar3;
  local_58._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_28 = (double)fVar9;
  dStack_20 = (double)fVar12;
  local_38._8_4_ = SUB84((double)fVar6,0);
  local_38._0_8_ = (double)fVar4;
  local_38._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  plVar14 = local_90;
  FVar13 = local_98;
  pdVar17 = &local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar17 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_90 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
  }
  else {
    this = (FInstancedPropertyBag *)(**(code **)(*local_90 + 0x2e0))(local_90);
    if (this == (FInstancedPropertyBag *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("UserParameters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                          ,0xd5,L"");
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_88.ScriptStruct = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    local_88.StructMemory = (uchar *)pdVar17;
    EVar16 = FInstancedPropertyBag::SetValueStruct(this,FVar13,&local_88);
    if (EVar16 == Success) {
      (**(code **)(*plVar14 + 0x2d8))(plVar14,8,FVar13);
    }
    else {
      PCGGraphParametersHelpersPrivate::OnException(EVar16,FVar13);
    }
  }
  return;
}

// execSetVector2DParameter @ 149d723f0

void __cdecl
UPCGGraphParametersHelpers::execSetVector2DParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  uchar *puVar7;
  FName local_res10 [2];
  longlong *local_res20;
  uchar local_38 [16];
  FConstStructView local_28;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  puVar7 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.ScriptStruct = TBaseStructure<UE::Math::TVector2<double>_>::Get();
  local_28.StructMemory = puVar7;
  EVar6 = FInstancedPropertyBag::SetValueStruct(this,FVar3,&local_28);
  if (EVar6 == Success) {
    (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
  return;
}

// execSetVector4Parameter @ 149d725a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UPCGGraphParametersHelpers::execSetVector4Parameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  uchar *puVar7;
  FName local_res10 [2];
  longlong *local_res20;
  FConstStructView local_48;
  uchar local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_28 = ___xmm_3ff00000000000000000000000000000;
  uStack_20 = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  puVar7 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48.ScriptStruct = TBaseStructure<UE::Math::TVector4<double>_>::Get();
  local_48.StructMemory = puVar7;
  EVar6 = FInstancedPropertyBag::SetValueStruct(this,FVar3,&local_48);
  if (EVar6 == Success) {
    (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
  return;
}

// execSetVectorParameter @ 149d72770

void __cdecl
UPCGGraphParametersHelpers::execSetVectorParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  EPropertyBagResult EVar6;
  FInstancedPropertyBag *this;
  uchar *puVar7;
  FName local_res10 [2];
  longlong *local_res20;
  FConstStructView local_48;
  uchar local_38 [32];
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  plVar4 = local_res20;
  FVar3 = local_res10[0];
  puVar7 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (longlong *)0x0) {
    PCGGraphParametersHelpersPrivate::ThrowBlueprintException
              (&PCGGraphParametersHelpersPrivate::InvalidGraphInterfaceError);
    return;
  }
  this = (FInstancedPropertyBag *)(**(code **)(*local_res20 + 0x2e0))(local_res20);
  if (this == (FInstancedPropertyBag *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UserParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGGraph.h"
                       ,0xd5,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_48.ScriptStruct = TBaseStructure<UE::Math::TVector<double>_>::Get();
  local_48.StructMemory = puVar7;
  EVar6 = FInstancedPropertyBag::SetValueStruct(this,FVar3,&local_48);
  if (EVar6 == Success) {
    (**(code **)(*plVar4 + 0x2d8))(plVar4,8,FVar3);
    return;
  }
  PCGGraphParametersHelpersPrivate::OnException(EVar6,FVar3);
  return;
}

