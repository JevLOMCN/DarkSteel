// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineDLSSGBlueprint
// Functions: 26

// StaticClass @ 14de89e80

UClass * __cdecl UStreamlineLibraryDLSSG::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineDLSSGBlueprint",L"StreamlineLibraryDLSSG",
               &Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton,
               StaticRegisterNativesUStreamlineLibraryDLSSG,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamlineLibraryDLSSG>,
               InternalVTableHelperCtorCaller<UStreamlineLibraryDLSSG>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton;
}

// UStreamlineLibraryDLSSG @ 14de8a850

UStreamlineLibraryDLSSG * __thiscall
UStreamlineLibraryDLSSG::UStreamlineLibraryDLSSG
          (UStreamlineLibraryDLSSG *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStreamlineLibraryDLSSG__6B_;
  return this;
}

// UStreamlineLibraryDLSSG @ 14de8a880

UStreamlineLibraryDLSSG * __thiscall
UStreamlineLibraryDLSSG::UStreamlineLibraryDLSSG
          (UStreamlineLibraryDLSSG *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStreamlineLibraryDLSSG__6B_;
  return this;
}

// ~UStreamlineLibraryDLSSG @ 14de8a8b0

void __thiscall UStreamlineLibraryDLSSG::~UStreamlineLibraryDLSSG(UStreamlineLibraryDLSSG *this)

{
  *(undefined ***)this = &___7UStreamlineLibraryDLSSG__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetDLSSGFrameTiming @ 14de8a950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UStreamlineLibraryDLSSG::GetDLSSGFrameTiming(float *param_1,int *param_2)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDLSSGLibrary();
  if (bVar1) {
    GetStreamlineDLSSGFrameTiming(param_1,param_2);
  }
  else if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDLSSG::GetDLSSGFrameTiming",0x2c,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// GetDLSSGMode @ 14de8aa20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineDLSSGMode __cdecl UStreamlineLibraryDLSSG::GetDLSSGMode(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  IConsoleManager *pIVar4;
  int *piVar5;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDLSSGLibrary();
  if (bVar1) {
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar4 = IConsoleManager::Get();
      CVarEnable = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.Streamline.DLSSG.Enable",1);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pIVar4 = IConsoleManager::Get();
      CVarFramesToGenerate =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.Streamline.DLSSG.FramesToGenerate",1);
      _Init_thread_footer(&::_TSS1);
    }
    if ((CVarEnable != (IConsoleVariable *)0x0) && (CVarFramesToGenerate != (IConsoleVariable *)0x0)
       ) {
      iVar2 = (**(code **)(*(longlong *)CVarFramesToGenerate + 200))();
      iVar3 = (**(code **)(*(longlong *)CVarEnable + 200))();
      if (iVar3 != 0) {
        if (iVar3 == 2) {
          return Auto;
        }
        if (iVar2 == 1) {
          return On2X;
        }
        if (iVar2 == 2) {
          return On3X;
        }
        if (iVar2 == 3) {
          return On4X;
        }
        if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_r_Strea_152d66dd0,
                     (FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
        }
      }
    }
  }
  else if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDLSSG::GetDLSSGMode",0x25,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return Off;
}

// GetDLSSOnScreenMessages @ 14de8ac40

void __cdecl
UStreamlineLibraryDLSSG::GetDLSSOnScreenMessages
          (TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
           *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineDLSSG\\Source\\StreamlineDLSSGBlueprint\\Private\\StreamlineLibraryDLSSG.cpp"
                       ,0x4a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TryInitDLSSGLibrary();
  return;
}

// GetDefaultDLSSGMode @ 14de8ac90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineDLSSGMode __cdecl UStreamlineLibraryDLSSG::GetDefaultDLSSGMode(void)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDLSSGLibrary();
  if (bVar1) {
    bVar1 = IsDLSSGSupported();
    if (bVar1) {
      bVar1 = IsDLSSGModeSupported(Auto);
      if (bVar1) {
        return Auto;
      }
    }
  }
  else if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDLSSG::GetDefaultDLSSGMode",0x2c,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return Off;
}

// GetPrivateStaticClass @ 14de8ad60

UClass * __cdecl UStreamlineLibraryDLSSG::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineDLSSGBlueprint",L"StreamlineLibraryDLSSG",
               &Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton,
               StaticRegisterNativesUStreamlineLibraryDLSSG,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamlineLibraryDLSSG>,
               InternalVTableHelperCtorCaller<UStreamlineLibraryDLSSG>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryDLSSG.InnerSingleton;
}

// GetSupportedDLSSGModes @ 14de8ae20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<EStreamlineDLSSGMode,TSizedDefaultAllocator<32>_> * __cdecl
UStreamlineLibraryDLSSG::GetSupportedDLSSGModes
          (TArray<EStreamlineDLSSGMode,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UEnum *pUVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  TArray<EStreamlineDLSSGMode,TSizedDefaultAllocator<32>_> *pTVar7;
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
  bVar4 = TryInitDLSSGLibrary();
  if (bVar4) {
    if (Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_StreamlineDLSSGBlueprint();
      Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_StreamlineDLSSGBlueprint_EStreamlineDLSSGMode,
                         (UObject *)pUVar6,L"EStreamlineDLSSGMode");
    }
    pUVar3 = Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton;
    iVar5 = ((Z_Registration_Info_UEnum_EStreamlineDLSSGMode.OuterSingleton)->Names).NumValues;
    if (0 < iVar5 + -1) {
      do {
        if (((iVar9 < 0) || (iVar5 <= iVar9)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<EStreamlineDLSSGMode,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        pTVar8 = UEnum::FNameData::operator[](&pUVar3->Names,&local_160,iVar9);
        local_168[0] = (FScriptContainerElement)pTVar8->field_0x8;
        bVar4 = IsDLSSGModeSupported((EStreamlineDLSSGMode)local_168[0]);
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
              pTVar7 = (TArray<EStreamlineDLSSGMode,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
  else if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UStreamlineLibraryDLSSG::GetSupportedDLSSGModes",0x2f,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return __return_storage_ptr__;
}

// IsDLSSGModeSupported @ 14de8b070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UStreamlineLibraryDLSSG::IsDLSSGModeSupported(EStreamlineDLSSGMode param_1)

{
  bool bVar1;
  undefined1 auStack_168 [32];
  int local_148;
  int local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar1 = TryInitDLSSGLibrary();
  if (bVar1) {
    bVar1 = ValidateEnumValue<enum_EStreamlineDLSSGMode>
                      (param_1,"UStreamlineLibraryDLSSG::IsDLSSGModeSupported");
    if (bVar1) {
      if (param_1 != Off) {
        bVar1 = IsDLSSGSupported();
        if (!bVar1) {
          return false;
        }
        local_148 = 0;
        local_144[0] = 0;
        GetStreamlineDLSSGMinMaxGeneratedFrames(&local_148,local_144);
        if (param_1 != On2X) {
          if (param_1 == On3X) {
            if (2 < local_148) {
              return false;
            }
            if (local_144[0] < 2) {
              return false;
            }
            return true;
          }
          if (param_1 == On4X) {
            if (3 < local_148) {
              return false;
            }
            if (local_144[0] < 3) {
              return false;
            }
            return true;
          }
          if (param_1 != Auto) {
            return false;
          }
        }
        if (1 < local_148) {
          return false;
        }
        if (local_144[0] < 1) {
          return false;
        }
      }
      return true;
    }
  }
  else if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDLSSG::IsDLSSGModeSupported",0x2d,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// IsDLSSGSupported @ 14de8b1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UStreamlineLibraryDLSSG::IsDLSSGSupported(void)

{
  bool bVar1;
  EStreamlineFeatureSupport EVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDLSSGLibrary();
  if (!bVar1) {
    if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UStreamlineLibraryDLSSG::IsDLSSGSupported",0x29,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  EVar2 = QueryDLSSGSupport();
  return EVar2 == Supported;
}

// QueryDLSSGSupport @ 14de8b270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineFeatureSupport __cdecl UStreamlineLibraryDLSSG::QueryDLSSGSupport(void)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = TryInitDLSSGLibrary();
  if (!bVar1) {
    if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UStreamlineLibraryDLSSG::QueryDLSSGSupport",0x2a,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return NotSupported;
  }
  return DLSSGSupport;
}

// SetDLSSGMode @ 14de8b330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UStreamlineLibraryDLSSG::SetDLSSGMode(EStreamlineDLSSGMode param_1)

{
  longlong lVar1;
  code *pcVar2;
  IConsoleVariable *pIVar3;
  bool bVar4;
  IConsoleManager *pIVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  FString local_1d8;
  FString local_1c8;
  uint local_1b8;
  undefined1 local_1b4;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  uint local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined1 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 local_178 [12];
  undefined1 local_16c [20];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar4 = TryInitDLSSGLibrary();
  if (bVar4) {
    bVar4 = ValidateEnumValue<enum_EStreamlineDLSSGMode>
                      (param_1,"UStreamlineLibraryDLSSG::SetDLSSGMode");
    if (bVar4) {
      uVar8 = (ulonglong)_tls_index;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar5 = IConsoleManager::Get();
        CVarEnable = (IConsoleVariable *)
                     (**(code **)((longlong)*pIVar5 + 0xc0))(pIVar5,L"r.Streamline.DLSSG.Enable",1);
        _Init_thread_footer(&::_TSS0);
      }
      if (CVarEnable != (IConsoleVariable *)0x0) {
        local_1e8 = 0;
        if (((param_1 != Off) &&
            (((On4X < param_1 || ((0x80820000U >> (param_1 & 0x1f) & 1) == 0)) && (param_1 != Auto))
            )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineDLSSG\\Source\\StreamlineDLSSGBlueprint\\Private\\StreamlineLibraryDLSSG.cpp"
                                      ,200,
                                      L"dear DLSS-FG plugin developer, please support new enum type!"
                                     ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pIVar3 = CVarEnable;
        local_1b0 = local_1e8;
        local_1a8 = 0;
        local_1b4 = 1;
        local_1a0 = 0x1000000;
        local_1a4 = 0xf000000;
        local_1b8 = (**(code **)(*(longlong *)CVarEnable + 0x18))(CVarEnable);
        local_1b8 = local_1b8 & 0xff000000;
        ::FString::PrintfImpl(&local_1d8,L"%d");
        lVar1 = *(longlong *)pIVar3;
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_1d8.Data.ArrayNum != 0) {
          FVar7.Data = local_1d8.Data.AllocatorInstance.Data;
        }
        uVar6 = (**(code **)(lVar1 + 0xa8))(pIVar3,local_178,&local_1b8);
        (**(code **)(lVar1 + 0xb0))(pIVar3,FVar7.Data,uVar6);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
           ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pIVar5 = IConsoleManager::Get();
        CVarFramesToGenerate =
             (IConsoleVariable *)
             (**(code **)((longlong)*pIVar5 + 0xc0))
                       (pIVar5,L"r.Streamline.DLSSG.FramesToGenerate",1);
        _Init_thread_footer(&::_TSS1);
      }
      if (CVarFramesToGenerate != (IConsoleVariable *)0x0) {
        local_1e0 = 0;
        if (((param_1 != Off) && (param_1 != On2X)) &&
           ((param_1 != On3X &&
            (((param_1 != On4X && (param_1 != Auto)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineDLSSG\\Source\\StreamlineDLSSGBlueprint\\Private\\StreamlineLibraryDLSSG.cpp"
                                 ,0xf5,
                                 L"dear DLSS-FG plugin developer, please support new enum type!"),
             bVar4)))))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pIVar3 = CVarFramesToGenerate;
        local_190 = local_1e0;
        local_188 = 0;
        local_194 = 1;
        local_180 = 0x1000000;
        local_184 = 0xf000000;
        local_198 = (**(code **)(*(longlong *)CVarFramesToGenerate + 0x18))(CVarFramesToGenerate);
        local_198 = local_198 & 0xff000000;
        ::FString::PrintfImpl(&local_1c8,L"%d");
        lVar1 = *(longlong *)pIVar3;
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_1c8.Data.ArrayNum != 0) {
          FVar7.Data = local_1c8.Data.AllocatorInstance.Data;
        }
        uVar6 = (**(code **)(lVar1 + 0xa8))(pIVar3,local_16c,&local_198);
        (**(code **)(lVar1 + 0xb0))(pIVar3,FVar7.Data,uVar6);
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
      }
      if (param_1 != Off) {
        bVar4 = IsInGameThread();
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineDLSSG\\Source\\StreamlineDLSSGBlueprint\\Private\\StreamlineLibraryDLSSG.cpp"
                               ,0x114,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = IsDLSSGModeSupported(param_1);
        DLSSErrorState.bIsDLSSGModeUnsupported = !bVar4;
        DLSSErrorState.InvalidDLSSGMode = param_1;
      }
    }
  }
  else if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UStreamlineLibraryDLSSG::SetDLSSGMode",0x25,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  return;
}

// Shutdown @ 14de8b780

void __cdecl UStreamlineLibraryDLSSG::Shutdown(void)

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
  
  FVar2.ID = DLSSOnScreenMessagesDelegateHandle.ID;
  if (DLSSOnScreenMessagesDelegateHandle.ID != 0) {
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
    DLSSOnScreenMessagesDelegateHandle.ID = 0;
  }
  return;
}

// Startup @ 14de8b8e0

void __cdecl UStreamlineLibraryDLSSG::Startup(void)

{
  EStreamlineFeatureSupport EVar1;
  
  TryInitDLSSGLibrary();
  EVar1 = QueryDLSSGSupport();
  UStreamlineLibrary::RegisterFeatureSupport(DLSSG,EVar1);
  return;
}

// StaticRegisterNativesUStreamlineLibraryDLSSG @ 14de8b910

void __cdecl UStreamlineLibraryDLSSG::StaticRegisterNativesUStreamlineLibraryDLSSG(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UStreamlineLibraryDLSSG_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryInitDLSSGLibrary @ 14de8b950

bool __cdecl UStreamlineLibraryDLSSG::TryInitDLSSGLibrary(void)

{
  bool bVar1;
  char cVar2;
  EStreamlineSupport EVar3;
  EStreamlineFeatureSupport EVar4;
  FDelegateHandle FVar5;
  FStreamlineRHI *pFVar6;
  undefined1 local_res8 [32];
  
  if (!bDLSSGLibraryInitialized) {
    if (DLSSOnScreenMessagesDelegateHandle.ID == 0) {
      FVar5 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
              ::AddStatic<>(&FCoreDelegates::OnGetOnScreenMessages,
                            (_func___cdecl_void_TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_ptr
                             *)local_res8);
                    /* WARNING: Load size is inaccurate */
      DLSSOnScreenMessagesDelegateHandle.ID = *FVar5.ID;
    }
    bVar1 = IsStreamlineSupported();
    if (bVar1) {
      pFVar6 = GetPlatformStreamlineRHI();
      cVar2 = (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6);
      if (cVar2 == '\0') {
        bDLSSGLibraryInitialized = true;
        DLSSGSupport = NotSupportedByRHI;
        return true;
      }
      EVar4 = QueryStreamlineDLSSGSupport();
      DLSSGSupport = ToUStreamlineFeatureSupport(EVar4);
      bDLSSGLibraryInitialized = true;
      return true;
    }
    EVar3 = GetPlatformStreamlineSupport();
    bDLSSGLibraryInitialized = true;
    DLSSGSupport = NotSupported;
    if (EVar3 == NotSupportedIncompatibleRHI) {
      DLSSGSupport = NotSupportedByRHI;
    }
  }
  return true;
}

// execGetDLSSGFrameTiming @ 14de8bad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDLSSG::execGetDLSSGFrameTiming(UObject *param_1,FFrame *param_2,void *param_3)

{
  float *pfVar1;
  FProperty *pFVar2;
  bool bVar3;
  float *pfVar4;
  int *piVar5;
  undefined1 auStack_178 [32];
  float local_158;
  int local_154 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  pfVar1 = (float *)param_2->MostRecentPropertyAddress;
  local_154[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar4 = &local_158;
  if (pfVar1 != (float *)0x0) {
    pfVar4 = pfVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_154,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_154);
  }
  piVar5 = local_154;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar5 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar3 = TryInitDLSSGLibrary();
  if (bVar3) {
    GetStreamlineDLSSGFrameTiming(pfVar4,piVar5);
  }
  else if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UStreamlineLibraryDLSSG::GetDLSSGFrameTiming",0x2c,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return;
}

// execGetDLSSGMode @ 14de8bc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDLSSG::execGetDLSSGMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  IConsoleManager *pIVar4;
  int *piVar5;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDLSSGLibrary();
  if (bVar1) {
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar4 = IConsoleManager::Get();
      CVarEnable = (IConsoleVariable *)
                   (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.Streamline.DLSSG.Enable",1);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pIVar4 = IConsoleManager::Get();
      CVarFramesToGenerate =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.Streamline.DLSSG.FramesToGenerate",1);
      _Init_thread_footer(&::_TSS1);
    }
    if ((CVarEnable == (IConsoleVariable *)0x0) || (CVarFramesToGenerate == (IConsoleVariable *)0x0)
       ) {
      *(undefined1 *)param_3 = 0;
    }
    else {
      iVar2 = (**(code **)(*(longlong *)CVarFramesToGenerate + 200))();
      iVar3 = (**(code **)(*(longlong *)CVarEnable + 200))();
      if (iVar3 != 0) {
        if (iVar3 == 2) {
          *(undefined1 *)param_3 = 0xfb;
          return;
        }
        if (iVar2 == 1) {
          *(undefined1 *)param_3 = 0x11;
          return;
        }
        if (iVar2 == 2) {
          *(undefined1 *)param_3 = 0x17;
          return;
        }
        if (iVar2 == 3) {
          *(undefined1 *)param_3 = 0x1f;
          return;
        }
        if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_r_Strea_152d66dd0,
                     (FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
        }
      }
      *(undefined1 *)param_3 = 0;
    }
  }
  else {
    if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UStreamlineLibraryDLSSG::GetDLSSGMode",0x25,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execGetDefaultDLSSGMode @ 14de8bea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryDLSSG::execGetDefaultDLSSGMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = TryInitDLSSGLibrary();
  if (bVar1) {
    bVar1 = IsDLSSGSupported();
    if (bVar1) {
      bVar1 = IsDLSSGModeSupported(Auto);
      *(byte *)param_3 = -bVar1 & 0xfb;
      return;
    }
  }
  else if (1 < (byte)LogStreamlineDLSSGBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryDLSSG::GetDefaultDLSSGMode",0x2c,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineDLSSGBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetSupportedDLSSGModes @ 14de8bf80

void __cdecl
UStreamlineLibraryDLSSG::execGetSupportedDLSSGModes(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<EStreamlineDLSSGMode,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<EStreamlineDLSSGMode,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetSupportedDLSSGModes(&local_18);
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

// execIsDLSSGModeSupported @ 14de8c000

void __cdecl
UStreamlineLibraryDLSSG::execIsDLSSGModeSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  EStreamlineDLSSGMode local_res10 [24];
  
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
  bVar2 = IsDLSSGModeSupported(local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsDLSSGSupported @ 14de8c080

void __cdecl
UStreamlineLibraryDLSSG::execIsDLSSGSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsDLSSGSupported();
  *(bool *)param_3 = bVar1;
  return;
}

// execQueryDLSSGSupport @ 14de8c0b0

void __cdecl
UStreamlineLibraryDLSSG::execQueryDLSSGSupport(UObject *param_1,FFrame *param_2,void *param_3)

{
  EStreamlineFeatureSupport EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = QueryDLSSGSupport();
  *(EStreamlineFeatureSupport *)param_3 = EVar1;
  return;
}

// execSetDLSSGMode @ 14de8c0e0

void __cdecl
UStreamlineLibraryDLSSG::execSetDLSSGMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EStreamlineDLSSGMode local_res10 [24];
  
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
  SetDLSSGMode(local_res10[0]);
  return;
}

