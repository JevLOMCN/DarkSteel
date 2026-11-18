// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 148a2aea0

UClass * __cdecl UExternalDataLayerManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerManager",
               &Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UExternalDataLayerManager>,
               InternalVTableHelperCtorCaller<UExternalDataLayerManager>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton;
}

// UExternalDataLayerManager @ 148a42f00

UExternalDataLayerManager * __thiscall
UExternalDataLayerManager::UExternalDataLayerManager(UExternalDataLayerManager *this)

{
  UObject::UObject((UObject *)this);
  this->bIsInitialized = false;
  this->bIsRunningGameOrInstancedWorldPartition = false;
  this->_padding_ = (longlong)&___7UExternalDataLayerManager__6B_;
  *(undefined8 *)&this->ExternalStreamingObjects = 0;
  *(undefined8 *)&(this->ExternalStreamingObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalStreamingObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x34 = 0;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExternalStreamingObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x48 = 0;
  return this;
}

// UExternalDataLayerManager @ 148a42f60

UExternalDataLayerManager * __thiscall
UExternalDataLayerManager::UExternalDataLayerManager
          (UExternalDataLayerManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UExternalDataLayerManager__6B_;
  *(undefined8 *)&this->ExternalStreamingObjects = 0;
  *(undefined8 *)&(this->ExternalStreamingObjects).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalStreamingObjects).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x34 = 0;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExternalStreamingObjects).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x48 = 0;
  return this;
}

// ~UExternalDataLayerManager @ 148a449e0

void __thiscall
UExternalDataLayerManager::~UExternalDataLayerManager(UExternalDataLayerManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UExternalDataLayerManager__6B_;
  *(undefined4 *)&(this->ExternalStreamingObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExternalStreamingObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalStreamingObjects);
  UObject::~UObject((UObject *)this);
  return;
}

// CanInjectExternalDataLayerAsset @ 148a4c780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UExternalDataLayerManager::CanInjectExternalDataLayerAsset
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1,FText *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  UObject *this_00;
  UPackage *pUVar3;
  UWorldPartition *this_01;
  UWorld *pUVar4;
  UWorld *pUVar5;
  UExternalDataLayerInstance *pUVar6;
  FText *pFVar7;
  UExternalDataLayerEngineSubsystem *this_02;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FText local_18;
  
  if (param_1 == (UExternalDataLayerAsset *)0x0) {
    if (param_2 == (FText *)0x0) {
      return false;
    }
    pwVar9 = L"Invalid External Data Layer.";
    pwVar8 = L"CantInjectExternalDataLayerAssetInvalidAsset";
  }
  else {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    this_00 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
    pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
    if (((uint)pUVar3->PackageFlagsPrivate & 1) == 0) {
      if (this->bIsInitialized == false) {
        if (param_2 == (FText *)0x0) {
          return false;
        }
        pUVar2 = Z_Construct_UClass_UWorldPartition_NoRegister();
        this_01 = (UWorldPartition *)
                  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
        pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
        pUVar4 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
        pUVar5 = UWorldPartition::GetWorld(this_01);
        if (pUVar5 == pUVar4) {
          pwVar9 = L"External Data Layers are not supported.";
          pwVar8 = L"CantInjectExternalDataLayerAssetNotSupported";
        }
        else {
          pwVar9 = L"External Data Layers are not yet supported for sub-levels.";
          pwVar8 = L"CantInjectExternalDataLayerAssetSubLevelsNotSupported";
        }
      }
      else {
        pUVar6 = GetExternalDataLayerInstance(this,param_1);
        if (pUVar6 == (UExternalDataLayerInstance *)0x0) {
          this_02 = UExternalDataLayerEngineSubsystem::Get();
          pUVar4 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
          bVar1 = UExternalDataLayerEngineSubsystem::CanWorldInjectExternalDataLayerAsset
                            (this_02,pUVar4,param_1,param_2);
          return bVar1;
        }
        if (param_2 == (FText *)0x0) {
          return false;
        }
        pwVar9 = L"External Data Layer is already added.";
        pwVar8 = L"CantInjectExternalDataLayerAssetAlreadyAdded";
      }
    }
    else {
      if (param_2 == (FText *)0x0) {
        return false;
      }
      pwVar9 = L"World must be saved first.";
      pwVar8 = L"CantInjectExternalDataLayerAssetWorldMustBeSaved";
    }
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"ExternalDataLayerManager",pwVar8,pwVar9);
  FText::operator=(param_2,pFVar7);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

// DeInitialize @ 148a4f360

void __thiscall UExternalDataLayerManager::DeInitialize(UExternalDataLayerManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UExternalDataLayerEngineSubsystem *pUVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->bIsInitialized != false) {
    pUVar8 = UExternalDataLayerEngineSubsystem::Get();
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->OnExternalDataLayerAssetRegistrationStateChanged,this);
    iVar12 = 0;
    puVar1 = &(pUVar8->ExternalDataLayerAssets).field_0x10;
    iVar3 = *(int *)&(pUVar8->ExternalDataLayerAssets).field_0x28;
    uVar6 = 1;
    iVar14 = 0;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(pUVar8->ExternalDataLayerAssets).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148a4f42d;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res10 = (int)lVar9;
      iVar7 = iVar14 + -1 + local_res10;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_148a4f42d:
    uVar11 = *(uint *)&(pUVar8->ExternalDataLayerAssets).field_0x28;
    uVar16 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar6,iVar12);
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(pUVar8->ExternalDataLayerAssets).field_0x8 -
                         *(int *)&(pUVar8->ExternalDataLayerAssets).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(pUVar8->ExternalDataLayerAssets).field_0x28;
    if (uVar11 != uVar6) {
      puVar13 = *(undefined1 **)&(pUVar8->ExternalDataLayerAssets).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_148a4f540;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar16;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_148a4f540:
    while( true ) {
      if (*(int *)&(pUVar8->ExternalDataLayerAssets).field_0x8 -
          *(int *)&(pUVar8->ExternalDataLayerAssets).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      puVar10 = (undefined8 *)
                (*(longlong *)&pUVar8->ExternalDataLayerAssets +
                (longlong)TStack_60.CurrentBitIndex * 0xb8);
      bVar5 = IsExternalDataLayerInjected(this,(UExternalDataLayerAsset *)*puVar10);
      if (bVar5) {
        RemoveExternalDataLayer(this,(UExternalDataLayerAsset *)*puVar10);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    this->bIsInitialized = false;
  }
  return;
}

// GetDataLayerManager @ 148a568c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerManager * __thiscall
UExternalDataLayerManager::GetDataLayerManager(UExternalDataLayerManager *this)

{
  code *pcVar1;
  bool bVar2;
  UDataLayerManager *pUVar3;
  UWorldPartition *this_00;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UWorldPartition *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<341295049281110044>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\ExternalDataLayerManager.h"
                       ,0x1c,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDataLayerManager *)(*pcVar1)();
      return pUVar3;
    }
    this_00 = (UWorldPartition *)0x0;
  }
  pUVar3 = UWorldPartition::GetDataLayerManager(this_00);
  if ((pUVar3 == (UDataLayerManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataLayerManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x1dd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UDataLayerManager *)(*pcVar1)();
    return pUVar3;
  }
  return pUVar3;
}

// GetExternalDataLayerInstance @ 148a58030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UExternalDataLayerInstance * __thiscall
UExternalDataLayerManager::GetExternalDataLayerInstance
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  UExternalDataLayerInstance *pUVar3;
  UDataLayerManager *this_00;
  UClass *pUVar4;
  UWorld *this_01;
  AWorldDataLayers *this_02;
  UWorldPartition *this_03;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_03 = (UWorldPartition *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<341295049281110044>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\ExternalDataLayerManager.h"
                       ,0x1c,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UExternalDataLayerInstance *)(*pcVar1)();
      return pUVar3;
    }
    this_03 = (UWorldPartition *)0x0;
  }
  this_00 = UWorldPartition::GetDataLayerManager(this_03);
  if (this_00 == (UDataLayerManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataLayerManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                       ,0x1dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UExternalDataLayerInstance *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
  this_01 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
  this_02 = UWorld::GetWorldDataLayers(this_01);
  if (this_02 != (AWorldDataLayers *)0x0) {
    pUVar3 = AWorldDataLayers::GetExternalDataLayerInstance(this_02,param_1);
    return pUVar3;
  }
  return (UExternalDataLayerInstance *)0x0;
}

// GetExternalDataLayerInstance @ 148a580f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UExternalDataLayerInstance * __thiscall
UExternalDataLayerManager::GetExternalDataLayerInstance
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  UExternalDataLayerInstance *pUVar3;
  UDataLayerManager *this_00;
  UClass *pUVar4;
  UWorld *this_01;
  AWorldDataLayers *this_02;
  UWorldPartition *this_03;
  
  if ((this->_padding_ & 0x10) == 0) {
    this_03 = (UWorldPartition *)this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<341295049281110044>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\ExternalDataLayerManager.h"
                       ,0x1c,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UExternalDataLayerInstance *)(*pcVar1)();
      return pUVar3;
    }
    this_03 = (UWorldPartition *)0x0;
  }
  this_00 = UWorldPartition::GetDataLayerManager(this_03);
  if (this_00 == (UDataLayerManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataLayerManager",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                       ,0x1dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UExternalDataLayerInstance *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
  this_01 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
  this_02 = UWorld::GetWorldDataLayers(this_01);
  if (this_02 != (AWorldDataLayers *)0x0) {
    pUVar3 = AWorldDataLayers::GetExternalDataLayerInstance(this_02,param_1);
    return pUVar3;
  }
  return (UExternalDataLayerInstance *)0x0;
}

// GetExternalDataLayerLevelRootPath @ 148a58400

FString * __thiscall
UExternalDataLayerManager::GetExternalDataLayerLevelRootPath
          (UExternalDataLayerManager *this,FString *__return_storage_ptr__,
          UExternalDataLayerAsset *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  UClass *pUVar5;
  UObject *this_00;
  UPackage *pUVar6;
  FPackagePath *pFVar7;
  FName FVar8;
  FName local_res10;
  FName local_res18 [2];
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if (param_1 == (UExternalDataLayerAsset *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExternalDataLayerAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                       ,0x1b3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
  pFVar7 = UPackage::GetLoadedPath(pUVar6);
  FVar8 = FPackagePath::GetPackageFName(pFVar7);
  bVar3 = *(longlong *)FVar8 != 0;
  if (bVar3) {
    pFVar7 = UPackage::GetLoadedPath(pUVar6);
    pFVar4 = FPackagePath::GetPackageName(pFVar7,&local_50);
  }
  else {
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_70);
    pFVar4 = &local_70;
  }
  pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = (pFVar4->Data).ArrayNum;
  local_80.Data.ArrayMax = (pFVar4->Data).ArrayMax;
  (pFVar4->Data).ArrayNum = 0;
  (pFVar4->Data).ArrayMax = 0;
  local_80.Data.AllocatorInstance.Data = pFVar1;
  if (bVar3) {
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (param_1 == (UExternalDataLayerAsset *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExternalDataLayerAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerHelper.cpp"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((param_1->UID).Value == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExternalDataLayerAsset->GetUID().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerHelper.cpp"
                       ,0x42,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_res18[0] = (FName)pUVar6->_padding_;
  ::FName::ToString(local_res18,&local_60);
  FVar8 = FPackageName::GetPackageMountPoint((FString *)local_88,SUB81(&local_60,0));
  pFVar4 = ::FName::ToString((FName *)FVar8,&local_40);
  FExternalDataLayerHelper::GetExternalDataLayerLevelRootPath
            (__return_storage_ptr__,pFVar4,&param_1->UID,&local_80);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetExternalStreamingObjectPackagePath @ 148a587f0

FString * __thiscall
UExternalDataLayerManager::GetExternalStreamingObjectPackagePath
          (UExternalDataLayerManager *this,FString *__return_storage_ptr__,
          UExternalDataLayerAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UExternalDataLayerAsset *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExternalDataLayerAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerHelper.cpp"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::PrintfImpl(&local_28,L"StreamingObject_%X");
  pFVar3 = GetExternalDataLayerLevelRootPath(this,&local_18,param_1);
  ::FString::ConcatFC(&local_38,pFVar3,L"/");
  ::FString::ConcatFR(&local_48,&local_38,L"_Generated_/",0xb);
  ::FString::ConcatFC(&local_58,&local_48,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_58,&local_28);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOuterUWorldPartition @ 148a59250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorldPartition * __thiscall
UExternalDataLayerManager::GetOuterUWorldPartition(UExternalDataLayerManager *this)

{
  code *pcVar1;
  bool bVar2;
  UWorldPartition *pUVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    return (UWorldPartition *)this->_padding_;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<341295049281110044>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\ExternalDataLayerManager.h"
                     ,0x1c,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UWorldPartition *)(*pcVar1)();
    return pUVar3;
  }
  return (UWorldPartition *)0x0;
}

// GetPrivateStaticClass @ 148a5aa90

UClass * __cdecl UExternalDataLayerManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerManager",
               &Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerManager,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UExternalDataLayerManager>,
               InternalVTableHelperCtorCaller<UExternalDataLayerManager>,local_res8,
               UObject::StaticClass,UWorldPartition::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerManager.InnerSingleton;
}

// Initialize @ 148a5c2a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UExternalDataLayerManager::Initialize(UExternalDataLayerManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UWorld *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  ULevelInstanceSubsystem *this_00;
  ILevelInstanceInterface *pIVar14;
  UExternalDataLayerEngineSubsystem *pUVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pUVar9 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar9);
  pUVar9 = (UClass *)0x0;
  uVar17 = 0;
  if ((this->_padding_ & 0x10) == 0) {
    pUVar12 = (UClass *)this->_padding_;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<341295049281110044>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\ExternalDataLayerManager.h"
                       ,0x1c,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    pUVar12 = pUVar9;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar11 = UWorldPartition::GetWorld((UWorldPartition *)pUVar12);
  if ((pUVar10 == (UObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OuterWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x39,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pUVar11 == (UWorld *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OwningWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x3a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar12 = Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar12 != (UClass *)0x0) goto LAB_148a5c38e;
  }
  else if (pUVar12 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_148a5c38e:
    pUVar13 = Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister();
    if (pUVar13 != (UClass *)0x0) {
      iVar18 = (int)pUVar13->_padding_;
      if (((int)pUVar12->_padding_ < iVar18) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar18 * 8) !=
          &pUVar13->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_148a5c3bf;
    }
  }
  pUVar12 = pUVar9;
LAB_148a5c3bf:
  this_00 = (ULevelInstanceSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar11->SubsystemCollection,pUVar12);
  if ((this_00 == (ULevelInstanceSubsystem *)0x0) ||
     (pIVar14 = ULevelInstanceSubsystem::GetOwningLevelInstance
                          (this_00,*(ULevel **)&pUVar10[1].field_0x8),
     pIVar14 == (ILevelInstanceInterface *)0x0)) {
    this->bIsInitialized = true;
    this->bIsRunningGameOrInstancedWorldPartition = true;
    pUVar15 = UExternalDataLayerEngineSubsystem::Get();
    TMulticastDelegateRegistration<void___cdecl(UExternalDataLayerAsset_const_*,enum_EExternalDataLayerRegistrationState,enum_EExternalDataLayerRegistrationState),FDefaultDelegateUserPolicy>
    ::AddUObject<UExternalDataLayerManager>
              (&pUVar15->OnExternalDataLayerAssetRegistrationStateChanged,
               (UExternalDataLayerManager *)&stack0x00000018,(pmf_45d8047e)this);
    puVar1 = &(pUVar15->ExternalDataLayerAssets).field_0x10;
    uVar6 = 1;
    uVar3 = *(uint *)&(pUVar15->ExternalDataLayerAssets).field_0x28;
    uVar19 = 0;
    uVar7 = uVar17;
    if (uVar3 != 0) {
      puVar21 = *(uint **)&(pUVar15->ExternalDataLayerAssets).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar1;
      }
      uVar7 = *puVar21;
      pUVar12 = pUVar9;
      uVar19 = 0;
      uVar17 = 0;
      while (uVar7 == 0) {
        iVar18 = (int)pUVar9;
        uVar19 = (int)pUVar12 + 0x20;
        pUVar12 = (UClass *)(ulonglong)uVar19;
        uVar17 = iVar18 + 1;
        pUVar9 = (UClass *)(ulonglong)uVar17;
        uVar7 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_148a5c49d;
        uVar7 = puVar21[(longlong)iVar18 + 1];
      }
      uVar6 = -uVar7 & uVar7;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_res10 = (int)lVar16;
      uVar7 = (uVar19 - 1) + local_res10;
      if ((int)uVar3 < (int)uVar7) {
        uVar7 = uVar3;
      }
    }
LAB_148a5c49d:
    uVar8 = *(uint *)&(pUVar15->ExternalDataLayerAssets).field_0x28;
    TStack_60._padding_ = CONCAT44(uVar6,uVar17);
    uVar17 = uVar8 & 0xffffffe0;
    TStack_60.CurrentBitIndex = uVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar8 >> 5;
    TStack_60._28_4_ = local_9c;
    TStack_60.BaseBitIndex = uVar19;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(pUVar15->ExternalDataLayerAssets).field_0x8 -
                         *(int *)&(pUVar15->ExternalDataLayerAssets).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar8 < 0) || ((int)uVar3 < (int)uVar8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = *(uint *)&(pUVar15->ExternalDataLayerAssets).field_0x28;
    if (uVar8 != uVar3) {
      puVar20 = *(undefined1 **)&(pUVar15->ExternalDataLayerAssets).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar19 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
      while (uVar19 == 0) {
        lVar16 = (longlong)iVar18;
        uVar17 = uVar17 + 0x20;
        iVar18 = iVar18 + 1;
        uVar8 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_148a5c5a0;
        uVar19 = *(uint *)(puVar20 + lVar16 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar8 = (int)lVar16 + -1 + uVar17;
      if ((int)uVar3 < (int)uVar8) {
        uVar8 = uVar3;
      }
    }
LAB_148a5c5a0:
    while( true ) {
      if (*(int *)&(pUVar15->ExternalDataLayerAssets).field_0x8 -
          *(int *)&(pUVar15->ExternalDataLayerAssets).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar8) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      UpdateExternalDataLayerInjectionState
                (this,*(UExternalDataLayerAsset **)
                       ((longlong)TStack_60.CurrentBitIndex * 0xb8 +
                       *(longlong *)&pUVar15->ExternalDataLayerAssets));
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// InjectExternalDataLayer @ 148a5d3c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UExternalDataLayerManager::InjectExternalDataLayer
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UExternalDataLayerInstance *pUVar4;
  UClass *pUVar5;
  UWorld *this_00;
  FName local_res8;
  FString local_18;
  
  if ((this->bIsInitialized == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x11b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1 == (UExternalDataLayerAsset *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalDataLayerAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x11c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar4 = GetExternalDataLayerInstance(this,param_1);
  if (pUVar4 == (UExternalDataLayerInstance *)0x0) {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
    bVar2 = UWorld::IsGameWorld(this_00);
    if (!bVar2) {
      return true;
    }
    bVar2 = RegisterExternalStreamingObjectForGameWorld(this,param_1);
    if (bVar2) {
      bVar2 = InjectIntoGameWorld(this,param_1);
      return bVar2;
    }
  }
  else if (1 < (byte)LogWorldPartition._0_1_) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return false;
    }
  }
  return false;
}

// InjectIntoGameWorld @ 148a5d520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UExternalDataLayerManager::InjectIntoGameWorld
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  int iVar1;
  TObjectPtr<URuntimeHashExternalStreamingObjectBase> this_00;
  TObjectPtr<UExternalDataLayerInstance_const_> this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0 *pTVar7;
  UExternalDataLayerAsset *pUVar8;
  UWorld *pUVar9;
  UWorldPartition *this_02;
  AWorldDataLayers *this_03;
  UExternalDataLayerAsset *local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  bVar3 = UWorld::IsGameWorld(pUVar6);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetTypedOuter<UWorld>()->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x144,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar7 = &TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>_>
            ::Find((TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>_>
                    *)&this->ExternalStreamingObjects,
                   (TObjectPtr<UExternalDataLayerAsset_const_>)&local_res8)->field0_0x0;
  if ((pTVar7 == (TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0 *)0x0) ||
     (this_00.field0_0x0 = (TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0)pTVar7->DebugPtr
     , this_00.field0_0x0 == (URuntimeHashExternalStreamingObjectBase *)0x0)) {
    if ((byte)LogWorldPartition._0_1_ < 5) {
      return false;
    }
    local_e0 = (FName)param_1->_padding_;
    ::FName::ToString(&local_e0,&local_58);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    goto LAB_148a5d9b4;
  }
  this_01.field0_0x0 =
       (TObjectPtr<UExternalDataLayerInstance_const_>_u_0)
       ((TObjectPtr<UExternalDataLayerInstance_const_>_u_0 *)((longlong)this_00.field0_0x0 + 0x1b8))
       ->DebugPtr;
  if ((this_01.field0_0x0 == (UExternalDataLayerInstance *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalDataLayerInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x14f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0)
       ((TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0 *)
       ((longlong)this_01.field0_0x0 + 0x20))->DebugPtr != this_00.field0_0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalDataLayerInstance->GetOuter() == ExternalStreamingObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x150,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar8 = UExternalDataLayerInstance::GetExternalDataLayerAsset
                     ((UExternalDataLayerInstance *)this_01.field0_0x0);
  if ((pUVar8 != param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalDataLayerInstance->GetExternalDataLayerAsset() == InExternalDataLayerAsset"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x151,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  bVar3 = UWorld::IsGameWorld(pUVar6);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InjectedWorld->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x154,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar9 = (UWorld *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)this_00.field0_0x0 + 0xf0)
                     );
  if (pUVar9 == (UWorld *)0x0) {
LAB_148a5d6cf:
    pUVar9 = (UWorld *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_148a5d6cf;
  }
  if ((pUVar6 != pUVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InjectedWorld == ExternalStreamingObject->GetOuterWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x155,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  URuntimeHashExternalStreamingObjectBase::OnStreamingObjectLoaded
            ((URuntimeHashExternalStreamingObjectBase *)this_00.field0_0x0,pUVar6);
  this_02 = UWorld::GetWorldPartition(pUVar6);
  this_03 = UWorld::GetWorldDataLayers(pUVar6);
  if (this_03 == (AWorldDataLayers *)0x0) {
    if ((byte)LogWorldPartition._0_1_ < 2) {
      return false;
    }
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,&local_c8);
    local_res18 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res18,&local_d8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    local_58.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      local_58.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    }
  }
  else {
    bVar3 = AWorldDataLayers::AddExternalDataLayerInstance
                      (this_03,(UExternalDataLayerInstance *)this_01.field0_0x0);
    if (bVar3) {
      bVar3 = UWorldPartition::InjectExternalStreamingObject
                        (this_02,(URuntimeHashExternalStreamingObjectBase *)this_00.field0_0x0);
      if (bVar3) {
        if (4 < (byte)LogWorldPartition._0_1_) {
          local_f0 = (FName)pUVar6->_padding_;
          ::FName::ToString(&local_f0,&local_68);
          local_e8 = (FName)param_1->_padding_;
          ::FName::ToString(&local_e8,&local_78);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)&PTR_u__EDL___s__Injec_151c1fff0,
                     (FLogCategoryBase *)&LogWorldPartition);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        return true;
      }
      bVar3 = AWorldDataLayers::RemoveExternalDataLayerInstance
                        (this_03,(UExternalDataLayerInstance *)this_01.field0_0x0);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("WorldDataLayers->RemoveExternalDataLayerInstance(ExternalDataLayerInstance)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                             ,0x175,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((byte)LogWorldPartition._0_1_ < 2) {
        return false;
      }
      local_100 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_100,&local_88);
      local_f8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_f8,&local_98);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      local_58.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((byte)LogWorldPartition._0_1_ < 2) {
        return false;
      }
      local_res20 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_res20,&local_a8);
      local_108 = (FName)param_1->_padding_;
      ::FName::ToString(&local_108,&local_b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      local_58.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        local_58.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      }
    }
  }
LAB_148a5d9b4:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return false;
}

// IsExternalDataLayerInjected @ 148a5e910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UExternalDataLayerManager::IsExternalDataLayerInjected
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  TObjectPtr<URuntimeHashExternalStreamingObjectBase> this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UWorld *pUVar5;
  TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0 *pTVar6;
  UWorld *pUVar7;
  UWorldPartition *this_01;
  AWorldDataLayers *this_02;
  UExternalDataLayerInstance *pUVar8;
  UExternalDataLayerAsset *local_res18 [2];
  
  pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar5 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
  bVar2 = UWorld::IsGameWorld(pUVar5);
  if (bVar2) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18[0] = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar6 = &TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>_>
              ::Find((TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>_>
                      *)&this->ExternalStreamingObjects,
                     (TObjectPtr<UExternalDataLayerAsset_const_>)local_res18)->field0_0x0;
    if ((pTVar6 != (TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0 *)0x0) &&
       (this_00.field0_0x0 =
             (TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0)pTVar6->DebugPtr,
       this_00.field0_0x0 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
      pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar5 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
      bVar2 = UWorld::IsGameWorld(pUVar5);
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InjectedWorld->IsGameWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                           ,0x10a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      pUVar7 = URuntimeHashExternalStreamingObjectBase::GetOuterWorld
                         ((URuntimeHashExternalStreamingObjectBase *)this_00.field0_0x0);
      if (pUVar5 != pUVar7) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InjectedWorld == ExternalStreamingObject->GetOuterWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                           ,0x10b,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      this_01 = UWorld::GetWorldPartition(pUVar5);
      bVar2 = UWorldPartition::IsExternalStreamingObjectInjected
                        (this_01,(URuntimeHashExternalStreamingObjectBase *)this_00.field0_0x0);
      if (bVar2) {
        this_02 = UWorld::GetWorldDataLayers(pUVar5);
        if (this_02 != (AWorldDataLayers *)0x0) {
          pUVar8 = AWorldDataLayers::GetExternalDataLayerInstance(this_02,param_1);
          if (pUVar8 != (UExternalDataLayerInstance *)0x0) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// OnExternalDataLayerAssetRegistrationStateChanged @ 148a5fa70

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
UExternalDataLayerManager::OnExternalDataLayerAssetRegistrationStateChanged
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1,
          EExternalDataLayerRegistrationState param_2,EExternalDataLayerRegistrationState param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  UExternalDataLayerEngineSubsystem *pUVar4;
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *pTVar5;
  UExternalDataLayerInstance *pUVar6;
  UClass *pUVar7;
  UWorld *this_00;
  undefined1 *puVar8;
  UExternalDataLayerAsset *pUStackX_8;
  FName FStackX_10;
  FString FStack_28;
  
  if ((param_1 == (UExternalDataLayerAsset *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalDataLayerAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x1f8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bIsInitialized == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x1f9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = UExternalDataLayerEngineSubsystem::Get();
  (**(code **)(this->_padding_ + 0x180))(this);
  if (param_1 != (UExternalDataLayerAsset *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)param_1),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pUStackX_8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar5 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                     *)&pUVar4->ExternalDataLayerAssets,
                    (TObjectPtr<UExternalDataLayerAsset_const_>)&pUStackX_8);
    puVar8 = &pTVar5->field_0x8;
    if (pTVar5 == (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
                   *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    if (puVar8 != (undefined1 *)0x0) {
      bVar2 = puVar8[0xa0] == '\x02';
      goto LAB_148a6bc32;
    }
  }
  bVar2 = false;
LAB_148a6bc32:
  bVar3 = IsExternalDataLayerInjected(this,param_1);
  if (bVar2 != bVar3) {
    if (bVar2 == false) {
      RemoveExternalDataLayer(this,param_1);
    }
    else {
      if ((this->bIsInitialized == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                             ,0x11b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_1 == (UExternalDataLayerAsset *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InExternalDataLayerAsset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                             ,0x11c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar6 = GetExternalDataLayerInstance(this,param_1);
      if (pUVar6 == (UExternalDataLayerInstance *)0x0) {
        pUVar7 = Z_Construct_UClass_UWorld_NoRegister();
        this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
        bVar2 = UWorld::IsGameWorld(this_00);
        if ((bVar2) && (bVar2 = RegisterExternalStreamingObjectForGameWorld(this,param_1), bVar2)) {
          InjectIntoGameWorld(this,param_1);
          return;
        }
      }
      else if (1 < (byte)LogWorldPartition._0_1_) {
        FStackX_10 = (FName)param_1->_padding_;
        ::FName::ToString(&FStackX_10,&FStack_28);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
  }
  return;
}

// RegisterExternalStreamingObjectForGameWorld @ 148a628f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UExternalDataLayerManager::RegisterExternalStreamingObjectForGameWorld
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  FName FVar1;
  code *pcVar2;
  URuntimeHashExternalStreamingObjectBase **ppUVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  FString *pFVar10;
  FName *pFVar11;
  UPackage *pUVar12;
  UClass *pUVar13;
  UWorld *pUVar14;
  UWorldPartition *this_00;
  uint uVar15;
  ForAnyElementType FVar16;
  TPairInitializer<UExternalDataLayerAsset_const_*_&,URuntimeHashExternalStreamingObjectBase_*_&>
  local_res8;
  URuntimeHashExternalStreamingObjectBase *local_res18;
  undefined8 local_res20;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FTopLevelAssetPath local_1d8;
  FTopLevelAssetPath local_1c8;
  TStringView<wchar_t> local_1b8;
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FString local_178;
  FLinkerInstancingContext local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  URuntimeHashExternalStreamingObjectBase ***local_a8;
  URuntimeHashExternalStreamingObjectBase **local_a0;
  FName local_98;
  FName local_90;
  FString local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  undefined4 local_3c;
  
  local_res8.Value = (URuntimeHashExternalStreamingObjectBase **)param_1;
  pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar9 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  bVar4 = UWorld::IsGameWorld(pUVar9);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetTypedOuter<UWorld>()->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0xa1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if (((UExternalDataLayerAsset *)local_res8.Value == (UExternalDataLayerAsset *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalDataLayerAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0xa3,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  ppUVar3 = local_res8.Value;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UExternalDataLayerAsset *)local_res8.Value != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8.Value);
  }
  local_1a8.DebugPtr = (UExternalDataLayerAsset *)ppUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UExternalDataLayerAsset *)ppUVar3 != (UExternalDataLayerAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)ppUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UExternalDataLayerAsset *)ppUVar3 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)ppUVar3);
    }
  }
  uVar15 = ((uint)((ulonglong)ppUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppUVar3 >> 4)) *
           -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  iVar6 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UExternalDataLayerAsset_const_>_>
                    ((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
                      *)&this->ExternalStreamingObjects,uVar15 >> 0x10 ^ uVar15,
                     (TObjectPtr<UExternalDataLayerAsset_const_> *)&local_1a8.ObjectPtr);
  ppUVar3 = local_res8.Value;
  if (iVar6 != -1) {
    if (2 < (byte)LogWorldPartition._0_1_) {
      local_1a0 = *(FName *)((longlong)local_res8.Value + 0x18);
      ::FName::ToString(&local_1a0,&local_158);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((UExternalDataLayerAsset *)local_res8.Value == (UExternalDataLayerAsset *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalDataLayerAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerHelper.cpp"
                         ,0x19,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  ::FString::PrintfImpl(&local_f8,L"StreamingObject_%X");
  pFVar10 = GetExternalDataLayerLevelRootPath(this,&local_88,(UExternalDataLayerAsset *)ppUVar3);
  ::FString::ConcatFC(&local_108,pFVar10,L"/");
  ::FString::ConcatFR(&local_118,&local_108,L"_Generated_/",0xb);
  ::FString::ConcatFC(&local_128,&local_118,L"/");
  ::FString::ConcatFF(&local_228,&local_128,&local_f8);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  bVar4 = FPackageName::DoesPackageExist(&local_228,(FString *)0x0,true);
  if (!bVar4) {
    bVar4 = false;
    goto LAB_148a63027;
  }
  pUVar12 = (UPackage *)0x0;
  iVar6 = 0;
  FLinkerInstancingContext::FLinkerInstancingContext(&local_168);
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Data.ArrayNum = 0;
  local_1e8.Data.ArrayMax = 0;
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar9 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
  bVar4 = UWorld::GetSoftObjectPathMapping(pUVar9,&local_1e8,&local_1f8);
  if (bVar4) {
    local_e8 = local_1e8.Data.AllocatorInstance.Data;
    local_1d8.PackageName.ComparisonIndex.Value = 0;
    local_1d8.PackageName.Number = 0;
    local_1d8.AssetName.ComparisonIndex.Value = 0;
    local_1d8.AssetName.Number = 0;
    iStack_e0 = iVar6;
    if (local_1e8.Data.ArrayNum != 0) {
      iStack_e0 = local_1e8.Data.ArrayNum + -1;
    }
    local_78._12_4_ = uStack_dc;
    local_78.Size = iStack_e0;
    local_78.DataPtr = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
    FTopLevelAssetPath::TrySetPath(&local_1d8,&local_78);
    local_198 = local_1d8.PackageName;
    ::FName::ToString(&local_198,&local_208);
    local_d8 = local_1f8.Data.AllocatorInstance.Data;
    local_1c8.PackageName.ComparisonIndex.Value = 0;
    local_1c8.PackageName.Number = 0;
    local_1c8.AssetName.ComparisonIndex.Value = 0;
    local_1c8.AssetName.Number = 0;
    iStack_d0 = iVar6;
    if (local_1f8.Data.ArrayNum != 0) {
      iStack_d0 = local_1f8.Data.ArrayNum + -1;
    }
    local_68._12_4_ = uStack_cc;
    local_68.Size = iStack_d0;
    local_68.DataPtr = (wchar_t *)local_1f8.Data.AllocatorInstance.Data;
    FTopLevelAssetPath::TrySetPath(&local_1c8,&local_68);
    local_190 = local_1c8.PackageName;
    ::FName::ToString(&local_190,&local_218);
    iVar7 = iVar6;
    if (local_218.Data.ArrayNum != 0) {
      iVar7 = local_218.Data.ArrayNum + -1;
    }
    pFVar11 = ::FName::FName(&local_98,iVar7,(wchar_t *)local_218.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar1 = *pFVar11;
    iVar7 = iVar6;
    if (local_208.Data.ArrayNum != 0) {
      iVar7 = local_208.Data.ArrayNum + -1;
    }
    pFVar11 = ::FName::FName(&local_90,iVar7,(wchar_t *)local_208.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FLinkerInstancingContext::AddPackageMapping(&local_168,*pFVar11,FVar1);
    local_1b8.Size = iVar6;
    if (local_208.Data.ArrayNum != 0) {
      local_1b8.Size = local_208.Data.ArrayNum + -1;
    }
    local_c8 = local_218.Data.AllocatorInstance.Data;
    local_1b8._12_4_ = local_3c;
    iStack_c0 = iVar6;
    if (local_218.Data.ArrayNum != 0) {
      iStack_c0 = local_218.Data.ArrayNum + -1;
    }
    local_58._12_4_ = uStack_bc;
    local_58.Size = iStack_c0;
    local_1b8.DataPtr = (wchar_t *)local_208.Data.AllocatorInstance.Data;
    local_58.DataPtr = (wchar_t *)local_218.Data.AllocatorInstance.Data;
    iVar7 = UE::String::FindFirst(&local_58,&local_1b8,IgnoreCase);
    if (iVar7 != -1) {
      if (local_208.Data.ArrayNum != 0) {
        iVar6 = local_208.Data.ArrayNum + -1;
      }
      ::FString::RightChop(&local_218,&local_b8,iVar6 + iVar7);
      ::FString::ConcatFF(&local_148,&local_228,&local_b8);
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_148.Data.ArrayNum != 0) {
        FVar16.Data = local_148.Data.AllocatorInstance.Data;
      }
      pUVar12 = CreatePackage((wchar_t *)FVar16.Data);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
  }
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar16.Data = local_228.Data.AllocatorInstance.Data;
  }
  pUVar12 = LoadPackage(pUVar12,(wchar_t *)FVar16.Data,0x2002,(FArchive *)0x0,&local_168);
  if (pUVar12 == (UPackage *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      local_188 = *(FName *)((longlong)local_res8.Value + 0x18);
      ::FName::ToString(&local_188,&local_138);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
LAB_148a62fec:
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
LAB_148a62ff6:
    bVar4 = false;
  }
  else {
    local_res20 = 0;
    pUVar8 = Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
    local_res18 = (URuntimeHashExternalStreamingObjectBase *)
                  FindObjectWithOuter((UObjectBase *)pUVar12,pUVar8,(FName)0x0);
    if (local_res18 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
LAB_148a62f8c:
      local_res18 = (URuntimeHashExternalStreamingObjectBase *)0x0;
      if (1 < (byte)LogWorldPartition._0_1_) {
        local_180 = *(FName *)((longlong)local_res8.Value + 0x18);
        ::FName::ToString(&local_180,&local_178);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        local_138.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
        goto LAB_148a62fec;
      }
      goto LAB_148a62ff6;
    }
    pUVar13 = Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
    pUVar8 = (((TNonAccessTrackedObjectPtr<UClass> *)&local_res18->_padding_)->ObjectPtr).field0_0x0
             .DebugPtr;
    iVar6 = (int)pUVar13->_padding_;
    if (((int)pUVar8->_padding_ < iVar6) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar6 * 8) != &pUVar13->_padding_
       )) goto LAB_148a62f8c;
    pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar9 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar8);
    pUVar14 = URuntimeHashExternalStreamingObjectBase::GetOuterWorld(local_res18);
    if ((pUVar14 != pUVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExternalStreamingObject->GetOuterWorld() == GetTypedOuter<UWorld>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    this_00 = GetOuterUWorldPartition(this);
    pUVar9 = UWorldPartition::GetWorld(this_00);
    pUVar14 = URuntimeHashExternalStreamingObjectBase::GetOwningWorld(local_res18);
    if ((pUVar14 != pUVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExternalStreamingObject->GetOwningWorld() == GetOuterUWorldPartition()->GetWorld()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                           ,0xd5,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_a8 = &local_res8.Value;
    local_a0 = &local_res18;
    TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UExternalDataLayerAsset_const_*_&,URuntimeHashExternalStreamingObjectBase_*_&>_>
              ((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
                *)&this->ExternalStreamingObjects,&local_res8,(bool *)&local_a8);
    bVar4 = true;
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedData.SharedReferenceCount.ReferenceController);
LAB_148a63027:
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// RemoveExternalDataLayer @ 148a65550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UExternalDataLayerManager::RemoveExternalDataLayer
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  UClass *pUVar5;
  UWorld *this_00;
  FName local_res8;
  FString local_18;
  
  if ((this->bIsInitialized == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x1c2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1 == (UExternalDataLayerAsset *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalDataLayerAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x1c3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  bVar2 = UWorld::IsGameWorld(this_00);
  if (bVar2) {
    bVar2 = RemoveFromGameWorld(this,param_1);
    bVar4 = UnregisterExternalStreamingObjectForGameWorld(this,param_1);
    if ((1 < (byte)LogWorldPartition._0_1_) && (!bVar4 || !bVar2)) {
      local_res8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res8,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return bVar4 && bVar2;
  }
  return true;
}

// RemoveFromGameWorld @ 148a65a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UExternalDataLayerManager::RemoveFromGameWorld
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  TObjectPtr<URuntimeHashExternalStreamingObjectBase> this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  UExternalDataLayerInstance *pUVar7;
  TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0 *pTVar8;
  UWorld *pUVar9;
  FName this_01;
  UDataLayerManager *this_02;
  AWorldDataLayers *this_03;
  FName local_res18;
  UExternalDataLayerAsset *local_res20;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  bVar2 = UWorld::IsGameWorld(pUVar6);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetTypedOuter<UWorld>()->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pUVar7 = GetExternalDataLayerInstance(this,param_1);
  if (pUVar7 == (UExternalDataLayerInstance *)0x0) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      local_res18 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res18,&local_c0);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  bVar2 = true;
  local_res20 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar8 = &TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>_>
            ::Find((TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>_>
                    *)&this->ExternalStreamingObjects,
                   (TObjectPtr<UExternalDataLayerAsset_const_>)&local_res20)->field0_0x0;
  if ((pTVar8 == (TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0 *)0x0) ||
     (this_00.field0_0x0 = (TObjectPtr<URuntimeHashExternalStreamingObjectBase>_u_0)pTVar8->DebugPtr
     , this_00.field0_0x0 == (URuntimeHashExternalStreamingObjectBase *)0x0)) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      local_c8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_c8,&local_50);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    bVar2 = false;
  }
  else {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
    bVar4 = UWorld::IsGameWorld(pUVar6);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InjectedWorld->IsGameWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                           ,0x19a,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar9 = URuntimeHashExternalStreamingObjectBase::GetOuterWorld
                       ((URuntimeHashExternalStreamingObjectBase *)this_00.field0_0x0);
    if ((pUVar6 != pUVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InjectedWorld == ExternalStreamingObject->GetOuterWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                           ,0x19b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_01 = (FName)UWorld::GetWorldPartition(pUVar6);
    local_res18 = this_01;
    bVar4 = UWorldPartition::RemoveExternalStreamingObject
                      ((UWorldPartition *)this_01,
                       (URuntimeHashExternalStreamingObjectBase *)this_00.field0_0x0);
    if (!bVar4) {
      if (1 < (byte)LogWorldPartition._0_1_) {
        local_f8 = (FName)pUVar6->_padding_;
        ::FName::ToString(&local_f8,&local_a0);
        local_f0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_f0,&local_b0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        this_01 = local_res18;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          this_01 = local_res18;
        }
      }
      bVar2 = false;
    }
    this_02 = UWorldPartition::GetDataLayerManager((UWorldPartition *)this_01);
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar9 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_02,pUVar5);
    this_03 = UWorld::GetWorldDataLayers(pUVar9);
    if ((this_03 == (AWorldDataLayers *)0x0) ||
       (bVar4 = AWorldDataLayers::RemoveExternalDataLayerInstance(this_03,pUVar7), !bVar4)) {
      if (1 < (byte)LogWorldPartition._0_1_) {
        local_e8 = (FName)pUVar6->_padding_;
        ::FName::ToString(&local_e8,&local_80);
        local_e0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_e0,&local_90);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
      }
      bVar2 = false;
    }
    if ((4 < (byte)LogWorldPartition._0_1_) && (bVar2)) {
      local_d8 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_d8,&local_60);
      local_d0 = (FName)param_1->_padding_;
      ::FName::ToString(&local_d0,&local_70);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
  }
  return bVar2;
}

// Serialize @ 148a67db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UExternalDataLayerManager::Serialize(UExternalDataLayerManager *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 148a67dc0

void __thiscall
UExternalDataLayerManager::Serialize
          (UExternalDataLayerManager *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUExternalDataLayerManager @ 148a6a500

void __cdecl UExternalDataLayerManager::StaticRegisterNativesUExternalDataLayerManager(void)

{
  return;
}

// UnregisterExternalStreamingObjectForGameWorld @ 148a6b780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UExternalDataLayerManager::UnregisterExternalStreamingObjectForGameWorld
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  UClass *pUVar5;
  UWorld *this_00;
  uint uVar6;
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 local_res8;
  FName local_res10;
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 local_res18;
  FString local_28;
  
  pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
  this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  bVar2 = UWorld::IsGameWorld(this_00);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetTypedOuter<UWorld>()->IsGameWorld()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0xde,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1 == (UExternalDataLayerAsset *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalDataLayerAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0xe0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UExternalDataLayerAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  iVar4 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UExternalDataLayerAsset_const_>_>
                    ((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
                      *)&this->ExternalStreamingObjects,uVar6,
                     (TObjectPtr<UExternalDataLayerAsset_const_> *)&local_res8.ObjectPtr);
  if (iVar4 == -1) {
    if (1 < (byte)LogWorldPartition._0_1_) {
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_28);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res18.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (*(int *)&(this->ExternalStreamingObjects).field_0x8 !=
      *(int *)&(this->ExternalStreamingObjects).field_0x34) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectPtr<UExternalDataLayerAsset_const_>_>
              ((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,TObjectPtr<URuntimeHashExternalStreamingObjectBase>,0>,FDefaultSetAllocator>
                *)&this->ExternalStreamingObjects,uVar6,
               (TObjectPtr<UExternalDataLayerAsset_const_> *)&local_res18.ObjectPtr);
  }
  return true;
}

// UpdateExternalDataLayerInjectionState @ 148a6bb40

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
UExternalDataLayerManager::UpdateExternalDataLayerInjectionState
          (UExternalDataLayerManager *this,UExternalDataLayerAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  UExternalDataLayerEngineSubsystem *pUVar4;
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *pTVar5;
  UExternalDataLayerInstance *pUVar6;
  UClass *pUVar7;
  UWorld *this_00;
  undefined1 *puVar8;
  UExternalDataLayerAsset *local_res8;
  FName local_res10;
  FString local_28;
  
  if ((param_1 == (UExternalDataLayerAsset *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalDataLayerAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x1f8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->bIsInitialized == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                         ,0x1f9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = UExternalDataLayerEngineSubsystem::Get();
  (**(code **)(this->_padding_ + 0x180))(this);
  if (param_1 != (UExternalDataLayerAsset *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)param_1),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar5 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                     *)&pUVar4->ExternalDataLayerAssets,
                    (TObjectPtr<UExternalDataLayerAsset_const_>)&local_res8);
    puVar8 = &pTVar5->field_0x8;
    if (pTVar5 == (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
                   *)0x0) {
      puVar8 = (undefined1 *)0x0;
    }
    if (puVar8 != (undefined1 *)0x0) {
      bVar2 = puVar8[0xa0] == '\x02';
      goto LAB_148a6bc32;
    }
  }
  bVar2 = false;
LAB_148a6bc32:
  bVar3 = IsExternalDataLayerInjected(this,param_1);
  if (bVar2 != bVar3) {
    if (bVar2 == false) {
      RemoveExternalDataLayer(this,param_1);
    }
    else {
      if ((this->bIsInitialized == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                             ,0x11b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((param_1 == (UExternalDataLayerAsset *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InExternalDataLayerAsset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerManager.cpp"
                             ,0x11c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar6 = GetExternalDataLayerInstance(this,param_1);
      if (pUVar6 == (UExternalDataLayerInstance *)0x0) {
        pUVar7 = Z_Construct_UClass_UWorld_NoRegister();
        this_00 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar7);
        bVar2 = UWorld::IsGameWorld(this_00);
        if ((bVar2) && (bVar2 = RegisterExternalStreamingObjectForGameWorld(this,param_1), bVar2)) {
          InjectIntoGameWorld(this,param_1);
          return;
        }
      }
      else if (1 < (byte)LogWorldPartition._0_1_) {
        local_res10 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res10,&local_28);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
  }
  return;
}

