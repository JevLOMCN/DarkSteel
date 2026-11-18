// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineDeepDVCBlueprint
// Functions: 32

// StaticClass @ 14de87420

UClass * __cdecl UStreamlineLibraryDeepDVC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibraryDeepDVC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineDeepDVCBlueprint",L"StreamlineLibraryDeepDVC",
               &Z_Registration_Info_UClass_UStreamlineLibraryDeepDVC.InnerSingleton,
               StaticRegisterNativesUStreamlineLibraryDeepDVC,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamlineLibraryDeepDVC>,
               InternalVTableHelperCtorCaller<UStreamlineLibraryDeepDVC>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryDeepDVC.InnerSingleton;
}

// UStreamlineLibraryDeepDVC @ 14de87eb0

UStreamlineLibraryDeepDVC * __thiscall
UStreamlineLibraryDeepDVC::UStreamlineLibraryDeepDVC
          (UStreamlineLibraryDeepDVC *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStreamlineLibraryDeepDVC__6B_;
  return this;
}

// UStreamlineLibraryDeepDVC @ 14de87ee0

UStreamlineLibraryDeepDVC * __thiscall
UStreamlineLibraryDeepDVC::UStreamlineLibraryDeepDVC
          (UStreamlineLibraryDeepDVC *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStreamlineLibraryDeepDVC__6B_;
  return this;
}

// ~UStreamlineLibraryDeepDVC @ 14de87f10

void __thiscall
UStreamlineLibraryDeepDVC::~UStreamlineLibraryDeepDVC(UStreamlineLibraryDeepDVC *this)

{
  *(undefined ***)this = &___7UStreamlineLibraryDeepDVC__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetDeepDVCIntensity @ 14de87fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UStreamlineLibraryDeepDVC::GetDeepDVCIntensity(void)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  float fVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar2 = IConsoleManager::Get();
        CVarDeepDVCIntensity =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Streamline.DeepDVC.Intensity",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (CVarDeepDVCIntensity != (IConsoleVariable *)0x0) {
      fVar3 = (float)(**(code **)(*(longlong *)CVarDeepDVCIntensity + 0xd0))();
      return fVar3;
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::GetDeepDVCIntensity",0x2e,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return 0.0;
}

// GetDeepDVCMode @ 14de880f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineDeepDVCMode __cdecl UStreamlineLibraryDeepDVC::GetDeepDVCMode(void)

{
  bool bVar1;
  int iVar2;
  IConsoleManager *pIVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar3 = IConsoleManager::Get();
        CVarDeepDVCEnable =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Streamline.DeepDVC.Enable",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (CVarDeepDVCEnable != (IConsoleVariable *)0x0) {
      iVar2 = (**(code **)(*(longlong *)CVarDeepDVCEnable + 200))();
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          return On;
        }
        if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_r_Strea_152d65c00,
                     (FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
        }
      }
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::GetDeepDVCMode",0x29,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return Off;
}

// GetDeepDVCOnScreenMessages @ 14de88260

void __cdecl
UStreamlineLibraryDeepDVC::GetDeepDVCOnScreenMessages
          (TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
           *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineDeepDVC\\Source\\StreamlineDeepDVCBlueprint\\Private\\StreamlineLibaryDeepDVC.cpp"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TryInitDeepDVCLibrary();
  return;
}

// GetDeepDVCSaturationBoost @ 14de882b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UStreamlineLibraryDeepDVC::GetDeepDVCSaturationBoost(void)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  float fVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar2 = IConsoleManager::Get();
        CVarDeepDVCSaturationBoost =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar2 + 0xc0))
                       (pIVar2,L"r.Streamline.DeepDVC.SaturationBoost",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (CVarDeepDVCSaturationBoost != (IConsoleVariable *)0x0) {
      fVar3 = (float)(**(code **)(*(longlong *)CVarDeepDVCSaturationBoost + 0xd0))();
      return fVar3;
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::GetDeepDVCSaturationBoost",0x34,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return 0.0;
}

// GetDefaultDeepDVCMode @ 14de883f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineDeepDVCMode __cdecl UStreamlineLibraryDeepDVC::GetDefaultDeepDVCMode(void)

{
  bool bVar1;
  undefined1 auStack_168 [48];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    IsDeepDVCSupported();
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::GetDefaultDeepDVCMode",0x30,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return Off;
}

// GetPrivateStaticClass @ 14de884a0

UClass * __cdecl UStreamlineLibraryDeepDVC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibraryDeepDVC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineDeepDVCBlueprint",L"StreamlineLibraryDeepDVC",
               &Z_Registration_Info_UClass_UStreamlineLibraryDeepDVC.InnerSingleton,
               StaticRegisterNativesUStreamlineLibraryDeepDVC,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamlineLibraryDeepDVC>,
               InternalVTableHelperCtorCaller<UStreamlineLibraryDeepDVC>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryDeepDVC.InnerSingleton;
}

// GetSupportedDeepDVCModes @ 14de88560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<EStreamlineDeepDVCMode,TSizedDefaultAllocator<32>_> * __cdecl
UStreamlineLibraryDeepDVC::GetSupportedDeepDVCModes
          (TArray<EStreamlineDeepDVCMode,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UEnum *pUVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  TArray<EStreamlineDeepDVCMode,TSizedDefaultAllocator<32>_> *pTVar7;
  TTuple<FName,__int64> *pTVar8;
  int iVar9;
  undefined1 auStack_1b8 [32];
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  FScriptContainerElement local_168 [8];
  TTuple<FName,__int64> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  iVar9 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  bVar4 = TryInitDeepDVCLibrary();
  if (bVar4) {
    if (Z_Registration_Info_UEnum_EStreamlineDeepDVCMode.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_StreamlineDeepDVCBlueprint();
      Z_Registration_Info_UEnum_EStreamlineDeepDVCMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_StreamlineDeepDVCBlueprint_EStreamlineDeepDVCMode,
                         (UObject *)pUVar6,L"EStreamlineDeepDVCMode");
    }
    pUVar3 = Z_Registration_Info_UEnum_EStreamlineDeepDVCMode.OuterSingleton;
    iVar5 = ((Z_Registration_Info_UEnum_EStreamlineDeepDVCMode.OuterSingleton)->Names).NumValues;
    if (0 < iVar5 + -1) {
      do {
        if (((iVar9 < 0) || (iVar5 <= iVar9)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<EStreamlineDeepDVCMode,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        pTVar8 = UEnum::FNameData::operator[](&pUVar3->Names,&local_160,iVar9);
        local_168[0] = (FScriptContainerElement)pTVar8->field_0x8;
        bVar4 = IsDeepDVCModeSupported((EStreamlineDeepDVCMode)local_168[0]);
        if (bVar4) {
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar1 <= local_168) && (local_168 < pFVar1 + __return_storage_ptr__->ArrayMax)) {
            local_180 = (longlong)__return_storage_ptr__->ArrayNum;
            local_178 = 1;
            local_198 = local_168;
            local_190 = pFVar1;
            local_188 = (longlong)__return_storage_ptr__->ArrayMax;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<EStreamlineDeepDVCMode,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar7;
            }
          }
          iVar5 = __return_storage_ptr__->ArrayNum;
          if (iVar5 == __return_storage_ptr__->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar5 + 1;
          (__return_storage_ptr__->AllocatorInstance).Data[iVar5] = local_168[0];
        }
        iVar5 = (pUVar3->Names).NumValues;
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar5 + -1);
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UStreamlineLibraryDeepDVC::GetSupportedDeepDVCModes",0x33,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return __return_storage_ptr__;
}

// IsDeepDVCModeSupported @ 14de887b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UStreamlineLibraryDeepDVC::IsDeepDVCModeSupported(EStreamlineDeepDVCMode param_1)

{
  bool bVar1;
  UPackage *pUVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if (Z_Registration_Info_UEnum_EStreamlineDeepDVCMode.OuterSingleton == (UEnum *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_StreamlineDeepDVCBlueprint();
      Z_Registration_Info_UEnum_EStreamlineDeepDVCMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_StreamlineDeepDVCBlueprint_EStreamlineDeepDVCMode,
                         (UObject *)pUVar2,L"EStreamlineDeepDVCMode");
    }
    bVar1 = ValidateEnumValue<enum_EStreamlineDeepDVCMode>
                      (param_1,"UStreamlineLibraryDeepDVC::IsDeepDVCModeSupported");
    if ((bVar1) && ((param_1 == Off || (bVar1 = IsDeepDVCSupported(), bVar1)))) {
      return true;
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::IsDeepDVCModeSupported",0x31,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// IsDeepDVCSupported @ 14de888b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UStreamlineLibraryDeepDVC::IsDeepDVCSupported(void)

{
  bool bVar1;
  EStreamlineFeatureSupport EVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDeepDVCLibrary();
  if (!bVar1) {
    if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UStreamlineLibraryDeepDVC::IsDeepDVCSupported",0x2d,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  EVar2 = QueryDeepDVCSupport();
  return EVar2 == Supported;
}

// QueryDeepDVCSupport @ 14de88980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineFeatureSupport __cdecl UStreamlineLibraryDeepDVC::QueryDeepDVCSupport(void)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDeepDVCLibrary();
  if (!bVar1) {
    if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UStreamlineLibraryDeepDVC::QueryDeepDVCSupport",0x2e,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return NotSupported;
  }
  return DeepDVCSupport;
}

// SetDeepDVCIntensity @ 14de88a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UStreamlineLibraryDeepDVC::SetDeepDVCIntensity(float param_1)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  ForAnyElementType FVar3;
  undefined1 auStack_188 [32];
  FName local_168;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar2 = IConsoleManager::Get();
      CVarDeepDVCIntensity =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Streamline.DeepDVC.Intensity",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (CVarDeepDVCIntensity == (IConsoleVariable *)0x0) {
      return;
    }
    local_168.ComparisonIndex.Value = 0;
    local_168.Number = 0;
    ::FString::PrintfImpl(&local_160,L"%2.2f");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar3.Data = local_160.Data.AllocatorInstance.Data;
    }
    IConsoleVariable::Set<wchar_t_const_*>
              (CVarDeepDVCIntensity,(wchar_t *)FVar3.Data,ECVF_SetByCommandline,local_168);
  }
  else {
    if ((byte)LogStreamlineDeepDVCBlueprint._0_1_ < 2) {
      return;
    }
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UStreamlineLibraryDeepDVC::SetDeepDVCIntensity",0x2e,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDeepDVCMode @ 14de88bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UStreamlineLibraryDeepDVC::SetDeepDVCMode(EStreamlineDeepDVCMode param_1)

{
  longlong lVar1;
  code *pcVar2;
  IConsoleVariable *pIVar3;
  bool bVar4;
  UPackage *pUVar5;
  undefined8 uVar6;
  IConsoleManager *pIVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  FString local_180;
  uint local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_150 [24];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  bVar4 = TryInitDeepDVCLibrary();
  if (bVar4) {
    if (Z_Registration_Info_UEnum_EStreamlineDeepDVCMode.OuterSingleton == (UEnum *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_StreamlineDeepDVCBlueprint();
      Z_Registration_Info_UEnum_EStreamlineDeepDVCMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_StreamlineDeepDVCBlueprint_EStreamlineDeepDVCMode,
                         (UObject *)pUVar5,L"EStreamlineDeepDVCMode");
    }
    bVar4 = ValidateEnumValue<enum_EStreamlineDeepDVCMode>
                      (param_1,"UStreamlineLibraryDeepDVC::SetDeepDVCMode");
    if (bVar4) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar7 = IConsoleManager::Get();
        CVarDeepDVCEnable =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar7 + 0xc0))(pIVar7,L"r.Streamline.DeepDVC.Enable",1);
        _Init_thread_footer(&::_TSS0);
      }
      if (CVarDeepDVCEnable != (IConsoleVariable *)0x0) {
        local_188 = 0;
        if (((param_1 != Off) && (param_1 != On)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineDeepDVC\\Source\\StreamlineDeepDVCBlueprint\\Private\\StreamlineLibaryDeepDVC.cpp"
                               ,0x99,L"dear DeepDVC plugin developer, please support new enum type!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pIVar3 = CVarDeepDVCEnable;
        local_168 = local_188;
        local_160 = 0;
        local_16c = 1;
        local_158 = 0x1000000;
        local_15c = 0xf000000;
        local_170 = (**(code **)(*(longlong *)CVarDeepDVCEnable + 0x18))(CVarDeepDVCEnable);
        local_170 = local_170 & 0xff000000;
        ::FString::PrintfImpl(&local_180,L"%d");
        lVar1 = *(longlong *)pIVar3;
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_180.Data.ArrayNum != 0) {
          FVar8.Data = local_180.Data.AllocatorInstance.Data;
        }
        uVar6 = (**(code **)(lVar1 + 0xa8))(pIVar3,local_150,&local_170);
        (**(code **)(lVar1 + 0xb0))(pIVar3,FVar8.Data,uVar6);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
      }
      if (param_1 != Off) {
        bVar4 = IsInGameThread();
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineDeepDVC\\Source\\StreamlineDeepDVCBlueprint\\Private\\StreamlineLibaryDeepDVC.cpp"
                               ,0xc0,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = IsDeepDVCModeSupported(param_1);
        DLSSErrorState.bIsDeepDVCModeUnsupported = !bVar4;
        DLSSErrorState.InvalidDeepDVCMode = param_1;
      }
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::SetDeepDVCMode",0x29,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// SetDeepDVCSaturationBoost @ 14de88ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl UStreamlineLibraryDeepDVC::SetDeepDVCSaturationBoost(float param_1)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  ForAnyElementType FVar3;
  undefined1 auStack_188 [32];
  FName local_168;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar2 = IConsoleManager::Get();
      CVarDeepDVCSaturationBoost =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Streamline.DeepDVC.SaturationBoost",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    if (CVarDeepDVCSaturationBoost == (IConsoleVariable *)0x0) {
      return;
    }
    local_168.ComparisonIndex.Value = 0;
    local_168.Number = 0;
    ::FString::PrintfImpl(&local_160,L"%2.2f");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_160.Data.ArrayNum != 0) {
      FVar3.Data = local_160.Data.AllocatorInstance.Data;
    }
    IConsoleVariable::Set<wchar_t_const_*>
              (CVarDeepDVCSaturationBoost,(wchar_t *)FVar3.Data,ECVF_SetByCommandline,local_168);
  }
  else {
    if ((byte)LogStreamlineDeepDVCBlueprint._0_1_ < 2) {
      return;
    }
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UStreamlineLibraryDeepDVC::SetDeepDVCSaturationBoost",0x34,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return;
}

// Shutdown @ 14de89030

void __cdecl UStreamlineLibraryDeepDVC::Shutdown(void)

{
  code *pcVar1;
  FDelegateHandle FVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  ForAnyElementType *this;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  FVar2.ID = DeepDVCOnScreenMessagesDelegateHandle.ID;
  if (DeepDVCOnScreenMessagesDelegateHandle.ID != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnGetOnScreenMessages,(FWriteAccessScope *)&local_28);
    uVar6 = 0;
    if (0 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this = (ForAnyElementType *)(FCoreDelegates::OnGetOnScreenMessages._8_8_ + lVar7);
        if (((*(int *)&this[1].Data != 0) && (this->Data != (FScriptContainerElement *)0x0)) &&
           (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this->Data + 0x40))(), *puVar5 == FVar2.ID
           )) {
          if ((*(int *)&this[1].Data != 0) && (this->Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)this->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this,0,0,0x10);
            *(undefined4 *)&this[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnGetOnScreenMessages,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)FCoreDelegates::OnGetOnScreenMessages._16_4_);
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    DeepDVCOnScreenMessagesDelegateHandle.ID = 0;
  }
  return;
}

// Startup @ 14de89190

void __cdecl UStreamlineLibraryDeepDVC::Startup(void)

{
  EStreamlineFeatureSupport EVar1;
  
  TryInitDeepDVCLibrary();
  EVar1 = QueryDeepDVCSupport();
  UStreamlineLibrary::RegisterFeatureSupport(DeepDVC,EVar1);
  return;
}

// StaticRegisterNativesUStreamlineLibraryDeepDVC @ 14de891c0

void __cdecl UStreamlineLibraryDeepDVC::StaticRegisterNativesUStreamlineLibraryDeepDVC(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UStreamlineLibraryDeepDVC_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryInitDeepDVCLibrary @ 14de89200

bool __cdecl UStreamlineLibraryDeepDVC::TryInitDeepDVCLibrary(void)

{
  bool bVar1;
  char cVar2;
  EStreamlineSupport EVar3;
  EStreamlineFeatureSupport EVar4;
  FDelegateHandle FVar5;
  FStreamlineRHI *pFVar6;
  undefined1 local_res8 [32];
  
  if (!bDeepDVCLibraryInitialized) {
    if (DeepDVCOnScreenMessagesDelegateHandle.ID == 0) {
      FVar5 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
              ::AddStatic<>(&FCoreDelegates::OnGetOnScreenMessages,
                            (_func___cdecl_void_TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_ptr
                             *)local_res8);
                    /* WARNING: Load size is inaccurate */
      DeepDVCOnScreenMessagesDelegateHandle.ID = *FVar5.ID;
    }
    bVar1 = IsStreamlineSupported();
    if (bVar1) {
      pFVar6 = GetPlatformStreamlineRHI();
      cVar2 = (**(code **)(pFVar6->_padding_ + 0x40))(pFVar6);
      if (cVar2 == '\0') {
        bDeepDVCLibraryInitialized = true;
        DeepDVCSupport = NotSupportedByRHI;
        return true;
      }
      EVar4 = QueryStreamlineDeepDVCSupport();
      DeepDVCSupport = ToUStreamlineFeatureSupport(EVar4);
      bDeepDVCLibraryInitialized = true;
      return true;
    }
    EVar3 = GetPlatformStreamlineSupport();
    bDeepDVCLibraryInitialized = true;
    DeepDVCSupport = NotSupported;
    if (EVar3 == NotSupportedIncompatibleRHI) {
      DeepDVCSupport = NotSupportedByRHI;
    }
  }
  return true;
}

// execGetDeepDVCIntensity @ 14de89380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDeepDVC::execGetDeepDVCIntensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  undefined4 uVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar2 = IConsoleManager::Get();
        CVarDeepDVCIntensity =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Streamline.DeepDVC.Intensity",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (CVarDeepDVCIntensity != (IConsoleVariable *)0x0) {
      uVar3 = (**(code **)(*(longlong *)CVarDeepDVCIntensity + 0xd0))();
      goto LAB_14de8941c;
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::GetDeepDVCIntensity",0x2e,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  uVar3 = 0;
LAB_14de8941c:
  *(undefined4 *)param_3 = uVar3;
  return;
}

// execGetDeepDVCMode @ 14de894d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDeepDVC::execGetDeepDVCMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  IConsoleManager *pIVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar3 = IConsoleManager::Get();
      CVarDeepDVCEnable =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Streamline.DeepDVC.Enable",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (CVarDeepDVCEnable != (IConsoleVariable *)0x0) {
      iVar2 = (**(code **)(*(longlong *)CVarDeepDVCEnable + 200))();
      if (iVar2 != 0) {
        if (iVar2 == 1) {
          *(undefined1 *)param_3 = 1;
          return;
        }
        if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_r_Strea_152d65c00,
                     (FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
        }
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::GetDeepDVCMode",0x29,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDeepDVCSaturationBoost @ 14de89650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDeepDVC::execGetDeepDVCSaturationBoost
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  IConsoleManager *pIVar2;
  undefined4 uVar3;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pIVar2 = IConsoleManager::Get();
        CVarDeepDVCSaturationBoost =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar2 + 0xc0))
                       (pIVar2,L"r.Streamline.DeepDVC.SaturationBoost",1);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (CVarDeepDVCSaturationBoost != (IConsoleVariable *)0x0) {
      uVar3 = (**(code **)(*(longlong *)CVarDeepDVCSaturationBoost + 0xd0))();
      goto LAB_14de896ec;
    }
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::GetDeepDVCSaturationBoost",0x34,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  uVar3 = 0;
LAB_14de896ec:
  *(undefined4 *)param_3 = uVar3;
  return;
}

// execGetDefaultDeepDVCMode @ 14de897a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDeepDVC::execGetDefaultDeepDVCMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDeepDVCLibrary();
  if (bVar1) {
    IsDeepDVCSupported();
  }
  else if (1 < (byte)LogStreamlineDeepDVCBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDeepDVC::GetDefaultDeepDVCMode",0x30,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetSupportedDeepDVCModes @ 14de89870

void __cdecl
UStreamlineLibraryDeepDVC::execGetSupportedDeepDVCModes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<EStreamlineDeepDVCMode,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<EStreamlineDeepDVCMode,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetSupportedDeepDVCModes(&local_18);
  if (param_3 != pTVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execIsDeepDVCModeSupported @ 14de898f0

void __cdecl
UStreamlineLibraryDeepDVC::execIsDeepDVCModeSupported
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  EStreamlineDeepDVCMode local_res10 [24];
  
  local_res10[0] = Off;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsDeepDVCModeSupported(local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsDeepDVCSupported @ 14de89970

void __cdecl
UStreamlineLibraryDeepDVC::execIsDeepDVCSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDeepDVCSupported();
  *(bool *)param_3 = bVar1;
  return;
}

// execQueryDeepDVCSupport @ 14de899a0

void __cdecl
UStreamlineLibraryDeepDVC::execQueryDeepDVCSupport(UObject *param_1,FFrame *param_2,void *param_3)

{
  EStreamlineFeatureSupport EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = QueryDeepDVCSupport();
  *(EStreamlineFeatureSupport *)param_3 = EVar1;
  return;
}

// execSetDeepDVCIntensity @ 14de899d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDeepDVC::execSetDeepDVCIntensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_188 [32];
  undefined4 local_168 [2];
  FName local_160;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_168[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = TryInitDeepDVCLibrary();
  if (bVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar3 = IConsoleManager::Get();
      CVarDeepDVCIntensity =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Streamline.DeepDVC.Intensity",1);
      _Init_thread_footer(&::_TSS0);
    }
    if (CVarDeepDVCIntensity == (IConsoleVariable *)0x0) {
      return;
    }
    local_160.ComparisonIndex.Value = 0;
    local_160.Number = 0;
    ::FString::PrintfImpl(&local_158,L"%2.2f");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar4.Data = local_158.Data.AllocatorInstance.Data;
    }
    IConsoleVariable::Set<wchar_t_const_*>
              (CVarDeepDVCIntensity,(wchar_t *)FVar4.Data,ECVF_SetByCommandline,local_160);
  }
  else {
    if ((byte)LogStreamlineDeepDVCBlueprint._0_1_ < 2) {
      return;
    }
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UStreamlineLibraryDeepDVC::SetDeepDVCIntensity",0x2e,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetDeepDVCMode @ 14de89bc0

void __cdecl
UStreamlineLibraryDeepDVC::execSetDeepDVCMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EStreamlineDeepDVCMode local_res10 [24];
  
  local_res10[0] = Off;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDeepDVCMode(local_res10[0]);
  return;
}

// execSetDeepDVCSaturationBoost @ 14de89c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDeepDVC::execSetDeepDVCSaturationBoost
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  ForAnyElementType FVar4;
  undefined1 auStack_188 [32];
  undefined4 local_168 [2];
  FName local_160;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_168[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = TryInitDeepDVCLibrary();
  if (bVar2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar3 = IConsoleManager::Get();
      CVarDeepDVCSaturationBoost =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.Streamline.DeepDVC.SaturationBoost",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    if (CVarDeepDVCSaturationBoost == (IConsoleVariable *)0x0) {
      return;
    }
    local_160.ComparisonIndex.Value = 0;
    local_160.Number = 0;
    ::FString::PrintfImpl(&local_158,L"%2.2f");
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar4.Data = local_158.Data.AllocatorInstance.Data;
    }
    IConsoleVariable::Set<wchar_t_const_*>
              (CVarDeepDVCSaturationBoost,(wchar_t *)FVar4.Data,ECVF_SetByCommandline,local_160);
  }
  else {
    if ((byte)LogStreamlineDeepDVCBlueprint._0_1_ < 2) {
      return;
    }
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UStreamlineLibraryDeepDVC::SetDeepDVCSaturationBoost",0x34,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDeepDVCBlueprint);
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  return;
}

