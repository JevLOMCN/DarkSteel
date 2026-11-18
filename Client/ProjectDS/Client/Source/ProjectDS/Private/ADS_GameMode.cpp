// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b49e9b0

UClass * __cdecl ADS_GameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_GameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameMode",
               &Z_Registration_Info_UClass_ADS_GameMode.InnerSingleton,
               StaticRegisterNativesADS_GameMode,0x3d8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_GameMode>,InternalVTableHelperCtorCaller<ADS_GameMode>,
               local_res8,AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_GameMode.InnerSingleton;
}

// ADS_GameMode @ 14b49fa20

ADS_GameMode * __thiscall ADS_GameMode::ADS_GameMode(ADS_GameMode *this,FVTableHelper *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_GameMode__6B_;
  this->CurGameStateType = None;
  this->PreGameStateType = None;
  *(undefined8 *)&this->GameStateMap = 0;
  *(undefined8 *)&(this->GameStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->GameStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->GameStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->GameStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GameStateMap).field_0x34 = 0;
  *(undefined4 *)&(this->GameStateMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GameStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->GameStateMap).field_0x48 = 0;
  (this->GameStateList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameStateList).ArrayNum = 0;
  (this->GameStateList).ArrayMax = 0;
  *(undefined8 *)&this->ModelPropertyDelegate_GameStateType = 0;
  *(undefined8 *)&(this->ModelPropertyDelegate_GameStateType).field_0x8 = 0;
  *(undefined8 *)&(this->ModelPropertyDelegate_GameStateType).field_0x10 = 0;
  return this;
}

// ~ADS_GameMode @ 14b4a0630

void __thiscall ADS_GameMode::~ADS_GameMode(ADS_GameMode *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ADS_GameMode__6B_;
  pvVar1 = *(void **)&(this->ModelPropertyDelegate_GameStateType).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModelPropertyDelegate_GameStateType);
  pFVar2 = (this->GameStateList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->GameStateMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GameStateMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->GameStateMap);
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  return;
}

// FDS_ModelPropertyDelegate_EDS_GameStateType_DelegateWrapper @ 14b4a1670

void __cdecl
ADS_GameMode::FDS_ModelPropertyDelegate_EDS_GameStateType_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,EDS_GameStateType *param_2,
          EDS_GameStateType *param_3)

{
  EDS_GameStateType local_res10;
  EDS_GameStateType local_res14;
  
  local_res10 = *param_2;
  local_res14 = *param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_res10);
  return;
}

// GetPrivateStaticClass @ 14b4a16a0

UClass * __cdecl ADS_GameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_GameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameMode",
               &Z_Registration_Info_UClass_ADS_GameMode.InnerSingleton,
               StaticRegisterNativesADS_GameMode,0x3d8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_GameMode>,InternalVTableHelperCtorCaller<ADS_GameMode>,
               local_res8,AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_GameMode.InnerSingleton;
}

// StaticRegisterNativesADS_GameMode @ 14b4a1bf0

void __cdecl ADS_GameMode::StaticRegisterNativesADS_GameMode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_GameMode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnLoadedDataAsset @ 14b4a2a60

void __cdecl ADS_GameMode::execOnLoadedDataAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLoadedDataAsset((ADS_GameMode *)param_1);
  return;
}

// ADS_GameMode @ 14b998ba0

ADS_GameMode * __thiscall ADS_GameMode::ADS_GameMode(ADS_GameMode *this,FObjectInitializer *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_GameMode__6B_;
  this->CurGameStateType = None;
  this->PreGameStateType = None;
  *(undefined8 *)&this->GameStateMap = 0;
  *(undefined8 *)&(this->GameStateMap).field_0x8 = 0;
  *(undefined8 *)&(this->GameStateMap).field_0x20 = 0;
  *(undefined4 *)&(this->GameStateMap).field_0x28 = 0;
  *(undefined4 *)&(this->GameStateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GameStateMap).field_0x34 = 0;
  *(undefined4 *)&(this->GameStateMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GameStateMap).field_0x40 = 0;
  *(undefined4 *)&(this->GameStateMap).field_0x48 = 0;
  (this->GameStateList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameStateList).ArrayNum = 0;
  (this->GameStateList).ArrayMax = 0;
  *(undefined8 *)&this->ModelPropertyDelegate_GameStateType = 0;
  *(undefined8 *)&(this->ModelPropertyDelegate_GameStateType).field_0x8 = 0;
  *(undefined8 *)&(this->ModelPropertyDelegate_GameStateType).field_0x10 = 0;
  return this;
}

// ChangeGameState @ 14b99c350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_GameMode::ChangeGameState(ADS_GameMode *this,EDS_GameStateType param_1)

{
  EDS_GameStateType *pEVar1;
  UDS_GameInstance *this_00;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pEVar1 = &this->CurGameStateType;
  if (*pEVar1 == param_1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_GameMode::ChangeGameState",0x1d,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_138.Ptr,0xa3,L"CurGameStateType == InGameStateType");
    if ((void *)local_138._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_138._padding_);
    return;
  }
  if (*pEVar1 != None) {
    GetGameState(this,(EDS_GameStateType)&local_148);
    bVar2 = TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> *)&local_148,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_GameMode::ChangeGameState",0x1d,Yes);
      pwVar6 = L"curGameState is nullptr. (%d)";
      uVar5 = 0xad;
      goto LAB_14b99c564;
    }
    pUVar4 = FWeakObjectPtr::Get(&local_148);
    (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
  }
  this_00 = UDS_GameInstance::StaticInstance;
  if (((*pEVar1 != GameStartState) && (param_1 == LoginState)) &&
     (UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0)) {
    UDS_GameInstance::ResetManagers(UDS_GameInstance::StaticInstance);
    UDS_GameInstance::InitManagers(this_00);
  }
  this->PreGameStateType = *pEVar1;
  *pEVar1 = param_1;
  GetGameState(this,(EDS_GameStateType)&local_140);
  bVar2 = TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (!bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_140);
    (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4);
    FDS_ModelPropertyDelegate_EDS_GameStateType_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->ModelPropertyDelegate_GameStateType,&this->PreGameStateType,pEVar1);
    return;
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar3 = UDS_LogManager::GetInst();
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"ADS_GameMode::ChangeGameState",0x1d,Yes);
  pwVar6 = L"nextGameState is nullptr. (%d)";
  uVar5 = 0xc6;
LAB_14b99c564:
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// ClearSessionUID @ 14b99d030

void __thiscall ADS_GameMode::ClearSessionUID(ADS_GameMode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_AuthData *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
  FDS_AuthData::ResetData(this_00);
  pFVar3 = (this->GameStateList).AllocatorInstance.Data;
  iVar2 = (this->GameStateList).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->GameStateList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_GameStateBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x2d0))();
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// CreateGameState @ 14b9a0460

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ADS_GameMode::CreateGameState(ADS_GameMode *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>_>
  *this_00;
  TArray<TObjectPtr<UDS_GameStateBase>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_118 [32];
  undefined4 local_e8 [2];
  UObject *local_e0;
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  undefined4 *local_d0;
  UObject **local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  this_00 = &this->GameStateMap;
  bVar5 = 1 < *(int *)&(this->GameStateMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar1 = &(this->GameStateMap).field_0xc;
  *(undefined4 *)&(this->GameStateMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->GameStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameStateMap).field_0x34 = 0;
  iVar6 = *(int *)&(this->GameStateMap).field_0x2c;
  *(undefined4 *)&(this->GameStateMap).field_0x28 = 0;
  if ((iVar6 < 0) || (0x80 < iVar6)) {
    *(undefined4 *)&(this->GameStateMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GameStateMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->GameStateMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  pTVar3 = &this->GameStateList;
  piVar2 = &(this->GameStateList).ArrayMax;
  (this->GameStateList).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar3->AllocatorInstance,0,piVar2);
  }
  pUVar7 = AActor::GetWorld((AActor *)this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_GameStartState_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  local_e0 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  local_d0 = local_e8;
  local_c8 = &local_e0;
  local_e8[0] = 1;
  TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_GameStateType_&&,UDS_GameStateBase_*_&>_>
            (this_00,(TPairInitializer<EDS_GameStateType_&&,UDS_GameStateBase_*_&> *)local_d4,
             (bool *)(local_d4 + 4));
  iVar6 = (this->GameStateList).ArrayNum;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->GameStateList).ArrayNum = iVar6 + 1;
  *(UObject **)((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  pUVar7 = AActor::GetWorld((AActor *)this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_LoginState_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  local_d0 = local_e8;
  local_c8 = &local_e0;
  local_e8[0] = 2;
  local_e0 = pUVar9;
  TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_GameStateType_&&,UDS_GameStateBase_*_&>_>
            (this_00,(TPairInitializer<EDS_GameStateType_&&,UDS_GameStateBase_*_&> *)local_d4,
             (bool *)(local_d4 + 4));
  iVar6 = (this->GameStateList).ArrayNum;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  (this->GameStateList).ArrayNum = iVar6 + 1;
  *(UObject **)(pFVar4 + (longlong)iVar6 * 8) = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  pUVar7 = AActor::GetWorld((AActor *)this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UDS_IngameState_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = pUVar7;
  pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  local_d0 = local_e8;
  local_c8 = &local_e0;
  local_e8[0] = 3;
  local_e0 = pUVar9;
  TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_GameStateType_&&,UDS_GameStateBase_*_&>_>
            (this_00,(TPairInitializer<EDS_GameStateType_&&,UDS_GameStateBase_*_&> *)local_d4,
             (bool *)(local_d4 + 4));
  iVar6 = (this->GameStateList).ArrayNum;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  (this->GameStateList).ArrayNum = iVar6 + 1;
  *(UObject **)(pFVar4 + (longlong)iVar6 * 8) = local_e0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  pFVar11 = (pTVar3->AllocatorInstance).Data;
  iVar6 = (this->GameStateList).ArrayNum;
  pFVar4 = pFVar11 + (longlong)iVar6 * 8;
  while( true ) {
    if ((this->GameStateList).ArrayNum != iVar6) {
      `TCheckedPointerIterator<TObjectPtr<UDS_GameStateBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_d8);
    }
    if (pFVar11 == pFVar4) break;
    if (*(longlong **)pFVar11 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar11 + 0x2b0))();
    }
    pFVar11 = pFVar11 + 8;
  }
  return;
}

// DestroyGameState @ 14b9a6cd0

void __thiscall ADS_GameMode::DestroyGameState(ADS_GameMode *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->GameStateList).AllocatorInstance.Data;
  iVar4 = (this->GameStateList).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->GameStateList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_GameStateBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    if (*(longlong **)pFVar6 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar6 + 0x2b8))();
    }
    pFVar6 = pFVar6 + 8;
  }
  this_00 = &this->GameStateMap;
  bVar5 = 1 < *(int *)&(this->GameStateMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar1 = &(this->GameStateMap).field_0xc;
  *(undefined4 *)&(this->GameStateMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->GameStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameStateMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->GameStateMap).field_0x2c;
  *(undefined4 *)&(this->GameStateMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->GameStateMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GameStateMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->GameStateMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  piVar2 = &(this->GameStateList).ArrayMax;
  (this->GameStateList).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->GameStateList).AllocatorInstance,0,piVar2);
  }
  return;
}

// EndPlay @ 14b9a74e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_GameMode::EndPlay(ADS_GameMode *this,Type param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  AActor::EndPlay((AActor *)this,param_1);
  pFVar6 = (this->GameStateList).AllocatorInstance.Data;
  iVar4 = (this->GameStateList).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->GameStateList).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_GameStateBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    if (*(longlong **)pFVar6 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar6 + 0x2b8))();
    }
    pFVar6 = pFVar6 + 8;
  }
  this_00 = &this->GameStateMap;
  bVar5 = 1 < *(int *)&(this->GameStateMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar1 = &(this->GameStateMap).field_0xc;
  *(undefined4 *)&(this->GameStateMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->GameStateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GameStateMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->GameStateMap).field_0x2c;
  *(undefined4 *)&(this->GameStateMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->GameStateMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GameStateMap).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->GameStateMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  piVar2 = &(this->GameStateList).ArrayMax;
  (this->GameStateList).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->GameStateList).AllocatorInstance,0,piVar2);
  }
  return;
}

// GetCurGameState @ 14b9ae070

TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> __thiscall
ADS_GameMode::GetCurGameState(ADS_GameMode *this)

{
  FWeakObjectPtr FVar1;
  EDS_GameStateType in_EDX;
  int in_register_00000014;
  
  FVar1.ObjectSerialNumber = in_register_00000014;
  FVar1.ObjectIndex = in_EDX;
  GetGameState(this,in_EDX);
  return (TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr>)FVar1;
}

// GetCurGameStateType @ 14b9ae0a0

EDS_GameStateType __thiscall ADS_GameMode::GetCurGameStateType(ADS_GameMode *this)

{
  return this->CurGameStateType;
}

// GetGameState @ 14b9ae160

TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> __thiscall
ADS_GameMode::GetGameState(ADS_GameMode *this,EDS_GameStateType param_1)

{
  longlong lVar1;
  UObject *pUVar2;
  int iVar3;
  TObjectPtr<UDS_GameStateBase> *pTVar4;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  EDS_GameStateType in_R8D;
  undefined1 *puVar5;
  UObject *local_res8;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  if (*(int *)&(this->GameStateMap).field_0x8 != *(int *)&(this->GameStateMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->GameStateMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->GameStateMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->GameStateMap).field_0x48 - GameStartState & in_R8D) *
                              4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->GameStateMap;
      do {
        if (*(EDS_GameStateType *)(lVar1 + (longlong)iVar3 * 0x18) == in_R8D) {
          pTVar4 = TMapBase<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>_>
                   ::FindChecked(&this->GameStateMap,in_R8D);
          pUVar2 = (UObject *)(pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar2);
            }
          }
          *(undefined8 *)this_00 = 0;
          local_res8 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr>)this_00;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res8 = (UObject *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr>)this_00;
}

// GetInst @ 14b9aead0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr> __cdecl ADS_GameMode::GetInst(void)

{
  TObjectPtr<AGameModeBase> *this;
  bool bVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr in_RCX;
  AGameModeBase *pAVar4;
  AGameModeBase *local_res10;
  
  if ((UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) &&
     (pUVar2 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance),
     pUVar2 != (UWorld *)0x0)) {
    pAVar4 = (AGameModeBase *)0x0;
    this = &pUVar2->AuthorityGameMode;
    if ((this->field0_0x0).DebugPtr != (AGameModeBase *)0x0) {
      pUVar3 = Z_Construct_UClass_ADS_GameMode_NoRegister();
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
    return (TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>)in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  local_res10 = (AGameModeBase *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<ADS_GameMode,FWeakObjectPtr>)in_RCX;
}

// InitGameData @ 14b9b64d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_GameMode::InitGameData(ADS_GameMode *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_GameMode::InitGameData",0x1a,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Display,local_138.Ptr,0x10f,L"ADS_GameMode::InitGameData");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  DS_Util::Initialize();
  UDS_NameTagDataAsset::Initialize();
  UDS_FloatingTextDataAsset::Initialize();
  UDS_PacketProcessor::Initialize();
  FDS_EquipmentItemCharacterData::InitiailizeTableInfo();
  DS_Sorting<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>::Initialize();
  FDS_PlayerService::Initialize();
  return;
}

// OnLoadedDataAsset @ 14b9bd930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_GameMode::OnLoadedDataAsset(ADS_GameMode *this)

{
  int iVar1;
  UDS_GameInstance *this_00;
  UDS_LogManager *pUVar2;
  UWorld *this_01;
  ADS_PlayerController *this_02;
  UClass *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  this_00 = UDS_GameInstance::StaticInstance;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &UDS_GameInstance::StaticInstance->OnLoadDataAssetComplete,(UObject *)this);
    UDS_GameInstance::InitManagers(this_00);
  }
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"ADS_GameMode::InitGameData",0x1a,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x10f,L"ADS_GameMode::InitGameData");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  DS_Util::Initialize();
  UDS_NameTagDataAsset::Initialize();
  UDS_FloatingTextDataAsset::Initialize();
  UDS_PacketProcessor::Initialize();
  FDS_EquipmentItemCharacterData::InitiailizeTableInfo();
  DS_Sorting<TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_>::Initialize();
  FDS_PlayerService::Initialize();
  this_01 = AActor::GetWorld((AActor *)this);
  this_02 = (ADS_PlayerController *)UWorld::GetFirstPlayerController(this_01);
  if (this_02 != (ADS_PlayerController *)0x0) {
    pUVar3 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_02->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      ADS_PlayerController::SetupPlayerInputComponent(this_02,(UInputComponent *)this_02->_padding_)
      ;
    }
  }
  CreateGameState(this);
  ChangeGameState(this,GameStartState);
  ChangeGameState(this,LoginState);
  return;
}

// PostInitializeComponents @ 14b9c0430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_GameMode::PostInitializeComponents(ADS_GameMode *this)

{
  byte *pbVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 aFStackX_8 [2];
  FName FStackX_10;
  LARGE_INTEGER LStackX_18;
  FName FStackX_20;
  FName FStack_58;
  FName FStack_50;
  FStatMessage FStack_40;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_Actor_PostInitComponents ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
           )0x0) {
        pFVar8 = ::FName::FName(&FStackX_20,"STAT_Actor_PostInitComponents");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Actor_PostInitComponents,*pFVar8,
                   L"STAT_Actor_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar9 = StatPtr_STAT_Actor_PostInitComponents;
  if (StatPtr_STAT_Actor_PostInitComponents ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
       )0x0) {
    pFVar8 = ::FName::FName(&FStack_58,"STAT_Actor_PostInitComponents");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_AActor::PostInitializeComponents(void)_::_2_::FStat_STAT_Actor_PostInitComponents>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Actor_PostInitComponents,*pFVar8
                         ,L"STAT_Actor_PostInitComponents","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FStack_50.ComparisonIndex.Value = 0;
  FStack_50.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&aFStackX_8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_10.ComparisonIndex.Value = FVar11.Value;
        FStackX_10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Actor.cpp"
                   ,0x1992);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_18.s.LowPart = FVar11.Value;
      LStackX_18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_1473ac0a2;
    }
  }
  bVar5 = false;
  FVar12 = FStack_50;
LAB_1473ac0a2:
  if (this == (ADS_GameMode *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 | 2;
    AActor::UpdateAllReplicatedComponents((AActor *)this);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_40.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      FStack_40.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_18);
      FStack_40.StatData.Pad[4] = '\0';
      FStack_40.StatData.Pad[5] = '\0';
      FStack_40.StatData.Pad[6] = '\0';
      FStack_40.StatData.Pad[7] = '\0';
      FStack_40.StatData.Pad[0] = LStackX_18.s.LowPart._0_1_;
      FStack_40.StatData.Pad[1] = LStackX_18.s.LowPart._1_1_;
      FStack_40.StatData.Pad[2] = LStackX_18.s.LowPart._2_1_;
      FStack_40.StatData.Pad[3] = LStackX_18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_40);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RestartGameState @ 14b9c31d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_GameMode::RestartGameState(ADS_GameMode *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->CurGameStateType != None) {
    GetGameState(this,(EDS_GameStateType)local_148);
    bVar1 = TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GameStateBase,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"ADS_GameMode::RestartGameState",0x1e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0xd5,L"curGameState is nullptr. (%d)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(local_148);
      (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      pUVar3 = FWeakObjectPtr::Get(local_148);
      (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3);
      FDS_ModelPropertyDelegate_EDS_GameStateType_DelegateWrapper
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->ModelPropertyDelegate_GameStateType,&this->CurGameStateType,
                 &this->CurGameStateType);
    }
  }
  return;
}

// RestartPlayer @ 14b9c34b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ADS_GameMode::RestartPlayer(ADS_GameMode *this,AController *param_1)

{
  return;
}

// StartPlay @ 14b9c6450

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

void __thiscall ADS_GameMode::StartPlay(ADS_GameMode *this)

{
  FDS_LoadDataAssetCompleteDelegate *this_00;
  code *pcVar1;
  UDS_GameInstance *pUVar2;
  bool bVar3;
  UWorld *this_01;
  APlayerController *pAVar4;
  ADS_CameraManager *this_02;
  char *pcVar5;
  char *pcVar6;
  UObject *this_03;
  UFunction *pUVar7;
  char *pcVar8;
  <lambda_1> local_res10 [8];
  float local_res18 [2];
  EDS_CameraFadeState local_res20 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FWeakObjectPtr local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  ADS_GameMode *local_b0;
  FName *local_a8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_a0;
  FDestructionSentinel local_90;
  FReadAccessScope local_78;
  FInputModeUIOnly local_60;
  FReadAccessScope local_40;
  
  AGameModeBase::StartPlay((AGameModeBase *)this);
  FInputModeUIOnly::FInputModeUIOnly(&local_60);
  FInputModeUIOnly::SetLockMouseToViewportBehavior(&local_60,DoNotLock);
  this_01 = AActor::GetWorld((AActor *)this);
  pAVar4 = UWorld::GetFirstPlayerController(this_01);
  if (pAVar4 != (APlayerController *)0x0) {
    pAVar4->bShowMouseCursor = 1;
    (**(code **)(pAVar4->_padding_ + 0xd68))(pAVar4,&local_60);
    (**(code **)(pAVar4->_padding_ + 0xd58))(pAVar4,0);
  }
  this_02 = ADS_CameraManager::GetInst();
  pcVar8 = &DAT_00000002;
  if (this_02 != (ADS_CameraManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = FadeOut;
    ADS_CameraManager::RequestFade(this_02,local_res20,local_res18);
  }
  pUVar2 = UDS_GameInstance::StaticInstance;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) goto LAB_14b9c671d;
  this_00 = &UDS_GameInstance::StaticInstance->OnLoadDataAssetComplete;
  pcVar5 = strstr("&ADS_GameMode::OnLoadedDataAsset","::");
  if (pcVar5 == (char *)0x0) {
LAB_14b9c656a:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar6 == (char *)0x0) || (pcVar8 = pcVar6 + 2, pcVar6[2] == '0')) goto LAB_14b9c656a;
  }
  ::FName::FName(&local_b8,pcVar8);
  if ((this == (ADS_GameMode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_c0 = local_b8;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.ObjectIndex = 0;
  local_d0.ObjectSerialNumber = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((this == (ADS_GameMode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_GameMode *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_b0);
  local_c8 = local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_78);
  if ((local_c8 == (FName)0x0) ||
     (this_03 = FWeakObjectPtr::Get(&local_d0), this_03 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
LAB_14b9c669a:
    local_a8 = &local_c0;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::__Internal_BindDynamic<ADS_GameMode>'::
    __l2::<lambda_1>::operator()(&local_a8);
  }
  else {
    pUVar7 = UObject::FindFunction(this_03,local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    if (pUVar7 == (UFunction *)0x0) goto LAB_14b9c669a;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_d8,&local_40);
  local_a0.Object = local_d0;
  local_a0.FunctionName = local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_90);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar2->OnLoadDataAssetComplete).field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)this_00,&local_a0);
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
LAB_14b9c671d:
  FInputModeUIOnly::~FInputModeUIOnly(&local_60);
  return;
}

