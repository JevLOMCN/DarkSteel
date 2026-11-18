// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Reflex
// Functions: 51

// Write<> @ 140ca8c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ULONG __cdecl
_tlgWriteTemplate<long___cdecl(_tlgProvider_t_const_*,void_const_*,_GUID_const_*,_GUID_const_*,unsigned_int,_EVENT_DATA_DESCRIPTOR_*),&_tlgWriteTransfer_EventWriteTransfer,_GUID_const_*,_GUID_const_*>
::Write<>(_tlgProvider_t *param_1,void *param_2,_GUID *param_3,_GUID *param_4)

{
  ULONG UVar1;
  undefined1 auStackY_78 [32];
  EVENT_DESCRIPTOR local_40;
  _EVENT_DATA_DESCRIPTOR local_30;
  ushort *local_20;
  uint local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  local_40._0_4_ = (uint)*(byte *)param_2 << 0x18;
  local_40._4_4_ = ZEXT24(*(ushort *)((longlong)param_2 + 1));
  local_40.Keyword = *(ULONGLONG *)((longlong)param_2 + 3);
  local_20 = (ushort *)((longlong)param_2 + 0xb);
  local_30.Ptr = (ULONGLONG)param_1->ProviderMetadataPtr;
  local_30.Size = (ULONG)*(ushort *)local_30.Ptr;
  local_18 = (uint)*local_20;
  local_30.Reserved = 2;
  local_14 = 1;
  UVar1 = EventWriteTransfer(param_1->RegHandle,&local_40,(LPCGUID)param_3,(LPCGUID)param_4,2,
                             &local_30);
  return UVar1;
}

// _tlgEnableCallback @ 140ca8ce0

void __cdecl
_tlgEnableCallback(_GUID *param_1,ulong param_2,uchar param_3,ulong64 param_4,ulong64 param_5,
                  _EVENT_FILTER_DESCRIPTOR *param_6,void *param_7)

{
  if (param_7 != (void *)0x0) {
    if (param_2 == 0) {
      *(undefined4 *)param_7 = 0;
    }
    else if (param_2 == 1) {
      if (param_3 == '\0') {
        *(ulong64 *)((longlong)param_7 + 0x10) = param_4;
        *(undefined4 *)param_7 = 0x100;
        *(ulong64 *)((longlong)param_7 + 0x18) = param_5;
      }
      else {
        *(ulong64 *)((longlong)param_7 + 0x10) = param_4;
        *(uint *)param_7 = param_3 + 1;
        *(ulong64 *)((longlong)param_7 + 0x18) = param_5;
      }
    }
    if (*(code **)((longlong)param_7 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140ca8d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)param_7 + 0x28))(param_1);
      return;
    }
  }
  return;
}

// _tlgWriteTransfer_EventWriteTransfer @ 140ca8d60

ULONG __cdecl
_tlgWriteTransfer_EventWriteTransfer
          (_tlgProvider_t *param_1,void *param_2,_GUID *param_3,_GUID *param_4,uint param_5,
          _EVENT_DATA_DESCRIPTOR *param_6)

{
  ULONG UVar1;
  EVENT_DESCRIPTOR local_18;
  
  local_18._0_4_ = (uint)*(byte *)param_2 << 0x18;
  local_18._4_4_ = ZEXT24(*(ushort *)((longlong)param_2 + 1));
  local_18.Keyword = *(ULONGLONG *)((longlong)param_2 + 3);
  param_6->Ptr = (ulong64)param_1->ProviderMetadataPtr;
  param_6->Size = (uint)*param_1->ProviderMetadataPtr;
  param_6[1].Ptr = (ulong64)((longlong)param_2 + 0xb);
  (param_6->field2_0xc).Reserved = 2;
  param_6[1].Size = (uint)*(ushort *)((longlong)param_2 + 0xb);
  param_6[1].field2_0xc.Reserved = 1;
  UVar1 = EventWriteTransfer(param_1->RegHandle,&local_18,(LPCGUID)param_3,(LPCGUID)param_4,param_5,
                             (PEVENT_DATA_DESCRIPTOR)param_6);
  return UVar1;
}

// `dynamic_initializer_for_'CVarDisableCustomTickRateHandler'' @ 1411ddd00

void __cdecl _dynamic_initializer_for__CVarDisableCustomTickRateHandler__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableCustomTickRateHandler,L"t.DisableCustomTickRateHandler",
             &DisableCustomTickRateHandler,L"Disable Tick Rate Handler",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableCustomTickRateHandler__);
  return;
}

// `dynamic_initializer_for_'CVarDisableLatencyMarkerOptimize'' @ 1411ddd50

void __cdecl _dynamic_initializer_for__CVarDisableLatencyMarkerOptimize__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableLatencyMarkerOptimize,L"t.DisableLatencyMarkerOptimize",
             &DisableLatencyMarkerOptimize,L"Disable Latency Marker Optimize",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableLatencyMarkerOptimize__);
  return;
}

// `dynamic_initializer_for_'CVarDisableLatencyMarkers'' @ 1411ddda0

void __cdecl _dynamic_initializer_for__CVarDisableLatencyMarkers__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableLatencyMarkers,L"t.DisableLatencyMarkers",&DisableLatencyMarkers,
             L"Disable Latency Markers",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableLatencyMarkers__);
  return;
}

// `dynamic_initializer_for_'CVarEnableReflexInEditor'' @ 1411dddf0

void __cdecl _dynamic_initializer_for__CVarEnableReflexInEditor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableReflexInEditor,L"t.EnableReflexInEditor",&bEnableReflexInEditor,
             L"Enable Reflex in the editor",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableReflexInEditor__);
  return;
}

// `dynamic_initializer_for_'LogLatencyMarkers'' @ 1411dde40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLatencyMarkers__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLatencyMarkers,L"LogLatencyMarkers",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLatencyMarkers__);
  return;
}

// `dynamic_initializer_for_'LogMaxTickRateHandler'' @ 1411dde80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMaxTickRateHandler__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMaxTickRateHandler,L"LogMaxTickRateHandler",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMaxTickRateHandler__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantReflex'' @ 1411ddec0

void __cdecl _dynamic_initializer_for__ModuleRegistrantReflex__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Reflex";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Reflex",6);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FReflexModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h__Script_Reflex_1608702755'' @ 1411ddf10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h__Script_Reflex_1608702755__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Reflex",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h__Script_Reflex_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h__Script_Reflex_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Reflex'' @ 1411ddf60

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Reflex__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x6616b34c;
  local_res8[0].DeclarationsHash = 0x3fca2a84;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Reflex,L"/Script/Reflex",
             &Z_Registration_Info_UPackage__Script_Reflex,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14acce970

void * __thiscall FReflexModule::_scalar_deleting_destructor_(FReflexModule *this,uint param_1)

{
  FReflexStatsLatencyMarkers *pFVar1;
  FReflexLatencyMarkers *pFVar2;
  FReflexMaxTickRateHandler *pFVar3;
  
  pFVar1 = (this->ReflexStatsLatencyMarker).Ptr;
  if (pFVar1 != (FReflexStatsLatencyMarkers *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0xe8))(pFVar1,1);
  }
  pFVar2 = (this->ReflexLatencyMarker).Ptr;
  if (pFVar2 != (FReflexLatencyMarkers *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(&pFVar2->_padding_,1);
  }
  pFVar3 = (this->ReflexMaxTickRateHandler).Ptr;
  if (pFVar3 != (FReflexMaxTickRateHandler *)0x0) {
    (**(code **)pFVar3->_padding_)(&pFVar3->_padding_,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UPackage__Script_Reflex @ 14accea00

UPackage * __cdecl Z_Construct_UPackage__Script_Reflex(void)

{
  if (Z_Registration_Info_UPackage__Script_Reflex.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Reflex.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Reflex.OuterSingleton;
}

// Z_Construct_UClass_UReflexBlueprintLibrary @ 14acceb00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UReflexBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UReflexBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UReflexBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UReflexBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UReflexBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UEnum_Reflex_EReflexMode @ 14acceb40

UEnum * __cdecl Z_Construct_UEnum_Reflex_EReflexMode(void)

{
  if (Z_Registration_Info_UEnum_EReflexMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EReflexMode.InnerSingleton,
               &Z_Construct_UEnum_Reflex_EReflexMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EReflexMode.InnerSingleton;
}

// EReflexMode_StaticEnum @ 14acceb80

UEnum * __cdecl EReflexMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EReflexMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Reflex();
    Z_Registration_Info_UEnum_EReflexMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Reflex_EReflexMode,(UObject *)pUVar1,L"EReflexMode");
  }
  return Z_Registration_Info_UEnum_EReflexMode.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14accebc0

void __cdecl
Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled @ 14accebd0

UFunction * __cdecl Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs @ 14accec10

UFunction * __cdecl Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameLatencyInMs_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs @ 14accec50

UFunction * __cdecl Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14accec90

void __cdecl
Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable @ 14acceca0

UFunction * __cdecl Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexAvailable_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode @ 14accece0

UFunction * __cdecl Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReflexBlueprintLibrary_GetReflexMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs @ 14acced20

UFunction * __cdecl Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReflexBlueprintLibrary_GetRenderLatencyInMs_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bEnabled_SetBit @ 14acced60

void __cdecl
Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::
NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled @ 14acced70

UFunction * __cdecl Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode @ 14accedb0

UFunction * __cdecl Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UReflexBlueprintLibrary_SetReflexMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// InternalConstructor<UReflexBlueprintLibrary> @ 14accf490

void __cdecl InternalConstructor<UReflexBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UReflexBlueprintLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UReflexBlueprintLibrary> @ 14accf4c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UReflexBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UReflexBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UReflexBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EReflexMode> @ 14accf570

UEnum * __cdecl StaticEnum<enum_EReflexMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EReflexMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Reflex();
    Z_Registration_Info_UEnum_EReflexMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Reflex_EReflexMode,(UObject *)pUVar1,L"EReflexMode");
  }
  return Z_Registration_Info_UEnum_EReflexMode.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14accf8a8

/* [thunk]:public: virtual void * __ptr64 __cdecl FReflexLatencyMarkers::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FReflexLatencyMarkers::_vector_deleting_destructor__adjustor_8__
          (FReflexLatencyMarkers *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FReflexLatencyMarkers *)&this[-1].GPURenderOffsetMs,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14accf8b8

/* [thunk]:public: virtual void * __ptr64 __cdecl FReflexLatencyMarkers::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FReflexLatencyMarkers::_vector_deleting_destructor__adjustor_16__
          (FReflexLatencyMarkers *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FReflexLatencyMarkers *)&this[-1].DriverOffsetMs,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14accf8c8

/* [thunk]:public: virtual void * __ptr64 __cdecl FReflexMaxTickRateHandler::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FReflexMaxTickRateHandler::_vector_deleting_destructor__adjustor_8__
          (FReflexMaxTickRateHandler *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FReflexMaxTickRateHandler *)&this[-1].LastCustomFlags,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14accf8e0

void * __thiscall
FReflexLatencyMarkers::_scalar_deleting_destructor_(FReflexLatencyMarkers *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__ILatencyMarkerModule__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14accf960

void * __thiscall
FReflexMaxTickRateHandler::_scalar_deleting_destructor_
          (FReflexMaxTickRateHandler *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__IMaxTickRateHandlerModule__;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14accf9c0

void * __thiscall
FReflexStatsLatencyMarkers::_scalar_deleting_destructor_
          (FReflexStatsLatencyMarkers *this,uint param_1)

{
  ~FReflexStatsLatencyMarkers(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14accfa00

void * __thiscall
UReflexBlueprintLibrary::_scalar_deleting_destructor_(UReflexBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UReflexBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeReflexBlueprint @ 14accfa60

void __cdecl EmptyLinkFunctionForGeneratedCodeReflexBlueprint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeReflex_init @ 14accfa70

void __cdecl EmptyLinkFunctionForGeneratedCodeReflex_init(void)

{
  return;
}

// ReflexStatsComponentProviderCb @ 14acd1120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ReflexStatsComponentProviderCb
          (_GUID *param_1,ulong param_2,uchar param_3,ulong64 param_4,ulong64 param_5,
          _EVENT_FILTER_DESCRIPTOR *param_6,void *param_7)

{
  undefined1 auStackY_88 [32];
  uint local_58 [2];
  EVENT_DESCRIPTOR local_50;
  _EVENT_DATA_DESCRIPTOR local_40;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  uint *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (param_2 == 0) {
    g_ReflexStatsEnable = false;
  }
  else {
    local_24 = param_2 - 1;
    if (local_24 == 0) {
      g_ReflexStatsEnable = true;
      return;
    }
    if ((local_24 == 1) && (5 < _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1)) {
      local_58[0] = g_ReflexStatsFlags;
      local_18 = 4;
      local_20 = local_58;
      local_50._4_4_ = ZEXT24((ushort)_tlgEvent._2_2_);
      local_40.Ptr = (ULONGLONG)_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
      local_50.Id = 0;
      local_50.Version = '\0';
      local_50.Channel = '\v';
      local_50.Keyword = 0;
      local_40.Size = (ULONG)*_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
      local_40.Reserved = 2;
      local_30 = 0x1538365fc;
      local_28 = 0x1b;
      local_58[1] = 0x140;
      EventWriteTransfer(_Tlgg_hReflexStatsComponentProviderProv.RegHandle,&local_50,(LPCGUID)0x0,
                         (LPCGUID)0x0,3,&local_40);
      return;
    }
  }
  return;
}

// ReflexStatsPingThreadProc @ 14acd1260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong __cdecl ReflexStatsPingThreadProc(void *param_1)

{
  uint uVar1;
  DWORD DVar2;
  HWND hWnd;
  WPARAM wParam;
  LPARAM lParam;
  undefined1 auStackY_88 [32];
  DWORD local_58 [2];
  EVENT_DESCRIPTOR local_50;
  _EVENT_DATA_DESCRIPTOR local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar1 = rand();
  DVar2 = WaitForSingleObject(g_ReflexStatsQuitEvent,uVar1 % 200 + 100);
  if (DVar2 != 0x102) {
    return 0;
  }
  do {
    if ((g_ReflexStatsEnable != false) && (hWnd = GetForegroundWindow(), hWnd != (HWND)0x0)) {
      local_58[0] = 0;
      GetWindowThreadProcessId(hWnd,local_58);
      DVar2 = GetCurrentProcessId();
      if (DVar2 == local_58[0]) {
        if ((ushort)(g_ReflexStatsVirtualKey - 0x7c) < 3) {
          if (5 < _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1) {
            local_50._4_4_ = ZEXT24((ushort)_rdata_zETW1._2_2_);
            local_40.Ptr = (ULONGLONG)_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
            local_50.Id = 0;
            local_50.Version = '\0';
            local_50.Channel = '\v';
            local_50.Keyword = 0;
            local_40.Size = (ULONG)*_Tlgg_hReflexStatsComponentProviderProv.ProviderMetadataPtr;
            local_40.Reserved = 2;
            local_30 = 0x1538365bc;
            local_28 = 0x14;
            local_24 = 1;
            local_58[1] = 0x140;
            EventWriteTransfer(_Tlgg_hReflexStatsComponentProviderProv.RegHandle,&local_50,
                               (LPCGUID)0x0,(LPCGUID)0x0,2,&local_40);
          }
          PostMessageW(hWnd,0x100,(ulonglong)g_ReflexStatsVirtualKey,1);
          wParam = (WPARAM)g_ReflexStatsVirtualKey;
          lParam = 0xc0000001;
          uVar1 = 0x101;
        }
        else {
          if (g_ReflexStatsWindowMessage == 0) {
            return 0;
          }
          if (5 < _Tlgg_hReflexStatsComponentProviderProv.LevelPlus1) {
            _tlgWriteTemplate<long___cdecl(_tlgProvider_t_const_*,void_const_*,_GUID_const_*,_GUID_const_*,unsigned_int,_EVENT_DATA_DESCRIPTOR_*),&_tlgWriteTransfer_EventWriteTransfer,_GUID_const_*,_GUID_const_*>
            ::Write<>(&_Tlgg_hReflexStatsComponentProviderProv,&_tlgEvent._tlgChannel,(_GUID *)0x0,
                      (_GUID *)0x0);
          }
          lParam = 0;
          wParam = 0;
          uVar1 = g_ReflexStatsWindowMessage;
        }
        PostMessageW(hWnd,uVar1,wParam,lParam);
      }
    }
    uVar1 = rand();
    DVar2 = WaitForSingleObject(g_ReflexStatsQuitEvent,uVar1 % 200 + 100);
  } while (DVar2 == 0x102);
  return 0;
}

// Z_Construct_UClass_UReflexBlueprintLibrary_NoRegister @ 14acd2ac0

UClass * __cdecl Z_Construct_UClass_UReflexBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Reflex",L"ReflexBlueprintLibrary",
               &Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton,
               UReflexBlueprintLibrary::StaticRegisterNativesUReflexBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UReflexBlueprintLibrary>
               ,InternalVTableHelperCtorCaller<UReflexBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton;
}

// IMPLEMENT_MODULE_Reflex @ 14acd3510

void __cdecl IMPLEMENT_MODULE_Reflex(void)

{
  return;
}

// _tlgDefineProvider_annotation__Tlgg_hReflexStatsComponentProviderProv @ 14acd3520

void __cdecl _tlgDefineProvider_annotation__Tlgg_hReflexStatsComponentProviderProv(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableCustomTickRateHandler'' @ 150422a90

void __cdecl _dynamic_atexit_destructor_for__CVarDisableCustomTickRateHandler__(void)

{
  CVarDisableCustomTickRateHandler._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableCustomTickRateHandler);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableLatencyMarkerOptimize'' @ 150422ab0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableLatencyMarkerOptimize__(void)

{
  CVarDisableLatencyMarkerOptimize._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableLatencyMarkerOptimize);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableLatencyMarkers'' @ 150422ad0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableLatencyMarkers__(void)

{
  CVarDisableLatencyMarkers._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableLatencyMarkers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableReflexInEditor'' @ 150422af0

void __cdecl _dynamic_atexit_destructor_for__CVarEnableReflexInEditor__(void)

{
  CVarEnableReflexInEditor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableReflexInEditor);
  return;
}

// `dynamic_atexit_destructor_for_'LogLatencyMarkers'' @ 150422b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLatencyMarkers__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLatencyMarkers);
  return;
}

// `dynamic_atexit_destructor_for_'LogMaxTickRateHandler'' @ 150422b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMaxTickRateHandler__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMaxTickRateHandler);
  return;
}

