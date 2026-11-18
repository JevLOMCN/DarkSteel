// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// StaticClass @ 14b417e50

UClass * __cdecl ADS_AI_GYM_GameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AI_GYM_GameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_GameMode",
               &Z_Registration_Info_UClass_ADS_AI_GYM_GameMode.InnerSingleton,
               StaticRegisterNativesADS_AI_GYM_GameMode,0x428,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_AI_GYM_GameMode>,
               InternalVTableHelperCtorCaller<ADS_AI_GYM_GameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AI_GYM_GameMode.InnerSingleton;
}

// ADS_AI_GYM_GameMode @ 14b41a710

ADS_AI_GYM_GameMode * __thiscall
ADS_AI_GYM_GameMode::ADS_AI_GYM_GameMode(ADS_AI_GYM_GameMode *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->bIsShowDebugWidget = true;
  local_res8 = 0;
  this->_padding_ = (longlong)&___7ADS_AI_GYM_GameMode__6B_;
  (this->LoginWidgetBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DebugScreenBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SyncActorBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SpectatorPawn).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SpectatorPawn).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->LoginWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->LoginWidget).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->DebugScreenWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DebugScreenWidget).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->SyncActorMap = 0;
  *(undefined8 *)&(this->SyncActorMap).field_0x8 = 0;
  *(undefined8 *)&(this->SyncActorMap).field_0x20 = 0;
  *(undefined4 *)&(this->SyncActorMap).field_0x28 = 0;
  *(undefined4 *)&(this->SyncActorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SyncActorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SyncActorMap).field_0x34 = 0;
  *(undefined8 *)&(this->SyncActorMap).field_0x40 = 0;
  *(undefined4 *)&(this->SyncActorMap).field_0x48 = 0;
  ::FString::FString(&this->ServerAddr,"");
  (this->LocalSave).field0_0x0.DebugPtr = (UDS_AI_GYM_LocalSave *)0x0;
  (this->MainCharacterToBossTimer).Handle = 0;
  this->MainCharacterEntityID = 0;
  (this->MainCharacterActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MainCharacterActor).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->BossActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->BossActor).WeakPtr,(FObjectPtr)&local_res8);
  this->DebugStringCount = 1;
  this->DebugStringMax = 8;
  this->FrontEndPort = 0x7d65;
  return this;
}

// ADS_AI_GYM_GameMode @ 14b41a870

ADS_AI_GYM_GameMode * __thiscall
ADS_AI_GYM_GameMode::ADS_AI_GYM_GameMode(ADS_AI_GYM_GameMode *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->bIsShowDebugWidget = true;
  local_res8 = 0;
  this->_padding_ = (longlong)&___7ADS_AI_GYM_GameMode__6B_;
  (this->LoginWidgetBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DebugScreenBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SyncActorBP).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SpectatorPawn).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SpectatorPawn).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->LoginWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->LoginWidget).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->DebugScreenWidget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->DebugScreenWidget).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->SyncActorMap = 0;
  *(undefined8 *)&(this->SyncActorMap).field_0x8 = 0;
  *(undefined8 *)&(this->SyncActorMap).field_0x20 = 0;
  *(undefined4 *)&(this->SyncActorMap).field_0x28 = 0;
  *(undefined4 *)&(this->SyncActorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SyncActorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SyncActorMap).field_0x34 = 0;
  *(undefined8 *)&(this->SyncActorMap).field_0x40 = 0;
  *(undefined4 *)&(this->SyncActorMap).field_0x48 = 0;
  ::FString::FString(&this->ServerAddr,"");
  (this->LocalSave).field0_0x0.DebugPtr = (UDS_AI_GYM_LocalSave *)0x0;
  (this->MainCharacterToBossTimer).Handle = 0;
  this->MainCharacterEntityID = 0;
  (this->MainCharacterActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->MainCharacterActor).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->BossActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->BossActor).WeakPtr,(FObjectPtr)&local_res8);
  this->DebugStringCount = 1;
  this->DebugStringMax = 8;
  this->FrontEndPort = 0x7d65;
  return this;
}

// ~ADS_AI_GYM_GameMode @ 14b41b8b0

void __thiscall ADS_AI_GYM_GameMode::~ADS_AI_GYM_GameMode(ADS_AI_GYM_GameMode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7ADS_AI_GYM_GameMode__6B_;
  pFVar1 = (this->ServerAddr).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SyncActorMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SyncActorMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SyncActorMap);
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b41cc50

UClass * __cdecl ADS_AI_GYM_GameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_AI_GYM_GameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AI_GYM_GameMode",
               &Z_Registration_Info_UClass_ADS_AI_GYM_GameMode.InnerSingleton,
               StaticRegisterNativesADS_AI_GYM_GameMode,0x428,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_AI_GYM_GameMode>,
               InternalVTableHelperCtorCaller<ADS_AI_GYM_GameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_AI_GYM_GameMode.InnerSingleton;
}

// StaticRegisterNativesADS_AI_GYM_GameMode @ 14b41e0e0

void __cdecl ADS_AI_GYM_GameMode::StaticRegisterNativesADS_AI_GYM_GameMode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_ADS_AI_GYM_GameMode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetServerAddr @ 14b41fbb0

void __cdecl ADS_AI_GYM_GameMode::execGetServerAddr(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FString *pFVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetServerAddr((ADS_AI_GYM_GameMode *)param_1);
  if (param_3 != pFVar2) {
    iVar1 = (pFVar2->Data).ArrayNum;
    _Src = (pFVar2->Data).AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(int *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,*(int *)((longlong)param_3 + 0xc),param_3,iVar1,
               (int *)((longlong)param_3 + 0xc));
    if (iVar1 != 0) {
      memcpy(*(void **)param_3,_Src,(longlong)iVar1 * 2);
    }
  }
  return;
}

// execMainCharacterToBoss @ 14b41fca0

void __cdecl
ADS_AI_GYM_GameMode::execMainCharacterToBoss(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  MainCharacterToBoss((ADS_AI_GYM_GameMode *)param_1);
  return;
}

// execOnLoadedDataAsset @ 14b41fcc0

void __cdecl
ADS_AI_GYM_GameMode::execOnLoadedDataAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLoadedDataAsset((ADS_AI_GYM_GameMode *)param_1);
  return;
}

// execOnNetworkConnected @ 14b41fce0

void __cdecl
ADS_AI_GYM_GameMode::execOnNetworkConnected(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnNetworkConnected((ADS_AI_GYM_GameMode *)param_1,local_res10[0] != 0);
  return;
}

// execSetServerAddr @ 14b41fd70

void __cdecl ADS_AI_GYM_GameMode::execSetServerAddr(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  SetServerAddr((ADS_AI_GYM_GameMode *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AppendDebugString @ 14b8685b0

void __thiscall ADS_AI_GYM_GameMode::AppendDebugString(ADS_AI_GYM_GameMode *this,FString *param_1)

{
  bool bVar1;
  UDS_AI_GYM_DebugScreen *pUVar2;
  FString local_28;
  FString local_18;
  
  bVar1 = TWeakObjectPtr<UDS_AI_GYM_DebugScreen,FWeakObjectPtr>::UEOpEquals
                    (&this->DebugScreenWidget,(void *)0x0);
  if (!bVar1) {
    if (this->DebugStringMax < this->DebugStringCount) {
      ::FString::FString(&local_28,"");
    }
    else {
      this->DebugStringCount = this->DebugStringCount + 1;
      ::FString::PrintfImpl(&local_28,L"[%d/%d]");
    }
    if (local_28.Data.ArrayNum < 2) {
      pUVar2 = (UDS_AI_GYM_DebugScreen *)FWeakObjectPtr::Get(&(this->DebugScreenWidget).WeakPtr);
      UDS_AI_GYM_DebugScreen::AppendDebugString(pUVar2,param_1);
    }
    else {
      pUVar2 = (UDS_AI_GYM_DebugScreen *)FWeakObjectPtr::Get(&(this->DebugScreenWidget).WeakPtr);
      ::FString::PrintfImpl(&local_18,L"%s %s");
      UDS_AI_GYM_DebugScreen::AppendDebugString(pUVar2,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateDebugScreen @ 14b86e0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::CreateDebugScreen(ADS_AI_GYM_GameMode *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UDS_LogManager *pUVar6;
  UUserWidget *this_00;
  UObject *pUVar7;
  undefined1 auStackY_178 [32];
  FName local_148;
  ADS_AI_GYM_GameMode *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = (this->DebugScreenBP).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UDS_AI_GYM_DebugScreen_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (local_140 = (ADS_AI_GYM_GameMode *)(this->DebugScreenBP).Class.field0_0x0.DebugPtr,
       local_140 != (ADS_AI_GYM_GameMode *)0x0)) {
      local_148.ComparisonIndex.Value = 0;
      local_148.Number = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_140);
      }
      pUVar5 = AActor::GetWorld((AActor *)this);
      local_140 = (ADS_AI_GYM_GameMode *)
                  CreateWidget<UDS_AI_GYM_DebugScreen,UWorld_*>
                            (pUVar5,(TSubclassOf<UUserWidget>)&local_140,local_148);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_140 != (ADS_AI_GYM_GameMode *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_140);
      }
      FWeakObjectPtr::operator=(&(this->DebugScreenWidget).WeakPtr,(FObjectPtr)&local_140);
      bVar3 = TWeakObjectPtr<UDS_AI_GYM_DebugScreen,FWeakObjectPtr>::UEOpEquals
                        (&this->DebugScreenWidget,(void *)0x0);
      if (!bVar3) {
        this_00 = (UUserWidget *)FWeakObjectPtr::Get(&(this->DebugScreenWidget).WeakPtr);
        UUserWidget::AddToViewport(this_00,9999);
        pUVar7 = FWeakObjectPtr::Get(&(this->DebugScreenWidget).WeakPtr);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_148.ComparisonIndex.Value = 0;
        local_148.Number = 0;
        local_140 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_148,(FObjectPtr)&local_140);
        *(uint *)&pUVar7[0x19].field_0x8 = local_148.ComparisonIndex.Value;
        *(uint *)&pUVar7[0x19].field_0xc = local_148.Number;
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_AI_GYM_GameMode::CreateDebugScreen",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_138.Ptr,0x230,L"DebugScreenWidget is nullptr.");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 != (UDS_LogManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_AI_GYM_GameMode::CreateDebugScreen",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,0x229,L"DebugScreenBP is nullptr.");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// CreateLoginWidget @ 14b86e380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::CreateLoginWidget(ADS_AI_GYM_GameMode *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  UDS_LogManager *pUVar6;
  UUserWidget *this_00;
  TWeakObjectPtr<UUserWidget,FWeakObjectPtr> *this_01;
  undefined1 auStackY_178 [32];
  uint uVar7;
  wchar_t *pwVar8;
  UUserWidget *local_148;
  FName local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = (this->LoginWidgetBP).Class.field0_0x0.DebugPtr;
  if ((pUVar2 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (pUVar2 = (this->LoginWidgetBP).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)) {
      local_140.ComparisonIndex.Value = 0;
      local_140.Number = 0;
      local_148 = (UUserWidget *)pUVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar5 = AActor::GetWorld((AActor *)this);
      this_01 = &this->LoginWidget;
      local_148 = CreateWidget<UUserWidget,UWorld_*>
                            (pUVar5,(TSubclassOf<UUserWidget>)&local_148,local_140);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UUserWidget *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)local_148);
      }
      FWeakObjectPtr::operator=(&this_01->WeakPtr,(FObjectPtr)&local_148);
      bVar3 = TWeakObjectPtr<UUserWidget,FWeakObjectPtr>::UEOpEquals(this_01,(void *)0x0);
      if (!bVar3) {
        this_00 = (UUserWidget *)FWeakObjectPtr::Get(&this_01->WeakPtr);
        UUserWidget::AddToViewport(this_00,9999);
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_AI_GYM_GameMode::CreateLoginWidget",0x26,Yes);
      pwVar8 = L"LoginWidget is nullptr.";
      uVar7 = 0x21e;
      goto LAB_14b86e51e;
    }
  }
  pUVar6 = UDS_LogManager::GetInst();
  if (pUVar6 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar6 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"ADS_AI_GYM_GameMode::CreateLoginWidget",0x26,Yes);
  pwVar8 = L"LoginWidgetBP is nullptr.";
  uVar7 = 0x217;
LAB_14b86e51e:
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// EndPlay @ 14b86f190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::EndPlay(ADS_AI_GYM_GameMode *this,Type param_1)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  UDS_EntityManager *pUVar2;
  
  AActor::EndPlay((AActor *)this,param_1);
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->MainCharacterToBossTimer);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->MainCharacterToBossTimer).Handle)
    ;
  }
  (this->MainCharacterToBossTimer).Handle = 0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnGroupDamageEventDelegate,this);
  pUVar2 = UDS_EntityManager::GetInst();
  if (pUVar2 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSpawnEntityEvent,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnRemoveEntityEvent,
               this);
  }
  return;
}

// GetDebugStringCount @ 14b877560

FString * __thiscall
ADS_AI_GYM_GameMode::GetDebugStringCount(ADS_AI_GYM_GameMode *this,FString *__return_storage_ptr__)

{
  if (this->DebugStringMax < this->DebugStringCount) {
    ::FString::FString(__return_storage_ptr__,"");
    return __return_storage_ptr__;
  }
  this->DebugStringCount = this->DebugStringCount + 1;
  ::FString::PrintfImpl(__return_storage_ptr__,L"[%d/%d]");
  return __return_storage_ptr__;
}

// GetInst @ 14b877b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr> __cdecl ADS_AI_GYM_GameMode::GetInst(void)

{
  TObjectPtr<AGameModeBase> *this;
  bool bVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr in_RCX;
  AGameModeBase *pAVar4;
  AGameModeBase *local_res10;
  
  pUVar2 = UDS_GameInstance::GetGameInstanceWorld();
  pAVar4 = (AGameModeBase *)0x0;
  if (pUVar2 != (UWorld *)0x0) {
    this = &pUVar2->AuthorityGameMode;
    if ((this->field0_0x0).DebugPtr != (AGameModeBase *)0x0) {
      pUVar3 = Z_Construct_UClass_ADS_AI_GYM_GameMode_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
      if (bVar1) {
        pAVar4 = (this->field0_0x0).DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AGameModeBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    *(undefined8 *)in_RCX = 0;
    local_res10 = pAVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AGameModeBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
    return (TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>)in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  local_res10 = (AGameModeBase *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<ADS_AI_GYM_GameMode,FWeakObjectPtr>)in_RCX;
}

// GetServerAddr @ 14b879380

FString * __thiscall ADS_AI_GYM_GameMode::GetServerAddr(ADS_AI_GYM_GameMode *this)

{
  return &this->ServerAddr;
}

// GetSpectatorPawn @ 14b8793a0

TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr> __thiscall
ADS_AI_GYM_GameMode::GetSpectatorPawn(ADS_AI_GYM_GameMode *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->SpectatorPawn).WeakPtr;
  return (TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr>)in_RDX;
}

// GetSyncActor @ 14b8793c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ADS_AI_GYM_SyncActor * __thiscall
ADS_AI_GYM_GameMode::GetSyncActor(ADS_AI_GYM_GameMode *this,ulong64 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  FObjectPtr_u_0 *pFVar4;
  undefined1 *puVar5;
  
  uVar1 = *param_1;
  if (*(int *)&(this->SyncActorMap).field_0x8 != *(int *)&(this->SyncActorMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SyncActorMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SyncActorMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->SyncActorMap).field_0x48 - 1)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->SyncActorMap;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar3 * 0x18) == uVar1) {
          pFVar4 = (FObjectPtr_u_0 *)
                   TMapBase<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
                   ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
                                  *)&this->SyncActorMap,uVar1);
          return (ADS_AI_GYM_SyncActor *)(FObjectPtr)pFVar4->Handle;
        }
        iVar3 = *(int *)(lVar2 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return (ADS_AI_GYM_SyncActor *)0x0;
}

// IsTestMode @ 14b87e3b0

bool __thiscall ADS_AI_GYM_GameMode::IsTestMode(ADS_AI_GYM_GameMode *this)

{
  int iVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  pwVar2 = FCommandLine::Get();
  ::FString::FString(&local_18,pwVar2);
  iVar1 = ::FString::Find(&local_18,L"-aitest",7,IgnoreCase,FromStart,-1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return iVar1 != -1;
}

// MainCharacterToBoss @ 14b87fa60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::MainCharacterToBoss(ADS_AI_GYM_GameMode *this)

{
  longlong lVar1;
  bool bVar2;
  UObject *pUVar3;
  AActor *this_00;
  TVector<double>_u_0 local_28;
  
  bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&this->MainCharacterActor,(void *)0x0);
  if (!bVar2) {
    bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(&this->BossActor,(void *)0x0);
    if (bVar2) {
      local_28._s_0.X = 0.0;
      local_28._s_0.Y = 0.0;
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(&(this->BossActor).WeakPtr);
      lVar1 = *(longlong *)(pUVar3 + 0xb);
      if (lVar1 == 0) {
        local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      else {
        local_28._s_0.X = *(double *)(lVar1 + 0x210);
        local_28._s_0.Y = *(double *)(lVar1 + 0x218);
      }
    }
    local_28._s_0.Z = __real_409f400000000000;
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->MainCharacterActor).WeakPtr);
    AActor::SetActorLocation(this_00,(TVector<double> *)&local_28._s_0,false,(FHitResult *)0x0,None)
    ;
  }
  return;
}

// MoveSpectatorPawn @ 14b87fb50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_AI_GYM_GameMode::MoveSpectatorPawn(ADS_AI_GYM_GameMode *this,TTransform<double> *param_1)

{
  bool bVar1;
  AActor *this_00;
  
  bVar1 = TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr>::UEOpEquals
                    (&this->SpectatorPawn,(void *)0x0);
  if (!bVar1) {
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->SpectatorPawn).WeakPtr);
    AActor::SetActorTransform(this_00,param_1,false,(FHitResult *)0x0,None);
  }
  return;
}

// OnGroupDamageEvent @ 14b889270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_AI_GYM_GameMode::OnGroupDamageEvent(ADS_AI_GYM_GameMode *this,GroupDamageEventResponse *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  RepeatedPtrField<server_msg::DamageEvent> *pRVar5;
  int iVar6;
  TObjectPtr<ADS_AI_GYM_SyncActor>_u_0 *pTVar7;
  DamageDefaultTypeInternal *pDVar8;
  Impl_ *pIVar9;
  undefined1 *puVar10;
  int local_res10 [2];
  
  uVar2 = *(ulonglong *)&(param_1->_impl_).damage_events_;
  if ((uVar2 & 1) == 0) {
    pIVar9 = &param_1->_impl_;
  }
  else {
    pIVar9 = (Impl_ *)(uVar2 + 7);
  }
  iVar1 = *(int *)&(param_1->_impl_).damage_events_.field_0x8;
  pRVar5 = &pIVar9->damage_events_;
  do {
    if (pIVar9 == (Impl_ *)(&pRVar5->field_0x0 + (longlong)iVar1 * 8)) {
      return;
    }
    lVar3 = *(longlong *)&pIVar9->damage_events_;
    if ((*(byte *)(lVar3 + 0x10) & 1) != 0) {
      pDVar8 = &_Damage_default_instance_;
      if (*(DamageDefaultTypeInternal **)(lVar3 + 0x18) != (DamageDefaultTypeInternal *)0x0) {
        pDVar8 = *(DamageDefaultTypeInternal **)(lVar3 + 0x18);
      }
      if (0 < (pDVar8->_instance)._impl_.amount_) {
        uVar2 = *(ulonglong *)(lVar3 + 0x30);
        if (*(int *)&(this->SyncActorMap).field_0x8 != *(int *)&(this->SyncActorMap).field_0x34) {
          puVar4 = *(undefined1 **)&(this->SyncActorMap).field_0x40;
          puVar10 = &(this->SyncActorMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar10 = puVar4;
          }
          iVar6 = *(int *)(puVar10 +
                          ((uVar2 >> 0x20) * 0x17 + uVar2 &
                          (ulonglong)(*(int *)&(this->SyncActorMap).field_0x48 - 1)) * 4);
          if (iVar6 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)&this->SyncActorMap + (longlong)iVar6 * 0x18) == uVar2
                 ) {
                pTVar7 = &TMapBase<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
                          ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
                                         *)&this->SyncActorMap,uVar2)->field0_0x0;
                if (pTVar7->DebugPtr != (ADS_AI_GYM_SyncActor *)0x0) {
                  pDVar8 = &_Damage_default_instance_;
                  if (*(DamageDefaultTypeInternal **)(lVar3 + 0x18) !=
                      (DamageDefaultTypeInternal *)0x0) {
                    pDVar8 = *(DamageDefaultTypeInternal **)(lVar3 + 0x18);
                  }
                  local_res10[0] = (pDVar8->_instance)._impl_.amount_;
                  ADS_AI_GYM_SyncActor::AddDamageWidget(pTVar7->DebugPtr,local_res10);
                }
                break;
              }
              iVar6 = *(int *)(*(longlong *)&this->SyncActorMap + 0x10 + (longlong)iVar6 * 0x18);
            } while (iVar6 != -1);
          }
        }
      }
    }
    pIVar9 = (Impl_ *)&(pIVar9->damage_events_).field_0x8;
  } while( true );
}

// OnLoadedDataAsset @ 14b88a1f0

void __thiscall ADS_AI_GYM_GameMode::OnLoadedDataAsset(ADS_AI_GYM_GameMode *this)

{
  bool bVar1;
  UDS_GameInstance *this_00;
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 != (UDS_GameInstance *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this_00->OnLoadDataAssetComplete,(UObject *)this);
    UDS_GameInstance::InitManagers(this_00);
  }
  DS_Util::Initialize();
  UDS_NameTagDataAsset::Initialize();
  UDS_FloatingTextDataAsset::Initialize();
  UDS_PacketProcessor::Initialize();
  FDS_EquipmentItemCharacterData::InitiailizeTableInfo();
  DS_Sorting<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>::Initialize();
  FDS_PlayerService::Initialize();
  bVar1 = IsTestMode(this);
  if (bVar1) {
    CreateLoginWidget(this);
    return;
  }
  StartLogin(this);
  return;
}

// OnNetworkConnected @ 14b88bf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::OnNetworkConnected(ADS_AI_GYM_GameMode *this,bool param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1) {
    ::FString::PrintfImpl(&local_148,L"GameMode::OnNetworkConnected()");
    AppendDebugString(this,&local_148);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    FDS_LoginService::RequestJoinGameServer();
    ::FString::PrintfImpl(&local_148,L"LoginService::RequestJoinGameServer()");
    AppendDebugString(this,&local_148);
  }
  else {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_AI_GYM_GameMode::OnNetworkConnected",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xa4,L"Fail.");
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// OnParseAiTrainingRoundResponse @ 14b88c350

void __thiscall
ADS_AI_GYM_GameMode::OnParseAiTrainingRoundResponse
          (ADS_AI_GYM_GameMode *this,AiTrainingRoundResponse *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  UObject *pUVar3;
  FString local_18;
  
  bVar2 = TWeakObjectPtr<UDS_AI_GYM_DebugScreen,FWeakObjectPtr>::UEOpEquals
                    (&this->DebugScreenWidget,(void *)0x0);
  if (!bVar2) {
    ::FString::PrintfImpl(&local_18,L"[Current Round] %llu");
    pUVar3 = FWeakObjectPtr::Get(&(this->DebugScreenWidget).WeakPtr);
    puVar1 = &pUVar3[0x18].field_0x10;
    if ((FString *)puVar1 != &local_18) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pUVar3[0x18].field_0x18 = local_18.Data.ArrayNum;
      *(int *)&pUVar3[0x18].field_0x1c = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnParseAiTrainingRoundResultResponse @ 14b88c3f0

void __thiscall
ADS_AI_GYM_GameMode::OnParseAiTrainingRoundResultResponse
          (ADS_AI_GYM_GameMode *this,AiTrainingRoundResultResponse *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UObject *pUVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar3 = TWeakObjectPtr<UDS_AI_GYM_DebugScreen,FWeakObjectPtr>::UEOpEquals
                    (&this->DebugScreenWidget,(void *)0x0);
  if (!bVar3) {
    uVar10 = 0;
    local_b8.Data = (FScriptContainerElement *)0x0;
    local_b0 = 0;
    ::FString::FString(&local_a8,"");
    ::FString::PrintfImpl(&local_98,L"\r\n/********** %llu ROUND RESULT **********/\r\n");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_98.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    iVar4 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    FVar2.Data = local_a8.Data.AllocatorInstance.Data;
    pFVar13 = local_b8.Data + (longlong)iVar4 * 0x10;
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)local_a8.Data.ArrayNum;
    *(int *)(pFVar13 + 8) = local_a8.Data.ArrayNum;
    local_b0._0_4_ = iVar4 + 1;
    if (local_a8.Data.ArrayNum == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_a8.Data.ArrayNum,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar13,FVar2.Data,lVar11 * 2);
    }
    iVar4 = (param_1->_impl_).winner_;
    if (iVar4 == 0) {
      pwVar7 = L"[Winner] Characters";
    }
    else if (iVar4 == 1) {
      pwVar7 = L"[Winner] Boss";
    }
    else if (iVar4 == 2) {
      pwVar7 = L"[Winner] Draw";
    }
    else {
      pwVar7 = L"[Winner] Wrong Data";
    }
    ::FString::operator=(&local_a8,pwVar7);
    if ((int)local_b0 == local_b0._4_4_) {
      local_b0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    FVar2.Data = local_a8.Data.AllocatorInstance.Data;
    pFVar13 = local_b8.Data + (longlong)(int)local_b0 * 0x10;
    local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + 1);
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)local_a8.Data.ArrayNum;
    *(int *)(pFVar13 + 8) = local_a8.Data.ArrayNum;
    if (local_a8.Data.ArrayNum == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_a8.Data.ArrayNum,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar13,FVar2.Data,lVar11 * 2);
    }
    ::FString::PrintfImpl(&local_28,L"%02llu:%02llu:%02llu");
    ::FString::PrintfImpl(&local_88,L"[Time] %s");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_88.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    iVar4 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    FVar2.Data = local_a8.Data.AllocatorInstance.Data;
    pFVar13 = local_b8.Data + (longlong)iVar4 * 0x10;
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)local_a8.Data.ArrayNum;
    *(int *)(pFVar13 + 8) = local_a8.Data.ArrayNum;
    local_b0._0_4_ = iVar4 + 1;
    if (local_a8.Data.ArrayNum == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_a8.Data.ArrayNum,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar13,FVar2.Data,lVar11 * 2);
    }
    iVar4 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
    ::FString::FString((FString *)(local_b8.Data + (longlong)iVar4 * 0x10),L"\r\n1. CHARACTER");
    ::FString::PrintfImpl(&local_78,L"[Remain count] %u");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_78.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    iVar4 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    FVar2.Data = local_a8.Data.AllocatorInstance.Data;
    pFVar13 = local_b8.Data + (longlong)iVar4 * 0x10;
    local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)local_a8.Data.ArrayNum;
    *(int *)(pFVar13 + 8) = local_a8.Data.ArrayNum;
    if (local_a8.Data.ArrayNum == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_a8.Data.ArrayNum,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar13,FVar2.Data,lVar11 * 2);
    }
    ::FString::PrintfImpl(&local_68,L"[Remain total hp] %llu");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_68.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    iVar4 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    FVar2.Data = local_a8.Data.AllocatorInstance.Data;
    pFVar13 = local_b8.Data + (longlong)iVar4 * 0x10;
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)local_a8.Data.ArrayNum;
    *(int *)(pFVar13 + 8) = local_a8.Data.ArrayNum;
    local_b0._0_4_ = iVar4 + 1;
    if (local_a8.Data.ArrayNum == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_a8.Data.ArrayNum,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar13,FVar2.Data,lVar11 * 2);
    }
    iVar4 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
    ::FString::FString((FString *)(local_b8.Data + (longlong)iVar4 * 0x10),L"\r\n2. BOSS");
    ::FString::PrintfImpl(&local_58,L"[Remain count] %u");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_58.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    iVar4 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    FVar2.Data = local_a8.Data.AllocatorInstance.Data;
    pFVar13 = local_b8.Data + (longlong)iVar4 * 0x10;
    local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)local_a8.Data.ArrayNum;
    *(int *)(pFVar13 + 8) = local_a8.Data.ArrayNum;
    if (local_a8.Data.ArrayNum == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_a8.Data.ArrayNum,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar13,FVar2.Data,lVar11 * 2);
    }
    ::FString::PrintfImpl(&local_48,L"[Remain total hp] %llu");
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_48.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    iVar4 = (int)local_b0;
    if ((int)local_b0 == local_b0._4_4_) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
    }
    FVar2.Data = local_a8.Data.AllocatorInstance.Data;
    pFVar13 = local_b8.Data + (longlong)iVar4 * 0x10;
    local_b0 = CONCAT44(local_b0._4_4_,iVar4 + 1);
    *(FScriptContainerElement **)pFVar13 = (FScriptContainerElement *)0x0;
    lVar11 = (longlong)local_a8.Data.ArrayNum;
    *(int *)(pFVar13 + 8) = local_a8.Data.ArrayNum;
    if (local_a8.Data.ArrayNum == 0) {
      *(int *)(pFVar13 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_a8.Data.ArrayNum,
                 (int *)(pFVar13 + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*pFVar13,FVar2.Data,lVar11 * 2);
    }
    ::FString::FString(&local_38,"");
    uVar8 = (ulonglong)(int)local_b0;
    uVar12 = uVar8;
    uVar14 = uVar10;
    if (0 < (int)local_b0) {
      while( true ) {
        uVar9 = (uint)uVar10;
        iVar4 = (int)uVar8;
        if (uVar9 != 0) {
          ::FString::AppendChars(&local_38,L"\r\n",2);
          iVar4 = (int)local_b0;
        }
        uVar5 = 0;
        if ((int)uVar9 < iVar4) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = *(int *)(local_b8.Data + uVar14 + 8) + -1;
        if (*(int *)(local_b8.Data + uVar14 + 8) == 0) {
          iVar4 = 0;
        }
        ::FString::AppendChars(&local_38,*(wchar_t **)(local_b8.Data + uVar14),iVar4);
        uVar10 = (ulonglong)(uVar9 + 1);
        if (uVar12 - 1 == 0) break;
        uVar8 = local_b0 & 0xffffffff;
        uVar12 = uVar12 - 1;
        uVar14 = uVar14 + 0x10;
      }
    }
    pUVar6 = FWeakObjectPtr::Get(&(this->DebugScreenWidget).WeakPtr);
    iVar4 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange
              ((FString *)&pUVar6[0x18].field_0x20,(wchar_t *)local_38.Data.AllocatorInstance.Data,
               iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
  }
  return;
}

// OnReceiveMyCharacterInfoResponseComplete @ 14b8917b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_AI_GYM_GameMode::OnReceiveMyCharacterInfoResponseComplete(ADS_AI_GYM_GameMode *this)

{
  bool bVar1;
  UDS_EntityManager *this_00;
  UDS_SendPacketManager *this_01;
  UWorld *pUVar2;
  APlayerController *pAVar3;
  UObject *pUVar4;
  FDS_UniqueBpTableRow *this_02;
  FDS_ResourceEtcTableRow *pFVar5;
  FString *pFVar6;
  TQuat<double> *pTVar7;
  undefined1 auStackY_4b8 [32];
  undefined1 local_488 [24];
  FWeakObjectPtr local_470;
  FWeakObjectPtr local_468;
  FString local_460;
  FDS_NetSyncData local_448;
  TQuat<double> local_148;
  undefined1 local_128 [192];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  this_00 = UDS_EntityManager::GetInst();
  if ((this_00 != (UDS_EntityManager *)0x0) &&
     (this_01 = UDS_SendPacketManager::GetInst(), this_01 != (UDS_SendPacketManager *)0x0)) {
    pUVar2 = AActor::GetWorld((AActor *)this);
    pAVar3 = UGameplayStatics::GetPlayerController((UObject *)pUVar2,0);
    if (pAVar3 != (APlayerController *)0x0) {
      bVar1 = 1 < (int)UDS_CharInfoData::TeamGroupInfoMap._72_4_;
      if (!bVar1) {
        TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
        ::UnhashElements(&UDS_CharInfoData::TeamGroupInfoMap);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&UDS_CharInfoData::TeamGroupInfoMap,0,
                        UDS_CharInfoData::TeamGroupInfoMap._8_4_);
      UDS_CharInfoData::TeamGroupInfoMap._8_4_ = 0;
      if (UDS_CharInfoData::TeamGroupInfoMap._12_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,(ForAnyElementType *)&UDS_CharInfoData::TeamGroupInfoMap,0,
                   (int *)&UDS_CharInfoData::TeamGroupInfoMap.field_0xc);
      }
      UDS_CharInfoData::TeamGroupInfoMap._48_4_ = 0xffffffff;
      UDS_CharInfoData::TeamGroupInfoMap._52_4_ = 0;
      UDS_CharInfoData::TeamGroupInfoMap._40_4_ = 0;
      if (0x80 < (uint)UDS_CharInfoData::TeamGroupInfoMap._44_4_) {
        UDS_CharInfoData::TeamGroupInfoMap._44_4_ = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &UDS_CharInfoData::TeamGroupInfoMap.field_0x10,0);
      }
      if (bVar1) {
        UDS_CharInfoData::TeamGroupInfoMap._72_4_ = 1;
        TSet<TTuple<enum_TeamType::ItemCase,FDS_TeamGroupInfo>,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>,FDefaultSetAllocator>
        ::Rehash(&UDS_CharInfoData::TeamGroupInfoMap);
      }
      UDS_PlayerData::GetData((ulong64)&local_470,UDS_PlayerData::MainPlayerEntityID,false);
      bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_470,(void *)0x0);
      if (!bVar1) {
        FWeakObjectPtr::Get(&local_470);
        UDS_CharInfoData::GetData((ulong64)&local_468);
        bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_468,(void *)0x0
                          );
        if (!bVar1) {
          local_128._0_8_ = 0;
          local_128[8] = None;
          local_128._12_4_ = 0;
          ::FString::FString((FString *)(local_128 + 0x10),"");
          local_128._32_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_128._40_8_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_128._64_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_128._72_8_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_128._48_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_128._56_8_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_128._96_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_128._104_8_ = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_128._80_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_128._88_8_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_68.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_60.Data = (FScriptContainerElement *)0x0;
          local_128._152_8_ = 0.0;
          local_128._112_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_128._120_8_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_128._128_4_ = 0;
          local_128._136_8_ = 0;
          local_128._144_4_ = 0;
          local_128[0xa0] = false;
          local_128[0xa1] = false;
          local_128._168_8_ = 0;
          local_128._176_4_ = 0;
          local_128._184_8_ = 0;
          local_58 = 0;
          pUVar4 = FWeakObjectPtr::Get(&local_470);
          local_128._0_8_ = *(undefined8 *)&pUVar4[8].field_0x10;
          local_128[8] = MainCharacter;
          pUVar4 = FWeakObjectPtr::Get(&local_468);
          local_128._12_4_ = *(undefined4 *)&pUVar4[8].field_0x8;
          this_02 = FDS_UniqueBpTableRow::GetRef(1,true);
          pFVar5 = FDS_UniqueBpTableRow::ID_BpLinkTable(this_02);
          pFVar6 = FSoftObjectPath::ToString(&pFVar5->ResourcePath,(FString *)local_488);
          if ((FString *)(local_128 + 0x10) != pFVar6) {
            if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_128._16_8_);
            }
            local_128._16_8_ = (pFVar6->Data).AllocatorInstance.Data;
            (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128._24_4_ = (pFVar6->Data).ArrayNum;
            local_128._28_4_ = (pFVar6->Data).ArrayMax;
            (pFVar6->Data).ArrayNum = 0;
            (pFVar6->Data).ArrayMax = 0;
          }
          if ((FScriptContainerElement *)local_488._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_488._0_8_);
          }
          pUVar4 = FWeakObjectPtr::Get(&local_468);
          local_488._8_8_ = (undefined8)*(float *)&pUVar4[0xf].field_0x8;
          local_488._0_8_ = (FScriptContainerElement *)0x0;
          local_488._16_8_ = 0.0;
          pTVar7 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_488,&local_148);
          local_128._32_8_ = pTVar7->X;
          local_128._40_8_ = pTVar7->Y;
          local_128._48_8_ = pTVar7->Z;
          local_128._56_8_ = pTVar7->W;
          local_128._64_16_ = ZEXT816(0);
          local_128._88_8_ = _UNK_152755268;
          local_128._80_8_ = ___xmm_0000000000000000409f400000000000;
          local_128._104_8_ = _UNK_150689688;
          local_128._96_8_ = ___xmm_3ff00000000000003ff0000000000000;
          local_128._120_8_ = _UNK_150689518;
          local_128._112_8_ = ___xmm_00000000000000003ff0000000000000;
          this->MainCharacterEntityID = local_128._0_8_;
          pUVar2 = AActor::GetWorld((AActor *)this);
          local_488._0_8_ =
               UDS_EntityManager::SpawnActor(this_00,(FDS_SpawnInfo *)local_128,pUVar2,false);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((AActor *)local_488._0_8_ != (AActor *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_488._0_8_);
          }
          FWeakObjectPtr::operator=(&(this->MainCharacterActor).WeakPtr,(FObjectPtr)local_488);
          bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                            (&this->MainCharacterActor,(void *)0x0);
          if (!bVar1) {
            local_448.PrevTransportEntityID = 0;
            local_448.TransportEntityID = 0;
            local_448.PrevTick = 0.0;
            local_448.Tick = 0.0;
            local_448.PrevParentEntityID = 0;
            local_448.PrevEntityDirection.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
            local_448.PrevInputValue.field0_0x0._s_0 =
                 UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            local_448.ParentEntityID = 0;
            local_448.InputValue.field0_0x0._s_0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0
            ;
            local_448.SkillContext.field0_0x0.DebugPtr =
                 (TObjectPtr<UDS_SkillAbilityContext>_u_0)0x0;
            local_448.EntityDirection.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
            local_448.RelativeRotator.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
            local_448.PrevSkillData.SkillRotation.Roll =
                 UE::Math::TRotator<double>::ZeroRotator.Roll;
            local_448.SkillData.SkillRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
            local_448.PrevSkillData.SkillStartTime = 0.0;
            local_448.PrevSkillData.SkillEndTime = 0.0;
            local_448.SkillData.SkillEndTime = 0.0;
            local_448.SkillData.SkillDuration = 0.0;
            local_448.ServerRotateTime = 0.0;
            local_448.PrevSkillData.SkillDuration = 0.0;
            local_448.SkillData.SkillStartTime = 0.0;
            local_448.ServerPosition.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.ServerPosition.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.ServerPosition.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevServerPosition.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.PrevServerPosition.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevSkillData.TargetEntityID = 0;
            local_448.PrevServerPosition.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevPosition.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.PrevPosition.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevPosition.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.NowPosition.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.NowPosition.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevSkillData.LocationLerpTime = 0.1;
            local_448.PrevSkillData.SkillID = 0;
            local_448.NowPosition.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevRelativePosition.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.PrevRelativePosition.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevRelativePosition.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.NowRelativePosition.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.NowRelativePosition.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevSkillData.IsSkillActive = false;
            local_448.PrevSkillData.IsCollision = false;
            local_448.NowRelativePosition.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevDestinationPosition.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.PrevDestinationPosition.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevDestinationPosition.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.DestinationPosition.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.DestinationPosition.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.SkillData.TargetEntityID = 0;
            local_448.DestinationPosition.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevTransformValue.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.PrevTransformValue.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevTransformValue.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.TransformValue.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.TransformValue.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.SkillData.LocationLerpTime = 0.1;
            local_448.SkillData.SkillID = 0;
            local_448.TransformValue.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevVelocityVector.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.PrevVelocityVector.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevVelocityVector.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.VelocityVector.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.VelocityVector.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.SkillData.IsSkillActive = false;
            local_448.SkillData.IsCollision = false;
            local_448.VelocityVector.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevEntityDirection.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            local_448.PrevEntityDirection.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            local_448.EntityDirection.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            local_448.EntityDirection.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            local_448.HeightMoveDataList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_448.RelativeRotator.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            local_448.RelativeRotator.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            local_448.PrevSkillData.SkillRotation.Pitch =
                 UE::Math::TRotator<double>::ZeroRotator.Pitch;
            local_448.PrevSkillData.SkillRotation.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            local_448.HeightMoveDataList.ArrayNum = 0;
            local_448.HeightMoveDataList.ArrayMax = 0;
            local_448.PrevSkillData.StartLocation.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.PrevSkillData.StartLocation.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PrevSkillData.StartLocation.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevSkillData.DestinationLocation.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.PrevSkillData.DestinationLocation.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.ServerMoveSpeed = 0.0;
            local_448.ClientMoveSpeed = 0.0;
            local_448.PrevSkillData.DestinationLocation.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.SkillData.SkillRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            local_448.SkillData.SkillRotation.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            local_448.SkillData.StartLocation.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.SkillData.StartLocation.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.PatrolMoveSpeed = 0.0;
            local_448.PatrolStepNum = 0;
            local_448.SkillData.StartLocation.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.SkillData.DestinationLocation.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_448.SkillData.DestinationLocation.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_448.SkillData.DestinationLocation.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_448.PrevAccelerationValue = 0.0;
            local_448.AccelerationValue = 0.0;
            local_448.FallingDistance = 0.0;
            local_448.SendFallingHeight = 0.0;
            local_448.StateFlags.Packed = 0;
            local_448.IsServerRotation = false;
            FDS_NetSyncData::Clear(&local_448);
            local_448.NowPosition.field0_0x0._s_0.X = (double)local_128._64_8_;
            local_448.NowPosition.field0_0x0._s_0.Y = (double)local_128._72_8_;
            local_448.NowPosition.field0_0x0._s_0.Z = (double)local_128._80_8_;
            UDS_SendPacketManager::SendSyncRequest(this_01,&local_448);
            pUVar4 = FWeakObjectPtr::Get(&(this->MainCharacterActor).WeakPtr);
            (**(code **)(*(longlong *)pUVar4 + 0x368))(pUVar4,1);
            ::FString::PrintfImpl(&local_460,L"ds.chat buff %d");
            (**(code **)(pAVar3->_padding_ + 0xe00))(pAVar3,local_488,&local_460,0);
            if ((AActor *)local_488._0_8_ != (AActor *)0x0) {
              FMemory::Free((void *)local_488._0_8_);
            }
            UDS_SendPacketManager::SendJoinMapReadyComplete(this_01);
            ::FString::PrintfImpl
                      ((FString *)local_488,L"SendPacketManager::SendJoinMapReadyComplete()");
            AppendDebugString(this,(FString *)local_488);
            if ((AActor *)local_488._0_8_ != (AActor *)0x0) {
              FMemory::Free((void *)local_488._0_8_);
            }
            if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_460.Data.AllocatorInstance.Data);
            }
            if (local_448.HeightMoveDataList.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_448.HeightMoveDataList.AllocatorInstance.Data);
            }
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_68,(FWriteAccessScope *)local_488);
          if ((local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_60.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_60,0,0,0x10);
            local_58 = 0;
          }
          if (local_488[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_488._8_8_,
                       (FDestructionSentinel *)local_488);
          }
          if (FStack_60.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_60.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
          if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_128._16_8_);
          }
        }
      }
    }
  }
  return;
}

// OnReceiveSpawnNpcResponse @ 14b891f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_AI_GYM_GameMode::OnReceiveSpawnNpcResponse
          (ADS_AI_GYM_GameMode *this,int *param_1,AActor *param_2)

{
  FDS_NpcBaseTableRow *pFVar1;
  AActor *local_res10 [3];
  
  pFVar1 = FDS_NpcBaseTableRow::Get((longlong)*param_1,true);
  if ((pFVar1 != (FDS_NpcBaseTableRow *)0x0) && (pFVar1->NpcBattleGrade == Boss)) {
    local_res10[0] = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&(this->BossActor).WeakPtr,(FObjectPtr)local_res10);
  }
  return;
}

// OnRemoveEntity @ 14b892000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::OnRemoveEntity(ADS_AI_GYM_GameMode *this,ulong64 *param_1)

{
  TMap<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  TObjectPtr<ADS_AI_GYM_SyncActor>_u_0 *pTVar3;
  undefined1 *puVar4;
  ulong64 local_res8;
  
  uVar1 = *param_1;
  this_00 = &this->SyncActorMap;
  if (*(int *)&(this->SyncActorMap).field_0x8 != *(int *)&(this->SyncActorMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SyncActorMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SyncActorMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->SyncActorMap).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      while (*(ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 0x18) != uVar1) {
        iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      pTVar3 = &TMapBase<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
                ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
                               *)this_00,uVar1)->field0_0x0;
      if (pTVar3->DebugPtr != (ADS_AI_GYM_SyncActor *)0x0) {
        AActor::Destroy((AActor *)pTVar3->DebugPtr,false,true);
        local_res8 = *param_1;
        if (*(int *)&(this->SyncActorMap).field_0x8 != *(int *)&(this->SyncActorMap).field_0x34) {
          TSet<TTuple<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned___int64>
                    ((TSet<TTuple<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>,FDefaultSetAllocator>
                      *)this_00,(int)(local_res8 >> 0x20) * 0x17 + (int)local_res8,&local_res8);
        }
      }
    }
  }
  return;
}

// OnSpawnEntity @ 14b8920e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::OnSpawnEntity(ADS_AI_GYM_GameMode *this,ulong64 *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_EntityManager *this_00;
  UWorld *this_01;
  UClass *pUVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  TPairInitializer<unsigned___int64_const_&,ADS_AI_GYM_SyncActor_*_&> local_c8;
  FWeakObjectPtr local_b8;
  ADS_AI_GYM_GameMode *local_b0;
  ADS_AI_GYM_SyncActor ***local_a8;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  this_00 = UDS_EntityManager::GetInst();
  if (this_00 == (UDS_EntityManager *)0x0) {
    return;
  }
  UDS_EntityManager::FindEntity(this_00,(ulong64)&local_b8);
  bVar2 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_b8,(void *)0x0);
  if (bVar2) {
    return;
  }
  if (*param_1 == this->MainCharacterEntityID) {
    return;
  }
  this_01 = AActor::GetWorld((AActor *)this);
  pUVar5 = (this->SyncActorBP).Class.field0_0x0.DebugPtr;
  if ((pUVar5 == (UClass *)0x0) ||
     (pUVar3 = Z_Construct_UClass_ADS_AI_GYM_SyncActor_NoRegister(), pUVar3 == (UClass *)0x0)) {
LAB_14b8921a2:
    pUVar5 = (UClass *)0x0;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14b8921a2;
    pUVar5 = (this->SyncActorBP).Class.field0_0x0.DebugPtr;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
  local_98[0x32] = local_98[0x32] | 4;
  local_98._16_8_ = (AActor *)0x0;
  local_98._24_8_ = (APawn *)0x0;
  local_98[0x30] = AlwaysSpawn;
  local_98[0x31] = MultiplyWithRoot;
  if ((pUVar5 != (UClass *)0x0) &&
     (pAVar4 = UWorld::SpawnActor(this_01,pUVar5,&UE::Math::TTransform<double>::Identity,
                                  (FActorSpawnParameters *)local_98), pAVar4 != (AActor *)0x0)) {
    pUVar5 = Z_Construct_UClass_ADS_AI_GYM_SyncActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14b892207;
  }
  pAVar4 = (AActor *)0x0;
LAB_14b892207:
  if (local_98._64_8_ != 0) {
    plVar6 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (pAVar4 != (AActor *)0x0) {
    pAVar4[1].PrimaryActorTick._padding_ = *param_1;
    pAVar4[1].PrimaryActorTick._padding_ = (longlong)local_b8;
    local_c8.Value = (ADS_AI_GYM_SyncActor **)pAVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_c8.Key = (ulong64 *)0x0;
    local_b0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_c8,(FObjectPtr)&local_b0);
    *(ulong64 **)&((AActor *)((longlong)local_c8.Value + 0x2c0))->field_0x58 = local_c8.Key;
    local_a8 = &local_c8.Value;
    local_b0 = (ADS_AI_GYM_GameMode *)param_1;
    TSet<TTuple<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,ADS_AI_GYM_SyncActor_*_&>_>
              ((TSet<TTuple<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>,FDefaultSetAllocator>
                *)&this->SyncActorMap,&local_c8,(bool *)&local_b0);
    UGameplayStatics::FinishSpawningActor
              ((AActor *)local_c8.Value,&UE::Math::TTransform<double>::Identity,MultiplyWithRoot);
  }
  return;
}

// SetServerAddr @ 14b8990f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::SetServerAddr(ADS_AI_GYM_GameMode *this,FString *param_1)

{
  UDS_AI_GYM_LocalSave *pUVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_1a8 [32];
  FString local_168;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ::FString::operator=(&this->ServerAddr,param_1);
  pUVar1 = (this->LocalSave).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_AI_GYM_LocalSave *)0x0) {
    ::FString::operator=(&pUVar1->ServerAddr,&this->ServerAddr);
    ::FString::FString(&local_168,L"AILocalSave");
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar5.Data = local_168.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_158,(wchar_t *)FVar5.Data);
    bVar2 = UGameplayStatics::SaveGameToSlot((USaveGame *)pUVar1,&local_158,0);
    if ((FWeakObjectPtr)local_158.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if ((!bVar2) && (pUVar3 = UDS_LogManager::GetInst(), pUVar3 != (UDS_LogManager *)0x0)) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_AI_GYM_LocalSave::Save",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x10,L"Failed to save. (%s)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  bVar2 = TWeakObjectPtr<UUserWidget,FWeakObjectPtr>::UEOpEquals(&this->LoginWidget,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->LoginWidget).WeakPtr);
    (**(code **)(*(longlong *)pUVar4 + 0x2d0))(pUVar4);
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_158,(FObjectPtr)&local_168);
    (this->LoginWidget).WeakPtr = (FWeakObjectPtr)local_158.Data.AllocatorInstance.Data;
  }
  StartLogin(this);
  return;
}

// SetSpectatorPawn @ 14b899a40

void __thiscall
ADS_AI_GYM_GameMode::SetSpectatorPawn
          (ADS_AI_GYM_GameMode *this,TWeakObjectPtr<ADS_AI_GYM_DefaultPawn,FWeakObjectPtr> param_1)

{
  (this->SpectatorPawn).WeakPtr = param_1.WeakPtr;
  return;
}

// StartLogin @ 14b89a1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::StartLogin(ADS_AI_GYM_GameMode *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_NetworkManager *this_00;
  UDS_LogManager *pUVar3;
  char *pcVar4;
  ADS_AI_GYM_GameMode *pAVar5;
  UObject *this_01;
  UFunction *pUVar6;
  char *pcVar7;
  FWeakObjectPtr *this_02;
  char *pcVar8;
  FWeakObjectPtr *pFVar9;
  undefined1 auStackY_268 [32];
  <lambda_1> local_235 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_230;
  FWeakObjectPtr local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  ADS_AI_GYM_GameMode *local_200;
  FName *local_1f8;
  FString local_1f0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_1e0;
  FString local_1d0;
  FDestructionSentinel local_1c0;
  FReadAccessScope local_1a8;
  FReadAccessScope local_190;
  FReadAccessScope local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  CreateDebugScreen(this);
  ::FString::PrintfImpl(&local_1f0,L"GameMode::StartLogin()");
  AppendDebugString(this,&local_1f0);
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  this_00 = UDS_NetworkManager::GetInst();
  if (this_00 == (UDS_NetworkManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"ADS_AI_GYM_GameMode::StartLogin",0x1f,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x204,L"netMng is nullptr.");
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
    goto LAB_14b89a658;
  }
  pcVar4 = strstr("&ADS_AI_GYM_GameMode::OnNetworkConnected","::");
  pcVar8 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14b89a30a:
    pcVar7 = &DAT_00000002;
LAB_14b89a30d:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14b89a30a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14b89a30d;
  }
  ::FName::FName(&local_210,pcVar7);
  if ((this == (ADS_AI_GYM_GameMode *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4af,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->OnConnectResult,
             &local_1a8);
  this_02 = *(FWeakObjectPtr **)&(this_00->OnConnectResult).field_0x8;
  pFVar9 = this_02 + (longlong)*(int *)&(this_00->OnConnectResult).field_0x10 * 2;
  for (; this_02 != pFVar9; this_02 = this_02 + 2) {
    if (((*(FName *)(this_02 + 1) == local_210) && (this != (ADS_AI_GYM_GameMode *)0x0)) &&
       (pAVar5 = (ADS_AI_GYM_GameMode *)FWeakObjectPtr::GetEvenIfUnreachable(this_02),
       this == pAVar5)) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1a8);
      if (this_02 == (FWeakObjectPtr *)0x0) goto LAB_14b89a3dc;
      goto LAB_14b89a5f2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1a8);
LAB_14b89a3dc:
  pcVar4 = strstr("&ADS_AI_GYM_GameMode::OnNetworkConnected","::");
  if (pcVar4 == (char *)0x0) {
LAB_14b89a42a:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar7 == (char *)0x0) || (pcVar8 = pcVar7 + 2, pcVar7[2] == '0')) goto LAB_14b89a42a;
  }
  ::FName::FName(&local_208,pcVar8);
  if ((this == (ADS_AI_GYM_GameMode *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_218 = local_208;
  local_230.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_228.ObjectIndex = 0;
  local_228.ObjectSerialNumber = 0;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  if ((this == (ADS_AI_GYM_GameMode *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_200 = this;
  if (this == (ADS_AI_GYM_GameMode *)0x0) {
    local_200 = (ADS_AI_GYM_GameMode *)0x0;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_200 != (ADS_AI_GYM_GameMode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_200);
  }
  FWeakObjectPtr::operator=(&local_228,(FObjectPtr)&local_200);
  local_220 = local_218;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_230,&local_190);
  if ((local_220 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_228), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_190);
LAB_14b89a56d:
    local_1f8 = &local_218;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,bool>::
    __Internal_BindDynamic<ADS_AI_GYM_GameMode>'::__l2::<lambda_1>::operator()(&local_1f8);
  }
  else {
    pUVar6 = UObject::FindFunction(this_01,local_220);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_190);
    if (pUVar6 == (UFunction *)0x0) goto LAB_14b89a56d;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_230,&local_178);
  local_1e0.Object = local_228;
  local_1e0.FunctionName = local_220;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_178);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->OnConnectResult,
             (FWriteAccessScope *)&local_1c0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(this_00->OnConnectResult).field_0x8,local_235,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->OnConnectResult,
             &local_1e0);
  if (local_1c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_230.AccessDetector);
LAB_14b89a5f2:
  UDS_NetworkManager::Connect(this_00,&this->ServerAddr,this->FrontEndPort);
  ::FString::PrintfImpl(&local_1d0,L"NetworkManager::Connect() [Addr] %s [Port] %d");
  AppendDebugString(this,&local_1d0);
LAB_14b89a658:
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  return;
}

// StartPlay @ 14b89a6a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall ADS_AI_GYM_GameMode::StartPlay(ADS_AI_GYM_GameMode *this)

{
  FString *this_00;
  int iVar1;
  UDS_AI_GYM_LocalSave *pUVar2;
  code *pcVar3;
  bool bVar4;
  UDS_GameInstance *this_01;
  FDS_DevServerListTableRow *pFVar5;
  UWorld *this_02;
  APlayerController *pAVar6;
  char *pcVar7;
  char *pcVar8;
  UObject *this_03;
  UFunction *pUVar9;
  FTimerManager *this_04;
  UDS_EntityManager *pUVar10;
  char *pcVar11;
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FWeakObjectPtr local_110;
  FName local_108;
  ADS_AI_GYM_GameMode *local_100;
  FName *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_c0;
  FDestructionSentinel local_b0;
  FInputModeGameAndUI local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  FReadAccessScope local_48;
  
  AGameModeBase::StartPlay((AGameModeBase *)this);
  this_01 = UDS_GameInstance::GetInst();
  if (this_01 == (UDS_GameInstance *)0x0) {
    return;
  }
  this_01->bIsAIGymMode = true;
  UDS_GameInstance::CreateManagers(this_01);
  pcVar11 = &DAT_00000002;
  pFVar5 = FDS_DevServerListTableRow::Get(2,true);
  this_00 = &this->ServerAddr;
  if (pFVar5 != (FDS_DevServerListTableRow *)0x0) {
    ::FString::operator=(this_00,&pFVar5->Urls);
  }
  bVar4 = IsTestMode(this);
  if (bVar4) {
    UDS_AI_GYM_LocalSave::Load(&this->LocalSave);
    pUVar2 = (this->LocalSave).field0_0x0.DebugPtr;
    if ((pUVar2 != (UDS_AI_GYM_LocalSave *)0x0) &&
       (iVar1 = (pUVar2->ServerAddr).Data.ArrayNum, 1 < iVar1)) {
      ::FString::AssignRange
                (this_00,(wchar_t *)(pUVar2->ServerAddr).Data.AllocatorInstance.Data,iVar1 + -1);
    }
  }
  ::FString::FString(&local_f0,"");
  ::FString::FString(&local_e0,L"://");
  ::FString::Split(this_00,&local_e0,&local_f0,this_00,IgnoreCase,FromEnd);
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d0,L":");
  ::FString::Split(this_00,&local_d0,this_00,&local_f0,IgnoreCase,FromEnd);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  FInputModeGameAndUI::FInputModeGameAndUI(&local_98);
  local_98.MouseLockMode = DoNotLock;
  local_98.bHideCursorDuringCapture = false;
  this_02 = AActor::GetWorld((AActor *)this);
  pAVar6 = UWorld::GetFirstPlayerController(this_02);
  if (pAVar6 != (APlayerController *)0x0) {
    pAVar6->bShowMouseCursor = 1;
    (**(code **)(pAVar6->_padding_ + 0xd68))(pAVar6,&local_98);
    (**(code **)(pAVar6->_padding_ + 0xd58))(pAVar6,0);
  }
  pcVar7 = strstr("&ADS_AI_GYM_GameMode::OnLoadedDataAsset","::");
  if (pcVar7 == (char *)0x0) {
LAB_14b89a88a:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar7;
      pcVar7 = strstr(pcVar8 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if ((pcVar8 == (char *)0x0) || (pcVar11 = pcVar8 + 2, pcVar8[2] == '0')) goto LAB_14b89a88a;
  }
  ::FName::FName(&local_res20,pcVar11);
  if ((this == (ADS_AI_GYM_GameMode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res18 = local_res20;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.ObjectIndex = 0;
  local_110.ObjectSerialNumber = 0;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  if ((this == (ADS_AI_GYM_GameMode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_AI_GYM_GameMode *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_100);
  local_108 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_118,(FReadAccessScope *)(local_68 + 8));
  if ((local_108 == (FName)0x0) ||
     (this_03 = FWeakObjectPtr::Get(&local_110), this_03 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_68 + 8));
  }
  else {
    pUVar9 = UObject::FindFunction(this_03,local_108);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_68 + 8));
    if (pUVar9 != (UFunction *)0x0) goto LAB_14b89a9d8;
  }
  local_f8 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::
  __Internal_BindDynamic<ADS_AI_GYM_GameMode>'::__l2::<lambda_1>::operator()(&local_f8);
LAB_14b89a9d8:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_118,&local_48);
  local_c0.Object = local_110;
  local_c0.FunctionName = local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this_01->OnLoadDataAssetComplete,(FWriteAccessScope *)&local_b0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(this_01->OnLoadDataAssetComplete).field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this_01->OnLoadDataAssetComplete,&local_c0);
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  UDS_TimeUtilManager::UpdateNPTClient();
  this_04 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimer<ADS_AI_GYM_GameMode>
            (this_04,&this->MainCharacterToBossTimer,this,(pmf_5f4a0433)0x14b87fa60,__real_3dcccccd,
             true,__real_bf800000);
  TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<ADS_AI_GYM_GameMode>
            ((TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnGroupDamageEventDelegate,(ADS_AI_GYM_GameMode *)local_78,
             (pmf_4d8df0ae)this);
  pUVar10 = UDS_EntityManager::GetInst();
  if (pUVar10 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_AI_GYM_GameMode>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar10->OnSpawnEntityEvent,(ADS_AI_GYM_GameMode *)(local_78 + 8),
               (pmf_523160d1)this);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<ADS_AI_GYM_GameMode>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar10->OnRemoveEntityEvent,(ADS_AI_GYM_GameMode *)local_68,(pmf_523160d1)this);
  }
  FInputModeGameAndUI::~FInputModeGameAndUI(&local_98);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  return;
}

