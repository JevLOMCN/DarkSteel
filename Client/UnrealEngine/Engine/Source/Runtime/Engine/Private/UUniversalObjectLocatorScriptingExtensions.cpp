// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// StaticClass @ 1488a13a0

UClass * __cdecl UUniversalObjectLocatorScriptingExtensions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UniversalObjectLocatorScriptingExtensions",
               &Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton
               ,StaticRegisterNativesUUniversalObjectLocatorScriptingExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUniversalObjectLocatorScriptingExtensions>,
               InternalVTableHelperCtorCaller<UUniversalObjectLocatorScriptingExtensions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton;
}

// UUniversalObjectLocatorScriptingExtensions @ 1488b1920

UUniversalObjectLocatorScriptingExtensions * __thiscall
UUniversalObjectLocatorScriptingExtensions::UUniversalObjectLocatorScriptingExtensions
          (UUniversalObjectLocatorScriptingExtensions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UUniversalObjectLocatorScriptingExtensions__6B_;
  return this;
}

// UUniversalObjectLocatorScriptingExtensions @ 1488b1950

UUniversalObjectLocatorScriptingExtensions * __thiscall
UUniversalObjectLocatorScriptingExtensions::UUniversalObjectLocatorScriptingExtensions
          (UUniversalObjectLocatorScriptingExtensions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UUniversalObjectLocatorScriptingExtensions__6B_;
  return this;
}

// ~UUniversalObjectLocatorScriptingExtensions @ 1488b2d20

void __thiscall
UUniversalObjectLocatorScriptingExtensions::~UUniversalObjectLocatorScriptingExtensions
          (UUniversalObjectLocatorScriptingExtensions *this)

{
  *(undefined ***)this = &___7UUniversalObjectLocatorScriptingExtensions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 1488c4370

UClass * __cdecl UUniversalObjectLocatorScriptingExtensions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"UniversalObjectLocatorScriptingExtensions",
               &Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton
               ,StaticRegisterNativesUUniversalObjectLocatorScriptingExtensions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UUniversalObjectLocatorScriptingExtensions>,
               InternalVTableHelperCtorCaller<UUniversalObjectLocatorScriptingExtensions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniversalObjectLocatorScriptingExtensions.InnerSingleton;
}

// IsEmpty @ 1488cd040

bool __cdecl UUniversalObjectLocatorScriptingExtensions::IsEmpty(FUniversalObjectLocator *param_1)

{
  return (param_1->Fragments).ArrayNum == 0;
}

// MakeUniversalObjectLocator @ 1488ce610

FUniversalObjectLocator * __cdecl
UUniversalObjectLocatorScriptingExtensions::MakeUniversalObjectLocator
          (FUniversalObjectLocator *__return_storage_ptr__,UObject *param_1,UObject *param_2)

{
  FUniversalObjectLocator::FUniversalObjectLocator
            (__return_storage_ptr__,param_1,param_2,(UObject *)0x0);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUUniversalObjectLocatorScriptingExtensions @ 1488e22e0

void __cdecl
UUniversalObjectLocatorScriptingExtensions::
StaticRegisterNativesUUniversalObjectLocatorScriptingExtensions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UUniversalObjectLocatorScriptingExtensions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SyncFind @ 1488e2450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __cdecl
UUniversalObjectLocatorScriptingExtensions::SyncFind
          (FUniversalObjectLocator *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FResolveResultData *pFVar4;
  FResolveResult *this;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  FResolveParams FStack_58;
  UObject *pUStack_40;
  undefined8 uStack_38;
  FResolveResult FStack_30;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FStack_58.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  FStack_58.Flags = None;
  FStack_58.Context = param_2;
  bVar2 = UE::IsSavingPackage((UObject *)0x0);
  if ((bVar2) || (GIsGarbageCollecting != false)) {
    FStack_30.Value._padding_._0_1_ = (byte)FStack_30.Value._padding_ & 0xfc;
    FStack_30.Value._padding_ = 0;
    FStack_30.Value.TypeIndex = 0;
  }
  else {
    if (((FStack_58.Flags & (Unload|Load)) == (Unload|Load)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Load | ELocatorResolveFlags::Unload)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if ((((FStack_58.Flags & WillWait) != None) && ((FStack_58.Flags & Async) == None)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::WillWait) || EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Async)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                           ,0x3c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if ((FStack_58.Flags & Async) == None) {
      FUniversalObjectLocator::ResolveSyncImpl(param_1,&FStack_30,&FStack_58);
    }
    else {
      FUniversalObjectLocator::ResolveAsyncImpl(param_1,&FStack_30,&FStack_58);
    }
  }
  this = &FStack_30;
  if (FStack_30.Value.TypeIndex != 1) {
    this = (FResolveResult *)0x0;
  }
  if (this == (FResolveResult *)0x0) {
    pUVar3 = (UObject *)FStack_30.Value._padding_;
    if ((FStack_30.Value.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), pUVar3 = (UObject *)FStack_30.Value._padding_, bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  else {
    pFVar4 = TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
                       ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)this);
    pUStack_40 = pFVar4->Object;
    uStack_38 = *(undefined8 *)&pFVar4->Flags;
    pUVar3 = pUStack_40;
  }
  uVar5 = (ulonglong)FStack_30.Value.TypeIndex;
  if ((1 < FStack_30.Value.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&FStack_30);
  }
  return pUVar3;
}

// SyncLoad @ 1488e2460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __cdecl
UUniversalObjectLocatorScriptingExtensions::SyncLoad
          (FUniversalObjectLocator *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FResolveResultData *pFVar4;
  FResolveResult *this;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  FResolveParams FStack_58;
  UObject *pUStack_40;
  undefined8 uStack_38;
  FResolveResult FStack_30;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FStack_58.Flags = Load;
  FStack_58.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  FStack_58.Context = param_2;
  bVar2 = UE::IsSavingPackage((UObject *)0x0);
  if ((bVar2) || (GIsGarbageCollecting != false)) {
    FStack_30.Value._padding_._0_1_ = (byte)FStack_30.Value._padding_ & 0xfc;
    FStack_30.Value._padding_ = 0;
    FStack_30.Value.TypeIndex = 0;
  }
  else {
    if (((FStack_58.Flags & (Unload|Load)) == (Unload|Load)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Load | ELocatorResolveFlags::Unload)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if ((((FStack_58.Flags & WillWait) != None) && ((FStack_58.Flags & Async) == None)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::WillWait) || EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Async)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                           ,0x3c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if ((FStack_58.Flags & Async) == None) {
      FUniversalObjectLocator::ResolveSyncImpl(param_1,&FStack_30,&FStack_58);
    }
    else {
      FUniversalObjectLocator::ResolveAsyncImpl(param_1,&FStack_30,&FStack_58);
    }
  }
  this = &FStack_30;
  if (FStack_30.Value.TypeIndex != 1) {
    this = (FResolveResult *)0x0;
  }
  if (this == (FResolveResult *)0x0) {
    pUVar3 = (UObject *)FStack_30.Value._padding_;
    if ((FStack_30.Value.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), pUVar3 = (UObject *)FStack_30.Value._padding_, bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  else {
    pFVar4 = TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
                       ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)this);
    pUStack_40 = pFVar4->Object;
    uStack_38 = *(undefined8 *)&pFVar4->Flags;
    pUVar3 = pUStack_40;
  }
  uVar5 = (ulonglong)FStack_30.Value.TypeIndex;
  if ((1 < FStack_30.Value.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&FStack_30);
  }
  return pUVar3;
}

// SyncUnload @ 1488e2470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UUniversalObjectLocatorScriptingExtensions::SyncUnload
          (FUniversalObjectLocator *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FResolveResult *this;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  FResolveParams FStack_48;
  FResolveResult FStack_30;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  FStack_48.Flags = Unload;
  FStack_48.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  FStack_48.Context = param_2;
  bVar2 = UE::IsSavingPackage((UObject *)0x0);
  if ((bVar2) || (GIsGarbageCollecting != false)) {
    FStack_30.Value._padding_._0_1_ = (byte)FStack_30.Value._padding_ & 0xfc;
    FStack_30.Value._padding_ = 0;
    FStack_30.Value.TypeIndex = 0;
  }
  else {
    if ((FStack_48.Flags & (Unload|Load)) == (Unload|Load)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Load | ELocatorResolveFlags::Unload)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                         ,0x3a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((FStack_48.Flags & WillWait) != None) && ((FStack_48.Flags & Async) == None)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::WillWait) || EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Async)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                         ,0x3c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((FStack_48.Flags & Async) == None) {
      FUniversalObjectLocator::ResolveSyncImpl(param_1,&FStack_30,&FStack_48);
    }
    else {
      FUniversalObjectLocator::ResolveAsyncImpl(param_1,&FStack_30,&FStack_48);
    }
  }
  this = &FStack_30;
  if (FStack_30.Value.TypeIndex != 1) {
    this = (FResolveResult *)0x0;
  }
  if (this == (FResolveResult *)0x0) {
    if (FStack_30.Value.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
              ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)this);
  }
  uVar3 = (ulonglong)FStack_30.Value.TypeIndex;
  if (1 < FStack_30.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3] !=
      UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(&FStack_30);
  }
  return;
}

// ToString @ 1488e8860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UUniversalObjectLocatorScriptingExtensions::ToString
          (FString *__return_storage_ptr__,FUniversalObjectLocator *param_1)

{
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  FUniversalObjectLocator::ToString(param_1,&local_138);
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_138.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return __return_storage_ptr__;
}

// UniversalObjectLocatorFromString @ 1488e9ec0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FUniversalObjectLocator * __cdecl
UUniversalObjectLocatorScriptingExtensions::UniversalObjectLocatorFromString
          (FUniversalObjectLocator *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  FUniversalObjectLocator *pFVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  FParseStringParams local_res8 [8];
  undefined1 local_res10 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_128;
  FText local_118;
  FParseStringResult local_108;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FTextFormat local_c8;
  FText local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  local_res8[0].Flags = ErrorMessaging;
  FUniversalObjectLocator::FUniversalObjectLocator(__return_storage_ptr__);
  local_e8 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_e0 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_e0 = 0;
  }
  local_68._12_4_ = uStack_dc;
  local_68.Size = iStack_e0;
  local_68.DataPtr = (wchar_t *)local_e8;
  FUniversalObjectLocator::TryParseString(__return_storage_ptr__,&local_108,&local_68,local_res8);
  if (local_108.bSuccess == false) {
    local_118.TextData.Reference = local_108.ErrorMessage.TextData.Reference;
    if (local_108.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.ErrorMessage.TextData.Reference + 8))
                (local_108.ErrorMessage.TextData.Reference,local_res10);
    }
    local_118.Flags = local_108.ErrorMessage.Flags;
    local_d8 = (param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    iStack_d0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_d0 = 0;
    }
    local_58._12_4_ = uStack_cc;
    local_58.Size = iStack_d0;
    local_58.DataPtr = (wchar_t *)local_d8;
    pFVar5 = FText::FromStringView(&local_38,&local_58);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"UOL",L"ParseError",
                        L"Unable to parse a valid UOL from string \'{0}\': {1}.");
    pFVar7 = FTextFormat::FTextFormat(&local_28,pFVar6,Default);
    local_a8.Type = Text;
    FText::FText((FText *)&local_a8.TextValue,pFVar5);
    if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FUniversalObjectLocator *)(*pcVar3)();
        return pFVar8;
      }
    }
    local_88 = 4;
    FText::FText(&local_78,&local_118);
    if (local_78.TextData.Reference == (ITextData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FUniversalObjectLocator *)(*pcVar3)();
        return pFVar8;
      }
    }
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_128.AllocatorInstance,2,&local_128.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_128.AllocatorInstance.Data,&local_a8,2);
    local_c8.TextFormatData.Object = (pFVar7->TextFormatData).Object;
    local_c8.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar7->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_b8,&local_c8,&local_128);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
    if ((FFormatArgumentValue *)local_128.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar7->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar2 = (pFVar5->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    pFVar9 = FText::ToString(&local_b8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    FFrame::KismetExecutionMessage(pwVar10,Error,(FName)0x0);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if (local_108.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.ErrorMessage.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// execIsEmpty @ 1488ed4a0

void __cdecl
UUniversalObjectLocatorScriptingExtensions::execIsEmpty
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FUniversalObjectLocator *pFVar2;
  FUniversalObjectLocator local_18;
  
  FUniversalObjectLocator::FUniversalObjectLocator(&local_18);
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
  pFVar2 = &local_18;
  if ((FUniversalObjectLocator *)param_2->MostRecentPropertyAddress !=
      (FUniversalObjectLocator *)0x0) {
    pFVar2 = (FUniversalObjectLocator *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = (pFVar2->Fragments).ArrayNum == 0;
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data,
             local_18.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_18.Fragments.AllocatorInstance.Data);
  }
  return;
}

// execMakeUniversalObjectLocator @ 1488ed560

void __cdecl
UUniversalObjectLocatorScriptingExtensions::execMakeUniversalObjectLocator
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10;
  UObject *local_res18;
  FUniversalObjectLocator local_18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
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
  FUniversalObjectLocator::FUniversalObjectLocator(&local_18,local_res18,local_res10,(UObject *)0x0)
  ;
  if (param_3 != &local_18) {
    DestructItems<FUniversalObjectLocatorFragment,int>
              (*(FUniversalObjectLocatorFragment **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Fragments.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.Fragments.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.Fragments.ArrayMax;
    local_18.Fragments.ArrayMax = 0;
    local_18.Fragments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Fragments.ArrayNum = 0;
  }
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data,
             local_18.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_18.Fragments.AllocatorInstance.Data);
  }
  return;
}

// execSyncFind @ 1488ed6a0

void __cdecl
UUniversalObjectLocatorScriptingExtensions::execSyncFind
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FUniversalObjectLocator *this;
  UObject *local_res10;
  FUniversalObjectLocator local_18;
  
  FUniversalObjectLocator::FUniversalObjectLocator(&local_18);
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
  local_res10 = (UObject *)0x0;
  this = &local_18;
  if ((FUniversalObjectLocator *)param_2->MostRecentPropertyAddress !=
      (FUniversalObjectLocator *)0x0) {
    this = (FUniversalObjectLocator *)param_2->MostRecentPropertyAddress;
  }
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
  pUVar2 = FUniversalObjectLocator::SyncFind(this,local_res10);
  *(UObject **)param_3 = pUVar2;
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data,
             local_18.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_18.Fragments.AllocatorInstance.Data);
  }
  return;
}

// execSyncLoad @ 1488ed7b0

void __cdecl
UUniversalObjectLocatorScriptingExtensions::execSyncLoad
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FUniversalObjectLocator *this;
  UObject *local_res10;
  FUniversalObjectLocator local_18;
  
  FUniversalObjectLocator::FUniversalObjectLocator(&local_18);
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
  local_res10 = (UObject *)0x0;
  this = &local_18;
  if ((FUniversalObjectLocator *)param_2->MostRecentPropertyAddress !=
      (FUniversalObjectLocator *)0x0) {
    this = (FUniversalObjectLocator *)param_2->MostRecentPropertyAddress;
  }
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
  pUVar2 = FUniversalObjectLocator::SyncLoad(this,local_res10);
  *(UObject **)param_3 = pUVar2;
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data,
             local_18.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_18.Fragments.AllocatorInstance.Data);
  }
  return;
}

// execSyncUnload @ 1488ed8c0

void __cdecl
UUniversalObjectLocatorScriptingExtensions::execSyncUnload
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FUniversalObjectLocator *this;
  UObject *local_res10;
  FUniversalObjectLocator local_18;
  
  FUniversalObjectLocator::FUniversalObjectLocator(&local_18);
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
  local_res10 = (UObject *)0x0;
  this = &local_18;
  if ((FUniversalObjectLocator *)param_2->MostRecentPropertyAddress !=
      (FUniversalObjectLocator *)0x0) {
    this = (FUniversalObjectLocator *)param_2->MostRecentPropertyAddress;
  }
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
  FUniversalObjectLocator::SyncUnload(this,local_res10);
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data,
             local_18.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_18.Fragments.AllocatorInstance.Data);
  }
  return;
}

// execToString @ 1488ed9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UUniversalObjectLocatorScriptingExtensions::execToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FUniversalObjectLocator *this;
  undefined1 auStack_188 [32];
  FString local_168;
  FUniversalObjectLocator local_158;
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  FUniversalObjectLocator::FUniversalObjectLocator(&local_158);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  this = &local_158;
  if ((FUniversalObjectLocator *)param_2->MostRecentPropertyAddress !=
      (FUniversalObjectLocator *)0x0) {
    this = (FUniversalObjectLocator *)param_2->MostRecentPropertyAddress;
  }
  local_148.Base = local_128;
  local_148.CurPos = local_128;
  local_148.End = (wchar_t *)local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FUniversalObjectLocator::ToString(this,&local_148);
  if (local_148.End < local_148.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_148,1);
  }
  *local_148.CurPos = L'\0';
  ::FString::FString(&local_168,local_148.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  if (param_3 != &local_168) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_168.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_168.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_168.Data.ArrayMax;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_158.Fragments.AllocatorInstance.Data,
             local_158.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_158.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_158.Fragments.AllocatorInstance.Data);
  }
  return;
}

// execUniversalObjectLocatorFromString @ 1488edb50

void __cdecl
UUniversalObjectLocatorScriptingExtensions::execUniversalObjectLocatorFromString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FUniversalObjectLocator *pFVar2;
  FString local_28;
  FUniversalObjectLocator local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = UniversalObjectLocatorFromString(&local_18,&local_28);
  if (param_3 != pFVar2) {
    DestructItems<FUniversalObjectLocatorFragment,int>
              (*(FUniversalObjectLocatorFragment **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar2->Fragments).AllocatorInstance.Data;
    (pFVar2->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar2->Fragments).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar2->Fragments).ArrayMax;
    (pFVar2->Fragments).ArrayNum = 0;
    (pFVar2->Fragments).ArrayMax = 0;
  }
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data,
             local_18.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_18.Fragments.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

