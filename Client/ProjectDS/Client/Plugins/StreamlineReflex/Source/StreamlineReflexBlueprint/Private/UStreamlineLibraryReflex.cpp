// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineReflexBlueprint
// Functions: 28

// StaticClass @ 14de8c170

UClass * __cdecl UStreamlineLibraryReflex::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineReflexBlueprint",L"StreamlineLibraryReflex",
               &Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton,
               StaticRegisterNativesUStreamlineLibraryReflex,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamlineLibraryReflex>,
               InternalVTableHelperCtorCaller<UStreamlineLibraryReflex>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton;
}

// UStreamlineLibraryReflex @ 14de8cac0

UStreamlineLibraryReflex * __thiscall
UStreamlineLibraryReflex::UStreamlineLibraryReflex
          (UStreamlineLibraryReflex *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStreamlineLibraryReflex__6B_;
  return this;
}

// UStreamlineLibraryReflex @ 14de8caf0

UStreamlineLibraryReflex * __thiscall
UStreamlineLibraryReflex::UStreamlineLibraryReflex
          (UStreamlineLibraryReflex *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStreamlineLibraryReflex__6B_;
  return this;
}

// ~UStreamlineLibraryReflex @ 14de8cb20

void __thiscall UStreamlineLibraryReflex::~UStreamlineLibraryReflex(UStreamlineLibraryReflex *this)

{
  *(undefined ***)this = &___7UStreamlineLibraryReflex__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetDefaultReflexMode @ 14de8cbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineReflexMode __cdecl UStreamlineLibraryReflex::GetDefaultReflexMode(void)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = FStreamlineLibraryImplementationBase::TryInitLibrary();
  if (!bVar1) {
    if (1 < (byte)LogStreamlineReflexBlueprint._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UStreamlineLibraryReflex::GetDefaultReflexMode",0x2e,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineReflexBlueprint);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return Off;
  }
  bVar1 = IsReflexSupported();
  return bVar1;
}

// GetGameLatencyInMs @ 14de8cc90

float __cdecl UStreamlineLibraryReflex::GetGameLatencyInMs(void)

{
  FScriptContainerElement *pFVar1;
  FStreamlineLatencyMarkers *pFVar2;
  IModularFeatures *this;
  FStreamlineLatencyMarkers *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  float fVar6;
  undefined1 local_res8 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_28 [2];
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_28,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar4 = (int)local_28[0]._8_8_;
  pFVar1 = local_28[0].AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_28[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_28[0]._8_8_ != iVar4) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar5.Data == pFVar1) break;
    pFVar2 = *(FStreamlineLatencyMarkers **)FVar5.Data;
    pFVar3 = GetStreamlineReflexLatencyMarkerModule();
    if (pFVar2 == pFVar3) {
      fVar6 = (float)(**(code **)(pFVar2->_padding_ + 0x80))(pFVar2);
LAB_14de8cd40:
      if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].AllocatorInstance.Data);
      }
      return fVar6;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  fVar6 = 0.0;
  goto LAB_14de8cd40;
}

// GetGameToRenderLatencyInMs @ 14de8cdc0

float __cdecl UStreamlineLibraryReflex::GetGameToRenderLatencyInMs(void)

{
  FScriptContainerElement *pFVar1;
  FStreamlineLatencyMarkers *pFVar2;
  IModularFeatures *this;
  FStreamlineLatencyMarkers *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  float fVar6;
  undefined1 local_res8 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_28 [2];
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_28,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar4 = (int)local_28[0]._8_8_;
  pFVar1 = local_28[0].AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_28[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_28[0]._8_8_ != iVar4) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar5.Data == pFVar1) break;
    pFVar2 = *(FStreamlineLatencyMarkers **)FVar5.Data;
    pFVar3 = GetStreamlineReflexLatencyMarkerModule();
    if (pFVar2 == pFVar3) {
      fVar6 = (float)(**(code **)(pFVar2->_padding_ + 0x78))(pFVar2);
LAB_14de8ce6d:
      if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].AllocatorInstance.Data);
      }
      return fVar6;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  fVar6 = 0.0;
  goto LAB_14de8ce6d;
}

// GetPrivateStaticClass @ 14de8cee0

UClass * __cdecl UStreamlineLibraryReflex::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineReflexBlueprint",L"StreamlineLibraryReflex",
               &Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton,
               StaticRegisterNativesUStreamlineLibraryReflex,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamlineLibraryReflex>,
               InternalVTableHelperCtorCaller<UStreamlineLibraryReflex>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibraryReflex.InnerSingleton;
}

// GetReflexMode @ 14de8cfa0

/* WARNING: Enum "Type": Some values do not have unique names */

EStreamlineReflexMode __cdecl UStreamlineLibraryReflex::GetReflexMode(void)

{
  FScriptContainerElement *pFVar1;
  FStreamlineMaxTickRateHandler *pFVar2;
  char cVar3;
  EStreamlineReflexMode EVar4;
  IModularFeatures *this;
  FStreamlineMaxTickRateHandler *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_18;
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
            (this,&local_18,
             `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar6 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar7.Data = local_18.AllocatorInstance.Data;
  do {
    if (local_18.ArrayNum != iVar6) {
      `TCheckedPointerIterator<IMaxTickRateHandlerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar1) goto LAB_14de8d07b;
    pFVar2 = *(FStreamlineMaxTickRateHandler **)FVar7.Data;
    pFVar5 = GetStreamlineReflexMaxTickRateHandler();
    if (pFVar2 == pFVar5) {
      cVar3 = (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      if (cVar3 != '\0') {
        EVar4 = (**(code **)(*(longlong *)pFVar2 + 0x28))(pFVar2);
        if ((EVar4 & Boost) == 2) {
          if (1 < (byte)LogStreamlineReflexBlueprint._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)&PTR_u_Invalid_t_Strea_152d67d90,
                       (FLogCategoryBase *)&LogStreamlineReflexBlueprint);
          }
LAB_14de8d07b:
          EVar4 = Off;
        }
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
        return EVar4;
      }
    }
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// GetRenderLatencyInMs @ 14de8d0f0

float __cdecl UStreamlineLibraryReflex::GetRenderLatencyInMs(void)

{
  FScriptContainerElement *pFVar1;
  FStreamlineLatencyMarkers *pFVar2;
  IModularFeatures *this;
  FStreamlineLatencyMarkers *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  float fVar6;
  undefined1 local_res8 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_28 [2];
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_28,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar4 = (int)local_28[0]._8_8_;
  pFVar1 = local_28[0].AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_28[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_28[0]._8_8_ != iVar4) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar5.Data == pFVar1) break;
    pFVar2 = *(FStreamlineLatencyMarkers **)FVar5.Data;
    pFVar3 = GetStreamlineReflexLatencyMarkerModule();
    if (pFVar2 == pFVar3) {
      fVar6 = (float)(**(code **)(pFVar2->_padding_ + 0x88))(pFVar2);
LAB_14de8d1a0:
      if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].AllocatorInstance.Data);
      }
      return fVar6;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  fVar6 = 0.0;
  goto LAB_14de8d1a0;
}

// GetSupportedReflexModes @ 14de8d220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<EStreamlineReflexMode,TSizedDefaultAllocator<32>_> * __cdecl
UStreamlineLibraryReflex::GetSupportedReflexModes
          (TArray<EStreamlineReflexMode,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UEnum *pUVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  TArray<EStreamlineReflexMode,TSizedDefaultAllocator<32>_> *pTVar7;
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
  bVar4 = FStreamlineLibraryImplementationBase::TryInitLibrary();
  if (bVar4) {
    if (Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_StreamlineReflexBlueprint();
      Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_StreamlineReflexBlueprint_EStreamlineReflexMode,
                         (UObject *)pUVar6,L"EStreamlineReflexMode");
    }
    pUVar3 = Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton;
    iVar5 = ((Z_Registration_Info_UEnum_EStreamlineReflexMode.OuterSingleton)->Names).NumValues;
    if (0 < iVar5 + -1) {
      do {
        if (((iVar9 < 0) || (iVar5 <= iVar9)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<EStreamlineReflexMode,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        pTVar8 = UEnum::FNameData::operator[](&pUVar3->Names,&local_160,iVar9);
        local_168[0] = (FScriptContainerElement)pTVar8->field_0x8;
        bVar4 = IsReflexModeSupported((EStreamlineReflexMode)local_168[0]);
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
              pTVar7 = (TArray<EStreamlineReflexMode,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
  else if (1 < (byte)LogStreamlineReflexBlueprint._0_1_) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UStreamlineLibraryReflex::GetSupportedReflexModes",0x31,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineReflexBlueprint);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return __return_storage_ptr__;
}

// IsReflexModeSupported @ 14de8d470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UStreamlineLibraryReflex::IsReflexModeSupported(EStreamlineReflexMode param_1)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = FStreamlineLibraryImplementationBase::TryInitLibrary();
  if (bVar1) {
    bVar1 = ValidateEnumValue<enum_EStreamlineReflexMode>
                      (param_1,"UStreamlineLibraryReflex::IsReflexModeSupported");
    if ((bVar1) && ((param_1 == Off || (bVar1 = IsReflexSupported(), bVar1)))) {
      return true;
    }
  }
  else if (1 < (byte)LogStreamlineReflexBlueprint._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UStreamlineLibraryReflex::IsReflexModeSupported",0x2f,Yes);
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineReflexBlueprint);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// IsReflexSupported @ 14de8d540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UStreamlineLibraryReflex::IsReflexSupported(void)

{
  bool bVar1;
  EStreamlineFeatureSupport EVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar1 = FStreamlineLibraryImplementationBase::TryInitLibrary();
  if (!bVar1) {
    if (1 < (byte)LogStreamlineReflexBlueprint._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UStreamlineLibraryReflex::IsReflexSupported",0x2b,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineReflexBlueprint);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  EVar2 = QueryReflexSupport();
  return EVar2 == Supported;
}

// QueryReflexSupport @ 14de8d610

EStreamlineFeatureSupport __cdecl UStreamlineLibraryReflex::QueryReflexSupport(void)

{
  FScriptContainerElement *pFVar1;
  FStreamlineMaxTickRateHandler *pFVar2;
  FStreamlineLatencyMarkers *pFVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  IModularFeatures *pIVar7;
  FStreamlineMaxTickRateHandler *pFVar8;
  FStreamlineLatencyMarkers *pFVar9;
  int iVar10;
  EStreamlineFeatureSupport EVar11;
  ForAnyElementType FVar12;
  int *piVar13;
  undefined1 local_res8 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_28;
  
  bVar4 = false;
  pIVar7 = IModularFeatures::Get();
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if (*piVar13 <
      `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
            (pIVar7,&local_28,
             `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar10 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar10 * 8;
  FVar12.Data = local_28.AllocatorInstance.Data;
LAB_14de8d682:
  do {
    if (local_28.ArrayNum != iVar10) {
      `TCheckedPointerIterator<IMaxTickRateHandlerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar12.Data == pFVar1) break;
    pFVar2 = *(FStreamlineMaxTickRateHandler **)FVar12.Data;
    pFVar8 = GetStreamlineReflexMaxTickRateHandler();
    if (pFVar2 == pFVar8) {
      if (!bVar4) {
        cVar6 = (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2);
        if (cVar6 == '\0') {
          FVar12.Data = FVar12.Data + 8;
          goto LAB_14de8d682;
        }
      }
      bVar4 = true;
    }
    FVar12.Data = FVar12.Data + 8;
  } while( true );
  bVar5 = false;
  pIVar7 = IModularFeatures::Get();
  if (*piVar13 <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (pIVar7,&local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar10 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar10 * 8;
  FVar12.Data = local_38.AllocatorInstance.Data;
LAB_14de8d710:
  do {
    if (local_38.ArrayNum != iVar10) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar12.Data == pFVar1) {
      if ((bVar4) && (bVar5)) {
        EVar11 = Supported;
      }
      else {
        EVar11 = NotSupported;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return EVar11;
    }
    pFVar3 = *(FStreamlineLatencyMarkers **)FVar12.Data;
    pFVar9 = GetStreamlineReflexLatencyMarkerModule();
    if (pFVar3 == pFVar9) {
      if (!bVar5) {
        cVar6 = (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3);
        if (cVar6 == '\0') {
          FVar12.Data = FVar12.Data + 8;
          goto LAB_14de8d710;
        }
      }
      bVar5 = true;
    }
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// SetReflexMode @ 14de8d830

void __cdecl UStreamlineLibraryReflex::SetReflexMode(EStreamlineReflexMode param_1)

{
  FScriptContainerElement *pFVar1;
  FStreamlineMaxTickRateHandler *pFVar2;
  bool bVar3;
  IModularFeatures *this;
  FStreamlineMaxTickRateHandler *pFVar4;
  int iVar5;
  ForAnyElementType FVar6;
  undefined1 local_res10 [8];
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_28;
  
  bVar3 = ValidateEnumValue<enum_EStreamlineReflexMode>
                    (param_1,"UStreamlineLibraryReflex::SetReflexMode");
  if (bVar3) {
    this = IModularFeatures::Get();
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MaxTickRateHandler");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
              (this,&local_28,
               `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
               ::__l2::FeatureName);
    iVar5 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar5 * 8;
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar5) {
        `TCheckedPointerIterator<IMaxTickRateHandlerModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (FVar6.Data == pFVar1) break;
      pFVar2 = *(FStreamlineMaxTickRateHandler **)FVar6.Data;
      pFVar4 = GetStreamlineReflexMaxTickRateHandler();
      if (pFVar2 == pFVar4) {
        (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2,param_1 != Off);
        (**(code **)(*(longlong *)pFVar2 + 0x20))(pFVar2,param_1);
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// Shutdown @ 14de8d980

void __cdecl UStreamlineLibraryReflex::Shutdown(void)

{
  return;
}

// Startup @ 14de8d990

void __cdecl UStreamlineLibraryReflex::Startup(void)

{
  EStreamlineFeatureSupport EVar1;
  
  EVar1 = QueryReflexSupport();
  UStreamlineLibrary::RegisterFeatureSupport(Reflex,EVar1);
  return;
}

// StaticRegisterNativesUStreamlineLibraryReflex @ 14de8d9b0

void __cdecl UStreamlineLibraryReflex::StaticRegisterNativesUStreamlineLibraryReflex(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UStreamlineLibraryReflex_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDefaultReflexMode @ 14de8db40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryReflex::execGetDefaultReflexMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FStreamlineLibraryImplementationBase::TryInitLibrary();
  if (bVar1) {
    bVar1 = IsReflexSupported();
    *(bool *)param_3 = bVar1;
  }
  else {
    if (1 < (byte)LogStreamlineReflexBlueprint._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UStreamlineLibraryReflex::GetDefaultReflexMode",0x2e,Yes);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineReflexBlueprint);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execGetGameLatencyInMs @ 14de8dc10

void __cdecl
UStreamlineLibraryReflex::execGetGameLatencyInMs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FStreamlineLatencyMarkers *pFVar2;
  IModularFeatures *this;
  FStreamlineLatencyMarkers *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined4 uVar6;
  undefined1 local_res10 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"LatencyMarker");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar4 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar4) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    pFVar2 = *(FStreamlineLatencyMarkers **)FVar5.Data;
    pFVar3 = GetStreamlineReflexLatencyMarkerModule();
    if (pFVar2 == pFVar3) {
      uVar6 = (**(code **)(pFVar2->_padding_ + 0x80))(pFVar2);
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
      *(undefined4 *)param_3 = uVar6;
      return;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetGameToRenderLatencyInMs @ 14de8dd60

void __cdecl
UStreamlineLibraryReflex::execGetGameToRenderLatencyInMs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FStreamlineLatencyMarkers *pFVar2;
  IModularFeatures *this;
  FStreamlineLatencyMarkers *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined4 uVar6;
  undefined1 local_res10 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"LatencyMarker");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar4 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar4) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    pFVar2 = *(FStreamlineLatencyMarkers **)FVar5.Data;
    pFVar3 = GetStreamlineReflexLatencyMarkerModule();
    if (pFVar2 == pFVar3) {
      uVar6 = (**(code **)(pFVar2->_padding_ + 0x78))(pFVar2);
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
      *(undefined4 *)param_3 = uVar6;
      return;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetReflexMode @ 14de8deb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStreamlineLibraryReflex::execGetReflexMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FStreamlineMaxTickRateHandler *pFVar2;
  char cVar3;
  byte bVar4;
  IModularFeatures *this;
  FStreamlineMaxTickRateHandler *pFVar5;
  int iVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"MaxTickRateHandler");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
            (this,&local_28,
             `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar6 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar6) {
      `TCheckedPointerIterator<IMaxTickRateHandlerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar7.Data == pFVar1) break;
    pFVar2 = *(FStreamlineMaxTickRateHandler **)FVar7.Data;
    pFVar5 = GetStreamlineReflexMaxTickRateHandler();
    if ((pFVar2 == pFVar5) &&
       (cVar3 = (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2), cVar3 != '\0')) {
      bVar4 = (**(code **)(*(longlong *)pFVar2 + 0x28))(pFVar2);
      if ((bVar4 & 3) == 2) {
        if (1 < (byte)LogStreamlineReflexBlueprint._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Invalid_t_Strea_152d67d90,
                     (FLogCategoryBase *)&LogStreamlineReflexBlueprint);
        }
        bVar4 = 0;
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      *(byte *)param_3 = bVar4;
      return;
    }
    FVar7.Data = FVar7.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetRenderLatencyInMs @ 14de8e020

void __cdecl
UStreamlineLibraryReflex::execGetRenderLatencyInMs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FStreamlineLatencyMarkers *pFVar2;
  IModularFeatures *this;
  FStreamlineLatencyMarkers *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  undefined4 uVar6;
  undefined1 local_res10 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"LatencyMarker");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar4 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar4) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    pFVar2 = *(FStreamlineLatencyMarkers **)FVar5.Data;
    pFVar3 = GetStreamlineReflexLatencyMarkerModule();
    if (pFVar2 == pFVar3) {
      uVar6 = (**(code **)(pFVar2->_padding_ + 0x88))(pFVar2);
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
      *(undefined4 *)param_3 = uVar6;
      return;
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetSupportedReflexModes @ 14de8e170

void __cdecl
UStreamlineLibraryReflex::execGetSupportedReflexModes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<EStreamlineReflexMode,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<EStreamlineReflexMode,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetSupportedReflexModes(&local_18);
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

// execIsReflexModeSupported @ 14de8e1f0

void __cdecl
UStreamlineLibraryReflex::execIsReflexModeSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  EStreamlineReflexMode local_res10 [24];
  
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
  bVar2 = IsReflexModeSupported(local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execIsReflexSupported @ 14de8e270

void __cdecl
UStreamlineLibraryReflex::execIsReflexSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsReflexSupported();
  *(bool *)param_3 = bVar1;
  return;
}

// execQueryReflexSupport @ 14de8e2a0

void __cdecl
UStreamlineLibraryReflex::execQueryReflexSupport(UObject *param_1,FFrame *param_2,void *param_3)

{
  EStreamlineFeatureSupport EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = QueryReflexSupport();
  *(EStreamlineFeatureSupport *)param_3 = EVar1;
  return;
}

// execSetReflexMode @ 14de8e2d0

void __cdecl
UStreamlineLibraryReflex::execSetReflexMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  FStreamlineMaxTickRateHandler *pFVar3;
  EStreamlineReflexMode EVar4;
  bool bVar5;
  IModularFeatures *this;
  FStreamlineMaxTickRateHandler *pFVar6;
  int iVar7;
  ForAnyElementType FVar8;
  EStreamlineReflexMode local_res10 [8];
  undefined1 local_res20 [8];
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_res10[0] = Off;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar5 = ValidateEnumValue<enum_EStreamlineReflexMode>
                    (local_res10[0],"UStreamlineLibraryReflex::SetReflexMode");
  if (bVar5) {
    this = IModularFeatures::Get();
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MaxTickRateHandler");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
              (this,&local_28,
               `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
               ::__l2::FeatureName);
    iVar7 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar7 * 8;
    FVar8.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar7) {
        `TCheckedPointerIterator<IMaxTickRateHandlerModule_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (FVar8.Data == pFVar1) break;
      pFVar3 = *(FStreamlineMaxTickRateHandler **)FVar8.Data;
      pFVar6 = GetStreamlineReflexMaxTickRateHandler();
      if (pFVar3 == pFVar6) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,EVar4 != Off);
        (**(code **)(*(longlong *)pFVar3 + 0x20))(pFVar3,EVar4);
      }
      FVar8.Data = FVar8.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

