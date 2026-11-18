// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// StaticClass @ 14b49ebd0

UClass * __cdecl UDS_GameOptionManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameOptionManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameOptionManager",
               &Z_Registration_Info_UClass_UDS_GameOptionManager.InnerSingleton,
               StaticRegisterNativesUDS_GameOptionManager,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GameOptionManager>,
               InternalVTableHelperCtorCaller<UDS_GameOptionManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameOptionManager.InnerSingleton;
}

// UDS_GameOptionManager @ 14b49ff90

UDS_GameOptionManager * __thiscall
UDS_GameOptionManager::UDS_GameOptionManager(UDS_GameOptionManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->GameOptionVersion = 1;
  this->_padding_ = (longlong)&___7UDS_GameOptionManager__6B_;
  *(undefined8 *)&this->MapGameOptionData = 0;
  *(undefined8 *)&(this->MapGameOptionData).field_0x8 = 0;
  *(undefined8 *)&(this->MapGameOptionData).field_0x20 = 0;
  *(undefined4 *)&(this->MapGameOptionData).field_0x28 = 0;
  *(undefined4 *)&(this->MapGameOptionData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapGameOptionData).field_0x34 = 0;
  *(undefined4 *)&(this->MapGameOptionData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapGameOptionData).field_0x40 = 0;
  *(undefined4 *)&(this->MapGameOptionData).field_0x48 = 0;
  *(undefined8 *)&this->LoadedGameOptionDeviceDelegate = 0;
  *(undefined8 *)&(this->LoadedGameOptionDeviceDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedGameOptionDeviceDelegate).field_0x10 = 0;
  *(undefined8 *)&this->LoadedGameOptionDBDelegate = 0;
  *(undefined8 *)&(this->LoadedGameOptionDBDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedGameOptionDBDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SavedGameOptionDeviceDelegate = 0;
  *(undefined8 *)&(this->SavedGameOptionDeviceDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SavedGameOptionDeviceDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SavedGameOptionDBDelegate = 0;
  *(undefined8 *)&(this->SavedGameOptionDBDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SavedGameOptionDBDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->LoadedGameOptionDeviceDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->LoadedGameOptionDBDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->SavedGameOptionDeviceDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->SavedGameOptionDBDelegate).field_0x18 = 2;
  return this;
}

// UDS_GameOptionManager @ 14b4a0070

UDS_GameOptionManager * __thiscall
UDS_GameOptionManager::UDS_GameOptionManager
          (UDS_GameOptionManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->GameOptionVersion = 1;
  this->_padding_ = (longlong)&___7UDS_GameOptionManager__6B_;
  *(undefined8 *)&this->MapGameOptionData = 0;
  *(undefined8 *)&(this->MapGameOptionData).field_0x8 = 0;
  *(undefined8 *)&(this->MapGameOptionData).field_0x20 = 0;
  *(undefined4 *)&(this->MapGameOptionData).field_0x28 = 0;
  *(undefined4 *)&(this->MapGameOptionData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapGameOptionData).field_0x34 = 0;
  *(undefined4 *)&(this->MapGameOptionData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapGameOptionData).field_0x40 = 0;
  *(undefined4 *)&(this->MapGameOptionData).field_0x48 = 0;
  *(undefined8 *)&this->LoadedGameOptionDeviceDelegate = 0;
  *(undefined8 *)&(this->LoadedGameOptionDeviceDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedGameOptionDeviceDelegate).field_0x10 = 0;
  *(undefined8 *)&this->LoadedGameOptionDBDelegate = 0;
  *(undefined8 *)&(this->LoadedGameOptionDBDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedGameOptionDBDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SavedGameOptionDeviceDelegate = 0;
  *(undefined8 *)&(this->SavedGameOptionDeviceDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SavedGameOptionDeviceDelegate).field_0x10 = 0;
  *(undefined8 *)&this->SavedGameOptionDBDelegate = 0;
  *(undefined8 *)&(this->SavedGameOptionDBDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->SavedGameOptionDBDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->LoadedGameOptionDeviceDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->LoadedGameOptionDBDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->SavedGameOptionDeviceDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->SavedGameOptionDBDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_GameOptionManager @ 14b4a0b40

void __thiscall UDS_GameOptionManager::~UDS_GameOptionManager(UDS_GameOptionManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_GameOptionManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SavedGameOptionDBDelegate).field_0x8,
             *(int *)&(this->SavedGameOptionDBDelegate).field_0x10);
  pvVar1 = *(void **)&(this->SavedGameOptionDBDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SavedGameOptionDBDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->SavedGameOptionDeviceDelegate).field_0x8,
             *(int *)&(this->SavedGameOptionDeviceDelegate).field_0x10);
  pvVar1 = *(void **)&(this->SavedGameOptionDeviceDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SavedGameOptionDeviceDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LoadedGameOptionDBDelegate).field_0x8,
             *(int *)&(this->LoadedGameOptionDBDelegate).field_0x10);
  pvVar1 = *(void **)&(this->LoadedGameOptionDBDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LoadedGameOptionDBDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LoadedGameOptionDeviceDelegate).field_0x8,
             *(int *)&(this->LoadedGameOptionDeviceDelegate).field_0x10);
  pvVar1 = *(void **)&(this->LoadedGameOptionDeviceDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LoadedGameOptionDeviceDelegate);
  *(undefined4 *)&(this->MapGameOptionData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapGameOptionData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MapGameOptionData);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a18d0

UClass * __cdecl UDS_GameOptionManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GameOptionManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GameOptionManager",
               &Z_Registration_Info_UClass_UDS_GameOptionManager.InnerSingleton,
               StaticRegisterNativesUDS_GameOptionManager,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GameOptionManager>,
               InternalVTableHelperCtorCaller<UDS_GameOptionManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GameOptionManager.InnerSingleton;
}

// StaticRegisterNativesUDS_GameOptionManager @ 14b4a1c80

void __cdecl UDS_GameOptionManager::StaticRegisterNativesUDS_GameOptionManager(void)

{
  return;
}

// ChangeGraphicOption @ 14baf5fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_GameOptionManager::ChangeGraphicOption
          (UDS_GameOptionManager *this,UDS_GameOptionData *param_1,int param_2)

{
  code *pcVar1;
  UEngine *pUVar2;
  bool bVar3;
  EDS_GameOptionType EVar4;
  FOutputDeviceRedirector *pFVar5;
  undefined8 uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UDS_GameOptionData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_254042226022154088>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                       ,0x98,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    iVar7 = 0;
    do {
      UDS_GameOptionData::SetGameOptionValue(param_1,iVar7,(uint)(param_2 == iVar7));
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    UDS_GameOptionData::BroadcastDataToVM(param_1);
    EVar4 = UDS_GameOptionData::GetGameOptionID(param_1);
    pUVar2 = GEngine;
    switch(EVar4) {
    case Graphic_ViewDistanceQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_c8,L"sg.ViewDistanceQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar8.Data = local_c8.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      break;
    case Graphic_AntiAliasingQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_b8,L"sg.AntiAliasingQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_b8.Data.ArrayNum != 0) {
        FVar8.Data = local_b8.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
      break;
    case Graphic_ShadowQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_a8,L"sg.ShadowQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar8.Data = local_a8.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      break;
    case Graphic_GlobalIlluminationQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_98,L"sg.GlobalIlluminationQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar8.Data = local_98.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      break;
    case Graphic_ReflectionQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_88,L"sg.ReflectionQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar8.Data = local_88.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      break;
    case Graphic_PostProcessQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_78,L"sg.PostProcessQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar8.Data = local_78.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      break;
    case Graphic_TextureQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_68,L"sg.TextureQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      break;
    case Graphic_EffectsQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_58,L"sg.EffectsQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      break;
    case Graphic_FoliageQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_48,L"sg.FoliageQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar8.Data = local_48.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      break;
    case Graphic_ShadingQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_38,L"sg.ShadingQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      break;
    case Graphic_LandscapeQuality:
      pcVar1 = *(code **)(GEngine->_padding_ + 8);
      pFVar5 = GetGlobalLogSingleton();
      ::FString::PrintfImpl(&local_28,L"sg.LandscapeQuality %d");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar8.Data = local_28.Data.AllocatorInstance.Data;
      }
      uVar6 = (**(code **)(this->_padding_ + 0x180))(this);
      (*pcVar1)(&pUVar2->_padding_,uVar6,FVar8.Data,pFVar5);
      break;
    default:
      goto switchD_14baf6084_default;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
switchD_14baf6084_default:
  return;
}

// ChangeTotalGraphicOption @ 14baf64f0

void __thiscall
UDS_GameOptionManager::ChangeTotalGraphicOption(UDS_GameOptionManager *this,int param_1)

{
  UDS_GameOptionData *pUVar1;
  EDS_GameOptionType EVar2;
  
  EVar2 = Graphic_ViewDistanceQuality;
  do {
    pUVar1 = GetGameOptionData(this,EVar2);
    ChangeGraphicOption(this,pUVar1,param_1);
    EVar2 = EVar2 + 1;
  } while ((int)EVar2 < 0x19e);
  return;
}

// GetGameOptionData @ 14bb0ab90

UDS_GameOptionData * __thiscall
UDS_GameOptionManager::GetGameOptionData(UDS_GameOptionManager *this,EDS_GameOptionType param_1)

{
  longlong lVar1;
  TObjectPtr<UDS_GameOptionData> TVar2;
  int iVar3;
  TObjectPtr<UDS_GameOptionData>_u_0 *pTVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->MapGameOptionData).field_0x8 != *(int *)&(this->MapGameOptionData).field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->MapGameOptionData).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->MapGameOptionData).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->MapGameOptionData).field_0x48 + ~None & param_1) * 4)
    ;
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->MapGameOptionData;
      do {
        if (*(EDS_GameOptionType *)(lVar1 + (longlong)iVar3 * 0x18) == param_1) {
          pTVar4 = &TMapBase<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
                    ::FindChecked(&this->MapGameOptionData,param_1)->field0_0x0;
          TVar2.field0_0x0 = (TObjectPtr<UDS_GameOptionData>_u_0)pTVar4->DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar2.field0_0x0 != (UDS_GameOptionData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
          }
          return (UDS_GameOptionData *)TVar2.field0_0x0;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return (UDS_GameOptionData *)0x0;
}

// GetGameOptionDataList @ 14bb0ac30

TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_GameOptionManager::GetGameOptionDataList
          (UDS_GameOptionManager *this,
          TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *pTVar7;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FDS_GameOptionBaseTableRow *pFVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  int local_res20;
  UObject *local_b8;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *local_b0;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->MapGameOptionData).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_b0 = &this->MapGameOptionData;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar10 = *(int *)&(this->MapGameOptionData).field_0x28;
  uStack_9c = 1;
  iStack_a0 = 0;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->MapGameOptionData).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14bb0acdd;
      uVar15 = puVar17[lVar13 + 1];
    }
    uStack_9c = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar10 < iStack_8c) {
      iStack_8c = iVar10;
    }
  }
LAB_14bb0acdd:
  iStack_80 = *(int *)&(this->MapGameOptionData).field_0x8 -
              *(int *)&(this->MapGameOptionData).field_0x34;
  uVar15 = *(uint *)&(this->MapGameOptionData).field_0x28;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  uVar18 = uVar15 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_res18 = param_1;
  local_a8 = local_b0;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_b0;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar7 = local_b0;
  uVar3 = *(uint *)&(this->MapGameOptionData).field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&(this->MapGameOptionData).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14bb0adf0;
      uVar15 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    uVar15 = local_res20 + -1 + uVar18;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_14bb0adf0:
  while( true ) {
    pTVar8 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    break;
    lVar13 = *(longlong *)pTVar8;
    iVar10 = *(int *)(lVar13 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    pUVar4 = *(UObject **)(lVar13 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pFVar12 = FDS_GameOptionBaseTableRow::Get((longlong)iVar10,true);
    if ((pFVar12 != (FDS_GameOptionBaseTableRow *)0x0) &&
       (pFVar12->OptionStorageType == (EDS_OptionStorageType)local_res18)) {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_b8 = pUVar4;
      if ((pFVar5 <= (FScriptContainerElement *)&local_b8) &&
         (((FScriptContainerElement *)&local_b8 <
           pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)))) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           local_b8;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// GetGameOptionDataList @ 14bb0af40

TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_GameOptionManager::GetGameOptionDataList
          (UDS_GameOptionManager *this,
          TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_ComponentType param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *pTVar7;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FDS_GameOptionBaseTableRow *pFVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  int local_res10;
  EDS_ComponentType local_res18;
  int local_res20;
  UObject *local_b8;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *local_b0;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->MapGameOptionData).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_b0 = &this->MapGameOptionData;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar10 = *(int *)&(this->MapGameOptionData).field_0x28;
  uStack_9c = 1;
  iStack_a0 = 0;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar10 != 0) {
    puVar17 = *(uint **)&(this->MapGameOptionData).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14bb0afed;
      uVar15 = puVar17[lVar13 + 1];
    }
    uStack_9c = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res10 = (int)lVar13;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar10 < iStack_8c) {
      iStack_8c = iVar10;
    }
  }
LAB_14bb0afed:
  iStack_80 = *(int *)&(this->MapGameOptionData).field_0x8 -
              *(int *)&(this->MapGameOptionData).field_0x34;
  uVar15 = *(uint *)&(this->MapGameOptionData).field_0x28;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  uVar18 = uVar15 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_res18 = param_1;
  local_a8 = local_b0;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_b0;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar10 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  pTVar7 = local_b0;
  uVar3 = *(uint *)&(this->MapGameOptionData).field_0x28;
  if (uVar15 != uVar3) {
    puVar16 = *(undefined1 **)&(this->MapGameOptionData).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar13 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14bb0b100;
      uVar15 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    uVar15 = local_res20 + -1 + uVar18;
    if ((int)uVar3 < (int)uVar15) {
      uVar15 = uVar3;
    }
  }
LAB_14bb0b100:
  while( true ) {
    pTVar8 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar15) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    break;
    lVar13 = *(longlong *)pTVar8;
    iVar10 = *(int *)(lVar13 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    pUVar4 = *(UObject **)(lVar13 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pFVar12 = FDS_GameOptionBaseTableRow::Get((longlong)iVar10,true);
    if ((pFVar12 != (FDS_GameOptionBaseTableRow *)0x0) && (pFVar12->ComponentType == local_res18)) {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_b8 = pUVar4;
      if ((pFVar5 <= (FScriptContainerElement *)&local_b8) &&
         (((FScriptContainerElement *)&local_b8 <
           pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)))) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == __return_storage_ptr__->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           local_b8;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// GetInst @ 14bb0b8e0

UDS_GameOptionManager * __cdecl UDS_GameOptionManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_GameOptionManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this != (UDS_GameInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
    pUVar3 = (UDS_GameOptionManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
    if (pUVar3 != (UDS_GameOptionManager *)0x0) {
      pUVar2 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return pUVar3;
      }
    }
  }
  return (UDS_GameOptionManager *)0x0;
}

// GetJwtKey @ 14bb0c100

FString * __thiscall
UDS_GameOptionManager::GetJwtKey(UDS_GameOptionManager *this,FString *__return_storage_ptr__)

{
  FDS_AuthData *pFVar1;
  
  pFVar1 = TDS_Singleton<FDS_AuthData>::GetInst();
  ::FString::FString(__return_storage_ptr__,&pFVar1->JwtKey);
  return __return_storage_ptr__;
}

// GetPlayerUID @ 14bb0d440

long64 __thiscall UDS_GameOptionManager::GetPlayerUID(UDS_GameOptionManager *this)

{
  code *pcVar1;
  bool bVar2;
  FDS_AuthData *pFVar3;
  long64 lVar4;
  longlong lVar5;
  
  pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
  lVar5 = pFVar3->PlayerUID;
  if (lVar5 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_254042226022153691>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                       ,0x225,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
    lVar5 = 0;
  }
  return lVar5;
}

// GetRegionIndex @ 14bb0ffe0

int __thiscall UDS_GameOptionManager::GetRegionIndex(UDS_GameOptionManager *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_AuthData *pFVar4;
  
  pFVar4 = TDS_Singleton<FDS_AuthData>::GetInst();
  iVar3 = pFVar4->RegionIndex;
  if (iVar3 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_254042226022153683>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                       ,0x22d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = 0;
  }
  return iVar3;
}

// Init @ 14bb13560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_GameOptionManager::Init(UDS_GameOptionManager *this)

{
  undefined1 *puVar1;
  EDS_GameOptionType *pEVar2;
  undefined8 *puVar3;
  FDS_GameOptionBaseTableRow *pFVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  TObjectPtr<UDS_GameOptionData>_u_0 *pTVar8;
  TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> this_00;
  UDS_AccountLocalSave *this_01;
  FString *pFVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStackY_128 [32];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [16];
  TPairInitializer<EDS_GameOptionType_const_&,UDS_GameOptionData_*_&&> TStack_c8;
  undefined1 auStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar5 = 1 < *(int *)&(this->MapGameOptionData).field_0x48;
  if (!bVar5) {
    TSet<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->MapGameOptionData);
  }
  puVar1 = &(this->MapGameOptionData).field_0xc;
  *(undefined4 *)&(this->MapGameOptionData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->MapGameOptionData,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MapGameOptionData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapGameOptionData).field_0x34 = 0;
  iVar10 = *(int *)&(this->MapGameOptionData).field_0x2c;
  *(undefined4 *)&(this->MapGameOptionData).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->MapGameOptionData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapGameOptionData).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->MapGameOptionData).field_0x48 = 1;
    TSet<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>,FDefaultSetAllocator>
    ::Rehash(&this->MapGameOptionData);
  }
  FDS_GameOptionBaseTableRow::GetAll
            ((TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)
             (auStack_f0 + 8));
  iVar10 = (int)auStack_f0._16_8_;
  puVar3 = (undefined8 *)(auStack_f0._8_8_ + (longlong)iVar10 * 8);
  puVar11 = (undefined8 *)auStack_f0._8_8_;
  while( true ) {
    if ((int)auStack_f0._16_8_ != iVar10) {
      `TCheckedPointerIterator<FDS_GameOptionBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStack_f8);
    }
    if (puVar11 == puVar3) break;
    pFVar4 = (FDS_GameOptionBaseTableRow *)*puVar11;
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_GameOptionData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_b8,pUVar7);
    auStack_b8._8_8_ = pUVar6;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_b8);
    if (auStack_b8._64_8_ != 0) {
      plVar12 = (longlong *)(auStack_b8 + 0x50);
      if ((longlong *)auStack_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)auStack_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    auStack_d8._8_8_ = auStack_f0;
    pEVar2 = &pFVar4->ID;
    auStack_f0._0_8_ = pUVar6;
    auStack_d8._0_8_ = pEVar2;
    TSet<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_GameOptionType_const_&,UDS_GameOptionData_*_&&>_>
              (&this->MapGameOptionData,&TStack_c8,(bool *)auStack_d8);
    pTVar8 = &TMapBase<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
              ::FindChecked(&this->MapGameOptionData,*pEVar2)->field0_0x0;
    UDS_GameOptionData::SetDefaultGameOption(pTVar8->DebugPtr,pFVar4);
    puVar11 = puVar11 + 1;
  }
  if ((undefined8 *)auStack_f0._8_8_ != (undefined8 *)0x0) {
    FMemory::Free((void *)auStack_f0._8_8_);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_GameOptionManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->LoadedGameOptionDeviceDelegate,(UDS_GameOptionManager *)auStack_f0,
             (pmf_6b20ef5d)this);
  this_00 = UDS_AccountLocalSave::GetInst();
  this_01 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  pFVar9 = UDS_AccountLocalSave::GetGameOption(this_01,(FString *)auStack_d8);
  MakeJsonToGameOption(this,200,pFVar9);
  if ((FScriptContainerElement *)auStack_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_d8._0_8_);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->LoadedGameOptionDeviceDelegate);
  return;
}

// InitGameOptionData @ 14bb147a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_GameOptionManager::InitGameOptionData(UDS_GameOptionManager *this)

{
  undefined1 *puVar1;
  EDS_GameOptionType *pEVar2;
  undefined8 *puVar3;
  FDS_GameOptionBaseTableRow *pFVar4;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  TObjectPtr<UDS_GameOptionData>_u_0 *pTVar8;
  TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> this_00;
  UDS_AccountLocalSave *this_01;
  FString *pFVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [8];
  undefined1 local_f0 [24];
  undefined1 local_d8 [16];
  TPairInitializer<EDS_GameOptionType_const_&,UDS_GameOptionData_*_&&> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar5 = 1 < *(int *)&(this->MapGameOptionData).field_0x48;
  if (!bVar5) {
    TSet<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->MapGameOptionData);
  }
  puVar1 = &(this->MapGameOptionData).field_0xc;
  *(undefined4 *)&(this->MapGameOptionData).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->MapGameOptionData,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MapGameOptionData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MapGameOptionData).field_0x34 = 0;
  iVar10 = *(int *)&(this->MapGameOptionData).field_0x2c;
  *(undefined4 *)&(this->MapGameOptionData).field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->MapGameOptionData).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MapGameOptionData).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->MapGameOptionData).field_0x48 = 1;
    TSet<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>,FDefaultSetAllocator>
    ::Rehash(&this->MapGameOptionData);
  }
  FDS_GameOptionBaseTableRow::GetAll
            ((TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)
             (local_f0 + 8));
  iVar10 = (int)local_f0._16_8_;
  puVar3 = (undefined8 *)(local_f0._8_8_ + (longlong)iVar10 * 8);
  puVar11 = (undefined8 *)local_f0._8_8_;
  while( true ) {
    if ((int)local_f0._16_8_ != iVar10) {
      `TCheckedPointerIterator<FDS_GameOptionBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_f8);
    }
    if (puVar11 == puVar3) break;
    pFVar4 = (FDS_GameOptionBaseTableRow *)*puVar11;
    pUVar6 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = Z_Construct_UClass_UDS_GameOptionData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar7);
    local_b8._8_8_ = pUVar6;
    pUVar6 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar12 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar12 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    local_d8._8_8_ = local_f0;
    pEVar2 = &pFVar4->ID;
    local_f0._0_8_ = pUVar6;
    local_d8._0_8_ = pEVar2;
    TSet<TTuple<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>_>,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_GameOptionType_const_&,UDS_GameOptionData_*_&&>_>
              (&this->MapGameOptionData,&local_c8,(bool *)local_d8);
    pTVar8 = &TMapBase<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
              ::FindChecked(&this->MapGameOptionData,*pEVar2)->field0_0x0;
    UDS_GameOptionData::SetDefaultGameOption(pTVar8->DebugPtr,pFVar4);
    puVar11 = puVar11 + 1;
  }
  if ((undefined8 *)local_f0._8_8_ != (undefined8 *)0x0) {
    FMemory::Free((void *)local_f0._8_8_);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_GameOptionManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->LoadedGameOptionDeviceDelegate,(UDS_GameOptionManager *)local_f0,
             (pmf_6b20ef5d)this);
  this_00 = UDS_AccountLocalSave::GetInst();
  this_01 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  pFVar9 = UDS_AccountLocalSave::GetGameOption(this_01,(FString *)local_d8);
  MakeJsonToGameOption(this,200,pFVar9);
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->LoadedGameOptionDeviceDelegate);
  return;
}

// IsChangedGameOption @ 14bb14bd0

bool __thiscall UDS_GameOptionManager::IsChangedGameOption(UDS_GameOptionManager *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res18 [16];
  TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> local_18;
  
  GetGameOptionDataList(this,&local_18,param_1);
  iVar3 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UDS_GameOptionData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar4.Data == pFVar1) break;
    bVar2 = UDS_GameOptionData::IsChangedOption(*(UDS_GameOptionData **)FVar4.Data);
    if (bVar2) {
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
      return true;
    }
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return false;
}

// LoadGameOptionDB @ 14bb17390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GameOptionManager::LoadGameOptionDB(UDS_GameOptionManager *this)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  FDS_HttpRequest *pFVar2;
  bool bVar3;
  FDS_HttpServer *pFVar4;
  FDS_AuthData *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  int iVar9;
  UDS_GameOptionManager *local_res8;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  TSharedRef<FDS_HttpRequest,1> local_68;
  TSharedPtr<FDS_HttpRequest,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pFVar4 = TDS_Singleton<FDS_HttpServer>::GetInst();
  pFVar5 = TDS_Singleton<FDS_AuthData>::GetInst();
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = (pFVar5->JwtKey).Data.ArrayNum;
  lVar8 = (longlong)local_80;
  _Src = (pFVar5->JwtKey).Data.AllocatorInstance.Data;
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80,0,&local_88,local_80,&local_7c);
    memcpy(local_88.Data,_Src,lVar8 * 2);
  }
  pFVar5 = TDS_Singleton<FDS_AuthData>::GetInst();
  if ((pFVar5->RegionIndex == 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_254042226022153683>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                         ,0x22d,"false"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = TDS_Singleton<FDS_AuthData>::GetInst();
  if ((pFVar5->PlayerUID == 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_254042226022153691>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                         ,0x225,"false"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FDS_Urls::GetGameOption(&pFVar4->Urls);
  ::FString::PrintfImpl(&local_78,L"%s&player_uid=%lld&version=%d&region_index=%d&jwt_key=%s");
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  MakeShared<FDS_HttpRequest,1>(&local_68);
  pFVar2 = local_68.Object;
  iVar9 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange
            (&(local_68.Object)->URL,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar9);
  pFVar2->Verb = GET;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->SuccessDel,
             (FWriteAccessScope *)&local_48);
  local_30 = &(pFVar2->SuccessDel).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_30);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameOptionManager____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
    puVar6[4] = OnResponseLoadGameOptionDB;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  pFVar4 = TDS_Singleton<FDS_HttpServer>::GetInst();
  local_58.Object = local_68.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDS_HttpServer::Request(pFVar4,&local_58);
  if (2 < (byte)DS_CommonLog._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// LoadGameOptionDevice @ 14bb17660

void __thiscall UDS_GameOptionManager::LoadGameOptionDevice(UDS_GameOptionManager *this)

{
  TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> this_00;
  UDS_AccountLocalSave *this_01;
  FString *pFVar1;
  FString local_18;
  
  this_00 = UDS_AccountLocalSave::GetInst();
  this_01 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  pFVar1 = UDS_AccountLocalSave::GetGameOption(this_01,&local_18);
  MakeJsonToGameOption(this,200,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->LoadedGameOptionDeviceDelegate);
  return;
}

// MakeJsonToGameOption @ 14bb19320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_GameOptionManager::MakeJsonToGameOption
          (UDS_GameOptionManager *this,int param_1,FString *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TJsonStringReader<wchar_t> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  FJsonObject *pFVar8;
  bool bVar9;
  uint uVar10;
  EDS_GameOptionType EVar11;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar12;
  TSharedPtr<FJsonValue,1> *pTVar13;
  TSharedPtr<FJsonObject,1> *pTVar14;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  FDS_GameOptionBaseTableRow *pFVar16;
  UDS_LogManager *pUVar17;
  UDS_GameOptionData *pUVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  wchar_t *_Str;
  ForAnyElementType FVar21;
  int iVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 *puVar26;
  uint *puVar27;
  FJsonObject *pFVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  undefined1 auStackY_3c8 [32];
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376 [2];
  uint local_374;
  int local_370 [2];
  ForAnyElementType local_368;
  int local_360;
  int local_35c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_358;
  TSharedPtr<FJsonObject,1> local_348;
  ForAnyElementType local_338;
  int local_330;
  int local_32c;
  TArray<int,TSizedDefaultAllocator<32>_> local_328;
  UDS_GameOptionManager *local_318;
  StackState local_310;
  int local_2d8;
  TBitArray<FDefaultBitArrayAllocator> *local_2d0;
  FJsonObject *local_2c8;
  TReferenceControllerBase<1> *local_2c0;
  TReferenceControllerBase<1> *local_2b8;
  FString local_2b0;
  FJsonObject *local_2a0;
  int iStack_298;
  uint uStack_294;
  undefined1 *local_290;
  undefined4 uStack_288;
  int iStack_284;
  int local_280;
  undefined4 uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  int local_270;
  FJsonObject *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  FString local_1a8;
  FString local_198 [2];
  undefined4 local_16c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_318 = this;
  if (param_1 - 200U < 7) {
    if (4 < (byte)DS_CommonLog._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
    }
    pTVar12 = TJsonStringReader<wchar_t>::Create(&local_1f8,param_2);
    pTVar4 = pTVar12->Object;
    local_2b8 = (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_2b8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_2b8->SharedReferenceCount = (atomic<int>)((int)local_2b8->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
    local_310.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.Identifier.Data.ArrayNum = 0;
    local_310.Identifier.Data.ArrayMax = 0;
    local_310.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_348.Object = (FJsonObject *)0x0;
    local_348.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_310.Array.ArrayNum = 0;
    local_310.Array.ArrayMax = 0;
    local_310.Object.Object = (FJsonObject *)0x0;
    local_310.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar9 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar4,&local_310,None);
    if (bVar9) {
      bVar9 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_310,&local_348);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_310.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_310.Array.AllocatorInstance.Data,
                 local_310.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_310.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_310.Array.AllocatorInstance.Data);
      }
      if (local_310.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Identifier.Data.AllocatorInstance.Data);
      }
      if ((bVar9) &&
         ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)local_348.Object !=
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)0x0)) {
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_348.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar28 = local_348.Object;
        uStack_210 = 7;
        local_218 = L"Version";
        local_1e8._12_4_ = uStack_20c;
        local_1e8.Size = 7;
        local_1e8.DataPtr = L"Version";
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(7,L"Version");
        pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  ::FindByHash<TStringView<wchar_t>_>
                            ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                              *)pFVar28,uVar10,&local_1e8);
        if ((pTVar13 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar13->Object != (FJsonValue *)0x0))
        {
          if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)local_348.Object ==
               (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_208 = L"Version";
          uStack_200 = 7;
          local_1d8._12_4_ = uStack_1fc;
          local_1d8.Size = 7;
          local_1d8.DataPtr = L"Version";
          dVar7 = FJsonObject::GetNumberField(local_348.Object,&local_1d8);
          this->GameOptionVersion = (int)dVar7;
          if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)local_348.Object ==
               (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar28 = local_348.Object;
          local_238 = L"Option";
          uStack_230 = 6;
          local_1c8._12_4_ = uStack_22c;
          local_1c8.Size = 6;
          local_1c8.DataPtr = L"Option";
          uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(6,L"Option");
          pTVar13 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    ::FindByHash<TStringView<wchar_t>_>
                              ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                *)pFVar28,uVar10,&local_1c8);
          if ((pTVar13 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar13->Object != (FJsonValue *)0x0)
             ) {
            if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)local_348.Object ==
                 (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                  *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_228 = L"Option";
            uStack_220 = 6;
            local_1b8._12_4_ = uStack_21c;
            local_1b8.Size = 6;
            local_1b8.DataPtr = L"Option";
            pTVar14 = FJsonObject::GetObjectField(local_348.Object,&local_1b8);
            pFVar28 = pTVar14->Object;
            local_2c0 = (pTVar14->SharedReferenceCount).ReferenceController;
            if (local_2c0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_2c0->SharedReferenceCount =
                   (atomic<int>)((int)local_2c0->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_2c8 = pFVar28;
            if ((pFVar28 == (FJsonObject *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar2 = *(int *)&(pFVar28->Values).field_0x28;
            pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar28->Values).field_0x10;
            uStack_294 = 1;
            local_280 = 0;
            iStack_284 = local_280;
            iStack_298 = 0;
            if (iVar2 != 0) {
              puVar27 = *(uint **)&(pFVar28->Values).field_0x20;
              if (puVar27 == (uint *)0x0) {
                puVar27 = (uint *)pTVar29;
              }
              uVar10 = *puVar27;
              local_280 = 0;
              while (uVar10 == 0) {
                lVar20 = (longlong)iStack_298;
                local_280 = local_280 + 0x20;
                iStack_298 = iStack_298 + 1;
                iStack_284 = iVar2;
                if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_298)
                goto LAB_14bb1972d;
                uVar10 = puVar27[lVar20 + 1];
              }
              uStack_294 = -uVar10 & uVar10;
              uVar1 = (ulonglong)uStack_294 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_270 = (int)lVar20;
              iStack_284 = local_280 + -1 + local_270;
              if (iVar2 < iStack_284) {
                iStack_284 = iVar2;
              }
            }
LAB_14bb1972d:
            uVar10 = *(uint *)&(pFVar28->Values).field_0x28;
            uStack_27c = local_16c;
            uVar23 = uVar10 & 0xffffffe0;
            iStack_278 = *(int *)&(pFVar28->Values).field_0x8 -
                         *(int *)&(pFVar28->Values).field_0x34;
            uStack_288 = 0xffffffff;
            TStack_260._padding_ = CONCAT44(uStack_294,iStack_298);
            TStack_260.CurrentBitIndex = iStack_284;
            TStack_260.UnvisitedBitMask = 0xffffffff;
            iVar22 = (int)uVar10 >> 5;
            TStack_260._28_4_ = local_16c;
            TStack_260.BaseBitIndex = local_280;
            uStack_240 = CONCAT44(uStack_274,iStack_278);
            local_374 = uVar10;
            local_2d0 = pTVar29;
            local_2a0 = pFVar28;
            local_290 = (undefined1 *)pTVar29;
            local_268 = pFVar28;
            TStack_260.Array = pTVar29;
            if ((((int)uVar10 < 0) || (iVar2 < (int)uVar10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar3 = *(uint *)&(pFVar28->Values).field_0x28;
            if (uVar10 != uVar3) {
              puVar26 = *(undefined1 **)&(pFVar28->Values).field_0x20;
              if (puVar26 == (undefined1 *)0x0) {
                puVar26 = (undefined1 *)pTVar29;
              }
              uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar22 * 4);
              while (uVar10 == 0) {
                lVar20 = (longlong)iVar22;
                uVar23 = uVar23 + 0x20;
                iVar22 = iVar22 + 1;
                uVar10 = uVar3;
                local_374 = uVar3;
                if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
                goto LAB_14bb19840;
                uVar10 = *(uint *)(puVar26 + lVar20 * 4 + 4);
              }
              uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
              lVar20 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_2d8 = (int)lVar20;
              uVar10 = (uVar23 - 1) + local_2d8;
              local_374 = uVar10;
              if ((int)uVar3 < (int)uVar10) {
                uVar10 = uVar3;
                local_374 = uVar3;
              }
            }
LAB_14bb19840:
            while( true ) {
              pFVar8 = local_268;
              if (*(int *)&(local_268->Values).field_0x8 - *(int *)&(local_268->Values).field_0x34
                  != (int)uStack_240) {
                local_378 = 0;
                `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_378);
              }
              lVar20 = (longlong)TStack_260.CurrentBitIndex;
              if (((TStack_260.CurrentBitIndex == uVar10) && (TStack_260.Array == pTVar29)) &&
                 (pFVar8 == pFVar28)) break;
              lVar5 = *(longlong *)&pFVar8->Values;
              if (*(int *)(lVar5 + 8 + lVar20 * 0x28) == 0) {
                _Str = L"";
              }
              else {
                _Str = *(wchar_t **)(lVar5 + lVar20 * 0x28);
              }
              EVar11 = _wtoi(_Str);
              if ((*(longlong *)(lVar5 + 0x10 + lVar20 * 0x28) == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pTVar15 = FJsonValue::AsArray(*(FJsonValue **)(lVar5 + 0x10 + lVar20 * 0x28));
              pFVar16 = FDS_GameOptionBaseTableRow::Get((longlong)(int)EVar11,true);
              if (pFVar16 == (FDS_GameOptionBaseTableRow *)0x0) {
                pUVar17 = UDS_LogManager::GetInst();
                if (pUVar17 != (UDS_LogManager *)0x0) {
                  pUVar17 = UDS_LogManager::GetInst();
                  local_168._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_168,"UDS_GameOptionManager::MakeJsonToGameOption",0x2b,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar17,1,Warning,local_168.Ptr,0x1ce,
                             L"gameOptionBaseTableRow == nullptr (key : %d)");
                  if ((void *)local_168._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_168._padding_);
                  }
                }
              }
              else {
                if ((pFVar16->ComponentType == ColorButton) || (pFVar16->ComponentType == TextField)
                   ) {
                  iVar2 = pTVar15->ArrayNum;
                  pFVar25 = (pTVar15->AllocatorInstance).Data;
                  local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  pFVar24 = pFVar25 + (longlong)iVar2 * 0x10;
                  local_358.ArrayNum = 0;
                  local_358.ArrayMax = 0;
                  while( true ) {
                    if (pTVar15->ArrayNum != iVar2) {
                      local_376[0] = 0;
                      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::
                      __l2::<lambda_1>::operator()(local_376);
                    }
                    if (pFVar25 == pFVar24) break;
                    if ((*(longlong *)pFVar25 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar19 = (FScriptContainerElement *)
                              FJsonValue::AsString(*(FJsonValue **)pFVar25,&local_1a8);
                    if (((local_358.AllocatorInstance.Data <= pFVar19) &&
                        (pFVar19 < local_358.AllocatorInstance.Data +
                                   (longlong)local_358.ArrayMax * 0x10)) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar22 = local_358.ArrayNum;
                    if (local_358.ArrayNum == local_358.ArrayMax) {
                      iVar22 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&local_358.AllocatorInstance,&local_358.ArrayMax);
                    }
                    local_358.ArrayNum = iVar22 + 1;
                    lVar20 = (longlong)iVar22;
                    *(undefined8 *)(local_358.AllocatorInstance.Data + lVar20 * 0x10) = 0;
                    *(undefined8 *)(local_358.AllocatorInstance.Data + lVar20 * 0x10) =
                         *(undefined8 *)pFVar19;
                    *(undefined8 *)pFVar19 = 0;
                    *(int *)(local_358.AllocatorInstance.Data + lVar20 * 0x10 + 8) =
                         *(int *)(pFVar19 + 8);
                    *(int *)(local_358.AllocatorInstance.Data + lVar20 * 0x10 + 0xc) =
                         *(int *)(pFVar19 + 0xc);
                    *(undefined8 *)(pFVar19 + 8) = 0;
                    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                    }
                    pFVar25 = pFVar25 + 0x10;
                  }
                  pUVar18 = GetGameOptionData(local_318,EVar11);
                  if (pUVar18 != (UDS_GameOptionData *)0x0) {
                    UDS_GameOptionData::SetGameOptionValues(pUVar18,&local_358);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_358.AllocatorInstance.Data,local_358.ArrayNum);
                  FVar21.Data = local_358.AllocatorInstance.Data;
                }
                else {
                  iVar2 = pTVar15->ArrayNum;
                  pFVar25 = (pTVar15->AllocatorInstance).Data;
                  local_368.Data = (FScriptContainerElement *)0x0;
                  local_35c = 0;
                  pFVar24 = pFVar25 + (longlong)iVar2 * 0x10;
                  local_360 = 0;
                  while( true ) {
                    if (pTVar15->ArrayNum != iVar2) {
                      local_377 = 0;
                      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::
                      __l2::<lambda_1>::operator()(&local_377);
                    }
                    iVar22 = local_360;
                    FVar21.Data = local_368.Data;
                    if (pFVar25 == pFVar24) break;
                    if ((*(longlong *)pFVar25 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    dVar7 = FJsonValue::AsNumber(*(FJsonValue **)pFVar25);
                    local_370[0] = (int)dVar7;
                    if (((local_368.Data <= (FScriptContainerElement *)local_370) &&
                        ((FScriptContainerElement *)local_370 <
                         local_368.Data + (longlong)local_35c * 4)) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar9)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    if (local_360 == local_35c) {
                      local_360 = UE::Core::Private::
                                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                            (0x404,&local_368,&local_35c);
                    }
                    pFVar25 = pFVar25 + 0x10;
                    *(int *)(local_368.Data + (longlong)local_360 * 4) = local_370[0];
                    local_360 = local_360 + 1;
                  }
                  local_338.Data = (FScriptContainerElement *)0x0;
                  local_330 = local_360;
                  if (local_360 == 0) {
                    local_32c = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,local_360,0,&local_338,local_360,&local_32c);
                    memcpy(local_338.Data,FVar21.Data,(longlong)iVar22 << 2);
                  }
                  pUVar18 = GetGameOptionData(local_318,EVar11);
                  FVar21.Data = local_338.Data;
                  if (pUVar18 != (UDS_GameOptionData *)0x0) {
                    lVar20 = (longlong)local_330;
                    local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_328.ArrayNum = local_330;
                    if (local_330 == 0) {
                      local_328.ArrayMax = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,local_330,0,&local_328.AllocatorInstance,local_330,
                                 &local_328.ArrayMax);
                      memcpy(local_328.AllocatorInstance.Data,FVar21.Data,lVar20 << 2);
                    }
                    UDS_GameOptionData::SetGameOptionValues(pUVar18,&local_328);
                  }
                  FVar21.Data = local_368.Data;
                  if (local_338.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_338.Data);
                    FVar21.Data = local_368.Data;
                  }
                }
                uVar10 = local_374;
                if (FVar21.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FVar21.Data);
                  uVar10 = local_374;
                }
              }
              TStack_260.UnvisitedBitMask =
                   TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
              pFVar28 = local_2c8;
              pTVar29 = local_2d0;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2c0);
          }
        }
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_310.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_310.Array.AllocatorInstance.Data,
                 local_310.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_310.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_310.Array.AllocatorInstance.Data);
      }
      if (local_310.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b8);
  }
  else {
    EHttpResponseCodes::ResponseCodeToString(local_198,param_1);
    ::FString::PrintfImpl(&local_2b0,L"%s.%s");
    if (local_198[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198[0].Data.AllocatorInstance.Data);
    }
    if (4 < (byte)DS_CommonLog._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnChangedGraphicOption @ 14bb1bfc0

void __thiscall
UDS_GameOptionManager::OnChangedGraphicOption
          (UDS_GameOptionManager *this,UDS_GameOptionData *param_1,int param_2,int param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_GameOptionData *pUVar3;
  int iVar4;
  FWeakObjectPtr local_res10;
  UDS_GameOptionData *local_18 [2];
  
  if (param_1 != (UDS_GameOptionData *)0x0) {
    if (param_3 == 0) {
      UDS_GameOptionData::SetDataToVM(param_1,param_2,1);
    }
    else {
      local_18[0] = GetGameOptionData(this,Graphic_Setting);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18[0] != (UDS_GameOptionData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_18[0]);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_18);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar2) {
        iVar4 = 0;
        do {
          pUVar3 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&local_res10);
          UDS_GameOptionData::SetGameOptionValue(pUVar3,iVar4,0);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
        pUVar3 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&local_res10);
        UDS_GameOptionData::BroadcastDataToVM(pUVar3);
      }
      ChangeGraphicOption(this,param_1,param_2);
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnChangedTotalGraphicOption @ 14bb1cd60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_GameOptionManager::OnChangedTotalGraphicOption
          (UDS_GameOptionManager *this,UDS_GameOptionData *param_1,int param_2,int param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  UDS_GameOptionData *pUVar2;
  int iVar3;
  EDS_GameOptionType EVar4;
  
  if ((param_1 != (UDS_GameOptionData *)0x0) && (GEngine != (UEngine *)0x0)) {
    if (param_3 == 0) {
      UDS_GameOptionData::SetDataToVM(param_1,param_2,1);
    }
    else {
      iVar3 = 0;
      do {
        UDS_GameOptionData::SetGameOptionValue(param_1,iVar3,(uint)(param_2 == iVar3));
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      UDS_GameOptionData::BroadcastDataToVM(param_1);
      EVar4 = Graphic_ViewDistanceQuality;
      do {
        pUVar2 = GetGameOptionData(this,EVar4);
        ChangeGraphicOption(this,pUVar2,param_2);
        EVar4 = EVar4 + 1;
      } while ((int)EVar4 < 0x19e);
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnLoadedGraphicOption @ 14bb1ea40

void __thiscall UDS_GameOptionManager::OnLoadedGraphicOption(UDS_GameOptionManager *this)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_GameOptionData *pUVar6;
  TObjectPtr<UDS_GameOptionData> *pTVar7;
  undefined1 *puVar8;
  int iVar9;
  TObjectPtr<UDS_GameOptionData>_u_0 TVar10;
  ulonglong uVar11;
  EDS_GameOptionType EVar12;
  FWeakObjectPtr local_res10;
  TObjectPtr<UDS_GameOptionData>_u_0 local_res18;
  TObjectPtr<UDS_GameOptionData>_u_0 local_res20;
  
  bVar2 = false;
  local_res18.DebugPtr = GetGameOptionData(this,Graphic_Setting);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UDS_GameOptionData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res18.DebugPtr != (UDS_GameOptionData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18.DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  uVar11 = 0x193;
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_GameOptionManager>
              ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                *)&pUVar5[3].field_0x18,(UDS_GameOptionManager *)&local_res18.ObjectPtr,
               (pmf_de383ba7)this);
    iVar9 = 0;
    do {
      pUVar6 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&local_res10);
      iVar4 = UDS_GameOptionData::GetGameOptionValue(pUVar6,iVar9);
      if (0 < iVar4) {
        EVar12 = Graphic_ViewDistanceQuality;
        do {
          pUVar6 = GetGameOptionData(this,EVar12);
          ChangeGraphicOption(this,pUVar6,iVar9);
          EVar12 = EVar12 + 1;
        } while ((int)EVar12 < 0x19e);
        bVar2 = true;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
  }
  do {
    EVar12 = (EDS_GameOptionType)uVar11;
    if (*(int *)&(this->MapGameOptionData).field_0x8 !=
        *(int *)&(this->MapGameOptionData).field_0x34) {
      puVar1 = *(undefined1 **)&(this->MapGameOptionData).field_0x40;
      puVar8 = &(this->MapGameOptionData).field_0x38;
      if (puVar1 != (undefined1 *)0x0) {
        puVar8 = puVar1;
      }
      iVar9 = *(int *)(puVar8 + (*(int *)&(this->MapGameOptionData).field_0x48 - 1 & uVar11) * 4);
      if (iVar9 != -1) {
        do {
          if (*(EDS_GameOptionType *)
               (*(longlong *)&this->MapGameOptionData + (longlong)iVar9 * 0x18) == EVar12) {
            pTVar7 = TMapBase<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
                     ::FindChecked(&this->MapGameOptionData,EVar12);
            TVar10.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar7->field0_0x0).DebugPtr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar10.DebugPtr != (UDS_GameOptionData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
            }
            goto LAB_14bb1eb8a;
          }
          iVar9 = *(int *)(*(longlong *)&this->MapGameOptionData + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    TVar10.DebugPtr = (UDS_GameOptionData *)0x0;
LAB_14bb1eb8a:
    local_res18 = TVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar10.DebugPtr != (UDS_GameOptionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_GameOptionManager>
                ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                  *)&pUVar5[3].field_0x18,(UDS_GameOptionManager *)&local_res20.ObjectPtr,
                 (pmf_de383ba7)this);
      if (!bVar2) {
        iVar9 = 0;
        do {
          pUVar6 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&local_res10);
          iVar4 = UDS_GameOptionData::GetGameOptionValue(pUVar6,iVar9);
          if (0 < iVar4) {
            pUVar6 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&local_res10);
            ChangeGraphicOption(this,pUVar6,iVar9);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 4);
      }
    }
    uVar11 = (ulonglong)(EVar12 + 1);
    if (0x19d < (int)(EVar12 + 1)) {
      return;
    }
  } while( true );
}

// OnOpenGameOptionColorPicker @ 14bb1f520

void __thiscall
UDS_GameOptionManager::OnOpenGameOptionColorPicker
          (UDS_GameOptionManager *this,UDS_UserWidget *param_1,
          TWeakObjectPtr<UDS_M_GameOptionDataColor,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 == (UDS_UserWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_254042226022153660>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                       ,0x244,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = ::operator_new(0x28);
    pFVar5 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar5;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_OptionColorPicker__6B_;
      pFVar3[1]._padding_ = 0;
      pFVar6 = pFVar3;
    }
    pFVar3 = ::operator_new(0x20);
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_OptionColorPicker__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
      pFVar5 = pFVar3;
    }
    if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = FDS_ViewModelContext_OptionColorPicker::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar5->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar6;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    pFVar6->ViewModelTemplateKey = W_GameOptionColorPicker;
    pFVar6[1]._padding_ = (longlong)param_2.WeakPtr;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_28.Object = pFVar6;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_28,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
  }
  return;
}

// OnResponseLoadGameOptionDB @ 14bb22790

void __thiscall
UDS_GameOptionManager::OnResponseLoadGameOptionDB
          (UDS_GameOptionManager *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  void *local_18 [2];
  
  if (param_1->Object == (IHttpResponse *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = (FString *)(**(code **)((longlong)*param_1->Object + 0x60))(param_1->Object,local_18);
  if (param_1->Object == (IHttpResponse *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = (**(code **)((longlong)*param_1->Object + 0x58))();
  MakeJsonToGameOption(this,iVar3,pFVar4);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->LoadedGameOptionDBDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnResponseSaveGameOptionDB @ 14bb22c20

void __thiscall
UDS_GameOptionManager::OnResponseSaveGameOptionDB
          (UDS_GameOptionManager *this,TSharedPtr<IHttpResponse,1> *param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->SavedGameOptionDBDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenGameOptionColorPicker @ 14bb25a00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_GameOptionManager::OpenGameOptionColorPicker
          (UDS_GameOptionManager *this,
          TWeakObjectPtr<UDS_M_GameOptionDataColor,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  FWeakObjectPtr local_res10;
  UDS_GameOptionManager *local_res18 [2];
  undefined1 local_98 [8];
  FDelegateAllocation local_90;
  FDestructionSentinel local_80;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_254042226022153671>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                       ,0x239,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014bb25a99:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_254042226022153668>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                       ,0x23c,"false");
    if (bVar2) goto code_r0x00014bb25a99;
  }
  else {
    local_98 = (undefined1  [8])0x0;
    local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_90.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_90;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_90);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_M_GameOptionDataColor__UFWeakObjectPtr______6B_
      ;
      *(FWeakObjectPtr *)(puVar3 + 1) = local_res10;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameOptionManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_M_GameOptionDataColor__UFWeakObjectPtr______6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_GameOptionManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res18[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_GameOptionManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)local_res18);
      puVar3[4] = OnOpenGameOptionColorPicker;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       (&local_68,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_98);
    UDS_WindowManager::OpenWindow(this_00,ChattingColorPicker,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)&local_80);
    if ((local_90.DelegateSize != 0) &&
       (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_90,0,0,0x10);
      local_90.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_90.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
  }
  return;
}

// ResetGameOptionData @ 14bb333b0

void __thiscall
UDS_GameOptionManager::ResetGameOptionData
          (UDS_GameOptionManager *this,
          TArray<EDS_GameOptionType,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_GameOptionData *pUVar5;
  TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> TVar6;
  UDS_AccountLocalSave *pUVar7;
  FString *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  UDS_GameOptionData *local_res20;
  FString local_58;
  FString local_48;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar1 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<enum_EDS_GameOptionType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar9 == pFVar2) break;
    pUVar5 = GetGameOptionData(this,*(EDS_GameOptionType *)pFVar9);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_GameOptionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_GameOptionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_254042226022154186>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                         ,0x36,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
LAB_14bb33567:
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      return;
    }
    pUVar5 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&local_res18);
    UDS_GameOptionData::ResetGameOption(pUVar5);
    pFVar9 = pFVar9 + 4;
  }
  SaveGameOptionDB(this);
  TVar6 = UDS_AccountLocalSave::GetInst();
  pUVar7 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar6.WeakPtr);
  pFVar8 = MakeGameOptionToJson(this,&local_58,1);
  UDS_AccountLocalSave::SetGameOption(pUVar7,pFVar8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->SavedGameOptionDeviceDelegate);
  TVar6 = UDS_AccountLocalSave::GetInst();
  pUVar7 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar6.WeakPtr);
  pFVar8 = UDS_AccountLocalSave::GetGameOption(pUVar7,&local_48);
  MakeJsonToGameOption(this,200,pFVar8);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->LoadedGameOptionDeviceDelegate);
  LoadGameOptionDB(this);
  goto LAB_14bb33567;
}

// SaveGameOptionDB @ 14bb34750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_GameOptionManager::SaveGameOptionDB(UDS_GameOptionManager *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FDS_HttpRequest *pFVar4;
  bool bVar5;
  FDS_HttpServer *pFVar6;
  FDS_AuthData *pFVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  int iVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  UDS_GameOptionManager *local_res18 [2];
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  TArray<UDS_GameOptionData_*,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  TSharedRef<FDS_HttpRequest,1> local_88;
  FString local_78;
  TSharedPtr<FDS_HttpRequest,1> local_68;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  
  GetGameOptionDataList(this,&local_a8,2);
  iVar11 = local_a8.ArrayNum;
  pFVar2 = local_a8.AllocatorInstance.Data + (longlong)iVar11 * 8;
  FVar12.Data = local_a8.AllocatorInstance.Data;
  while( true ) {
    if (local_a8.ArrayNum != iVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UDS_GameOptionData_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar12.Data == pFVar2) goto LAB_14bb34ac7;
    bVar5 = UDS_GameOptionData::IsChangedOption(*(UDS_GameOptionData **)FVar12.Data);
    if (bVar5) break;
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  iVar11 = 1;
  if (this->GameOptionVersion < 1000) {
    iVar11 = this->GameOptionVersion + 1;
  }
  this->GameOptionVersion = iVar11;
  pFVar6 = TDS_Singleton<FDS_HttpServer>::GetInst();
  pFVar7 = TDS_Singleton<FDS_AuthData>::GetInst();
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = (pFVar7->JwtKey).Data.ArrayNum;
  lVar13 = (longlong)local_b0;
  pFVar2 = (pFVar7->JwtKey).Data.AllocatorInstance.Data;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b0,0,&local_b8,local_b0,&local_ac);
    memcpy(local_b8.Data,pFVar2,lVar13 * 2);
  }
  pFVar7 = TDS_Singleton<FDS_AuthData>::GetInst();
  if ((pFVar7->RegionIndex == 0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_254042226022153683>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                         ,0x22d,"false"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar7 = TDS_Singleton<FDS_AuthData>::GetInst();
  if ((pFVar7->PlayerUID == 0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_254042226022153691>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_GameOptionManager.cpp"
                         ,0x225,"false"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FDS_Urls::GetUpdateGameOption(&pFVar6->Urls);
  ::FString::PrintfImpl(&local_98,L"%s&player_uid=%lld&version=%d&region_index=%d&jwt_key=%s");
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  MakeShared<FDS_HttpRequest,1>(&local_88);
  pFVar4 = local_88.Object;
  ::FString::operator=(&(local_88.Object)->URL,&local_98);
  pFVar4->Verb = POST;
  pFVar8 = MakeGameOptionToJson(this,&local_78,2);
  pFVar1 = &pFVar4->ContentString;
  if (pFVar1 != pFVar8) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->ContentString).Data.ArrayNum = (pFVar8->Data).ArrayNum;
    (pFVar4->ContentString).Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar4->SuccessDel,
             (FWriteAccessScope *)&local_58);
  local_40 = &(pFVar4->SuccessDel).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_40);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_GameOptionManager____A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)local_res18);
    puVar9[4] = OnResponseSaveGameOptionDB;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  pFVar6 = TDS_Singleton<FDS_HttpServer>::GetInst();
  local_68.Object = local_88.Object;
  local_68.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDS_HttpServer::Request(pFVar6,&local_68);
  if (2 < (byte)DS_CommonLog._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  local_a8.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
LAB_14bb34ac7:
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// SaveGameOptionDevice @ 14bb34af0

void __thiscall UDS_GameOptionManager::SaveGameOptionDevice(UDS_GameOptionManager *this)

{
  TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> this_00;
  UDS_AccountLocalSave *this_01;
  FString *pFVar1;
  FString local_18;
  
  this_00 = UDS_AccountLocalSave::GetInst();
  this_01 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  pFVar1 = MakeGameOptionToJson(this,&local_18,1);
  UDS_AccountLocalSave::SetGameOption(this_01,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->SavedGameOptionDeviceDelegate);
  return;
}

// SetGameOptionData @ 14bb361a0

void __thiscall
UDS_GameOptionManager::SetGameOptionData
          (UDS_GameOptionManager *this,EDS_GameOptionType param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  UDS_GameOptionData *this_00;
  
  this_00 = GetGameOptionData(this,param_1);
  if (this_00 != (UDS_GameOptionData *)0x0) {
    UDS_GameOptionData::SetGameOptionValues(this_00,param_2);
    return;
  }
  return;
}

// SetGameOptionData @ 14bb361d0

void __thiscall
UDS_GameOptionManager::SetGameOptionData
          (UDS_GameOptionManager *this,EDS_GameOptionType param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  UDS_GameOptionData *this_00;
  longlong lVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = GetGameOptionData(this,param_1);
  if (this_00 != (UDS_GameOptionData *)0x0) {
    local_18.ArrayNum = param_2->ArrayNum;
    lVar2 = (longlong)local_18.ArrayNum;
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.ArrayNum == 0) {
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
                 &local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,pFVar1,lVar2 << 2);
    }
    UDS_GameOptionData::SetGameOptionValues(this_00,&local_18);
  }
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// UpdateGameOptionVersion @ 14bb3f480

void __thiscall UDS_GameOptionManager::UpdateGameOptionVersion(UDS_GameOptionManager *this)

{
  int iVar1;
  
  iVar1 = 1;
  if (this->GameOptionVersion < 1000) {
    iVar1 = this->GameOptionVersion + 1;
  }
  this->GameOptionVersion = iVar1;
  return;
}

