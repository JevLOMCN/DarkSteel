// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Env
// Functions: 22

// PropsDisplayNameMap'' @ 1411b75c0

void __cdecl `dynamic_initializer_for_'FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap__);
  return;
}

// sPropNameTOD'' @ 1411b75e0

void __cdecl `dynamic_initializer_for_'UWN_UDS_Subsystem::sPropNameTOD__(void)

{
  ::FString::FString(&UWN_UDS_Subsystem::sPropNameTOD,L"Time of Day");
  atexit(`dynamic_atexit_destructor_for_'UWN_UDS_Subsystem::sPropNameTOD__);
  return;
}

// sUDSPath'' @ 1411b7610

void __cdecl `dynamic_initializer_for_'UWN_UDS_Subsystem::sUDSPath__(void)

{
  ::FString::FString(&UWN_UDS_Subsystem::sUDSPath,
                     L"/Script/Engine.Blueprint\'/Game/UltraDynamicSky/Blueprints/Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C\'"
                    );
  atexit(`dynamic_atexit_destructor_for_'UWN_UDS_Subsystem::sUDSPath__);
  return;
}

// `dynamic_initializer_for_'Env'' @ 1411b7640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__Env__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&Env,L"Env",Log,All);
  atexit(_dynamic_atexit_destructor_for__Env__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWN_Env'' @ 1411b7680

void __cdecl _dynamic_initializer_for__ModuleRegistrantWN_Env__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WN_Env";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WN_Env",6);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWN_EnvModule>::InitializeModule);
  return;
}

// ConstructItems<TTuple<FString_const_,double>,TTuple<FString_const_,double>,int> @ 14a04de50

void __cdecl
ConstructItems<TTuple<FString_const_,double>,TTuple<FString_const_,double>,int>
          (void *param_1,TTuple<FString_const_,double> *param_2,int param_3)

{
  undefined1 *puVar1;
  FString *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FString *)(lVar2 + (longlong)param_2);
      FString::FString(this,(FString *)param_2);
      puVar1 = &param_2->field_0x10;
      param_2 = param_2 + 1;
      this[1].Data.AllocatorInstance.Data = *(FScriptContainerElement **)puVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TTuple<FString_const_,double>,int> @ 14a04dec0

void __cdecl
DestructItems<TTuple<FString_const_,double>,int>(TTuple<FString_const_,double> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FindOrLoadObject<UCurveFloat> @ 14a04f030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCurveFloat * __cdecl
ConstructorHelpersInternal::FindOrLoadObject<UCurveFloat>(FString *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  size_t sVar3;
  UCurveFloat *pUVar4;
  FUObjectItem *this;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar6 = pFVar1 + (longlong)(param_1->Data).ArrayNum * 2;
  pFVar7 = pFVar1;
  if (pFVar6 != pFVar1) {
    do {
      if (*(short *)pFVar7 == 0x2e) {
        if ((int)((longlong)pFVar7 - (longlong)pFVar1 >> 1) != -1) goto LAB_14a04f0e6;
        break;
      }
      pFVar7 = pFVar7 + 2;
    } while (pFVar7 != pFVar6);
    do {
      if (pFVar6 == pFVar1) goto LAB_14a04f0e6;
      pFVar6 = pFVar6 + -2;
    } while (*(short *)pFVar6 != 0x2f);
    iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 1);
    if (iVar5 != -1) {
      ::FString::RightChop(param_1,(FString *)&local_28,iVar5 + 1);
      ::FString::AppendChar(param_1,L'.');
      iVar5 = local_28.Size + -1;
      if (local_28.Size == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(param_1,local_28.DataPtr,iVar5);
      if (local_28.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_28.DataPtr);
      }
    }
  }
LAB_14a04f0e6:
  pUVar2 = Z_Construct_UClass_UCurveFloat_NoRegister();
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  local_18.DataPtr = (wchar_t *)0x0;
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  if ((param_1->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14a04f12c;
  }
  sVar3 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar3;
LAB_14a04f12c:
  pUVar2 = Z_Construct_UClass_UCurveFloat_NoRegister();
  pUVar4 = (UCurveFloat *)
           StaticLoadObject(pUVar2,(UObject *)0x0,&local_28,&local_18,param_2,(UPackageMap *)0x0,
                            true,(FLinkerInstancingContext *)0x0);
  if (pUVar4 != (UCurveFloat *)0x0) {
    this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
    FUObjectItem::SetRootFlags(this,RootSet);
  }
  return pUVar4;
}

// IsObjectPtrEqual<AWN_UDS_GlobalVolume,AActor_*,0> @ 14a04f240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AWN_UDS_GlobalVolume,AActor_*,0>
          (TObjectPtr<AWN_UDS_GlobalVolume> *param_1,AActor **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AWN_UDS_GlobalVolume *)0x0) {
    return (AWN_UDS_GlobalVolume *)*param_2 == (AWN_UDS_GlobalVolume *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == (AWN_UDS_GlobalVolume *)*param_2;
}

// IsObjectPtrEqual<AWN_UDS_GlobalVolume,TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>,0> @ 14a04f260

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<AWN_UDS_GlobalVolume,TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>,0>
          (TObjectPtr<AWN_UDS_GlobalVolume> *param_1,
          TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr> *param_2)

{
  AWN_UDS_GlobalVolume *pAVar1;
  
  pAVar1 = (AWN_UDS_GlobalVolume *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  if ((param_1->field0_0x0).DebugPtr == (AWN_UDS_GlobalVolume *)0x0) {
    return pAVar1 == (AWN_UDS_GlobalVolume *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == pAVar1;
}

// IsObjectPtrEqual<AWN_UDS_LocalVolume,TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>,0> @ 14a04f2a0

bool __cdecl
ObjectPtr_Private::
IsObjectPtrEqual<AWN_UDS_LocalVolume,TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr>,0>
          (TObjectPtr<AWN_UDS_LocalVolume> *param_1,
          TWeakObjectPtr<AWN_UDS_Volume,FWeakObjectPtr> *param_2)

{
  AWN_UDS_LocalVolume *pAVar1;
  
  pAVar1 = (AWN_UDS_LocalVolume *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  if ((param_1->field0_0x0).DebugPtr == (AWN_UDS_LocalVolume *)0x0) {
    return pAVar1 == (AWN_UDS_LocalVolume *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == pAVar1;
}

// IsObjectPtrEqual<AWN_Ultra_Sky,AWN_Ultra_Sky_*,0> @ 14a04f2e0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<AWN_Ultra_Sky,AWN_Ultra_Sky_*,0>
          (TObjectPtr<AWN_Ultra_Sky> *param_1,AWN_Ultra_Sky **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (AWN_Ultra_Sky *)0x0) {
    return *param_2 == (AWN_Ultra_Sky *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UMaterialParameterCollection> @ 14a04f300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMaterialParameterCollection * __cdecl NewObject<UMaterialParameterCollection>(UObject *param_1)

{
  UClass *pUVar1;
  UMaterialParameterCollection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMaterialParameterCollection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWN_ReactComponentContext> @ 14a04f3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_ReactComponentContext * __cdecl NewObject<UWN_ReactComponentContext>(UObject *param_1)

{
  UClass *pUVar1;
  UWN_ReactComponentContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UWN_ReactComponentContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWN_ReactComponentContext *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// `scalar_deleting_destructor' @ 14a04fe50

void * __thiscall
ConstructorHelpers::FObjectFinder<UCurveFloat>::_scalar_deleting_destructor_
          (FObjectFinder<UCurveFloat> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14a04fea0

void * __thiscall FWN_EnvModule::_scalar_deleting_destructor_(FWN_EnvModule *this,uint param_1)

{
  *this = (FWN_EnvModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_WN_Env @ 14a067c80

void __cdecl IMPLEMENT_MODULE_WN_Env(void)

{
  return;
}

// PropsDisplayNameMap'' @ 15041b490

void __cdecl `dynamic_atexit_destructor_for_'FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap__(void)

{
  FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap._72_4_ = 0;
  if (FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap._64_8_ != 0) {
    FMemory::Free((void *)FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FWN_Ultra_Dynamic_Sky::PropsDisplayNameMap);
  return;
}

// sPropNameTOD'' @ 15041b4d0

void __cdecl `dynamic_atexit_destructor_for_'UWN_UDS_Subsystem::sPropNameTOD__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UWN_UDS_Subsystem::sPropNameTOD.Data.AllocatorInstance.Data;
  if (UWN_UDS_Subsystem::sPropNameTOD.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (UWN_UDS_Subsystem::sPropNameTOD.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// sUDSPath'' @ 15041b4f0

void __cdecl `dynamic_atexit_destructor_for_'UWN_UDS_Subsystem::sUDSPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UWN_UDS_Subsystem::sUDSPath.Data.AllocatorInstance.Data;
  if (UWN_UDS_Subsystem::sUDSPath.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (UWN_UDS_Subsystem::sUDSPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Env'' @ 15041b510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__Env__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&Env);
  return;
}

// `dynamic_atexit_destructor_for_'intensityByTimeCurveRef'' @ 15041b530

void __cdecl
`UWN_TODReactNightPolicyComponent::UWN_TODReactNightPolicyComponent'::__l2::
_dynamic_atexit_destructor_for__intensityByTimeCurveRef__(void)

{
  intensityByTimeCurveRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&intensityByTimeCurveRef);
  return;
}

